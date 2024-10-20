// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_System_Threading_Core_1_H
#define WINRT_Windows_System_Threading_Core_1_H
#include "winrt/impl/windows.system.threading.core.0.h"
WINRT_EXPORT namespace winrt::Windows::System::Threading::Core
{
    struct __declspec(empty_bases) IPreallocatedWorkItem :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPreallocatedWorkItem>
    {
        IPreallocatedWorkItem(std::nullptr_t = nullptr) noexcept {}
        IPreallocatedWorkItem(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPreallocatedWorkItemFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPreallocatedWorkItemFactory>
    {
        IPreallocatedWorkItemFactory(std::nullptr_t = nullptr) noexcept {}
        IPreallocatedWorkItemFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISignalNotifier :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISignalNotifier>
    {
        ISignalNotifier(std::nullptr_t = nullptr) noexcept {}
        ISignalNotifier(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISignalNotifierStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISignalNotifierStatics>
    {
        ISignalNotifierStatics(std::nullptr_t = nullptr) noexcept {}
        ISignalNotifierStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
