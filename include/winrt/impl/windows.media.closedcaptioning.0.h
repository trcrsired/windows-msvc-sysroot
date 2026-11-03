// C++/WinRT v2.0.250303.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Media_ClosedCaptioning_0_H
#define WINRT_Windows_Media_ClosedCaptioning_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    template <typename T> struct WINRT_IMPL_EMPTY_BASES EventHandler;
    struct EventRegistrationToken;
}
WINRT_EXPORT namespace winrt::Windows::UI
{
    struct Color;
}
WINRT_EXPORT namespace winrt::Windows::Media::ClosedCaptioning
{
    enum class ClosedCaptionColor : int32_t
    {
        Default = 0,
        White = 1,
        Black = 2,
        Red = 3,
        Green = 4,
        Blue = 5,
        Yellow = 6,
        Magenta = 7,
        Cyan = 8,
    };
    enum class ClosedCaptionEdgeEffect : int32_t
    {
        Default = 0,
        None = 1,
        Raised = 2,
        Depressed = 3,
        Uniform = 4,
        DropShadow = 5,
    };
    enum class ClosedCaptionOpacity : int32_t
    {
        Default = 0,
        OneHundredPercent = 1,
        SeventyFivePercent = 2,
        TwentyFivePercent = 3,
        ZeroPercent = 4,
    };
    enum class ClosedCaptionSize : int32_t
    {
        Default = 0,
        FiftyPercent = 1,
        OneHundredPercent = 2,
        OneHundredFiftyPercent = 3,
        TwoHundredPercent = 4,
    };
    enum class ClosedCaptionStyle : int32_t
    {
        Default = 0,
        MonospacedWithSerifs = 1,
        ProportionalWithSerifs = 2,
        MonospacedWithoutSerifs = 3,
        ProportionalWithoutSerifs = 4,
        Casual = 5,
        Cursive = 6,
        SmallCapitals = 7,
    };
    struct IClosedCaptionPropertiesStatics;
    struct IClosedCaptionPropertiesStatics2;
    struct IClosedCaptionTheme;
    struct IClosedCaptionThemeStatics;
    struct ClosedCaptionProperties;
    struct ClosedCaptionTheme;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionTheme>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionThemeStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionProperties>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionTheme>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionColor>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionEdgeEffect>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionOpacity>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionSize>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionStyle>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionProperties> = L"Windows.Media.ClosedCaptioning.ClosedCaptionProperties";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionTheme> = L"Windows.Media.ClosedCaptioning.ClosedCaptionTheme";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionColor> = L"Windows.Media.ClosedCaptioning.ClosedCaptionColor";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionEdgeEffect> = L"Windows.Media.ClosedCaptioning.ClosedCaptionEdgeEffect";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionOpacity> = L"Windows.Media.ClosedCaptioning.ClosedCaptionOpacity";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionSize> = L"Windows.Media.ClosedCaptioning.ClosedCaptionSize";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionStyle> = L"Windows.Media.ClosedCaptioning.ClosedCaptionStyle";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics> = L"Windows.Media.ClosedCaptioning.IClosedCaptionPropertiesStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics2> = L"Windows.Media.ClosedCaptioning.IClosedCaptionPropertiesStatics2";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionTheme> = L"Windows.Media.ClosedCaptioning.IClosedCaptionTheme";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionThemeStatics> = L"Windows.Media.ClosedCaptioning.IClosedCaptionThemeStatics";
    template <> inline constexpr guid guid_v<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>{ 0x10AA1F84,0xCC30,0x4141,{ 0xB5,0x03,0x52,0x72,0x28,0x9E,0x0C,0x20 } }; // 10AA1F84-CC30-4141-B503-5272289E0C20
    template <> inline constexpr guid guid_v<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics2>{ 0x9DE26870,0x37DE,0x4197,{ 0x88,0x45,0x9A,0x48,0xDC,0x5A,0xC3,0x17 } }; // 9DE26870-37DE-4197-8845-9A48DC5AC317
    template <> inline constexpr guid guid_v<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionTheme>{ 0xD3974055,0xB9B5,0x52A4,{ 0xB6,0x55,0x30,0x66,0x1F,0x73,0xD1,0xC1 } }; // D3974055-B9B5-52A4-B655-30661F73D1C1
    template <> inline constexpr guid guid_v<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionThemeStatics>{ 0x0938AE0F,0x214E,0x5760,{ 0x88,0xC9,0xBB,0x3F,0x1B,0x54,0xF3,0xC7 } }; // 0938AE0F-214E-5760-88C9-BB3F1B54F3C7
    template <> struct default_interface<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionTheme>{ using type = winrt::Windows::Media::ClosedCaptioning::IClosedCaptionTheme; };
    template <> struct abi<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_FontColor(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ComputedFontColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_FontOpacity(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_FontSize(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_FontStyle(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_FontEffect(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_BackgroundColor(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ComputedBackgroundColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_BackgroundOpacity(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_RegionColor(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ComputedRegionColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_RegionOpacity(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics2>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall add_PropertiesChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PropertiesChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionTheme>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall get_FontColor(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ComputedFontColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_FontOpacity(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_FontSize(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_FontStyle(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_FontEffect(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_BackgroundColor(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ComputedBackgroundColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_BackgroundOpacity(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_RegionColor(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ComputedRegionColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_RegionOpacity(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionThemeStatics>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall GetAvailableThemes(uint32_t* __resultSize, void***) noexcept = 0;
            virtual int32_t __stdcall GetSelectedTheme(void**) noexcept = 0;
            virtual int32_t __stdcall TrySetSelectedTheme(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall add_ThemesChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ThemesChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_SelectedThemeChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SelectedThemeChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Media_ClosedCaptioning_IClosedCaptionPropertiesStatics
    {
        [[nodiscard]] auto FontColor() const;
        [[nodiscard]] auto ComputedFontColor() const;
        [[nodiscard]] auto FontOpacity() const;
        [[nodiscard]] auto FontSize() const;
        [[nodiscard]] auto FontStyle() const;
        [[nodiscard]] auto FontEffect() const;
        [[nodiscard]] auto BackgroundColor() const;
        [[nodiscard]] auto ComputedBackgroundColor() const;
        [[nodiscard]] auto BackgroundOpacity() const;
        [[nodiscard]] auto RegionColor() const;
        [[nodiscard]] auto ComputedRegionColor() const;
        [[nodiscard]] auto RegionOpacity() const;
    };
    template <> struct consume<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>
    {
        template <typename D> using type = consume_Windows_Media_ClosedCaptioning_IClosedCaptionPropertiesStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_ClosedCaptioning_IClosedCaptionPropertiesStatics2
    {
        auto PropertiesChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        using PropertiesChanged_revoker = impl::event_revoker<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics2, &impl::abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics2>::remove_PropertiesChanged>;
        [[nodiscard]] auto PropertiesChanged(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto PropertiesChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics2>
    {
        template <typename D> using type = consume_Windows_Media_ClosedCaptioning_IClosedCaptionPropertiesStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_ClosedCaptioning_IClosedCaptionTheme
    {
        [[nodiscard]] auto Id() const;
        [[nodiscard]] auto DisplayName() const;
        [[nodiscard]] auto FontColor() const;
        [[nodiscard]] auto ComputedFontColor() const;
        [[nodiscard]] auto FontOpacity() const;
        [[nodiscard]] auto FontSize() const;
        [[nodiscard]] auto FontStyle() const;
        [[nodiscard]] auto FontEffect() const;
        [[nodiscard]] auto BackgroundColor() const;
        [[nodiscard]] auto ComputedBackgroundColor() const;
        [[nodiscard]] auto BackgroundOpacity() const;
        [[nodiscard]] auto RegionColor() const;
        [[nodiscard]] auto ComputedRegionColor() const;
        [[nodiscard]] auto RegionOpacity() const;
    };
    template <> struct consume<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionTheme>
    {
        template <typename D> using type = consume_Windows_Media_ClosedCaptioning_IClosedCaptionTheme<D>;
    };
    template <typename D>
    struct consume_Windows_Media_ClosedCaptioning_IClosedCaptionThemeStatics
    {
        auto GetAvailableThemes() const;
        auto GetSelectedTheme() const;
        auto TrySetSelectedTheme(winrt::Windows::Media::ClosedCaptioning::ClosedCaptionTheme const& value) const;
        auto ThemesChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        using ThemesChanged_revoker = impl::event_revoker<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionThemeStatics, &impl::abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionThemeStatics>::remove_ThemesChanged>;
        [[nodiscard]] auto ThemesChanged(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto ThemesChanged(winrt::event_token const& token) const noexcept;
        auto SelectedThemeChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        using SelectedThemeChanged_revoker = impl::event_revoker<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionThemeStatics, &impl::abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionThemeStatics>::remove_SelectedThemeChanged>;
        [[nodiscard]] auto SelectedThemeChanged(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto SelectedThemeChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionThemeStatics>
    {
        template <typename D> using type = consume_Windows_Media_ClosedCaptioning_IClosedCaptionThemeStatics<D>;
    };
}
#endif
