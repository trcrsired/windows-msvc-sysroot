//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#pragma once
namespace std {
// TLS Alert protocol values, RFC 9846 Appendix B (the consolidated TLS 1.3
// spec, obsoleting RFC 8446). The Alert struct — one level byte followed by
// one description byte — and the code values are identical going back to
// TLS 1.0 (RFC 2246) and are shared with DTLS, so this domain is not
// version-specific. *_reserved codes were assigned in older TLS versions
// and must not be sent by a TLS 1.3 peer, but may legitimately arrive from
// TLS <=1.2 peers.
//
// The domain code() packs (level << 8) | description so the description
// byte alone is the IANA "TLS Alerts" registry value. RFC 9846 makes
// AlertLevel semantically dead for error alerts: every alert in Section 6.2
// MUST be sent fatal and MUST be treated as an error alert regardless of
// the received level. Only close_notify and user_canceled are warning-level
// (closure, not failure).
struct tls_alert {
  enum class alert_level : ::std::uint_least8_t {
    warning = 1,
    fatal = 2,
  };
  enum class alert_description : ::std::uint_least8_t {
    close_notify = 0,
    unexpected_message = 10,
    bad_record_mac = 20,
    decryption_failed_reserved = 21,
    record_overflow = 22,
    decompression_failure_reserved = 30,
    handshake_failure = 40,
    no_certificate_reserved = 41,
    bad_certificate = 42,
    unsupported_certificate = 43,
    certificate_revoked = 44,
    certificate_expired = 45,
    certificate_unknown = 46,
    illegal_parameter = 47,
    unknown_ca = 48,
    access_denied = 49,
    decode_error = 50,
    decrypt_error = 51,
    export_restriction_reserved = 60,
    protocol_version = 70,
    insufficient_security = 71,
    internal_error = 80,
    inappropriate_fallback = 86,
    user_canceled = 90,
    no_renegotiation_reserved = 100,
    missing_extension = 109,
    unsupported_extension = 110,
    certificate_unobtainable_reserved = 111,
    unrecognized_name = 112,
    bad_certificate_status_response = 113,
    bad_certificate_hash_value_reserved = 114,
    unknown_psk_identity = 115,
    certificate_required = 116,
    general_error = 117,
    no_application_protocol = 120,
  };
  alert_level level;
  alert_description description;
};

inline constexpr bool operator==(::std::tls_alert __a,
                                 ::std::tls_alert __b) noexcept {
  return __a.level == __b.level && __a.description == __b.description;
}

template <> class error_domain<::std::tls_alert> {
public:
  using errc_type = ::std::tls_alert;
  static inline constexpr ::std::error_domain_singleton const *
  domain() noexcept {
    return ::std::error_domains::__cxa_error_domain_tls();
  }
  static inline constexpr ::std::size_t code(errc_type __e) noexcept {
    return (static_cast<::std::size_t>(
                static_cast<::std::uint_least8_t>(__e.level))
            << 8) |
           static_cast<::std::size_t>(
               static_cast<::std::uint_least8_t>(__e.description));
  }
  static inline constexpr errc_type
  from_std_error(::std::error const &__e) noexcept {
    return {static_cast<typename errc_type::alert_level>(
                static_cast<::std::uint_least8_t>(__e.code() >> 8)),
            static_cast<typename errc_type::alert_description>(
                static_cast<::std::uint_least8_t>(__e.code()))};
  }
};
} // namespace std
