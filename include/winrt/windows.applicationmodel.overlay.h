// C++/WinRT v2.0.250303.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_ApplicationModel_Overlay_H
#define WINRT_Windows_ApplicationModel_Overlay_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.250303.5"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.250303.5"
#include "winrt/windows.applicationmodel.h"
#include "winrt/impl/windows.foundation.2.h"
#include "winrt/impl/windows.applicationmodel.overlay.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_ApplicationModel_Overlay_IOverlayActivatedEventArgs<D>::Command() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::ApplicationModel::Overlay::IOverlayActivatedEventArgs>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::ApplicationModel::Overlay::IOverlayActivatedEventArgs, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::ApplicationModel::Overlay::IOverlayActivatedEventArgs>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_Command(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::ApplicationModel::Overlay::IOverlayActivatedEventArgs>**)this;
            check_hresult(_winrt_abi_type->get_Command(&value));
        }
        return winrt::Windows::ApplicationModel::Overlay::OverlayCommand{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Overlay_IOverlayApp<D>::StartAsync() const
    {
        void* operation{};
        if constexpr (!std::is_same_v<D, winrt::Windows::ApplicationModel::Overlay::IOverlayApp>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::ApplicationModel::Overlay::IOverlayApp, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::ApplicationModel::Overlay::IOverlayApp>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->StartAsync(&operation));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::ApplicationModel::Overlay::IOverlayApp>**)this;
            check_hresult(_winrt_abi_type->StartAsync(&operation));
        }
        return winrt::Windows::Foundation::IAsyncAction{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Overlay_IOverlayApp<D>::DisconnectAsync() const
    {
        void* operation{};
        if constexpr (!std::is_same_v<D, winrt::Windows::ApplicationModel::Overlay::IOverlayApp>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::ApplicationModel::Overlay::IOverlayApp, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::ApplicationModel::Overlay::IOverlayApp>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->DisconnectAsync(&operation));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::ApplicationModel::Overlay::IOverlayApp>**)this;
            check_hresult(_winrt_abi_type->DisconnectAsync(&operation));
        }
        return winrt::Windows::Foundation::IAsyncAction{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Overlay_IOverlayApp<D>::VisualState() const
    {
        winrt::Windows::ApplicationModel::Overlay::OverlayVisualState value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::ApplicationModel::Overlay::IOverlayApp>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::ApplicationModel::Overlay::IOverlayApp, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::ApplicationModel::Overlay::IOverlayApp>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_VisualState(reinterpret_cast<int32_t*>(&value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::ApplicationModel::Overlay::IOverlayApp>**)this;
            check_hresult(_winrt_abi_type->get_VisualState(reinterpret_cast<int32_t*>(&value)));
        }
        return value;
    }
    template <typename D> auto consume_Windows_ApplicationModel_Overlay_IOverlayApp<D>::VisualStateChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token{};
        if constexpr (!std::is_same_v<D, winrt::Windows::ApplicationModel::Overlay::IOverlayApp>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::ApplicationModel::Overlay::IOverlayApp, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::ApplicationModel::Overlay::IOverlayApp>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->add_VisualStateChanged(*(void**)(&handler), put_abi(token)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::ApplicationModel::Overlay::IOverlayApp>**)this;
            check_hresult(_winrt_abi_type->add_VisualStateChanged(*(void**)(&handler), put_abi(token)));
        }
        return token;
    }
    template <typename D> auto consume_Windows_ApplicationModel_Overlay_IOverlayApp<D>::VisualStateChanged(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, VisualStateChanged_revoker>(this, VisualStateChanged(handler));
    }
    template <typename D> auto consume_Windows_ApplicationModel_Overlay_IOverlayApp<D>::VisualStateChanged(winrt::event_token const& token) const noexcept
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::ApplicationModel::Overlay::IOverlayApp>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::ApplicationModel::Overlay::IOverlayApp, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::ApplicationModel::Overlay::IOverlayApp>**)&_winrt_casted_result;
            _winrt_abi_type->remove_VisualStateChanged(impl::bind_in(token));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::ApplicationModel::Overlay::IOverlayApp>**)this;
            _winrt_abi_type->remove_VisualStateChanged(impl::bind_in(token));
        }
    }
    template <typename D> auto consume_Windows_ApplicationModel_Overlay_IOverlayApp<D>::RequestInteractiveAsync(winrt::Windows::ApplicationModel::Overlay::OverlayCommand const& command) const
    {
        void* operation{};
        if constexpr (!std::is_same_v<D, winrt::Windows::ApplicationModel::Overlay::IOverlayApp>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::ApplicationModel::Overlay::IOverlayApp, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::ApplicationModel::Overlay::IOverlayApp>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->RequestInteractiveAsync(*(void**)(&command), &operation));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::ApplicationModel::Overlay::IOverlayApp>**)this;
            check_hresult(_winrt_abi_type->RequestInteractiveAsync(*(void**)(&command), &operation));
        }
        return winrt::Windows::Foundation::IAsyncAction{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Overlay_IOverlayApp<D>::ExitInteractiveAsync() const
    {
        void* operation{};
        if constexpr (!std::is_same_v<D, winrt::Windows::ApplicationModel::Overlay::IOverlayApp>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::ApplicationModel::Overlay::IOverlayApp, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::ApplicationModel::Overlay::IOverlayApp>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->ExitInteractiveAsync(&operation));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::ApplicationModel::Overlay::IOverlayApp>**)this;
            check_hresult(_winrt_abi_type->ExitInteractiveAsync(&operation));
        }
        return winrt::Windows::Foundation::IAsyncAction{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Overlay_IOverlayApp<D>::SetPersistentModeEnabled(bool enabled) const
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::ApplicationModel::Overlay::IOverlayApp>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::ApplicationModel::Overlay::IOverlayApp, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::ApplicationModel::Overlay::IOverlayApp>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->SetPersistentModeEnabled(enabled));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::ApplicationModel::Overlay::IOverlayApp>**)this;
            check_hresult(_winrt_abi_type->SetPersistentModeEnabled(enabled));
        }
    }
    template <typename D> auto consume_Windows_ApplicationModel_Overlay_IOverlayApp<D>::SetUnreadNotificationCount(uint32_t count) const
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::ApplicationModel::Overlay::IOverlayApp>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::ApplicationModel::Overlay::IOverlayApp, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::ApplicationModel::Overlay::IOverlayApp>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->SetUnreadNotificationCount(count));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::ApplicationModel::Overlay::IOverlayApp>**)this;
            check_hresult(_winrt_abi_type->SetUnreadNotificationCount(count));
        }
    }
    template <typename D> auto consume_Windows_ApplicationModel_Overlay_IOverlayApp<D>::SetHasActiveNotification(bool hasActive) const
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::ApplicationModel::Overlay::IOverlayApp>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::ApplicationModel::Overlay::IOverlayApp, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::ApplicationModel::Overlay::IOverlayApp>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->SetHasActiveNotification(hasActive));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::ApplicationModel::Overlay::IOverlayApp>**)this;
            check_hresult(_winrt_abi_type->SetHasActiveNotification(hasActive));
        }
    }
    template <typename D> auto consume_Windows_ApplicationModel_Overlay_IOverlayApp<D>::Activated(winrt::Windows::Foundation::EventHandler<winrt::Windows::ApplicationModel::Overlay::OverlayActivatedEventArgs> const& handler) const
    {
        winrt::event_token token{};
        if constexpr (!std::is_same_v<D, winrt::Windows::ApplicationModel::Overlay::IOverlayApp>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::ApplicationModel::Overlay::IOverlayApp, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::ApplicationModel::Overlay::IOverlayApp>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->add_Activated(*(void**)(&handler), put_abi(token)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::ApplicationModel::Overlay::IOverlayApp>**)this;
            check_hresult(_winrt_abi_type->add_Activated(*(void**)(&handler), put_abi(token)));
        }
        return token;
    }
    template <typename D> auto consume_Windows_ApplicationModel_Overlay_IOverlayApp<D>::Activated(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::ApplicationModel::Overlay::OverlayActivatedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, Activated_revoker>(this, Activated(handler));
    }
    template <typename D> auto consume_Windows_ApplicationModel_Overlay_IOverlayApp<D>::Activated(winrt::event_token const& token) const noexcept
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::ApplicationModel::Overlay::IOverlayApp>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::ApplicationModel::Overlay::IOverlayApp, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::ApplicationModel::Overlay::IOverlayApp>**)&_winrt_casted_result;
            _winrt_abi_type->remove_Activated(impl::bind_in(token));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::ApplicationModel::Overlay::IOverlayApp>**)this;
            _winrt_abi_type->remove_Activated(impl::bind_in(token));
        }
    }
    template <typename D> auto consume_Windows_ApplicationModel_Overlay_IOverlayApp<D>::VisualTransition(winrt::Windows::Foundation::EventHandler<winrt::Windows::ApplicationModel::Overlay::OverlayVisualTransitionEventArgs> const& handler) const
    {
        winrt::event_token token{};
        if constexpr (!std::is_same_v<D, winrt::Windows::ApplicationModel::Overlay::IOverlayApp>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::ApplicationModel::Overlay::IOverlayApp, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::ApplicationModel::Overlay::IOverlayApp>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->add_VisualTransition(*(void**)(&handler), put_abi(token)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::ApplicationModel::Overlay::IOverlayApp>**)this;
            check_hresult(_winrt_abi_type->add_VisualTransition(*(void**)(&handler), put_abi(token)));
        }
        return token;
    }
    template <typename D> auto consume_Windows_ApplicationModel_Overlay_IOverlayApp<D>::VisualTransition(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::ApplicationModel::Overlay::OverlayVisualTransitionEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, VisualTransition_revoker>(this, VisualTransition(handler));
    }
    template <typename D> auto consume_Windows_ApplicationModel_Overlay_IOverlayApp<D>::VisualTransition(winrt::event_token const& token) const noexcept
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::ApplicationModel::Overlay::IOverlayApp>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::ApplicationModel::Overlay::IOverlayApp, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::ApplicationModel::Overlay::IOverlayApp>**)&_winrt_casted_result;
            _winrt_abi_type->remove_VisualTransition(impl::bind_in(token));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::ApplicationModel::Overlay::IOverlayApp>**)this;
            _winrt_abi_type->remove_VisualTransition(impl::bind_in(token));
        }
    }
    template <typename D> auto consume_Windows_ApplicationModel_Overlay_IOverlayApp<D>::Disconnected(winrt::Windows::Foundation::EventHandler<winrt::Windows::ApplicationModel::Overlay::OverlayDisconnectedEventArgs> const& handler) const
    {
        winrt::event_token token{};
        if constexpr (!std::is_same_v<D, winrt::Windows::ApplicationModel::Overlay::IOverlayApp>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::ApplicationModel::Overlay::IOverlayApp, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::ApplicationModel::Overlay::IOverlayApp>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->add_Disconnected(*(void**)(&handler), put_abi(token)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::ApplicationModel::Overlay::IOverlayApp>**)this;
            check_hresult(_winrt_abi_type->add_Disconnected(*(void**)(&handler), put_abi(token)));
        }
        return token;
    }
    template <typename D> auto consume_Windows_ApplicationModel_Overlay_IOverlayApp<D>::Disconnected(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::ApplicationModel::Overlay::OverlayDisconnectedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, Disconnected_revoker>(this, Disconnected(handler));
    }
    template <typename D> auto consume_Windows_ApplicationModel_Overlay_IOverlayApp<D>::Disconnected(winrt::event_token const& token) const noexcept
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::ApplicationModel::Overlay::IOverlayApp>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::ApplicationModel::Overlay::IOverlayApp, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::ApplicationModel::Overlay::IOverlayApp>**)&_winrt_casted_result;
            _winrt_abi_type->remove_Disconnected(impl::bind_in(token));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::ApplicationModel::Overlay::IOverlayApp>**)this;
            _winrt_abi_type->remove_Disconnected(impl::bind_in(token));
        }
    }
    template <typename D> auto consume_Windows_ApplicationModel_Overlay_IOverlayAppOptions<D>::CustomTransitionAnimations() const
    {
        bool value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::ApplicationModel::Overlay::IOverlayAppOptions>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::ApplicationModel::Overlay::IOverlayAppOptions, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::ApplicationModel::Overlay::IOverlayAppOptions>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_CustomTransitionAnimations(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::ApplicationModel::Overlay::IOverlayAppOptions>**)this;
            check_hresult(_winrt_abi_type->get_CustomTransitionAnimations(&value));
        }
        return value;
    }
    template <typename D> auto consume_Windows_ApplicationModel_Overlay_IOverlayAppOptions<D>::CustomTransitionAnimations(bool value) const
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::ApplicationModel::Overlay::IOverlayAppOptions>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::ApplicationModel::Overlay::IOverlayAppOptions, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::ApplicationModel::Overlay::IOverlayAppOptions>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->put_CustomTransitionAnimations(value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::ApplicationModel::Overlay::IOverlayAppOptions>**)this;
            check_hresult(_winrt_abi_type->put_CustomTransitionAnimations(value));
        }
    }
    template <typename D> auto consume_Windows_ApplicationModel_Overlay_IOverlayAppStatics<D>::Create(int64_t hwnd) const
    {
        void* result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::ApplicationModel::Overlay::IOverlayAppStatics>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::ApplicationModel::Overlay::IOverlayAppStatics, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::ApplicationModel::Overlay::IOverlayAppStatics>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->Create(hwnd, &result));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::ApplicationModel::Overlay::IOverlayAppStatics>**)this;
            check_hresult(_winrt_abi_type->Create(hwnd, &result));
        }
        return winrt::Windows::ApplicationModel::Overlay::OverlayApp{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Overlay_IOverlayAppStatics<D>::Create(int64_t hwnd, winrt::Windows::ApplicationModel::Overlay::OverlayAppOptions const& options) const
    {
        void* result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::ApplicationModel::Overlay::IOverlayAppStatics>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::ApplicationModel::Overlay::IOverlayAppStatics, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::ApplicationModel::Overlay::IOverlayAppStatics>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->Create2(hwnd, *(void**)(&options), &result));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::ApplicationModel::Overlay::IOverlayAppStatics>**)this;
            check_hresult(_winrt_abi_type->Create2(hwnd, *(void**)(&options), &result));
        }
        return winrt::Windows::ApplicationModel::Overlay::OverlayApp{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Overlay_IOverlayCommand<D>::Source() const
    {
        winrt::Windows::ApplicationModel::Overlay::OverlayCommandSource value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::ApplicationModel::Overlay::IOverlayCommand>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::ApplicationModel::Overlay::IOverlayCommand, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::ApplicationModel::Overlay::IOverlayCommand>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_Source(reinterpret_cast<int32_t*>(&value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::ApplicationModel::Overlay::IOverlayCommand>**)this;
            check_hresult(_winrt_abi_type->get_Source(reinterpret_cast<int32_t*>(&value)));
        }
        return value;
    }
    template <typename D> auto consume_Windows_ApplicationModel_Overlay_IOverlayCommand<D>::Uri() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::ApplicationModel::Overlay::IOverlayCommand>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::ApplicationModel::Overlay::IOverlayCommand, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::ApplicationModel::Overlay::IOverlayCommand>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_Uri(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::ApplicationModel::Overlay::IOverlayCommand>**)this;
            check_hresult(_winrt_abi_type->get_Uri(&value));
        }
        return winrt::Windows::Foundation::Uri{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Overlay_IOverlayCommandFactory<D>::CreateInstance(winrt::Windows::ApplicationModel::Overlay::OverlayCommandSource const& source, winrt::Windows::Foundation::Uri const& uri) const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::ApplicationModel::Overlay::IOverlayCommandFactory>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::ApplicationModel::Overlay::IOverlayCommandFactory, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::ApplicationModel::Overlay::IOverlayCommandFactory>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->CreateInstance(static_cast<int32_t>(source), *(void**)(&uri), &value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::ApplicationModel::Overlay::IOverlayCommandFactory>**)this;
            check_hresult(_winrt_abi_type->CreateInstance(static_cast<int32_t>(source), *(void**)(&uri), &value));
        }
        return winrt::Windows::ApplicationModel::Overlay::OverlayCommand{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Overlay_IOverlayDisconnectedEventArgs<D>::GetDeferral() const
    {
        void* result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::ApplicationModel::Overlay::IOverlayDisconnectedEventArgs>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::ApplicationModel::Overlay::IOverlayDisconnectedEventArgs, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::ApplicationModel::Overlay::IOverlayDisconnectedEventArgs>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->GetDeferral(&result));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::ApplicationModel::Overlay::IOverlayDisconnectedEventArgs>**)this;
            check_hresult(_winrt_abi_type->GetDeferral(&result));
        }
        return winrt::Windows::Foundation::Deferral{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Overlay_IOverlayVisualTransitionEventArgs<D>::NewState() const
    {
        winrt::Windows::ApplicationModel::Overlay::OverlayVisualState value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::ApplicationModel::Overlay::IOverlayVisualTransitionEventArgs>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::ApplicationModel::Overlay::IOverlayVisualTransitionEventArgs, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::ApplicationModel::Overlay::IOverlayVisualTransitionEventArgs>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_NewState(reinterpret_cast<int32_t*>(&value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::ApplicationModel::Overlay::IOverlayVisualTransitionEventArgs>**)this;
            check_hresult(_winrt_abi_type->get_NewState(reinterpret_cast<int32_t*>(&value)));
        }
        return value;
    }
    template <typename D> auto consume_Windows_ApplicationModel_Overlay_IOverlayVisualTransitionEventArgs<D>::Command() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::ApplicationModel::Overlay::IOverlayVisualTransitionEventArgs>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::ApplicationModel::Overlay::IOverlayVisualTransitionEventArgs, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::ApplicationModel::Overlay::IOverlayVisualTransitionEventArgs>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_Command(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::ApplicationModel::Overlay::IOverlayVisualTransitionEventArgs>**)this;
            check_hresult(_winrt_abi_type->get_Command(&value));
        }
        return winrt::Windows::ApplicationModel::Overlay::OverlayCommand{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_Overlay_IOverlayVisualTransitionEventArgs<D>::TransitionAnimation() const
    {
        winrt::Windows::ApplicationModel::Overlay::OverlayTransitionAnimation value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::ApplicationModel::Overlay::IOverlayVisualTransitionEventArgs>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::ApplicationModel::Overlay::IOverlayVisualTransitionEventArgs, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::ApplicationModel::Overlay::IOverlayVisualTransitionEventArgs>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_TransitionAnimation(reinterpret_cast<int32_t*>(&value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::ApplicationModel::Overlay::IOverlayVisualTransitionEventArgs>**)this;
            check_hresult(_winrt_abi_type->get_TransitionAnimation(reinterpret_cast<int32_t*>(&value)));
        }
        return value;
    }
    template <typename D> auto consume_Windows_ApplicationModel_Overlay_IOverlayVisualTransitionEventArgs<D>::GetDeferral() const
    {
        void* result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::ApplicationModel::Overlay::IOverlayVisualTransitionEventArgs>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::ApplicationModel::Overlay::IOverlayVisualTransitionEventArgs, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::ApplicationModel::Overlay::IOverlayVisualTransitionEventArgs>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->GetDeferral(&result));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::ApplicationModel::Overlay::IOverlayVisualTransitionEventArgs>**)this;
            check_hresult(_winrt_abi_type->GetDeferral(&result));
        }
        return winrt::Windows::Foundation::Deferral{ result, take_ownership_from_abi };
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Overlay::IOverlayActivatedEventArgs> : produce_base<D, winrt::Windows::ApplicationModel::Overlay::IOverlayActivatedEventArgs>
    {
        int32_t __stdcall get_Command(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::ApplicationModel::Overlay::OverlayCommand>(this->shim().Command());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Overlay::IOverlayApp> : produce_base<D, winrt::Windows::ApplicationModel::Overlay::IOverlayApp>
    {
        int32_t __stdcall StartAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncAction>(this->shim().StartAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall DisconnectAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncAction>(this->shim().DisconnectAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_VisualState(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::ApplicationModel::Overlay::OverlayVisualState>(this->shim().VisualState());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_VisualStateChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().VisualStateChanged(*reinterpret_cast<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_VisualStateChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VisualStateChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall RequestInteractiveAsync(void* command, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncAction>(this->shim().RequestInteractiveAsync(*reinterpret_cast<winrt::Windows::ApplicationModel::Overlay::OverlayCommand const*>(&command)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ExitInteractiveAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncAction>(this->shim().ExitInteractiveAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetPersistentModeEnabled(bool enabled) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPersistentModeEnabled(enabled);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetUnreadNotificationCount(uint32_t count) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetUnreadNotificationCount(count);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetHasActiveNotification(bool hasActive) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetHasActiveNotification(hasActive);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_Activated(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().Activated(*reinterpret_cast<winrt::Windows::Foundation::EventHandler<winrt::Windows::ApplicationModel::Overlay::OverlayActivatedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_Activated(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Activated(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_VisualTransition(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().VisualTransition(*reinterpret_cast<winrt::Windows::Foundation::EventHandler<winrt::Windows::ApplicationModel::Overlay::OverlayVisualTransitionEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_VisualTransition(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VisualTransition(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_Disconnected(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().Disconnected(*reinterpret_cast<winrt::Windows::Foundation::EventHandler<winrt::Windows::ApplicationModel::Overlay::OverlayDisconnectedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_Disconnected(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Disconnected(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Overlay::IOverlayAppOptions> : produce_base<D, winrt::Windows::ApplicationModel::Overlay::IOverlayAppOptions>
    {
        int32_t __stdcall get_CustomTransitionAnimations(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().CustomTransitionAnimations());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_CustomTransitionAnimations(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CustomTransitionAnimations(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Overlay::IOverlayAppStatics> : produce_base<D, winrt::Windows::ApplicationModel::Overlay::IOverlayAppStatics>
    {
        int32_t __stdcall Create(int64_t hwnd, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::ApplicationModel::Overlay::OverlayApp>(this->shim().Create(hwnd));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Create2(int64_t hwnd, void* options, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::ApplicationModel::Overlay::OverlayApp>(this->shim().Create(hwnd, *reinterpret_cast<winrt::Windows::ApplicationModel::Overlay::OverlayAppOptions const*>(&options)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Overlay::IOverlayCommand> : produce_base<D, winrt::Windows::ApplicationModel::Overlay::IOverlayCommand>
    {
        int32_t __stdcall get_Source(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::ApplicationModel::Overlay::OverlayCommandSource>(this->shim().Source());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Uri(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Uri>(this->shim().Uri());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Overlay::IOverlayCommandFactory> : produce_base<D, winrt::Windows::ApplicationModel::Overlay::IOverlayCommandFactory>
    {
        int32_t __stdcall CreateInstance(int32_t source, void* uri, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::ApplicationModel::Overlay::OverlayCommand>(this->shim().CreateInstance(*reinterpret_cast<winrt::Windows::ApplicationModel::Overlay::OverlayCommandSource const*>(&source), *reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&uri)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Overlay::IOverlayDisconnectedEventArgs> : produce_base<D, winrt::Windows::ApplicationModel::Overlay::IOverlayDisconnectedEventArgs>
    {
        int32_t __stdcall GetDeferral(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::Deferral>(this->shim().GetDeferral());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Overlay::IOverlayVisualTransitionEventArgs> : produce_base<D, winrt::Windows::ApplicationModel::Overlay::IOverlayVisualTransitionEventArgs>
    {
        int32_t __stdcall get_NewState(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::ApplicationModel::Overlay::OverlayVisualState>(this->shim().NewState());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Command(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::ApplicationModel::Overlay::OverlayCommand>(this->shim().Command());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TransitionAnimation(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::ApplicationModel::Overlay::OverlayTransitionAnimation>(this->shim().TransitionAnimation());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDeferral(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::Deferral>(this->shim().GetDeferral());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Overlay
{
    inline auto OverlayApp::Create(int64_t hwnd)
    {
        return impl::call_factory<OverlayApp, IOverlayAppStatics>([&](IOverlayAppStatics const& f) { return f.Create(hwnd); });
    }
    inline auto OverlayApp::Create(int64_t hwnd, winrt::Windows::ApplicationModel::Overlay::OverlayAppOptions const& options)
    {
        return impl::call_factory<OverlayApp, IOverlayAppStatics>([&](IOverlayAppStatics const& f) { return f.Create(hwnd, options); });
    }
    inline OverlayAppOptions::OverlayAppOptions() :
        OverlayAppOptions(impl::call_factory_cast<OverlayAppOptions(*)(winrt::Windows::Foundation::IActivationFactory const&), OverlayAppOptions>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<OverlayAppOptions>(); }))
    {
    }
    inline OverlayCommand::OverlayCommand(winrt::Windows::ApplicationModel::Overlay::OverlayCommandSource const& source, winrt::Windows::Foundation::Uri const& uri) :
        OverlayCommand(impl::call_factory<OverlayCommand, IOverlayCommandFactory>([&](IOverlayCommandFactory const& f) { return f.CreateInstance(source, uri); }))
    {
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::ApplicationModel::Overlay::IOverlayActivatedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Overlay::IOverlayApp> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Overlay::IOverlayAppOptions> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Overlay::IOverlayAppStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Overlay::IOverlayCommand> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Overlay::IOverlayCommandFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Overlay::IOverlayDisconnectedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Overlay::IOverlayVisualTransitionEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Overlay::OverlayActivatedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Overlay::OverlayApp> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Overlay::OverlayAppOptions> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Overlay::OverlayCommand> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Overlay::OverlayDisconnectedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Overlay::OverlayVisualTransitionEventArgs> : winrt::impl::hash_base {};
#endif
#ifdef __cpp_lib_format
#endif
}
#endif
