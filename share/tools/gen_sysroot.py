#!/usr/bin/env python3
"""Generate the Windows MSVC sysroot with every path auto-detected.

Thin wrapper around makesysroot.py.  It assumes the standard C: drive layout
of a Windows machine with Visual Studio and the Windows SDK installed, picks
the newest toolset and SDK, finds the Microsoft STL checkout, then calls
makesysroot.py with the five directories it wants.  Afterwards it applies the
ARM64 KUSER_SHARED_DATA fix to the generated libraries.

Usage:
    gen_sysroot.py [--out DIR] [--stl DIR] [--msvc DIR] [--sdk DIR]
                   [--symlink] [--force] [--no-arm64-fix]

Defaults:
    --out    the repository this script lives in (share/tools/../..)
    --stl    first of %USERPROFILE%\\toolchains_build\\STL, C:\\STL,
             ../STL next to the repository checkout
    --msvc   newest C:\\Program Files\\Microsoft Visual Studio\\*\\*\\VC\\Tools\\MSVC\\<version>
    --sdk    newest C:\\Program Files (x86)\\Windows Kits\\10\\{Include,Lib}\\<version>
"""

import argparse
import os
import re
import shutil
import subprocess
import sys
import tempfile

TOOLS_DIR = os.path.dirname(os.path.abspath(__file__))
REPO_ROOT = os.path.dirname(os.path.dirname(TOOLS_DIR))
MAKESYSROOT = os.path.join(TOOLS_DIR, 'makesysroot.py')
PATCH_ARM64 = os.path.join(TOOLS_DIR, 'patch_arm64_kuser.py')

VS_TOOLS_ROOT = r'C:\Program Files\Microsoft Visual Studio'
SDK_ROOT = r'C:\Program Files (x86)\Windows Kits\10'
STL_CANDIDATES = [
    os.path.join(os.path.expanduser('~'), 'toolchains_build', 'STL'),
    r'C:\STL',
    os.path.join(os.path.dirname(REPO_ROOT), 'STL'),
]

MSVC_SUBDIRS = ('include', 'lib', 'modules')

# Hand-maintained file that makesysroot.py does not produce, so it must survive
# a regeneration.
KUSERFIX = os.path.join('lib', 'aarch64-unknown-windows-msvc', 'kuserfix.lib')


def version_key(name):
    return tuple(int(part) for part in re.findall(r'\d+', name))


def subdirs(path):
    if not os.path.isdir(path):
        return []
    return [entry for entry in os.listdir(path) if os.path.isdir(os.path.join(path, entry))]


def latest_msvc(root):
    """Newest <VS>/<edition>/<product>/VC/Tools/MSVC/<version> that looks usable."""
    candidates = []
    for edition in subdirs(root):
        for product in subdirs(os.path.join(root, edition)):
            msvc_root = os.path.join(root, edition, product, 'VC', 'Tools', 'MSVC')
            for version in subdirs(msvc_root):
                path = os.path.join(msvc_root, version)
                if all(os.path.isdir(os.path.join(path, sub)) for sub in MSVC_SUBDIRS):
                    candidates.append((version_key(version), path))
    return max(candidates)[1] if candidates else None


def latest_sdk(root):
    """Newest <version> present in both Include and Lib of the Windows SDK."""
    inc_root = os.path.join(root, 'Include')
    lib_root = os.path.join(root, 'Lib')
    versions = set(subdirs(inc_root)) & set(subdirs(lib_root))
    candidates = [
        (version_key(version), version) for version in versions
        if os.path.isdir(os.path.join(inc_root, version, 'ucrt'))
        and os.path.isdir(os.path.join(lib_root, version, 'ucrt'))
    ]
    if not candidates:
        return None, None
    version = max(candidates)[1]
    return os.path.join(inc_root, version), os.path.join(lib_root, version)


def find_stl(explicit):
    for candidate in ([explicit] if explicit else STL_CANDIDATES):
        if candidate and os.path.isdir(os.path.join(candidate, 'stl', 'inc')):
            return candidate
    return None


def fail(message):
    sys.stderr.write('error: %s\n' % message)
    sys.exit(1)


def clean_output(out, force):
    """Remove the previous generation, keeping hand-maintained files."""
    existing = [name for name in ('include', 'lib') if os.path.exists(os.path.join(out, name))]
    if not existing:
        return None
    if not force:
        fail('%s already exists; pass --force to regenerate or --out elsewhere'
             % os.path.join(out, existing[0]))
    stash_dir = tempfile.mkdtemp(prefix='gen_sysroot_')
    if os.path.isfile(os.path.join(out, KUSERFIX)):
        stash = os.path.join(stash_dir, KUSERFIX)
        os.makedirs(os.path.dirname(stash), exist_ok=True)
        shutil.copy2(os.path.join(out, KUSERFIX), stash)
    else:
        stash_dir = None
    for name in existing:
        shutil.rmtree(os.path.join(out, name))
    return stash_dir


def main():
    parser = argparse.ArgumentParser(add_help=True, description=__doc__.splitlines()[0])
    parser.add_argument('--out', help='output path (default: this repository)')
    parser.add_argument('--stl', help='Microsoft STL repository checkout')
    parser.add_argument('--msvc', help='MSVC toolset directory (the one containing include/lib/modules)')
    parser.add_argument('--sdk', help='Windows SDK root (the one containing Include/Lib)')
    parser.add_argument('--symlink', action='store_true', help='use symlinks for libraries')
    parser.add_argument('--force', action='store_true', help='regenerate over an existing sysroot')
    parser.add_argument('--no-arm64-fix', action='store_true',
                        help='skip patch_arm64_kuser.py on the generated aarch64 libraries')
    args = parser.parse_args()

    msvc = args.msvc or latest_msvc(VS_TOOLS_ROOT)
    if not msvc:
        fail('no MSVC toolset found under %s' % VS_TOOLS_ROOT)

    if args.sdk:
        sdkinc = os.path.join(args.sdk, 'Include')
        sdklib = os.path.join(args.sdk, 'Lib')
    else:
        sdkinc, sdklib = latest_sdk(SDK_ROOT)
    if not sdkinc or not sdklib:
        fail('no Windows SDK found under %s' % SDK_ROOT)

    stl = find_stl(args.stl)
    if not stl:
        fail('no Microsoft STL checkout found; pass --stl (looked for %s)'
             % ', '.join(STL_CANDIDATES))

    if args.symlink and not args.no_arm64_fix:
        fail('--symlink would patch the installed MSVC libraries in place; '
             'combine it with --no-arm64-fix')

    out = os.path.abspath(args.out or REPO_ROOT)
    stash = clean_output(out, args.force)

    command = [sys.executable, MAKESYSROOT, stl, sdkinc, sdklib, msvc, out]
    if args.symlink:
        command.append('--symlink')

    print('STL:  %s' % stl)
    print('MSVC: %s' % msvc)
    print('SDK:  %s' % os.path.dirname(sdkinc))
    print('OUT:  %s' % out)
    status = subprocess.call(command)
    if status != 0:
        return status

    if stash:
        shutil.copy2(os.path.join(stash, KUSERFIX), os.path.join(out, KUSERFIX))
        shutil.rmtree(stash, ignore_errors=True)
        print('restored %s' % os.path.join(out, KUSERFIX))

    if not args.no_arm64_fix:
        print('applying the ARM64 KUSER_SHARED_DATA fix')
        status = subprocess.call([sys.executable, PATCH_ARM64, '--sysroot', out, '--in-place'])
    return status


if __name__ == '__main__':
    sys.exit(main())
