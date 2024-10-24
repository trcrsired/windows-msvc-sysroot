// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Web_Http_Filters_1_H
#define WINRT_Windows_Web_Http_Filters_1_H
#include "winrt/impl/windows.foundation.0.h"
#include "winrt/impl/windows.web.http.filters.0.h"
WINRT_EXPORT namespace winrt::Windows::Web::Http::Filters
{
    struct __declspec(empty_bases) IHttpBaseProtocolFilter :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IHttpBaseProtocolFilter>
    {
        IHttpBaseProtocolFilter(std::nullptr_t = nullptr) noexcept {}
        IHttpBaseProtocolFilter(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IHttpBaseProtocolFilter2 :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IHttpBaseProtocolFilter2>
    {
        IHttpBaseProtocolFilter2(std::nullptr_t = nullptr) noexcept {}
        IHttpBaseProtocolFilter2(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IHttpBaseProtocolFilter3 :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IHttpBaseProtocolFilter3>
    {
        IHttpBaseProtocolFilter3(std::nullptr_t = nullptr) noexcept {}
        IHttpBaseProtocolFilter3(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IHttpBaseProtocolFilter4 :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IHttpBaseProtocolFilter4>
    {
        IHttpBaseProtocolFilter4(std::nullptr_t = nullptr) noexcept {}
        IHttpBaseProtocolFilter4(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IHttpBaseProtocolFilter5 :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IHttpBaseProtocolFilter5>
    {
        IHttpBaseProtocolFilter5(std::nullptr_t = nullptr) noexcept {}
        IHttpBaseProtocolFilter5(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IHttpBaseProtocolFilterStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IHttpBaseProtocolFilterStatics>
    {
        IHttpBaseProtocolFilterStatics(std::nullptr_t = nullptr) noexcept {}
        IHttpBaseProtocolFilterStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IHttpCacheControl :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IHttpCacheControl>
    {
        IHttpCacheControl(std::nullptr_t = nullptr) noexcept {}
        IHttpCacheControl(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IHttpFilter :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IHttpFilter>,
        impl::require<winrt::Windows::Web::Http::Filters::IHttpFilter, winrt::Windows::Foundation::IClosable>
    {
        IHttpFilter(std::nullptr_t = nullptr) noexcept {}
        IHttpFilter(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IHttpServerCustomValidationRequestedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IHttpServerCustomValidationRequestedEventArgs>
    {
        IHttpServerCustomValidationRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IHttpServerCustomValidationRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
