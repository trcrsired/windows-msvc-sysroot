#pragma once
#include <exception>

namespace std::error_domains {

#if defined(_MSC_VER)
#if defined(_HERBCEPTIONS_BUILDING_RUNTIME) && defined(herbceptions_EXPORTS)
#define __HERBCEPTIONS_CXA_CODE_API __declspec(dllexport)
#elif defined(_HERBCEPTIONS_BUILDING_RUNTIME)
#define __HERBCEPTIONS_CXA_CODE_API
#else
#define __HERBCEPTIONS_CXA_CODE_API __declspec(dllimport)
#endif
#elif defined(_WIN32) || defined(_WIN64)
// MinGW auto-imports DLL symbols and links static libraries directly.
#define __HERBCEPTIONS_CXA_CODE_API
#else
#define __HERBCEPTIONS_CXA_CODE_API [[__gnu__::__weak__]]
#endif
#ifdef _MSC_VER
extern "C" __HERBCEPTIONS_CXA_CODE_API ::std::error_domain_singleton const *
__cxa_error_domain_msvc_exception_ptr() noexcept;
extern "C" __HERBCEPTIONS_CXA_CODE_API ::std::size_t
__cxa_error_code_msvc_exception_ptr() noexcept;
extern "C" __HERBCEPTIONS_CXA_CODE_API ::std::size_t
__cxa_error_code_msvc_exception_ptr_clone(void const *) noexcept;
#else
extern "C" __HERBCEPTIONS_CXA_CODE_API ::std::error_domain_singleton const *
__cxa_error_domain_itanium_exception_ptr() noexcept;
extern "C" ::std::size_t
__cxa_error_code_itanium_exception_ptr(void *) noexcept;
#endif
#undef __HERBCEPTIONS_CXA_CODE_API
} // namespace std::error_domains

namespace std {

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
    return ::std::error_domains::__cxa_error_code_msvc_exception_ptr_clone(
        __builtin_addressof(__e));
#else
    void *__temp;
    __builtin_memcpy(__builtin_addressof(__temp), __builtin_addressof(__e),
                     sizeof(void *));
    return ::std::error_domains::__cxa_error_code_itanium_exception_ptr(__temp);
#endif
  }
};

} // namespace std
