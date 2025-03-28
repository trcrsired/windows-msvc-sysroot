// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.3.4.5

#pragma once
#ifndef WINRT_Windows_ApplicationModel_Resources_2_H
#define WINRT_Windows_ApplicationModel_Resources_2_H
#include "winrt/impl/windows.foundation.1.h"
#include "winrt/impl/windows.ui.1.h"
#include "winrt/impl/windows.applicationmodel.resources.1.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Resources
{
    struct WINRT_IMPL_EMPTY_BASES ResourceLoader : winrt::Windows::ApplicationModel::Resources::IResourceLoader,
        impl::require<ResourceLoader, winrt::Windows::ApplicationModel::Resources::IResourceLoader2>
    {
        ResourceLoader(std::nullptr_t) noexcept {}
        ResourceLoader(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Resources::IResourceLoader(ptr, take_ownership_from_abi) {}
        ResourceLoader();
        explicit ResourceLoader(param::hstring const& name);
        static auto GetStringForReference(winrt::Windows::Foundation::Uri const& uri);
        static auto GetForCurrentView();
        static auto GetForCurrentView(param::hstring const& name);
        static auto GetForViewIndependentUse();
        static auto GetForViewIndependentUse(param::hstring const& name);
        static auto GetForUIContext(winrt::Windows::UI::UIContext const& context);
        static auto GetDefaultPriPath(param::hstring const& packageFullName);
    };
}
#endif
