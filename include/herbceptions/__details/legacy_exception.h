//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#pragma once
/*
Legacy-EH box for the herbceptions {domain, code} channel.

std::cxx_std_error_legacy_exception is what error::throw_legacy_exception
raises when the domain's do_throw_legacy_exception hook is absent or
declines. Unlike std::system_error it keeps the {domain, code} payload
verbatim (when it owns nothing), so the error can cross a legacy-EH hop —
e.g. C++ standard library machinery that only speaks catch(...) / virtual
what() — and be put back on the throws channel with release() or
rethrow_herbception_if_error() without losing its semantics or dragging
<system_error>'s error_category/std::string machinery into the binary.

The message text is queried once at construction into a NUL-terminated
buffer owned by the box (allocated inside the runtime via
__cxa_error_query_information_create so clone/free are safe across module
boundaries), keeping what() noexcept and allocation-free.
*/

/*
P3068 (C++26 constexpr exceptions) makes std::exception's members constexpr,
which is the precondition for marking our virtual what()/destructor the
same — a constexpr virtual may only override a constexpr one. Non-virtual
members below are unconditionally constexpr.
*/
#if defined(__cpp_constexpr_exceptions) && __cpp_constexpr_exceptions >= 202411L
#define __HERBCEPTIONS_CONSTEXPR_EXCEPTION constexpr
#else
#define __HERBCEPTIONS_CONSTEXPR_EXCEPTION
#endif

namespace std {
namespace __details {

// Makes an owned {domain, code} pair safely duplicable for legacy-EH
// boxing: a code carrying a cleanup hook cannot be copied — both copies
// would run the same do_cleanup — so it is demoted through do_to_errc to
// the posix domain, which owns nothing. Codes that own nothing pass
// through unchanged.
inline constexpr void __demote_owned_error_code_for_legacy_exception(
    ::std::error_domain_singleton const *&__domain,
    ::std::size_t &__code) noexcept {
  if (__domain == nullptr || __domain->do_cleanup == nullptr) {
    return;
  }
  __code = __domain->do_to_errc != nullptr
               ? static_cast<::std::size_t>(__domain->do_to_errc(__code))
               : static_cast<::std::size_t>(::std::errc::io_error);
  __domain = ::std::error_domains::__cxa_error_domain_posix();
}

// Case-insensitive ASCII compare of a compiler-provided charset name
// (e.g. __GNUC_EXECUTION_CHARSET_NAME: "UTF-8", "GB18030", "GBK") against
// a u8 literal. Only reached on ASCII-compatible execution charsets, so
// the bytes of __name are plain ASCII.
template <::std::size_t __n1, ::std::size_t __n2>
inline consteval bool
__exec_charset_name_is(char const (&__name)[__n1],
                       char8_t const (&__encoding)[__n2]) noexcept {
  if constexpr (__n1 != __n2) {
    return false;
  } else {
    auto __toupper{[](char8_t __ch) consteval noexcept -> char8_t {
      return u8'a' <= __ch && __ch <= u8'z'
                 ? static_cast<char8_t>(__ch - u8'a' + u8'A')
                 : __ch;
    }};
    for (::std::size_t __i{}; __i != __n1; ++__i) {
      if (__toupper(static_cast<char8_t>(__name[__i])) !=
          __toupper(__encoding[__i])) {
        return false;
      }
    }
    return true;
  }
}

// The narrow execution charset of this TU mapped onto a reporter encoding,
// mirroring fast_io's execution_charset_encoding_scheme<char>: 'A' is
// 0x41 in every ASCII-compatible charset and 0xC1 under EBCDIC; GB18030
// is spelled GB18030/GBK in __GNUC_EXECUTION_CHARSET_NAME, or code pages
// 936/54936 in _MSVC_EXECUTION_CHARACTER_SET.
inline consteval ::std::error_reporter_encoding
__exec_charset_reporter_encoding() noexcept {
  if constexpr (static_cast<char8_t>('A') != u8'A') {
    return ::std::error_reporter_encoding::utfebcdic;
  } else {
#if defined(_MSVC_EXECUTION_CHARACTER_SET)
    if constexpr (_MSVC_EXECUTION_CHARACTER_SET == 936 ||
                  _MSVC_EXECUTION_CHARACTER_SET == 54936) {
      return ::std::error_reporter_encoding::gb18030;
    }
#elif defined(__GNUC_EXECUTION_CHARSET_NAME)
    if constexpr (__exec_charset_name_is(__GNUC_EXECUTION_CHARSET_NAME,
                                         u8"GB18030") ||
                  __exec_charset_name_is(__GNUC_EXECUTION_CHARSET_NAME,
                                         u8"GBK")) {
      return ::std::error_reporter_encoding::gb18030;
    }
#endif
    return ::std::error_reporter_encoding::utf8;
  }
}

} // namespace __details

class cxx_std_error_legacy_exception : public ::std::exception {
  ::std::error_domain_singleton const *__domain_opaque{};
  ::std::size_t __code_opaque{};
  ::std::io_scatter_t __what{};

