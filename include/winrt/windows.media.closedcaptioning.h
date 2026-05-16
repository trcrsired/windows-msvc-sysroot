// C++/WinRT v2.0.250303.1

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Media_ClosedCaptioning_H
#define WINRT_Windows_Media_ClosedCaptioning_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.250303.1"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.250303.1"
#include "winrt/windows.media.h"
#include "winrt/impl/windows.foundation.2.h"
#include "winrt/impl/windows.ui.2.h"
#include "winrt/impl/windows.media.closedcaptioning.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_Media_ClosedCaptioning_IClosedCaptionPropertiesStatics<D>::FontColor() const
    {
        winrt::Windows::Media::ClosedCaptioning::ClosedCaptionColor value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_FontColor(reinterpret_cast<int32_t*>(&value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>**)this;
            check_hresult(_winrt_abi_type->get_FontColor(reinterpret_cast<int32_t*>(&value)));
        }
        return value;
    }
    template <typename D> auto consume_Windows_Media_ClosedCaptioning_IClosedCaptionPropertiesStatics<D>::ComputedFontColor() const
    {
        winrt::Windows::UI::Color value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_ComputedFontColor(put_abi(value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>**)this;
            check_hresult(_winrt_abi_type->get_ComputedFontColor(put_abi(value)));
        }
        return value;
    }
    template <typename D> auto consume_Windows_Media_ClosedCaptioning_IClosedCaptionPropertiesStatics<D>::FontOpacity() const
    {
        winrt::Windows::Media::ClosedCaptioning::ClosedCaptionOpacity value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_FontOpacity(reinterpret_cast<int32_t*>(&value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>**)this;
            check_hresult(_winrt_abi_type->get_FontOpacity(reinterpret_cast<int32_t*>(&value)));
        }
        return value;
    }
    template <typename D> auto consume_Windows_Media_ClosedCaptioning_IClosedCaptionPropertiesStatics<D>::FontSize() const
    {
        winrt::Windows::Media::ClosedCaptioning::ClosedCaptionSize value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_FontSize(reinterpret_cast<int32_t*>(&value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>**)this;
            check_hresult(_winrt_abi_type->get_FontSize(reinterpret_cast<int32_t*>(&value)));
        }
        return value;
    }
    template <typename D> auto consume_Windows_Media_ClosedCaptioning_IClosedCaptionPropertiesStatics<D>::FontStyle() const
    {
        winrt::Windows::Media::ClosedCaptioning::ClosedCaptionStyle value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_FontStyle(reinterpret_cast<int32_t*>(&value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>**)this;
            check_hresult(_winrt_abi_type->get_FontStyle(reinterpret_cast<int32_t*>(&value)));
        }
        return value;
    }
    template <typename D> auto consume_Windows_Media_ClosedCaptioning_IClosedCaptionPropertiesStatics<D>::FontEffect() const
    {
        winrt::Windows::Media::ClosedCaptioning::ClosedCaptionEdgeEffect value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_FontEffect(reinterpret_cast<int32_t*>(&value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>**)this;
            check_hresult(_winrt_abi_type->get_FontEffect(reinterpret_cast<int32_t*>(&value)));
        }
        return value;
    }
    template <typename D> auto consume_Windows_Media_ClosedCaptioning_IClosedCaptionPropertiesStatics<D>::BackgroundColor() const
    {
        winrt::Windows::Media::ClosedCaptioning::ClosedCaptionColor value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_BackgroundColor(reinterpret_cast<int32_t*>(&value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>**)this;
            check_hresult(_winrt_abi_type->get_BackgroundColor(reinterpret_cast<int32_t*>(&value)));
        }
        return value;
    }
    template <typename D> auto consume_Windows_Media_ClosedCaptioning_IClosedCaptionPropertiesStatics<D>::ComputedBackgroundColor() const
    {
        winrt::Windows::UI::Color value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_ComputedBackgroundColor(put_abi(value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>**)this;
            check_hresult(_winrt_abi_type->get_ComputedBackgroundColor(put_abi(value)));
        }
        return value;
    }
    template <typename D> auto consume_Windows_Media_ClosedCaptioning_IClosedCaptionPropertiesStatics<D>::BackgroundOpacity() const
    {
        winrt::Windows::Media::ClosedCaptioning::ClosedCaptionOpacity value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_BackgroundOpacity(reinterpret_cast<int32_t*>(&value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>**)this;
            check_hresult(_winrt_abi_type->get_BackgroundOpacity(reinterpret_cast<int32_t*>(&value)));
        }
        return value;
    }
    template <typename D> auto consume_Windows_Media_ClosedCaptioning_IClosedCaptionPropertiesStatics<D>::RegionColor() const
    {
        winrt::Windows::Media::ClosedCaptioning::ClosedCaptionColor value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_RegionColor(reinterpret_cast<int32_t*>(&value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>**)this;
            check_hresult(_winrt_abi_type->get_RegionColor(reinterpret_cast<int32_t*>(&value)));
        }
        return value;
    }
    template <typename D> auto consume_Windows_Media_ClosedCaptioning_IClosedCaptionPropertiesStatics<D>::ComputedRegionColor() const
    {
        winrt::Windows::UI::Color value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_ComputedRegionColor(put_abi(value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>**)this;
            check_hresult(_winrt_abi_type->get_ComputedRegionColor(put_abi(value)));
        }
        return value;
    }
    template <typename D> auto consume_Windows_Media_ClosedCaptioning_IClosedCaptionPropertiesStatics<D>::RegionOpacity() const
    {
        winrt::Windows::Media::ClosedCaptioning::ClosedCaptionOpacity value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_RegionOpacity(reinterpret_cast<int32_t*>(&value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>**)this;
            check_hresult(_winrt_abi_type->get_RegionOpacity(reinterpret_cast<int32_t*>(&value)));
        }
        return value;
    }
    template <typename D> auto consume_Windows_Media_ClosedCaptioning_IClosedCaptionPropertiesStatics2<D>::PropertiesChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics2>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics2, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics2>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->add_PropertiesChanged(*(void**)(&handler), put_abi(token)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics2>**)this;
            check_hresult(_winrt_abi_type->add_PropertiesChanged(*(void**)(&handler), put_abi(token)));
        }
        return token;
    }
    template <typename D> auto consume_Windows_Media_ClosedCaptioning_IClosedCaptionPropertiesStatics2<D>::PropertiesChanged(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, PropertiesChanged_revoker>(this, PropertiesChanged(handler));
    }
    template <typename D> auto consume_Windows_Media_ClosedCaptioning_IClosedCaptionPropertiesStatics2<D>::PropertiesChanged(winrt::event_token const& token) const noexcept
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics2>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics2, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics2>**)&_winrt_casted_result;
            _winrt_abi_type->remove_PropertiesChanged(impl::bind_in(token));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics2>**)this;
            _winrt_abi_type->remove_PropertiesChanged(impl::bind_in(token));
        }
    }
    template <typename D> auto consume_Windows_Media_ClosedCaptioning_IClosedCaptionTheme<D>::Id() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Media::ClosedCaptioning::IClosedCaptionTheme>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionTheme, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionTheme>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_Id(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionTheme>**)this;
            check_hresult(_winrt_abi_type->get_Id(&value));
        }
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_ClosedCaptioning_IClosedCaptionTheme<D>::DisplayName() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Media::ClosedCaptioning::IClosedCaptionTheme>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionTheme, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionTheme>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_DisplayName(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionTheme>**)this;
            check_hresult(_winrt_abi_type->get_DisplayName(&value));
        }
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_ClosedCaptioning_IClosedCaptionTheme<D>::FontColor() const
    {
        winrt::Windows::Media::ClosedCaptioning::ClosedCaptionColor value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Media::ClosedCaptioning::IClosedCaptionTheme>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionTheme, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionTheme>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_FontColor(reinterpret_cast<int32_t*>(&value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionTheme>**)this;
            check_hresult(_winrt_abi_type->get_FontColor(reinterpret_cast<int32_t*>(&value)));
        }
        return value;
    }
    template <typename D> auto consume_Windows_Media_ClosedCaptioning_IClosedCaptionTheme<D>::ComputedFontColor() const
    {
        winrt::Windows::UI::Color value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Media::ClosedCaptioning::IClosedCaptionTheme>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionTheme, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionTheme>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_ComputedFontColor(put_abi(value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionTheme>**)this;
            check_hresult(_winrt_abi_type->get_ComputedFontColor(put_abi(value)));
        }
        return value;
    }
    template <typename D> auto consume_Windows_Media_ClosedCaptioning_IClosedCaptionTheme<D>::FontOpacity() const
    {
        winrt::Windows::Media::ClosedCaptioning::ClosedCaptionOpacity value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Media::ClosedCaptioning::IClosedCaptionTheme>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionTheme, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionTheme>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_FontOpacity(reinterpret_cast<int32_t*>(&value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionTheme>**)this;
            check_hresult(_winrt_abi_type->get_FontOpacity(reinterpret_cast<int32_t*>(&value)));
        }
        return value;
    }
    template <typename D> auto consume_Windows_Media_ClosedCaptioning_IClosedCaptionTheme<D>::FontSize() const
    {
        winrt::Windows::Media::ClosedCaptioning::ClosedCaptionSize value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Media::ClosedCaptioning::IClosedCaptionTheme>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionTheme, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionTheme>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_FontSize(reinterpret_cast<int32_t*>(&value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionTheme>**)this;
            check_hresult(_winrt_abi_type->get_FontSize(reinterpret_cast<int32_t*>(&value)));
        }
        return value;
    }
    template <typename D> auto consume_Windows_Media_ClosedCaptioning_IClosedCaptionTheme<D>::FontStyle() const
    {
        winrt::Windows::Media::ClosedCaptioning::ClosedCaptionStyle value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Media::ClosedCaptioning::IClosedCaptionTheme>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionTheme, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionTheme>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_FontStyle(reinterpret_cast<int32_t*>(&value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionTheme>**)this;
            check_hresult(_winrt_abi_type->get_FontStyle(reinterpret_cast<int32_t*>(&value)));
        }
        return value;
    }
    template <typename D> auto consume_Windows_Media_ClosedCaptioning_IClosedCaptionTheme<D>::FontEffect() const
    {
        winrt::Windows::Media::ClosedCaptioning::ClosedCaptionEdgeEffect value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Media::ClosedCaptioning::IClosedCaptionTheme>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionTheme, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionTheme>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_FontEffect(reinterpret_cast<int32_t*>(&value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionTheme>**)this;
            check_hresult(_winrt_abi_type->get_FontEffect(reinterpret_cast<int32_t*>(&value)));
        }
        return value;
    }
    template <typename D> auto consume_Windows_Media_ClosedCaptioning_IClosedCaptionTheme<D>::BackgroundColor() const
    {
        winrt::Windows::Media::ClosedCaptioning::ClosedCaptionColor value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Media::ClosedCaptioning::IClosedCaptionTheme>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionTheme, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionTheme>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_BackgroundColor(reinterpret_cast<int32_t*>(&value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionTheme>**)this;
            check_hresult(_winrt_abi_type->get_BackgroundColor(reinterpret_cast<int32_t*>(&value)));
        }
        return value;
    }
    template <typename D> auto consume_Windows_Media_ClosedCaptioning_IClosedCaptionTheme<D>::ComputedBackgroundColor() const
    {
        winrt::Windows::UI::Color value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Media::ClosedCaptioning::IClosedCaptionTheme>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionTheme, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionTheme>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_ComputedBackgroundColor(put_abi(value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionTheme>**)this;
            check_hresult(_winrt_abi_type->get_ComputedBackgroundColor(put_abi(value)));
        }
        return value;
    }
    template <typename D> auto consume_Windows_Media_ClosedCaptioning_IClosedCaptionTheme<D>::BackgroundOpacity() const
    {
        winrt::Windows::Media::ClosedCaptioning::ClosedCaptionOpacity value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Media::ClosedCaptioning::IClosedCaptionTheme>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionTheme, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionTheme>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_BackgroundOpacity(reinterpret_cast<int32_t*>(&value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionTheme>**)this;
            check_hresult(_winrt_abi_type->get_BackgroundOpacity(reinterpret_cast<int32_t*>(&value)));
        }
        return value;
    }
    template <typename D> auto consume_Windows_Media_ClosedCaptioning_IClosedCaptionTheme<D>::RegionColor() const
    {
        winrt::Windows::Media::ClosedCaptioning::ClosedCaptionColor value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Media::ClosedCaptioning::IClosedCaptionTheme>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionTheme, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionTheme>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_RegionColor(reinterpret_cast<int32_t*>(&value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionTheme>**)this;
            check_hresult(_winrt_abi_type->get_RegionColor(reinterpret_cast<int32_t*>(&value)));
        }
        return value;
    }
    template <typename D> auto consume_Windows_Media_ClosedCaptioning_IClosedCaptionTheme<D>::ComputedRegionColor() const
    {
        winrt::Windows::UI::Color value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Media::ClosedCaptioning::IClosedCaptionTheme>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionTheme, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionTheme>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_ComputedRegionColor(put_abi(value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionTheme>**)this;
            check_hresult(_winrt_abi_type->get_ComputedRegionColor(put_abi(value)));
        }
        return value;
    }
    template <typename D> auto consume_Windows_Media_ClosedCaptioning_IClosedCaptionTheme<D>::RegionOpacity() const
    {
        winrt::Windows::Media::ClosedCaptioning::ClosedCaptionOpacity value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Media::ClosedCaptioning::IClosedCaptionTheme>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionTheme, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionTheme>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_RegionOpacity(reinterpret_cast<int32_t*>(&value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionTheme>**)this;
            check_hresult(_winrt_abi_type->get_RegionOpacity(reinterpret_cast<int32_t*>(&value)));
        }
        return value;
    }
    template <typename D> auto consume_Windows_Media_ClosedCaptioning_IClosedCaptionThemeStatics<D>::GetAvailableThemes() const
    {
        uint32_t result_impl_size{};
        void** result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Media::ClosedCaptioning::IClosedCaptionThemeStatics>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionThemeStatics, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionThemeStatics>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->GetAvailableThemes(&result_impl_size, &result));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionThemeStatics>**)this;
            check_hresult(_winrt_abi_type->GetAvailableThemes(&result_impl_size, &result));
        }
        return com_array<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionTheme>{ result, result_impl_size, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_ClosedCaptioning_IClosedCaptionThemeStatics<D>::GetSelectedTheme() const
    {
        void* result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Media::ClosedCaptioning::IClosedCaptionThemeStatics>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionThemeStatics, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionThemeStatics>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->GetSelectedTheme(&result));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionThemeStatics>**)this;
            check_hresult(_winrt_abi_type->GetSelectedTheme(&result));
        }
        return winrt::Windows::Media::ClosedCaptioning::ClosedCaptionTheme{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_ClosedCaptioning_IClosedCaptionThemeStatics<D>::TrySetSelectedTheme(winrt::Windows::Media::ClosedCaptioning::ClosedCaptionTheme const& value) const
    {
        bool result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Media::ClosedCaptioning::IClosedCaptionThemeStatics>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionThemeStatics, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionThemeStatics>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->TrySetSelectedTheme(*(void**)(&value), &result));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionThemeStatics>**)this;
            check_hresult(_winrt_abi_type->TrySetSelectedTheme(*(void**)(&value), &result));
        }
        return result;
    }
    template <typename D> auto consume_Windows_Media_ClosedCaptioning_IClosedCaptionThemeStatics<D>::ThemesChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Media::ClosedCaptioning::IClosedCaptionThemeStatics>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionThemeStatics, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionThemeStatics>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->add_ThemesChanged(*(void**)(&handler), put_abi(token)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionThemeStatics>**)this;
            check_hresult(_winrt_abi_type->add_ThemesChanged(*(void**)(&handler), put_abi(token)));
        }
        return token;
    }
    template <typename D> auto consume_Windows_Media_ClosedCaptioning_IClosedCaptionThemeStatics<D>::ThemesChanged(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, ThemesChanged_revoker>(this, ThemesChanged(handler));
    }
    template <typename D> auto consume_Windows_Media_ClosedCaptioning_IClosedCaptionThemeStatics<D>::ThemesChanged(winrt::event_token const& token) const noexcept
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::Media::ClosedCaptioning::IClosedCaptionThemeStatics>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionThemeStatics, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionThemeStatics>**)&_winrt_casted_result;
            _winrt_abi_type->remove_ThemesChanged(impl::bind_in(token));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionThemeStatics>**)this;
            _winrt_abi_type->remove_ThemesChanged(impl::bind_in(token));
        }
    }
    template <typename D> auto consume_Windows_Media_ClosedCaptioning_IClosedCaptionThemeStatics<D>::SelectedThemeChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Media::ClosedCaptioning::IClosedCaptionThemeStatics>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionThemeStatics, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionThemeStatics>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->add_SelectedThemeChanged(*(void**)(&handler), put_abi(token)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionThemeStatics>**)this;
            check_hresult(_winrt_abi_type->add_SelectedThemeChanged(*(void**)(&handler), put_abi(token)));
        }
        return token;
    }
    template <typename D> auto consume_Windows_Media_ClosedCaptioning_IClosedCaptionThemeStatics<D>::SelectedThemeChanged(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, SelectedThemeChanged_revoker>(this, SelectedThemeChanged(handler));
    }
    template <typename D> auto consume_Windows_Media_ClosedCaptioning_IClosedCaptionThemeStatics<D>::SelectedThemeChanged(winrt::event_token const& token) const noexcept
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::Media::ClosedCaptioning::IClosedCaptionThemeStatics>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionThemeStatics, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionThemeStatics>**)&_winrt_casted_result;
            _winrt_abi_type->remove_SelectedThemeChanged(impl::bind_in(token));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionThemeStatics>**)this;
            _winrt_abi_type->remove_SelectedThemeChanged(impl::bind_in(token));
        }
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics> : produce_base<D, winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>
    {
        int32_t __stdcall get_FontColor(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionColor>(this->shim().FontColor());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ComputedFontColor(struct struct_Windows_UI_Color* value) noexcept final try
        {
            zero_abi<winrt::Windows::UI::Color>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Color>(this->shim().ComputedFontColor());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FontOpacity(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionOpacity>(this->shim().FontOpacity());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FontSize(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionSize>(this->shim().FontSize());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FontStyle(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionStyle>(this->shim().FontStyle());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FontEffect(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionEdgeEffect>(this->shim().FontEffect());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_BackgroundColor(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionColor>(this->shim().BackgroundColor());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ComputedBackgroundColor(struct struct_Windows_UI_Color* value) noexcept final try
        {
            zero_abi<winrt::Windows::UI::Color>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Color>(this->shim().ComputedBackgroundColor());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_BackgroundOpacity(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionOpacity>(this->shim().BackgroundOpacity());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RegionColor(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionColor>(this->shim().RegionColor());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ComputedRegionColor(struct struct_Windows_UI_Color* value) noexcept final try
        {
            zero_abi<winrt::Windows::UI::Color>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Color>(this->shim().ComputedRegionColor());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RegionOpacity(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionOpacity>(this->shim().RegionOpacity());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics2> : produce_base<D, winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics2>
    {
        int32_t __stdcall add_PropertiesChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().PropertiesChanged(*reinterpret_cast<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_PropertiesChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PropertiesChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::ClosedCaptioning::IClosedCaptionTheme> : produce_base<D, winrt::Windows::Media::ClosedCaptioning::IClosedCaptionTheme>
    {
        int32_t __stdcall get_Id(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Id());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DisplayName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DisplayName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FontColor(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionColor>(this->shim().FontColor());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ComputedFontColor(struct struct_Windows_UI_Color* value) noexcept final try
        {
            zero_abi<winrt::Windows::UI::Color>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Color>(this->shim().ComputedFontColor());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FontOpacity(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionOpacity>(this->shim().FontOpacity());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FontSize(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionSize>(this->shim().FontSize());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FontStyle(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionStyle>(this->shim().FontStyle());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FontEffect(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionEdgeEffect>(this->shim().FontEffect());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_BackgroundColor(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionColor>(this->shim().BackgroundColor());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ComputedBackgroundColor(struct struct_Windows_UI_Color* value) noexcept final try
        {
            zero_abi<winrt::Windows::UI::Color>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Color>(this->shim().ComputedBackgroundColor());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_BackgroundOpacity(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionOpacity>(this->shim().BackgroundOpacity());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RegionColor(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionColor>(this->shim().RegionColor());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ComputedRegionColor(struct struct_Windows_UI_Color* value) noexcept final try
        {
            zero_abi<winrt::Windows::UI::Color>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Color>(this->shim().ComputedRegionColor());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RegionOpacity(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionOpacity>(this->shim().RegionOpacity());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::ClosedCaptioning::IClosedCaptionThemeStatics> : produce_base<D, winrt::Windows::Media::ClosedCaptioning::IClosedCaptionThemeStatics>
    {
        int32_t __stdcall GetAvailableThemes(uint32_t* __resultSize, void*** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            std::tie(*__resultSize, *result) = detach_abi(this->shim().GetAvailableThemes());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetSelectedTheme(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionTheme>(this->shim().GetSelectedTheme());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TrySetSelectedTheme(void* value, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().TrySetSelectedTheme(*reinterpret_cast<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionTheme const*>(&value)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_ThemesChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().ThemesChanged(*reinterpret_cast<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_ThemesChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ThemesChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_SelectedThemeChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().SelectedThemeChanged(*reinterpret_cast<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_SelectedThemeChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SelectedThemeChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::Media::ClosedCaptioning
{
    inline auto ClosedCaptionProperties::FontColor()
    {
        return impl::call_factory_cast<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionColor(*)(IClosedCaptionPropertiesStatics const&), ClosedCaptionProperties, IClosedCaptionPropertiesStatics>([](IClosedCaptionPropertiesStatics const& f) { return f.FontColor(); });
    }
    inline auto ClosedCaptionProperties::ComputedFontColor()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Color(*)(IClosedCaptionPropertiesStatics const&), ClosedCaptionProperties, IClosedCaptionPropertiesStatics>([](IClosedCaptionPropertiesStatics const& f) { return f.ComputedFontColor(); });
    }
    inline auto ClosedCaptionProperties::FontOpacity()
    {
        return impl::call_factory_cast<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionOpacity(*)(IClosedCaptionPropertiesStatics const&), ClosedCaptionProperties, IClosedCaptionPropertiesStatics>([](IClosedCaptionPropertiesStatics const& f) { return f.FontOpacity(); });
    }
    inline auto ClosedCaptionProperties::FontSize()
    {
        return impl::call_factory_cast<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionSize(*)(IClosedCaptionPropertiesStatics const&), ClosedCaptionProperties, IClosedCaptionPropertiesStatics>([](IClosedCaptionPropertiesStatics const& f) { return f.FontSize(); });
    }
    inline auto ClosedCaptionProperties::FontStyle()
    {
        return impl::call_factory_cast<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionStyle(*)(IClosedCaptionPropertiesStatics const&), ClosedCaptionProperties, IClosedCaptionPropertiesStatics>([](IClosedCaptionPropertiesStatics const& f) { return f.FontStyle(); });
    }
    inline auto ClosedCaptionProperties::FontEffect()
    {
        return impl::call_factory_cast<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionEdgeEffect(*)(IClosedCaptionPropertiesStatics const&), ClosedCaptionProperties, IClosedCaptionPropertiesStatics>([](IClosedCaptionPropertiesStatics const& f) { return f.FontEffect(); });
    }
    inline auto ClosedCaptionProperties::BackgroundColor()
    {
        return impl::call_factory_cast<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionColor(*)(IClosedCaptionPropertiesStatics const&), ClosedCaptionProperties, IClosedCaptionPropertiesStatics>([](IClosedCaptionPropertiesStatics const& f) { return f.BackgroundColor(); });
    }
    inline auto ClosedCaptionProperties::ComputedBackgroundColor()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Color(*)(IClosedCaptionPropertiesStatics const&), ClosedCaptionProperties, IClosedCaptionPropertiesStatics>([](IClosedCaptionPropertiesStatics const& f) { return f.ComputedBackgroundColor(); });
    }
    inline auto ClosedCaptionProperties::BackgroundOpacity()
    {
        return impl::call_factory_cast<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionOpacity(*)(IClosedCaptionPropertiesStatics const&), ClosedCaptionProperties, IClosedCaptionPropertiesStatics>([](IClosedCaptionPropertiesStatics const& f) { return f.BackgroundOpacity(); });
    }
    inline auto ClosedCaptionProperties::RegionColor()
    {
        return impl::call_factory_cast<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionColor(*)(IClosedCaptionPropertiesStatics const&), ClosedCaptionProperties, IClosedCaptionPropertiesStatics>([](IClosedCaptionPropertiesStatics const& f) { return f.RegionColor(); });
    }
    inline auto ClosedCaptionProperties::ComputedRegionColor()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Color(*)(IClosedCaptionPropertiesStatics const&), ClosedCaptionProperties, IClosedCaptionPropertiesStatics>([](IClosedCaptionPropertiesStatics const& f) { return f.ComputedRegionColor(); });
    }
    inline auto ClosedCaptionProperties::RegionOpacity()
    {
        return impl::call_factory_cast<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionOpacity(*)(IClosedCaptionPropertiesStatics const&), ClosedCaptionProperties, IClosedCaptionPropertiesStatics>([](IClosedCaptionPropertiesStatics const& f) { return f.RegionOpacity(); });
    }
    inline auto ClosedCaptionProperties::PropertiesChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler)
    {
        return impl::call_factory<ClosedCaptionProperties, IClosedCaptionPropertiesStatics2>([&](IClosedCaptionPropertiesStatics2 const& f) { return f.PropertiesChanged(handler); });
    }
    inline auto ClosedCaptionProperties::PropertiesChanged(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler)
    {
        auto f = get_activation_factory<ClosedCaptionProperties, winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics2>();
        return ClosedCaptionProperties::PropertiesChanged_revoker{ f, f.PropertiesChanged(handler) };
    }
    inline auto ClosedCaptionProperties::PropertiesChanged(winrt::event_token const& token)
    {
        impl::call_factory<ClosedCaptionProperties, IClosedCaptionPropertiesStatics2>([&](IClosedCaptionPropertiesStatics2 const& f) { return f.PropertiesChanged(token); });
    }
    inline auto ClosedCaptionTheme::GetAvailableThemes()
    {
        return impl::call_factory_cast<com_array<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionTheme>(*)(IClosedCaptionThemeStatics const&), ClosedCaptionTheme, IClosedCaptionThemeStatics>([](IClosedCaptionThemeStatics const& f) { return f.GetAvailableThemes(); });
    }
    inline auto ClosedCaptionTheme::GetSelectedTheme()
    {
        return impl::call_factory_cast<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionTheme(*)(IClosedCaptionThemeStatics const&), ClosedCaptionTheme, IClosedCaptionThemeStatics>([](IClosedCaptionThemeStatics const& f) { return f.GetSelectedTheme(); });
    }
    inline auto ClosedCaptionTheme::TrySetSelectedTheme(winrt::Windows::Media::ClosedCaptioning::ClosedCaptionTheme const& value)
    {
        return impl::call_factory<ClosedCaptionTheme, IClosedCaptionThemeStatics>([&](IClosedCaptionThemeStatics const& f) { return f.TrySetSelectedTheme(value); });
    }
    inline auto ClosedCaptionTheme::ThemesChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler)
    {
        return impl::call_factory<ClosedCaptionTheme, IClosedCaptionThemeStatics>([&](IClosedCaptionThemeStatics const& f) { return f.ThemesChanged(handler); });
    }
    inline auto ClosedCaptionTheme::ThemesChanged(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler)
    {
        auto f = get_activation_factory<ClosedCaptionTheme, winrt::Windows::Media::ClosedCaptioning::IClosedCaptionThemeStatics>();
        return ClosedCaptionTheme::ThemesChanged_revoker{ f, f.ThemesChanged(handler) };
    }
    inline auto ClosedCaptionTheme::ThemesChanged(winrt::event_token const& token)
    {
        impl::call_factory<ClosedCaptionTheme, IClosedCaptionThemeStatics>([&](IClosedCaptionThemeStatics const& f) { return f.ThemesChanged(token); });
    }
    inline auto ClosedCaptionTheme::SelectedThemeChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler)
    {
        return impl::call_factory<ClosedCaptionTheme, IClosedCaptionThemeStatics>([&](IClosedCaptionThemeStatics const& f) { return f.SelectedThemeChanged(handler); });
    }
    inline auto ClosedCaptionTheme::SelectedThemeChanged(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler)
    {
        auto f = get_activation_factory<ClosedCaptionTheme, winrt::Windows::Media::ClosedCaptioning::IClosedCaptionThemeStatics>();
        return ClosedCaptionTheme::SelectedThemeChanged_revoker{ f, f.SelectedThemeChanged(handler) };
    }
    inline auto ClosedCaptionTheme::SelectedThemeChanged(winrt::event_token const& token)
    {
        impl::call_factory<ClosedCaptionTheme, IClosedCaptionThemeStatics>([&](IClosedCaptionThemeStatics const& f) { return f.SelectedThemeChanged(token); });
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionTheme> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionThemeStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionProperties> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionTheme> : winrt::impl::hash_base {};
#endif
#ifdef __cpp_lib_format
#endif
}
#endif
