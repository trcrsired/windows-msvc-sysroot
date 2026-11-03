// C++/WinRT v2.0.250303.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_ApplicationModel_Overlay_2_H
#define WINRT_Windows_ApplicationModel_Overlay_2_H
#include "winrt/impl/windows.foundation.1.h"
#include "winrt/impl/windows.applicationmodel.overlay.1.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Overlay
{
    struct WINRT_IMPL_EMPTY_BASES OverlayActivatedEventArgs : winrt::Windows::ApplicationModel::Overlay::IOverlayActivatedEventArgs
    {
        OverlayActivatedEventArgs(std::nullptr_t) noexcept {}
        OverlayActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Overlay::IOverlayActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES OverlayApp : winrt::Windows::ApplicationModel::Overlay::IOverlayApp
    {
        OverlayApp(std::nullptr_t) noexcept {}
        OverlayApp(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Overlay::IOverlayApp(ptr, take_ownership_from_abi) {}
        static auto Create(int64_t hwnd);
        static auto Create(int64_t hwnd, winrt::Windows::ApplicationModel::Overlay::OverlayAppOptions const& options);
    };
    struct WINRT_IMPL_EMPTY_BASES OverlayAppOptions : winrt::Windows::ApplicationModel::Overlay::IOverlayAppOptions
    {
        OverlayAppOptions(std::nullptr_t) noexcept {}
        OverlayAppOptions(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Overlay::IOverlayAppOptions(ptr, take_ownership_from_abi) {}
        OverlayAppOptions();
    };
    struct WINRT_IMPL_EMPTY_BASES OverlayCommand : winrt::Windows::ApplicationModel::Overlay::IOverlayCommand
    {
        OverlayCommand(std::nullptr_t) noexcept {}
        OverlayCommand(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Overlay::IOverlayCommand(ptr, take_ownership_from_abi) {}
        OverlayCommand(winrt::Windows::ApplicationModel::Overlay::OverlayCommandSource const& source, winrt::Windows::Foundation::Uri const& uri);
    };
    struct WINRT_IMPL_EMPTY_BASES OverlayDisconnectedEventArgs : winrt::Windows::ApplicationModel::Overlay::IOverlayDisconnectedEventArgs
    {
        OverlayDisconnectedEventArgs(std::nullptr_t) noexcept {}
        OverlayDisconnectedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Overlay::IOverlayDisconnectedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES OverlayVisualTransitionEventArgs : winrt::Windows::ApplicationModel::Overlay::IOverlayVisualTransitionEventArgs
    {
        OverlayVisualTransitionEventArgs(std::nullptr_t) noexcept {}
        OverlayVisualTransitionEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Overlay::IOverlayVisualTransitionEventArgs(ptr, take_ownership_from_abi) {}
    };
}
#endif
