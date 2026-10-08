//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#pragma once
#include <exception>
#include <typeinfo>

namespace std {

#if defined(_LIBHERBCEPTIONS_STL_EXCEPTION_PTR)
// The compiler (-fherbceptions) emits direct references to the
// __cxa_error_code_*/__cxa_error_domain_* symbols above when catching
// legacy C++ exceptions; it does not consult this specialization on that
// path. The specialization remains for generic machinery and for
// non-patched compilers.
template <> class error_domain<::std::exception_ptr> {
public:
  using errc_type = ::std::exception_ptr;
  static inline constexpr ::std::error_domain_singleton const *
  domain() noexcept {
#ifdef _MSC_VER
    return ::std::error_domains::__cxa_error_domain_msvc_exception_ptr();
#else
    return ::std::error_domains::__cxa_error_domain_itanium_exception_ptr();
#endif
  }
  static inline ::std::size_t code(errc_type const &__e) noexcept {
#ifdef _MSC_VER
    return ::std::error_domains::__cxa_error_code_msvc_exception_ptr(
        0, __builtin_addressof(__e), nullptr);
#else
    void *__temp;
    __builtin_memcpy(__builtin_addressof(__temp), __builtin_addressof(__e),
                     sizeof(void *));
    return ::std::error_domains::__cxa_error_code_itanium_exception_ptr(
        0, __temp, nullptr, nullptr);
#endif
  }
};
#endif

// dynamic_cast-style probe on a legacy-EH object boxed under the platform
// exception_ptr domain, without paying for a rethrow: returns the adjusted
// subobject pointer when the channel error's thrown object is catchable as
// remove_pointer_t<T>, nullptr otherwise — including when RTTI is disabled,
// where no type_info exists to probe with. Only pointer targets are
// accepted, mirroring dynamic_cast<T*>. The pointer is borrowed — the
// channel error keeps ownership.
template <typename __T>
  requires(::std::is_pointer_v<__T>)
[[nodiscard]] inline __T
exception_cast_std_error(::std::error const &__e) noexcept {
#if defined(_LIBHERBCEPTIONS_CPP_RTTI)
#ifdef _MSC_VER
  return static_cast<__T>(
      ::std::error_domains::__cxa_error_code_msvc_exception_ptr_cast(
          __e.domain(), __e.code(),
          __builtin_addressof(typeid(::std::remove_pointer_t<__T>))));
#else
  return static_cast<__T>(
      ::std::error_domains::__cxa_error_code_itanium_exception_ptr_cast(
          __e.domain(), __e.code(),
          __builtin_addressof(typeid(::std::remove_pointer_t<__T>))));
#endif
#else
  return nullptr;
#endif
}

#if defined(_LIBHERBCEPTIONS_STL_EXCEPTION_PTR)
// Materializes a real std::exception_ptr from a channel error, for callers
// that need one (std::rethrow_exception, exception_ptr storage, STL
// interop). When the error belongs to the platform exception_ptr domain a
// retained copy of the boxed exception is decoded into an exception_ptr —
// no rethrow needed; any other domain yields an empty exception_ptr.
[[nodiscard]] inline ::std::exception_ptr
make_exception_ptr_from_std_error(::std::error const &__e) noexcept {
  if (!__e.is_code_of<::std::exception_ptr>()) {
    return {};
  }
  ::std::exception_ptr __ep;
#ifdef _MSC_VER
  ::std::error_domains::__cxa_error_code_msvc_exception_ptr_unbox(
      __builtin_addressof(__ep), __e.code());
#else
  // The itanium code IS the exception_ptr's void* payload: flags==0
  // retains the reference and returns the same pointer, which goes
  // straight into the exception_ptr.
  void *__thrown{reinterpret_cast<void *>(
      ::std::error_domains::__cxa_error_code_itanium_exception_ptr(
          0, reinterpret_cast<void *>(__e.code()), nullptr, nullptr))};
  __builtin_memcpy(static_cast<void *>(__builtin_addressof(__ep)),
                   __builtin_addressof(__thrown), sizeof(void *));
#endif
  return __ep;
}
#endif

} // namespace std
