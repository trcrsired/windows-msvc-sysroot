// C++/WinRT v2.0.250303.1

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_ApplicationModel_Preview_2_H
#define WINRT_Windows_ApplicationModel_Preview_2_H
#include "winrt/impl/windows.applicationmodel.preview.1.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Preview
{
    struct WINRT_IMPL_EMPTY_BASES StartupAppInfoPreview : winrt::Windows::ApplicationModel::Preview::IStartupAppInfoPreview
    {
        StartupAppInfoPreview(std::nullptr_t) noexcept {}
        StartupAppInfoPreview(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Preview::IStartupAppInfoPreview(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES StartupAppsManagerPreview : winrt::Windows::ApplicationModel::Preview::IStartupAppsManagerPreview
    {
        StartupAppsManagerPreview(std::nullptr_t) noexcept {}
        StartupAppsManagerPreview(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Preview::IStartupAppsManagerPreview(ptr, take_ownership_from_abi) {}
        static auto GetDefault();
    };
}
#endif
