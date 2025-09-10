// C++/WinRT v2.0.250303.1

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Phone_UI_Core_2_H
#define WINRT_Windows_Phone_UI_Core_2_H
#include "winrt/impl/Windows.Phone.UI.Core.1.h"
WINRT_EXPORT namespace winrt::Windows::Phone::UI::Core
{
    struct WINRT_IMPL_EMPTY_BASES CoreSelectionChangedEventArgs : winrt::Windows::Phone::UI::Core::ICoreSelectionChangedEventArgs
    {
        CoreSelectionChangedEventArgs(std::nullptr_t) noexcept {}
        CoreSelectionChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Phone::UI::Core::ICoreSelectionChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES CoreTextChangedEventArgs : winrt::Windows::Phone::UI::Core::ICoreTextChangedEventArgs
    {
        CoreTextChangedEventArgs(std::nullptr_t) noexcept {}
        CoreTextChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Phone::UI::Core::ICoreTextChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES KeyboardInputBuffer : winrt::Windows::Phone::UI::Core::IKeyboardInputBuffer
    {
        KeyboardInputBuffer(std::nullptr_t) noexcept {}
        KeyboardInputBuffer(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Phone::UI::Core::IKeyboardInputBuffer(ptr, take_ownership_from_abi) {}
        KeyboardInputBuffer();
    };
}
#endif
