// C++/WinRT v2.0.250303.1

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_AI_Agents_Mcp_2_H
#define WINRT_Windows_AI_Agents_Mcp_2_H
#include "winrt/impl/windows.ai.agents.mcp.1.h"
WINRT_EXPORT namespace winrt::Windows::AI::Agents::Mcp
{
    struct WINRT_IMPL_EMPTY_BASES McpMessageFilterResponse : winrt::Windows::AI::Agents::Mcp::IMcpMessageFilterResponse
    {
        McpMessageFilterResponse(std::nullptr_t) noexcept {}
        McpMessageFilterResponse(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::AI::Agents::Mcp::IMcpMessageFilterResponse(ptr, take_ownership_from_abi) {}
    };
}
#endif
