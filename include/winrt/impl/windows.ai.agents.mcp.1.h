// C++/WinRT v2.0.250303.1

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_AI_Agents_Mcp_1_H
#define WINRT_Windows_AI_Agents_Mcp_1_H
#include "winrt/impl/windows.ai.agents.mcp.0.h"
WINRT_EXPORT namespace winrt::Windows::AI::Agents::Mcp
{
    struct WINRT_IMPL_EMPTY_BASES IMcpMessageFilterExperimental :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMcpMessageFilterExperimental>
    {
        IMcpMessageFilterExperimental(std::nullptr_t = nullptr) noexcept {}
        IMcpMessageFilterExperimental(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IMcpMessageFilterResponse :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMcpMessageFilterResponse>
    {
        IMcpMessageFilterResponse(std::nullptr_t = nullptr) noexcept {}
        IMcpMessageFilterResponse(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IMcpMessageFilterResponseExperimental :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMcpMessageFilterResponseExperimental>
    {
        IMcpMessageFilterResponseExperimental(std::nullptr_t = nullptr) noexcept {}
        IMcpMessageFilterResponseExperimental(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IMcpMessageFilterResponseExperimental2 :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMcpMessageFilterResponseExperimental2>
    {
        IMcpMessageFilterResponseExperimental2(std::nullptr_t = nullptr) noexcept {}
        IMcpMessageFilterResponseExperimental2(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
