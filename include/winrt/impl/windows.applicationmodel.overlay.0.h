// C++/WinRT v2.0.250303.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_ApplicationModel_Overlay_0_H
#define WINRT_Windows_ApplicationModel_Overlay_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct Deferral;
    template <typename T> struct WINRT_IMPL_EMPTY_BASES EventHandler;
    struct EventRegistrationToken;
    struct IAsyncAction;
    struct Uri;
}
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Overlay
{
    enum class OverlayCommandSource : int32_t
    {
        Keyboard = 0,
        Gamepad = 1,
        Programmatic = 2,
        Pointer = 3,
    };
    enum class OverlayTransitionAnimation : int32_t
    {
        Disabled = 0,
        PlatformAuto = 1,
        Fade = 2,
        SlideLeft = 3,
        SlideRight = 4,
    };
    enum class OverlayVisualState : int32_t
    {
        Hidden = 0,
        Persistent = 1,
        Interactive = 2,
    };
    struct IOverlayActivatedEventArgs;
    struct IOverlayApp;
    struct IOverlayAppOptions;
    struct IOverlayAppStatics;
    struct IOverlayCommand;
    struct IOverlayCommandFactory;
    struct IOverlayDisconnectedEventArgs;
    struct IOverlayVisualTransitionEventArgs;
    struct OverlayActivatedEventArgs;
    struct OverlayApp;
    struct OverlayAppOptions;
    struct OverlayCommand;
    struct OverlayDisconnectedEventArgs;
    struct OverlayVisualTransitionEventArgs;
    struct OverlayContract;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::ApplicationModel::Overlay::IOverlayActivatedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Overlay::IOverlayApp>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Overlay::IOverlayAppOptions>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Overlay::IOverlayAppStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Overlay::IOverlayCommand>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Overlay::IOverlayCommandFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Overlay::IOverlayDisconnectedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Overlay::IOverlayVisualTransitionEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Overlay::OverlayActivatedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Overlay::OverlayApp>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Overlay::OverlayAppOptions>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Overlay::OverlayCommand>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Overlay::OverlayDisconnectedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Overlay::OverlayVisualTransitionEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Overlay::OverlayCommandSource>{ using type = enum_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Overlay::OverlayTransitionAnimation>{ using type = enum_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Overlay::OverlayVisualState>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Overlay::OverlayActivatedEventArgs> = L"Windows.ApplicationModel.Overlay.OverlayActivatedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Overlay::OverlayApp> = L"Windows.ApplicationModel.Overlay.OverlayApp";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Overlay::OverlayAppOptions> = L"Windows.ApplicationModel.Overlay.OverlayAppOptions";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Overlay::OverlayCommand> = L"Windows.ApplicationModel.Overlay.OverlayCommand";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Overlay::OverlayDisconnectedEventArgs> = L"Windows.ApplicationModel.Overlay.OverlayDisconnectedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Overlay::OverlayVisualTransitionEventArgs> = L"Windows.ApplicationModel.Overlay.OverlayVisualTransitionEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Overlay::OverlayCommandSource> = L"Windows.ApplicationModel.Overlay.OverlayCommandSource";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Overlay::OverlayTransitionAnimation> = L"Windows.ApplicationModel.Overlay.OverlayTransitionAnimation";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Overlay::OverlayVisualState> = L"Windows.ApplicationModel.Overlay.OverlayVisualState";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Overlay::IOverlayActivatedEventArgs> = L"Windows.ApplicationModel.Overlay.IOverlayActivatedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Overlay::IOverlayApp> = L"Windows.ApplicationModel.Overlay.IOverlayApp";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Overlay::IOverlayAppOptions> = L"Windows.ApplicationModel.Overlay.IOverlayAppOptions";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Overlay::IOverlayAppStatics> = L"Windows.ApplicationModel.Overlay.IOverlayAppStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Overlay::IOverlayCommand> = L"Windows.ApplicationModel.Overlay.IOverlayCommand";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Overlay::IOverlayCommandFactory> = L"Windows.ApplicationModel.Overlay.IOverlayCommandFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Overlay::IOverlayDisconnectedEventArgs> = L"Windows.ApplicationModel.Overlay.IOverlayDisconnectedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Overlay::IOverlayVisualTransitionEventArgs> = L"Windows.ApplicationModel.Overlay.IOverlayVisualTransitionEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Overlay::OverlayContract> = L"Windows.ApplicationModel.Overlay.OverlayContract";
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Overlay::IOverlayActivatedEventArgs>{ 0x277092D8,0x617C,0x50BA,{ 0x9E,0x57,0x6D,0xC2,0x50,0x78,0xBE,0xB0 } }; // 277092D8-617C-50BA-9E57-6DC25078BEB0
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Overlay::IOverlayApp>{ 0x0410C228,0x3813,0x54FC,{ 0xB4,0x02,0x88,0x52,0x05,0x26,0xD1,0xF5 } }; // 0410C228-3813-54FC-B402-88520526D1F5
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Overlay::IOverlayAppOptions>{ 0x9E0DD89A,0x0F2A,0x5CFD,{ 0x80,0x5D,0xDB,0xB1,0x31,0x64,0xC1,0x46 } }; // 9E0DD89A-0F2A-5CFD-805D-DBB13164C146
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Overlay::IOverlayAppStatics>{ 0x2C112604,0xC435,0x53D0,{ 0x9B,0xE6,0x64,0x31,0xE3,0x9E,0xB2,0x6C } }; // 2C112604-C435-53D0-9BE6-6431E39EB26C
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Overlay::IOverlayCommand>{ 0xDDE596F8,0x6093,0x5029,{ 0x8C,0xBC,0x06,0xB0,0x46,0xD3,0x28,0xDC } }; // DDE596F8-6093-5029-8CBC-06B046D328DC
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Overlay::IOverlayCommandFactory>{ 0x10210BB2,0x4755,0x520D,{ 0x80,0x2B,0x74,0x90,0xC2,0x60,0xF8,0x02 } }; // 10210BB2-4755-520D-802B-7490C260F802
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Overlay::IOverlayDisconnectedEventArgs>{ 0x9573E2BE,0x6692,0x513E,{ 0x9E,0xD4,0x71,0x64,0x2A,0x18,0x2D,0x42 } }; // 9573E2BE-6692-513E-9ED4-71642A182D42
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Overlay::IOverlayVisualTransitionEventArgs>{ 0x0CC0E9DD,0xB088,0x5F81,{ 0xA0,0x2B,0xC9,0x25,0x25,0x9A,0x46,0x4D } }; // 0CC0E9DD-B088-5F81-A02B-C925259A464D
    template <> struct default_interface<winrt::Windows::ApplicationModel::Overlay::OverlayActivatedEventArgs>{ using type = winrt::Windows::ApplicationModel::Overlay::IOverlayActivatedEventArgs; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Overlay::OverlayApp>{ using type = winrt::Windows::ApplicationModel::Overlay::IOverlayApp; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Overlay::OverlayAppOptions>{ using type = winrt::Windows::ApplicationModel::Overlay::IOverlayAppOptions; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Overlay::OverlayCommand>{ using type = winrt::Windows::ApplicationModel::Overlay::IOverlayCommand; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Overlay::OverlayDisconnectedEventArgs>{ using type = winrt::Windows::ApplicationModel::Overlay::IOverlayDisconnectedEventArgs; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Overlay::OverlayVisualTransitionEventArgs>{ using type = winrt::Windows::ApplicationModel::Overlay::IOverlayVisualTransitionEventArgs; };
    template <> struct abi<winrt::Windows::ApplicationModel::Overlay::IOverlayActivatedEventArgs>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_Command(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Overlay::IOverlayApp>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall StartAsync(void**) noexcept = 0;
            virtual int32_t __stdcall DisconnectAsync(void**) noexcept = 0;
            virtual int32_t __stdcall get_VisualState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall add_VisualStateChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_VisualStateChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall RequestInteractiveAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ExitInteractiveAsync(void**) noexcept = 0;
            virtual int32_t __stdcall SetPersistentModeEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall SetUnreadNotificationCount(uint32_t) noexcept = 0;
            virtual int32_t __stdcall SetHasActiveNotification(bool) noexcept = 0;
            virtual int32_t __stdcall add_Activated(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Activated(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_VisualTransition(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_VisualTransition(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Disconnected(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Disconnected(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Overlay::IOverlayAppOptions>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_CustomTransitionAnimations(bool*) noexcept = 0;
            virtual int32_t __stdcall put_CustomTransitionAnimations(bool) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Overlay::IOverlayAppStatics>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall Create(int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall Create2(int64_t, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Overlay::IOverlayCommand>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_Source(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Uri(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Overlay::IOverlayCommandFactory>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(int32_t, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Overlay::IOverlayDisconnectedEventArgs>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Overlay::IOverlayVisualTransitionEventArgs>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_NewState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Command(void**) noexcept = 0;
            virtual int32_t __stdcall get_TransitionAnimation(int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Overlay_IOverlayActivatedEventArgs
    {
        [[nodiscard]] auto Command() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Overlay::IOverlayActivatedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Overlay_IOverlayActivatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Overlay_IOverlayApp
    {
        auto StartAsync() const;
        auto DisconnectAsync() const;
        [[nodiscard]] auto VisualState() const;
        auto VisualStateChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        using VisualStateChanged_revoker = impl::event_revoker<winrt::Windows::ApplicationModel::Overlay::IOverlayApp, &impl::abi_t<winrt::Windows::ApplicationModel::Overlay::IOverlayApp>::remove_VisualStateChanged>;
        [[nodiscard]] auto VisualStateChanged(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto VisualStateChanged(winrt::event_token const& token) const noexcept;
        auto RequestInteractiveAsync(winrt::Windows::ApplicationModel::Overlay::OverlayCommand const& command) const;
        auto ExitInteractiveAsync() const;
        auto SetPersistentModeEnabled(bool enabled) const;
        auto SetUnreadNotificationCount(uint32_t count) const;
        auto SetHasActiveNotification(bool hasActive) const;
        auto Activated(winrt::Windows::Foundation::EventHandler<winrt::Windows::ApplicationModel::Overlay::OverlayActivatedEventArgs> const& handler) const;
        using Activated_revoker = impl::event_revoker<winrt::Windows::ApplicationModel::Overlay::IOverlayApp, &impl::abi_t<winrt::Windows::ApplicationModel::Overlay::IOverlayApp>::remove_Activated>;
        [[nodiscard]] auto Activated(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::ApplicationModel::Overlay::OverlayActivatedEventArgs> const& handler) const;
        auto Activated(winrt::event_token const& token) const noexcept;
        auto VisualTransition(winrt::Windows::Foundation::EventHandler<winrt::Windows::ApplicationModel::Overlay::OverlayVisualTransitionEventArgs> const& handler) const;
        using VisualTransition_revoker = impl::event_revoker<winrt::Windows::ApplicationModel::Overlay::IOverlayApp, &impl::abi_t<winrt::Windows::ApplicationModel::Overlay::IOverlayApp>::remove_VisualTransition>;
        [[nodiscard]] auto VisualTransition(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::ApplicationModel::Overlay::OverlayVisualTransitionEventArgs> const& handler) const;
        auto VisualTransition(winrt::event_token const& token) const noexcept;
        auto Disconnected(winrt::Windows::Foundation::EventHandler<winrt::Windows::ApplicationModel::Overlay::OverlayDisconnectedEventArgs> const& handler) const;
        using Disconnected_revoker = impl::event_revoker<winrt::Windows::ApplicationModel::Overlay::IOverlayApp, &impl::abi_t<winrt::Windows::ApplicationModel::Overlay::IOverlayApp>::remove_Disconnected>;
        [[nodiscard]] auto Disconnected(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::ApplicationModel::Overlay::OverlayDisconnectedEventArgs> const& handler) const;
        auto Disconnected(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Overlay::IOverlayApp>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Overlay_IOverlayApp<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Overlay_IOverlayAppOptions
    {
        [[nodiscard]] auto CustomTransitionAnimations() const;
        auto CustomTransitionAnimations(bool value) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Overlay::IOverlayAppOptions>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Overlay_IOverlayAppOptions<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Overlay_IOverlayAppStatics
    {
        auto Create(int64_t hwnd) const;
        auto Create(int64_t hwnd, winrt::Windows::ApplicationModel::Overlay::OverlayAppOptions const& options) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Overlay::IOverlayAppStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Overlay_IOverlayAppStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Overlay_IOverlayCommand
    {
        [[nodiscard]] auto Source() const;
        [[nodiscard]] auto Uri() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Overlay::IOverlayCommand>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Overlay_IOverlayCommand<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Overlay_IOverlayCommandFactory
    {
        auto CreateInstance(winrt::Windows::ApplicationModel::Overlay::OverlayCommandSource const& source, winrt::Windows::Foundation::Uri const& uri) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Overlay::IOverlayCommandFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Overlay_IOverlayCommandFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Overlay_IOverlayDisconnectedEventArgs
    {
        auto GetDeferral() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Overlay::IOverlayDisconnectedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Overlay_IOverlayDisconnectedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Overlay_IOverlayVisualTransitionEventArgs
    {
        [[nodiscard]] auto NewState() const;
        [[nodiscard]] auto Command() const;
        [[nodiscard]] auto TransitionAnimation() const;
        auto GetDeferral() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Overlay::IOverlayVisualTransitionEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Overlay_IOverlayVisualTransitionEventArgs<D>;
    };
}
#endif
