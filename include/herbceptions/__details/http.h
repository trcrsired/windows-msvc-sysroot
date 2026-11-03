//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#pragma once
namespace std {
// HTTP response status codes, IANA-registered values = the wire code.
// 1xx informational, 2xx success, 3xx redirection, 4xx client error,
// 5xx server error. Any code — named or not — may ride the domain:
// code() is a straight cast and the runtime reports unlisted codes as
// "Unknown".
enum class http_errc : ::std::uint_least32_t {
  continue_ = 100,
  switching_protocols = 101,
  processing = 102,
  early_hints = 103,

  ok = 200,
  created = 201,
  accepted = 202,
  non_authoritative_information = 203,
  no_content = 204,
  reset_content = 205,
  partial_content = 206,
  multi_status = 207,
  already_reported = 208,
  im_used = 226,

  multiple_choices = 300,
  moved_permanently = 301,
  found = 302,
  see_other = 303,
  not_modified = 304,
  use_proxy = 305,
  temporary_redirect = 307,
  permanent_redirect = 308,

  bad_request = 400,
  unauthorized = 401,
  payment_required = 402,
  forbidden = 403,
  not_found = 404,
  method_not_allowed = 405,
  not_acceptable = 406,
  proxy_authentication_required = 407,
  request_timeout = 408,
  conflict = 409,
  gone = 410,
  length_required = 411,
  precondition_failed = 412,
  content_too_large = 413,
  uri_too_long = 414,
  unsupported_media_type = 415,
  range_not_satisfiable = 416,
  expectation_failed = 417,
  im_a_teapot = 418,
  misdirected_request = 421,
  unprocessable_content = 422,
  locked = 423,
  failed_dependency = 424,
  too_early = 425,
  upgrade_required = 426,
  precondition_required = 428,
  too_many_requests = 429,
  request_header_fields_too_large = 431,
  unavailable_for_legal_reasons = 451,

  internal_server_error = 500,
  not_implemented = 501,
  bad_gateway = 502,
  service_unavailable = 503,
  gateway_timeout = 504,
  http_version_not_supported = 505,
  variant_also_negotiates = 506,
  insufficient_storage = 507,
  loop_detected = 508,
  not_extended = 510,
  network_authentication_required = 511
};

inline constexpr bool operator==(::std::http_errc __a,
                                 ::std::http_errc __b) noexcept {
  return static_cast<::std::uint_least32_t>(__a) ==
         static_cast<::std::uint_least32_t>(__b);
}

template <> class error_domain<::std::http_errc> {
public:
  using errc_type = ::std::http_errc;
  static inline constexpr ::std::error_domain_singleton const *
  domain() noexcept {
    return ::std::error_domains::__cxa_error_domain_http();
  }
  static inline constexpr ::std::size_t code(errc_type __e) noexcept {
    return static_cast<::std::size_t>(static_cast<::std::uint_least32_t>(__e));
  }
};
} // namespace std
