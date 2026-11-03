// C++/WinRT v2.0.250303.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_ApplicationModel_Overlay_1_H
#define WINRT_Windows_ApplicationModel_Overlay_1_H
#include "winrt/impl/windows.applicationmodel.overlay.0.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Overlay
{
    struct WINRT_IMPL_EMPTY_BASES IOverlayActivatedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IOverlayActivatedEventArgs>
    {
        IOverlayActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IOverlayActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IOverlayApp :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IOverlayApp>
    {
        IOverlayApp(std::nullptr_t = nullptr) noexcept {}
        IOverlayApp(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IOverlayAppOptions :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IOverlayAppOptions>
    {
        IOverlayAppOptions(std::nullptr_t = nullptr) noexcept {}
        IOverlayAppOptions(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IOverlayAppStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IOverlayAppStatics>
    {
        IOverlayAppStatics(std::nullptr_t = nullptr) noexcept {}
        IOverlayAppStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IOverlayCommand :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IOverlayCommand>
    {
        IOverlayCommand(std::nullptr_t = nullptr) noexcept {}
        IOverlayCommand(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IOverlayCommandFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IOverlayCommandFactory>
    {
        IOverlayCommandFactory(std::nullptr_t = nullptr) noexcept {}
        IOverlayCommandFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IOverlayDisconnectedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IOverlayDisconnectedEventArgs>
    {
        IOverlayDisconnectedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IOverlayDisconnectedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IOverlayVisualTransitionEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IOverlayVisualTransitionEventArgs>
    {
        IOverlayVisualTransitionEventArgs(std::nullptr_t = nullptr) noexcept {}
        IOverlayVisualTransitionEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
