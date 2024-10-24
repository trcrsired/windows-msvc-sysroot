// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_System_Power_Diagnostics_1_H
#define WINRT_Windows_System_Power_Diagnostics_1_H
#include "winrt/impl/windows.system.power.diagnostics.0.h"
WINRT_EXPORT namespace winrt::Windows::System::Power::Diagnostics
{
    struct __declspec(empty_bases) IBackgroundEnergyDiagnosticsStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundEnergyDiagnosticsStatics>
    {
        IBackgroundEnergyDiagnosticsStatics(std::nullptr_t = nullptr) noexcept {}
        IBackgroundEnergyDiagnosticsStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IForegroundEnergyDiagnosticsStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IForegroundEnergyDiagnosticsStatics>
    {
        IForegroundEnergyDiagnosticsStatics(std::nullptr_t = nullptr) noexcept {}
        IForegroundEnergyDiagnosticsStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