  constexpr void __reset_what() noexcept { __what = {}; }
  constexpr void __reset() noexcept {
    __domain_opaque = nullptr;
    __code_opaque = 0u;
  }
  constexpr void __destroy() noexcept {
    if (__domain_opaque != nullptr) {
      if (auto __docleanup{__domain_opaque->do_cleanup};
          __docleanup != nullptr) {
        __docleanup(__code_opaque);
      }
    }
    // len==0 buffers are the runtime's shared empty string, never heap.
    if (__what.len != 0) {
      ::std::error_domains::__cxa_error_query_information_free(__what.base,
                                                               __what.len);
    }
  }
  static constexpr ::std::io_scatter_t
  __query_what(::std::error_domain_singleton const *__domain,
               ::std::size_t __code) noexcept {
    if (__domain == nullptr) {
      return {};
    }
    // what() speaks the narrow execution charset, which this TU reports
    // faithfully (utf8, gb18030 or EBCDIC), matching fast_io's exec-charset
    // detection.
    return ::std::error_domains::__cxa_error_query_information_create(
        __domain, __code, ::std::__details::__exec_charset_reporter_encoding(),
        ::std::error_query_information::name_message);
  }

  // Selects the borrowing constructor below, keeping it distinct from the
  // public ownership constructor.
  struct __borrowed_t {};

  // error::throw_legacy_exception*() borrow the {domain, code} pair
  // through this: the message is still queried under the source domain
  // unless __query_what_message is false (the
  // throw_legacy_exception_no_what() variant — its what()
  // stays empty and the throw site never allocates), then an owned code
  // is demoted to the posix errc form so the box shares no ownership with
  // the std::error it outlives.
  constexpr cxx_std_error_legacy_exception(
      __borrowed_t, ::std::error_domain_singleton const *__domain,
      ::std::size_t __code, bool __query_what_message) noexcept
      : __domain_opaque(__domain), __code_opaque(__code),
        __what(__query_what_message ? __query_what(__domain, __code)
                                    : ::std::io_scatter_t{}) {
    ::std::__details::__demote_owned_error_code_for_legacy_exception(
        __domain_opaque, __code_opaque);
  }

  // Only std::error produces borrowed boxes.
  friend class ::std::error;

public:
  // Takes ownership of the {domain, code} pair.
  explicit constexpr cxx_std_error_legacy_exception(
      ::std::error_domain_singleton const *__domain,
      ::std::size_t __code) noexcept
      : __domain_opaque(__domain), __code_opaque(__code),
        __what(__query_what(__domain, __code)) {}

#if defined(__CXX_STD_ERROR_TYPE__)
  // Takes ownership of the channel-typed payload.
  explicit constexpr cxx_std_error_legacy_exception(
      ::std::cxx_std_error __e) noexcept
      : cxx_std_error_legacy_exception(
            static_cast<::std::error_domain_singleton const *>(__e.domain),
            __e.code) {}
#endif

