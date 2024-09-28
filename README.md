# Windows MSVC Sysroot

This repository provides Windows MSVC headers and libraries with a standardized sysroot rule as what GCC and Clang do, similar to other triplets, to facilitate cross-compilation and canadian-compilation. Some people prefer to use ```${ARCH}-windows-msvc``` triplet over ```${ARCH}-windows-gnu``` triplet, so I decide to provide one by myself.

## Why not /winsysroot?
Clang's winsysroot is pretty useless since it does not follow the rule of other targets are doing. That is a massive burden for libraries to maintain. Plus the file structures are overcomplicated to the point of useless.

## Planned Enhancements to LLVM/Clang
I intend to modify the clang frontend to support the ```--sysroot=``` option, enabling it to locate this sysroot using path finding as demonstrated below.

## Supported Triplets
i686-windows-msvc

x86_64-windows-msvc

arm-windows-msvc

aarch64-windows-msvc

## Headers
Windows + CRT Headers Include Directory: ```include```.

### C++ standard library headers:
With ```-stdlib=stl```, headers should be located in ```include/c++/stl```.

With ```-stdlib=libc++```, headers should be located in ```include/c++/v1```.

## Libraries
Libraries should be placed in ```lib/$TRIPLET```.

For example. on ```x86_64-windows-msvc```, it should find libs in ```lib/x86_64-windows-msvc```.

# How to use it right now?

## Clang command line

```cpp
// hello.cc
#include<iostream>

int main()
{
      std::cout<<"Hello World\n";
}
```
```
# Suppose the repository is cloned in $HOME on Linux
$ clang++ -o hello.exe hello.cc -O3 -fuse-ld=lld --target=x86_64-windows-msvc -I$HOME/windows-msvc-sysroot/include -I$HOME/windows-msvc-sysroot/include/c++/stl -L$HOME/windows-msvc-sysroot/lib/x86_64-windows-msvc
$ wine ./hello.exe
Hello World
```

I would like to change clang to support the ```--sysroot=``` so that it would trivialize the cmake for cross compiling.

```
clang++ -o hello.exe hello.cc -O3 -fuse-ld=lld --target=x86_64-windows-msvc --sysroot=$HOME/windows-msvc-sysroot
```

Also it should support ```-stdlib=libc++```.

```
clang++ -o hello.exe hello.cc -O3 -fuse-ld=lld --target=x86_64-windows-msvc --sysroot=$HOME/windows-msvc-sysroot -stdlib=libc++
```

This should equal to

```
# Suppose the repository is cloned in $HOME on Linux
$ clang++ -o hello.exe hello.cc -O3 -fuse-ld=lld --target=x86_64-windows-msvc -I$HOME/windows-msvc-sysroot/include -I$HOME/windows-msvc-sysroot/include/c++/v1 -L$HOME/windows-msvc-sysroot/lib/x86_64-windows-msvc
$ wine ./hello.exe
Hello World
```

## CMake Tools in VSCode (User-Local Kits)

The user-local list of kits is stored in the `cmake-tools-kits.json` file, which you can edit by invoking Edit User-Local CMake Kits from the command palette.

By adding the following section, CMake Tools will get a correct toolchain:

```json
  {
    "name": "Clang 20.0.0",
    "compilers": {
      "C": "D:\\Projects\\clang\\llvm\\bin\\clang.exe",
      "CXX": "D:\\Projects\\clang\\llvm\\bin\\clang++.exe"
    },
    "cmakeSettings": {
      "CMAKE_CXX_FLAGS": "--target=x86_64-windows-msvc --sysroot=D:\\Projects\\windows-msvc-sysroot -fuse-ld=lld -stdlib=libc++",
      "CMAKE_C_FLAGS": "--target=x86_64-windows-msvc --sysroot=D:\\Projects\\windows-msvc-sysroot -fuse-ld=lld"
    },
    "isTrusted": true
  }
```

Note that the `name` field should not be the same as the name of any toolchain automatically detected by CMake Tools, even if the automatically detected toolchain is incorrect. For more details, refer to the CMake Tools [documentation](https://github.com/microsoft/vscode-cmake-tools/blob/main/docs/kits.md).

## CMake Presets

CMake 3.19 and later versions provide a way to specify toolchains in projects. Here is a complete example:

CMakePresets.json

```json
{
    "version": 6,
    "cmakeMinimumRequired": {
        "major": 3,
        "minor": 25,
        "patch": 0
    },
    "configurePresets": [
        {
            "name": "default",
            "hidden": false,
            "generator": "Ninja",
            "binaryDir": "${sourceDir}/build/${presetName}",
            "cacheVariables": {
                "CMAKE_BUILD_TYPE": "Release",
                "CMAKE_C_COMPILER": "D:\\Projects\\clang\\llvm\\bin\\clang.exe",
                "CMAKE_CXX_COMPILER": "D:\\Projects\\clang\\llvm\\bin\\clang++.exe",
                "CMAKE_CXX_FLAGS": "--target=x86_64-windows-msvc --sysroot=D:\\Projects\\windows-msvc-sysroot -fuse-ld=lld -stdlib=libc++",
                "CMAKE_C_FLAGS": "--target=x86_64-windows-msvc --sysroot=D:\\Projects\\windows-msvc-sysroot -fuse-ld=lld"
    
            }
        }
    ]
}
```

For the complete documentation, see [cmake-presets(7)](https://cmake.org/cmake/help/latest/manual/cmake-presets.7.html).
