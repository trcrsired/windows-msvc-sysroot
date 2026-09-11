// C++/WinRT v2.0.250303.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_UI_Shell_CompanionWindows_2_H
#define WINRT_Windows_UI_Shell_CompanionWindows_2_H
#include "winrt/impl/windows.foundation.1.h"
#include "winrt/impl/windows.ui.1.h"
#include "winrt/impl/windows.ui.shell.companionwindows.1.h"
WINRT_EXPORT namespace winrt::Windows::UI::Shell::CompanionWindows
{
    struct WINRT_IMPL_EMPTY_BASES CompanionWindowCoordinator : winrt::Windows::UI::Shell::CompanionWindows::ICompanionWindowCoordinator
    {
        CompanionWindowCoordinator(std::nullptr_t) noexcept {}
        CompanionWindowCoordinator(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Shell::CompanionWindows::ICompanionWindowCoordinator(ptr, take_ownership_from_abi) {}
        static auto GetForWindow(winrt::Windows::UI::WindowId const& windowId);
    };
    struct WINRT_IMPL_EMPTY_BASES CompanionWindowRequest : winrt::Windows::UI::Shell::CompanionWindows::ICompanionWindowRequest
    {
        CompanionWindowRequest(std::nullptr_t) noexcept {}
        CompanionWindowRequest(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Shell::CompanionWindows::ICompanionWindowRequest(ptr, take_ownership_from_abi) {}
        static auto GetFromLaunchUri(winrt::Windows::Foundation::Uri const& launchUri);
    };
    struct WINRT_IMPL_EMPTY_BASES CompanionWindowRequestResult : winrt::Windows::UI::Shell::CompanionWindows::ICompanionWindowRequestResult
    {
        CompanionWindowRequestResult(std::nullptr_t) noexcept {}
        CompanionWindowRequestResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Shell::CompanionWindows::ICompanionWindowRequestResult(ptr, take_ownership_from_abi) {}
    };
}
#endif
