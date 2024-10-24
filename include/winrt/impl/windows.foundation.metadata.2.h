// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Foundation_Metadata_2_H
#define WINRT_Windows_Foundation_Metadata_2_H
#include "winrt/impl/windows.foundation.metadata.1.h"
WINRT_EXPORT namespace winrt::Windows::Foundation::Metadata
{
    struct ApiInformation
    {
        ApiInformation() = delete;
        static auto IsTypePresent(param::hstring const& typeName);
        static auto IsMethodPresent(param::hstring const& typeName, param::hstring const& methodName);
        static auto IsMethodPresent(param::hstring const& typeName, param::hstring const& methodName, uint32_t inputParameterCount);
        static auto IsEventPresent(param::hstring const& typeName, param::hstring const& eventName);
        static auto IsPropertyPresent(param::hstring const& typeName, param::hstring const& propertyName);
        static auto IsReadOnlyPropertyPresent(param::hstring const& typeName, param::hstring const& propertyName);
        static auto IsWriteablePropertyPresent(param::hstring const& typeName, param::hstring const& propertyName);
        static auto IsEnumNamedValuePresent(param::hstring const& enumTypeName, param::hstring const& valueName);
        static auto IsApiContractPresent(param::hstring const& contractName, uint16_t majorVersion);
        static auto IsApiContractPresent(param::hstring const& contractName, uint16_t majorVersion, uint16_t minorVersion);
    };
}
#endif
