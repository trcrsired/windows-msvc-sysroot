// C++/WinRT v2.0.250303.1

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Foundation_Metadata_1_H
#define WINRT_Windows_Foundation_Metadata_1_H
#include "winrt/impl/Windows.Foundation.Metadata.0.h"
WINRT_EXPORT namespace winrt::Windows::Foundation::Metadata
{
    struct WINRT_IMPL_EMPTY_BASES IApiInformationStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IApiInformationStatics>
    {
        IApiInformationStatics(std::nullptr_t = nullptr) noexcept {}
        IApiInformationStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
