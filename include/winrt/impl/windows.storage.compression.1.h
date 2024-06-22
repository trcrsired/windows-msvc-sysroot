// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Storage_Compression_1_H
#define WINRT_Windows_Storage_Compression_1_H
#include "winrt/impl/windows.foundation.0.h"
#include "winrt/impl/windows.storage.streams.0.h"
#include "winrt/impl/windows.storage.compression.0.h"
WINRT_EXPORT namespace winrt::Windows::Storage::Compression
{
    struct __declspec(empty_bases) ICompressor :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ICompressor>,
        impl::require<winrt::Windows::Storage::Compression::ICompressor, winrt::Windows::Foundation::IClosable, winrt::Windows::Storage::Streams::IOutputStream>
    {
        ICompressor(std::nullptr_t = nullptr) noexcept {}
        ICompressor(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICompressorFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ICompressorFactory>
    {
        ICompressorFactory(std::nullptr_t = nullptr) noexcept {}
        ICompressorFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDecompressor :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IDecompressor>,
        impl::require<winrt::Windows::Storage::Compression::IDecompressor, winrt::Windows::Foundation::IClosable, winrt::Windows::Storage::Streams::IInputStream>
    {
        IDecompressor(std::nullptr_t = nullptr) noexcept {}
        IDecompressor(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDecompressorFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IDecompressorFactory>
    {
        IDecompressorFactory(std::nullptr_t = nullptr) noexcept {}
        IDecompressorFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
