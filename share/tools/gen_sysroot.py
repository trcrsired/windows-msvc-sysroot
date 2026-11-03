#!/usr/bin/env python3
"""Generate the Windows MSVC sysroot with every path auto-detected.

Thin wrapper around makesysroot.py.  It assumes the standard C: drive layout
of a Windows machine with Visual Studio and the Windows SDK installed, picks
the newest toolset and SDK, finds the Microsoft STL checkout, then calls
makesysroot.py with the five directories it wants.  Afterwards it applies the
ARM64 KUSER_SHARED_DATA fix to the generated libraries and adds max_align_t to
the generated include/stddef.h.

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

# The UCRT <stddef.h> does not define max_align_t, but libc++ (unlike the MSVC
# STL, which aliases double itself in <cstddef>) takes ::max_align_t from it.
# Use the definition Clang itself uses for MSVC targets, i.e. the "double" from
# clang/lib/Headers/__stddef_max_align_t.h.
MAX_ALIGN_T_ANCHOR = '_CRT_END_C_HEADER'
MAX_ALIGN_T_BLOCK = (
    '/* maximum alignment type, missing from the UCRT header: mirrors Clang */\n',
    '#ifndef __CLANG_MAX_ALIGN_T_DEFINED\n',
    '#define __CLANG_MAX_ALIGN_T_DEFINED\n',
    'typedef double max_align_t;\n',
    '#endif\n',
    '\n',
)


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


def step(message):
    print('==> %s' % message, flush=True)


def info(message):
    print('    %s' % message, flush=True)


def clean_output(out, force):
    """Remove the previous generation, keeping hand-maintained files."""
    existing = [name for name in ('include', 'lib') if os.path.exists(os.path.join(out, name))]
    if not existing:
        step('nothing to clean in %s' % out)
        return None
    if not force:
        fail('%s already exists; pass --force to regenerate or --out elsewhere'
             % os.path.join(out, existing[0]))
    step('cleaning %s from %s' % (', '.join(existing), out))
    stash_dir = tempfile.mkdtemp(prefix='gen_sysroot_')
    if os.path.isfile(os.path.join(out, KUSERFIX)):
        stash = os.path.join(stash_dir, KUSERFIX)
        os.makedirs(os.path.dirname(stash), exist_ok=True)
        shutil.copy2(os.path.join(out, KUSERFIX), stash)
        info('stashed %s' % os.path.join(out, KUSERFIX))
    else:
        stash_dir = None
    libcxx = os.path.join(out, 'include', 'c++', 'v1')
    if os.path.isdir(libcxx):
        info('warning: deleting %s (libc++ is not regenerated by makesysroot.py; '
             'restore or re-clone it afterwards if you use it)' % libcxx)
    for name in existing:
        shutil.rmtree(os.path.join(out, name))
        info('removed %s' % os.path.join(out, name))
    return stash_dir


def add_max_align_t(out):
    """Insert max_align_t into the generated include/stddef.h."""
    path = os.path.join(out, 'include', 'stddef.h')
    step('adding max_align_t to %s' % path)
    if not os.path.isfile(path):
        fail('%s is missing; cannot add max_align_t' % path)
    with open(path, 'rb') as handle:
        text = handle.read().decode('utf-8', 'surrogateescape')
    if 'max_align_t' in text:
        info('%s already defines max_align_t' % path)
        return False
    lines = text.splitlines(keepends=True)
    newline = '\r\n' if '\r\n' in text else '\n'
    block = [line.replace('\n', newline) for line in MAX_ALIGN_T_BLOCK]
    for index, line in enumerate(lines):
        if line.strip() == MAX_ALIGN_T_ANCHOR:
            lines[index:index] = block
            break
    else:
        fail('%s has no %s line; cannot add max_align_t' % (path, MAX_ALIGN_T_ANCHOR))
    with open(path, 'wb') as handle:
        handle.write(''.join(lines).encode('utf-8', 'surrogateescape'))
    info('inserted typedef double max_align_t')
    return True


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
    step('toolsets')
    info('STL:  %s' % stl)
    info('MSVC: %s' % msvc)
    info('SDK:  %s' % os.path.dirname(sdkinc))
    info('OUT:  %s' % out)
    info('mode: %s' % ('symlink' if args.symlink else 'copy'))

    stash = clean_output(out, args.force)

    command = [sys.executable, MAKESYSROOT, stl, sdkinc, sdklib, msvc, out]
    if args.symlink:
        command.append('--symlink')

    step('running makesysroot.py')
    info(' '.join(command))
    status = subprocess.call(command)
    if status != 0:
        fail('makesysroot.py exited with %d' % status)
    info('headers and libraries generated')

    if stash:
        step('restoring hand-maintained files')
        shutil.copy2(os.path.join(stash, KUSERFIX), os.path.join(out, KUSERFIX))
        shutil.rmtree(stash, ignore_errors=True)
        info('restored %s' % os.path.join(out, KUSERFIX))

    if args.no_arm64_fix:
        step('skipping the ARM64 KUSER_SHARED_DATA fix (--no-arm64-fix)')
    else:
        step('applying the ARM64 KUSER_SHARED_DATA fix')
        status = subprocess.call([sys.executable, PATCH_ARM64, '--sysroot', out, '--in-place'])
        if status != 0:
            fail('patch_arm64_kuser.py exited with %d' % status)
        info('ARM64 fix applied to the libraries under %s'
             % os.path.join(out, 'lib', 'aarch64-unknown-windows-msvc'))

    add_max_align_t(out)
    step('done')
    return 0


if __name__ == '__main__':
    sys.exit(main())
