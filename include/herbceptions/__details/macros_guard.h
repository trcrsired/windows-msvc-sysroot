//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

/*
__HERBCEPTIONS_API marks the pure query/lookup entry points: identical
arguments always yield the same result, so it adds __const__ where the
attribute exists. __HERBCEPTIONS_API_ALLOC is the sibling for entry points
that return freshly allocated storage or otherwise must not be folded:
__const__ would let the compiler merge two calls into one buffer and the
second free would corrupt the heap.
*/
#if (defined(_WIN32) && !defined(__WINE__)) || defined(__CYGWIN__)
#if defined(__GNUC__) || defined(__clang__)
#if defined(_HERBCEPTIONS_BUILDING_RUNTIME)
#if defined(_HERBCEPTIONS_LIBSTDCXX)
/*
libstdc++ exports through the PE linker's automatic export set: one dllexport
symbol turns that off for the whole DLL, and weak symbols are not part of the
automatic set either. Keep the entry points as plain externals so libstdc++'s
own export mechanism picks them up.
*/
#define __HERBCEPTIONS_API
#define __HERBCEPTIONS_API_ALLOC
#else
#if 0
//clang bug on windows on arm. Wait for upstream to fix before we set weak
#define __HERBCEPTIONS_API [[__gnu__::__dllexport__, __gnu__::__weak__]]
#else
#define __HERBCEPTIONS_API [[__gnu__::__dllexport__]]
#endif
#define __HERBCEPTIONS_API_ALLOC [[__gnu__::__dllexport__]]
#endif
#else
#define __HERBCEPTIONS_API [[__gnu__::__dllimport__, __gnu__::__const__]]
#define __HERBCEPTIONS_API_ALLOC [[__gnu__::__dllimport__]]
#endif
#elif defined(_MSC_VER)
#if defined(_HERBCEPTIONS_BUILDING_RUNTIME)
#define __HERBCEPTIONS_API __declspec(dllexport)
#define __HERBCEPTIONS_API_ALLOC __declspec(dllexport)
#else
#define __HERBCEPTIONS_API __declspec(dllimport)
#define __HERBCEPTIONS_API_ALLOC __declspec(dllimport)
#endif
#endif
#else
#if defined(_HERBCEPTIONS_BUILD_RUNTIME) ||                                    \
    defined(_HERBCEPTIONS_BUILDING_RUNTIME)
#define __HERBCEPTIONS_API                                                     \
  [[__gnu__::__visibility__("default"), __gnu__::__weak__]]
#define __HERBCEPTIONS_API_ALLOC                                               \
  [[__gnu__::__visibility__("default"), __gnu__::__weak__]]
#else
#define __HERBCEPTIONS_API [[__gnu__::__const__]]
#define __HERBCEPTIONS_API_ALLOC
#endif
#endif