  // Legacy EH copies the exception object, so the box must be nothrow
  // copyable: the message buffer is cloned and an owned code is demoted
  // (the copy keeps the original message text).
  constexpr cxx_std_error_legacy_exception(
      cxx_std_error_legacy_exception const &__other) noexcept
      : __domain_opaque(__other.__domain_opaque),
        __code_opaque(__other.__code_opaque),
        __what(::std::error_domains::__cxa_error_query_information_clone(
            __other.__what.base, __other.__what.len)) {
    ::std::__details::__demote_owned_error_code_for_legacy_exception(
        __domain_opaque, __code_opaque);
  }
  constexpr cxx_std_error_legacy_exception &
  operator=(cxx_std_error_legacy_exception const &__other) noexcept {
    if (__builtin_addressof(__other) == this) {
      return *this;
    }
    this->__destroy();
    __domain_opaque = __other.__domain_opaque;
    __code_opaque = __other.__code_opaque;
    __what = ::std::error_domains::__cxa_error_query_information_clone(
        __other.__what.base, __other.__what.len);
    ::std::__details::__demote_owned_error_code_for_legacy_exception(
        __domain_opaque, __code_opaque);
    return *this;
  }
  constexpr cxx_std_error_legacy_exception(
      cxx_std_error_legacy_exception &&__other) noexcept
      : __domain_opaque(__other.__domain_opaque),
        __code_opaque(__other.__code_opaque), __what(__other.__what) {
    __other.__reset();
    __other.__reset_what();
  }
  constexpr cxx_std_error_legacy_exception &
  operator=(cxx_std_error_legacy_exception &&__other) noexcept {
    if (__builtin_addressof(__other) == this) {
      return *this;
    }
    this->__destroy();
    __domain_opaque = __other.__domain_opaque;
    __code_opaque = __other.__code_opaque;
    __what = __other.__what;
    __other.__reset();
    __other.__reset_what();
    return *this;
  }
  __HERBCEPTIONS_CONSTEXPR_EXCEPTION ~cxx_std_error_legacy_exception() {
    this->__destroy();
  }

  [[nodiscard]] constexpr ::std::error_domain_singleton const *
  domain() const noexcept {
    return __domain_opaque;
  }
  [[nodiscard]] constexpr ::std::size_t code() const noexcept {
    return __code_opaque;
  }
  [[nodiscard]] constexpr explicit operator bool() const noexcept {
    return __domain_opaque != nullptr;
  }

#if defined(__CXX_STD_ERROR_TYPE__)
  // Moves the {domain, code} payload out as the compiler's channel type —
  // ownership transfers to the caller — and empties the box, dropping the
  // cached message.
  [[nodiscard]] constexpr ::std::cxx_std_error release() noexcept {
    if (__what.len != 0) {
      ::std::error_domains::__cxa_error_query_information_free(__what.base,
                                                               __what.len);
      this->__reset_what();
    }
    ::std::cxx_std_error __e{__domain_opaque, __code_opaque};
    this->__reset();
    return __e;
  }
  // No-op on an empty box; otherwise puts the payload back on the
  // herbceptions throws channel — the second half of routing a
  // herbception error through a legacy-EH hop.
#ifdef __HERBCEPTIONS__
  constexpr void rethrow_herbception_if_error() throws {
    if (__domain_opaque != nullptr) {
      throw throws this->release();
    }
  }
#endif
#endif

  __HERBCEPTIONS_CONSTEXPR_EXCEPTION char const *
  what() const noexcept override {
    return __what.base != nullptr ? static_cast<char const *>(__what.base) : "";
  }
  [[nodiscard]] constexpr ::std::io_scatter_t what_scatter() const noexcept {
    return __what;
  }
};

} // namespace std

#undef __HERBCEPTIONS_CONSTEXPR_EXCEPTION

