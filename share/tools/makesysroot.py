import os
import shutil
import sys
import lowercase

def copy_files(src, dst, symbolic = False):
    if not os.path.isdir(src):
        return

    for root, _, files in os.walk(src):
        target_dir = os.path.join(dst, os.path.relpath(root, src).lower())

        if not os.path.isdir(target_dir):
            os.makedirs(target_dir, exist_ok=True)

        for file in files:
            full_src = os.path.join(root, file)
            full_dst = os.path.join(target_dir, file.lower())
            if symbolic == False:
                if not os.path.exists(full_dst):
                    shutil.copyfile(full_src, full_dst)
            else:
                os.symlink(full_src, full_dst)

def remove_if_exist(path):
    if os.path.exists(path):
        shutil.rmtree(path)

def adjuct_stl_headers(stlinc, sysinc):
    cxxinc = os.path.join(sysinc, 'c++/stl')

    for root, _, files in os.walk(stlinc):
        rel_path = os.path.relpath(root, stlinc)

        for header in files:
            src_path = os.path.join(sysinc, rel_path, header)
            dst_path = os.path.join(cxxinc, rel_path, header)
            os.makedirs(os.path.dirname(dst_path), exist_ok=True)
            
            if (os.path.isfile(src_path)):
                shutil.move(src_path, dst_path)

    remove_if_exist(os.path.join(sysinc, 'zh-CN'))
    remove_if_exist(os.path.join(sysinc, 'zh-cn'))
    remove_if_exist(os.path.join(sysinc, 'en-US'))
    remove_if_exist(os.path.join(sysinc, 'en-us'))

def adjust_intrin_headers(sysroot):
    intrin_dir = os.path.join(sysroot, '__msvc_vcruntime_intrinsics')
    os.mkdir(intrin_dir)
    file_list = ['ammintrin.h', 'arm64intr.h', 'arm64_neon.h', 'arm_intr.h', 'arm_neon.h', 'emmintrin.h', 'immintrin.h', 'intrin.h', 'intrin0.h', 'intrin0.inl.h', 'mm3dnow.h', 'mmintrin.h', 'nmmintrin.h', 'pmmintrin.h', 'smmintrin.h', 'softintrin.h', 'tmmintrin.h', 'wmmintrin.h', 'xmmintrin.h', 'zmmintrin.h']
    
    for file_name in file_list:
        full_name = os.path.join(sysroot, file_name)

        if os.path.exists(full_name):
            shutil.move(full_name, os.path.join(intrin_dir, file_name))

def validate(stl_repo, windows_sdk_inc, windows_sdk_lib, build_tool):
    if not os.path.exists(stl_repo) or \
       not os.path.exists(os.path.join(stl_repo, 'stl')):
        return False
    
    if not os.path.exists(windows_sdk_inc) or \
       not os.path.exists(windows_sdk_lib):
        return False
    
    if not os.path.exists(build_tool) or \
       not os.path.exists(os.path.join(build_tool, 'include')) or \
       not os.path.exists(os.path.join(build_tool, 'lib')) or \
       not os.path.exists(os.path.join(build_tool, 'modules')):
        return False
    
    return True

def print_usage_and_exit():
    print(r"""
Usage: makesysroot.py stl-repo windows-sdk-inc windows-sdk-lib build-tool output-path <--symlink>
stl-repo: Path to the local git repository of Microsoft STL, contains the subdir stl. No need to initialize submodules.
windows-sdk-inc: Path to the Include directory of Windows SDK. Typical location is C:\Program Files (x86)\Windows Kits\10\Include\10.0.26100.0.
windows-sdk-lib: Path to the Lib directory of Windows SDK. Typical location is C:\Program Files (x86)\Windows Kits\10\Lib\10.0.26100.0.
build-tool: Path to the MSVC build tools. Typical locations are C:\Program Files\Microsoft Visual Studio\18\Insiders\VC\Tools\MSVC\14.50.35503 or C:\Program Files\Microsoft Visual Studio\2022\Preview\VC\Tools\MSVC\14.44.35207.
output: Output path. If it does not exist, it will be created.
--symlink: if exists, use symbolic links for library files, which can significantly reduce space usage.
""")
    sys.exit(1)

if __name__ == '__main__':
    if len(sys.argv) < 6 or len(sys.argv) > 7 or not validate(sys.argv[1], sys.argv[2], sys.argv[3], sys.argv[4]):
        print_usage_and_exit()
        sys.exit(1)
    
    symlink = False
        
    if len(sys.argv) == 7:
        if sys.argv[6] == '--symlink':
            symlink = True
        else:
            print_usage_and_exit()
    
    stl = sys.argv[1]
    sdkinc = sys.argv[2]
    sdklib = sys.argv[3]
    msvc = sys.argv[4]
    out = sys.argv[5]

    if not os.path.isdir(out):
       os.mkdir(out)
    
    outlib = os.path.join(out, 'lib')
    outinc = os.path.join(out, 'include')
    os.mkdir(outlib)
    os.mkdir(outinc)

    msvcinc = os.path.join(msvc, 'include')
    msvclib = os.path.join(msvc, 'lib')
    msvconecorelib = os.path.join(msvc, 'lib/onecore')
    ucrtinc = os.path.join(sdkinc, 'ucrt')
    ucrtlib = os.path.join(sdklib, 'ucrt')
    ucrtenclavelib = os.path.join(sdklib, 'ucrt_enclave')
    uminc = os.path.join(sdkinc, 'um')
    umlib = os.path.join(sdklib, 'um')
    cppwinrt = os.path.join(sdkinc, 'cppwinrt')
    winrt = os.path.join(sdkinc, 'winrt')
    shared = os.path.join(sdkinc, 'shared')
    postfix = '-unknown-windows-msvc'

    for src, dest in [('arm64', 'aarch64'), ('arm', 'arm'), ('x64', 'x86_64'), ('x86', 'i686')]:
        full_dest = os.path.join(outlib, dest + postfix)
        copy_files(os.path.join(msvclib, src), full_dest, symlink)
        copy_files(os.path.join(ucrtlib, src), full_dest, symlink)
        copy_files(os.path.join(umlib, src), full_dest, symlink)
        onecoredest = os.path.join(full_dest, 'onecore')

        if os.path.exists(full_dest) and not os.path.exists(onecoredest):
            os.mkdir(onecoredest)

        copy_files(os.path.join(msvconecorelib, src), onecoredest, symlink)
        enclavedest = os.path.join(full_dest, 'enclave')

        if os.path.exists(full_dest) and not os.path.exists(enclavedest):
            os.mkdir(enclavedest)

        copy_files(os.path.join(ucrtenclavelib, src), enclavedest, symlink)

    copy_files(os.path.join(msvc, 'modules'), os.path.join(out, 'share/stl'))
    
    copy_files(msvcinc, outinc)
    copy_files(ucrtinc, outinc)
    copy_files(uminc, outinc)
    copy_files(cppwinrt, outinc)
    copy_files(shared, outinc)
    copy_files(winrt, outinc)
    adjuct_stl_headers(os.path.join(stl, 'stl/inc'), outinc)
    adjust_intrin_headers(outinc)
    lowercase.lowercase_includes(outinc)
