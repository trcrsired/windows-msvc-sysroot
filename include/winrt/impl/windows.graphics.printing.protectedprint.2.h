// C++/WinRT v2.0.250303.1

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Graphics_Printing_ProtectedPrint_2_H
#define WINRT_Windows_Graphics_Printing_ProtectedPrint_2_H
#include "winrt/impl/Windows.Graphics.Printing.ProtectedPrint.1.h"
WINRT_EXPORT namespace winrt::Windows::Graphics::Printing::ProtectedPrint
{
    struct WindowsProtectedPrintInfo
    {
        WindowsProtectedPrintInfo() = delete;
        [[nodiscard]] static auto IsProtectedPrintEnabled();
    };
}
#endif
