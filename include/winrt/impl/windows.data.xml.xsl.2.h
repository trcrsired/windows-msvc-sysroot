// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Data_Xml_Xsl_2_H
#define WINRT_Windows_Data_Xml_Xsl_2_H
#include "winrt/impl/windows.data.xml.dom.1.h"
#include "winrt/impl/windows.data.xml.xsl.1.h"
WINRT_EXPORT namespace winrt::Windows::Data::Xml::Xsl
{
    struct __declspec(empty_bases) XsltProcessor : winrt::Windows::Data::Xml::Xsl::IXsltProcessor,
        impl::require<XsltProcessor, winrt::Windows::Data::Xml::Xsl::IXsltProcessor2>
    {
        XsltProcessor(std::nullptr_t) noexcept {}
        XsltProcessor(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Data::Xml::Xsl::IXsltProcessor(ptr, take_ownership_from_abi) {}
        explicit XsltProcessor(winrt::Windows::Data::Xml::Dom::XmlDocument const& document);
    };
}
#endif
