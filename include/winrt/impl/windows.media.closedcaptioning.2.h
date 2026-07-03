// C++/WinRT v2.0.250303.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Media_ClosedCaptioning_2_H
#define WINRT_Windows_Media_ClosedCaptioning_2_H
#include "winrt/impl/windows.foundation.1.h"
#include "winrt/impl/windows.media.closedcaptioning.1.h"
WINRT_EXPORT namespace winrt::Windows::Media::ClosedCaptioning
{
    struct ClosedCaptionProperties
    {
        ClosedCaptionProperties() = delete;
        [[nodiscard]] static auto FontColor();
        [[nodiscard]] static auto ComputedFontColor();
        [[nodiscard]] static auto FontOpacity();
        [[nodiscard]] static auto FontSize();
        [[nodiscard]] static auto FontStyle();
        [[nodiscard]] static auto FontEffect();
        [[nodiscard]] static auto BackgroundColor();
        [[nodiscard]] static auto ComputedBackgroundColor();
        [[nodiscard]] static auto BackgroundOpacity();
        [[nodiscard]] static auto RegionColor();
        [[nodiscard]] static auto ComputedRegionColor();
        [[nodiscard]] static auto RegionOpacity();
        static auto PropertiesChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler);
        using PropertiesChanged_revoker = impl::factory_event_revoker<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics2, &impl::abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics2>::remove_PropertiesChanged>;
        [[nodiscard]] static auto PropertiesChanged(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler);
        static auto PropertiesChanged(winrt::event_token const& token);
    };
    struct WINRT_IMPL_EMPTY_BASES ClosedCaptionTheme : winrt::Windows::Media::ClosedCaptioning::IClosedCaptionTheme
    {
        ClosedCaptionTheme(std::nullptr_t) noexcept {}
        ClosedCaptionTheme(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::ClosedCaptioning::IClosedCaptionTheme(ptr, take_ownership_from_abi) {}
        static auto GetAvailableThemes();
        static auto GetSelectedTheme();
        static auto TrySetSelectedTheme(winrt::Windows::Media::ClosedCaptioning::ClosedCaptionTheme const& value);
        static auto ThemesChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler);
        using ThemesChanged_revoker = impl::factory_event_revoker<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionThemeStatics, &impl::abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionThemeStatics>::remove_ThemesChanged>;
        [[nodiscard]] static auto ThemesChanged(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler);
        static auto ThemesChanged(winrt::event_token const& token);
        static auto SelectedThemeChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler);
        using SelectedThemeChanged_revoker = impl::factory_event_revoker<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionThemeStatics, &impl::abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionThemeStatics>::remove_SelectedThemeChanged>;
        [[nodiscard]] static auto SelectedThemeChanged(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler);
        static auto SelectedThemeChanged(winrt::event_token const& token);
    };
}
#endif
