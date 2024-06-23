# windows-msvc-sysroot

This repository provides Windows headers and libraries with a standardized sysroot format, similar to other triplets, to facilitate cross-compilation and canadian-compilation.

## Planned Enhancements
I intend to modify the Clang frontend to support the --sysroot= option, enabling it to locate this sysroot using path finding as demonstrated below.

## Supported Triplets
i686-windows-msvc

x86_64-windows-msvc

arm-windows-msvc

aarch64-windows-msvc

## Headers
Windows + CRT Headers Include Directory: ```include```

### C++ standard library headers:
With ```-stdlib=stl```, headers should be located in ```include/c++/stl```

With ```-stdlib=libc++```, headers should be located in ```include/c++/v1```

## Libraries
Libraries should be placed in ```lib/$TRIPLET```

For example. on ```x86_64-windows-msvc```, it should find libs in ```lib/x86_64-windows-msvc```
