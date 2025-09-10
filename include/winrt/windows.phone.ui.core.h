// C++/WinRT v2.0.250303.1

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Phone_UI_Core_H
#define WINRT_Windows_Phone_UI_Core_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.250303.1"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.250303.1"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Phone.UI.Core.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_Phone_UI_Core_ICoreSelectionChangedEventArgs<D>::Start() const
    {
        uint32_t value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::UI::Core::ICoreSelectionChangedEventArgs>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::UI::Core::ICoreSelectionChangedEventArgs, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::UI::Core::ICoreSelectionChangedEventArgs>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_Start(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::UI::Core::ICoreSelectionChangedEventArgs>**)this;
            check_hresult(_winrt_abi_type->get_Start(&value));
        }
        return value;
    }
    template <typename D> auto consume_Windows_Phone_UI_Core_ICoreSelectionChangedEventArgs<D>::Length() const
    {
        uint32_t value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::UI::Core::ICoreSelectionChangedEventArgs>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::UI::Core::ICoreSelectionChangedEventArgs, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::UI::Core::ICoreSelectionChangedEventArgs>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_Length(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::UI::Core::ICoreSelectionChangedEventArgs>**)this;
            check_hresult(_winrt_abi_type->get_Length(&value));
        }
        return value;
    }
    template <typename D> auto consume_Windows_Phone_UI_Core_ICoreTextChangedEventArgs<D>::Start() const
    {
        uint32_t value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::UI::Core::ICoreTextChangedEventArgs>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::UI::Core::ICoreTextChangedEventArgs, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::UI::Core::ICoreTextChangedEventArgs>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_Start(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::UI::Core::ICoreTextChangedEventArgs>**)this;
            check_hresult(_winrt_abi_type->get_Start(&value));
        }
        return value;
    }
    template <typename D> auto consume_Windows_Phone_UI_Core_ICoreTextChangedEventArgs<D>::OldLength() const
    {
        uint32_t value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::UI::Core::ICoreTextChangedEventArgs>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::UI::Core::ICoreTextChangedEventArgs, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::UI::Core::ICoreTextChangedEventArgs>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_OldLength(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::UI::Core::ICoreTextChangedEventArgs>**)this;
            check_hresult(_winrt_abi_type->get_OldLength(&value));
        }
        return value;
    }
    template <typename D> auto consume_Windows_Phone_UI_Core_ICoreTextChangedEventArgs<D>::NewText() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::UI::Core::ICoreTextChangedEventArgs>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::UI::Core::ICoreTextChangedEventArgs, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::UI::Core::ICoreTextChangedEventArgs>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_NewText(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::UI::Core::ICoreTextChangedEventArgs>**)this;
            check_hresult(_winrt_abi_type->get_NewText(&value));
        }
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Phone_UI_Core_ICoreWindowKeyboardInput<D>::IsKeyboardInputEnabled() const
    {
        bool value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::UI::Core::ICoreWindowKeyboardInput>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::UI::Core::ICoreWindowKeyboardInput, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::UI::Core::ICoreWindowKeyboardInput>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_IsKeyboardInputEnabled(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::UI::Core::ICoreWindowKeyboardInput>**)this;
            check_hresult(_winrt_abi_type->get_IsKeyboardInputEnabled(&value));
        }
        return value;
    }
    template <typename D> auto consume_Windows_Phone_UI_Core_ICoreWindowKeyboardInput<D>::IsKeyboardInputEnabled(bool value) const
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::UI::Core::ICoreWindowKeyboardInput>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::UI::Core::ICoreWindowKeyboardInput, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::UI::Core::ICoreWindowKeyboardInput>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->put_IsKeyboardInputEnabled(value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::UI::Core::ICoreWindowKeyboardInput>**)this;
            check_hresult(_winrt_abi_type->put_IsKeyboardInputEnabled(value));
        }
    }
    template <typename D> auto consume_Windows_Phone_UI_Core_ICoreWindowKeyboardInput<D>::KeyboardInputBuffer() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::UI::Core::ICoreWindowKeyboardInput>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::UI::Core::ICoreWindowKeyboardInput, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::UI::Core::ICoreWindowKeyboardInput>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_KeyboardInputBuffer(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::UI::Core::ICoreWindowKeyboardInput>**)this;
            check_hresult(_winrt_abi_type->get_KeyboardInputBuffer(&value));
        }
        return winrt::Windows::Phone::UI::Core::KeyboardInputBuffer{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Phone_UI_Core_ICoreWindowKeyboardInput<D>::KeyboardInputBuffer(winrt::Windows::Phone::UI::Core::KeyboardInputBuffer const& value) const
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::UI::Core::ICoreWindowKeyboardInput>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::UI::Core::ICoreWindowKeyboardInput, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::UI::Core::ICoreWindowKeyboardInput>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->put_KeyboardInputBuffer(*(void**)(&value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::UI::Core::ICoreWindowKeyboardInput>**)this;
            check_hresult(_winrt_abi_type->put_KeyboardInputBuffer(*(void**)(&value)));
        }
    }
    template <typename D> auto consume_Windows_Phone_UI_Core_IKeyboardInputBuffer<D>::Text() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::UI::Core::IKeyboardInputBuffer>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::UI::Core::IKeyboardInputBuffer, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::UI::Core::IKeyboardInputBuffer>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_Text(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::UI::Core::IKeyboardInputBuffer>**)this;
            check_hresult(_winrt_abi_type->get_Text(&value));
        }
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Phone_UI_Core_IKeyboardInputBuffer<D>::Text(param::hstring const& value) const
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::UI::Core::IKeyboardInputBuffer>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::UI::Core::IKeyboardInputBuffer, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::UI::Core::IKeyboardInputBuffer>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->put_Text(*(void**)(&value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::UI::Core::IKeyboardInputBuffer>**)this;
            check_hresult(_winrt_abi_type->put_Text(*(void**)(&value)));
        }
    }
    template <typename D> auto consume_Windows_Phone_UI_Core_IKeyboardInputBuffer<D>::SelectionStart() const
    {
        uint32_t value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::UI::Core::IKeyboardInputBuffer>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::UI::Core::IKeyboardInputBuffer, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::UI::Core::IKeyboardInputBuffer>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_SelectionStart(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::UI::Core::IKeyboardInputBuffer>**)this;
            check_hresult(_winrt_abi_type->get_SelectionStart(&value));
        }
        return value;
    }
    template <typename D> auto consume_Windows_Phone_UI_Core_IKeyboardInputBuffer<D>::SelectionLength() const
    {
        uint32_t value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::UI::Core::IKeyboardInputBuffer>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::UI::Core::IKeyboardInputBuffer, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::UI::Core::IKeyboardInputBuffer>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_SelectionLength(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::UI::Core::IKeyboardInputBuffer>**)this;
            check_hresult(_winrt_abi_type->get_SelectionLength(&value));
        }
        return value;
    }
    template <typename D> auto consume_Windows_Phone_UI_Core_IKeyboardInputBuffer<D>::Select(uint32_t start, uint32_t length) const
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::UI::Core::IKeyboardInputBuffer>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::UI::Core::IKeyboardInputBuffer, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::UI::Core::IKeyboardInputBuffer>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->Select(start, length));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::UI::Core::IKeyboardInputBuffer>**)this;
            check_hresult(_winrt_abi_type->Select(start, length));
        }
    }
    template <typename D> auto consume_Windows_Phone_UI_Core_IKeyboardInputBuffer<D>::SelectFromTap(uint32_t characterIndex) const
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::UI::Core::IKeyboardInputBuffer>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::UI::Core::IKeyboardInputBuffer, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::UI::Core::IKeyboardInputBuffer>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->SelectFromTap(characterIndex));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::UI::Core::IKeyboardInputBuffer>**)this;
            check_hresult(_winrt_abi_type->SelectFromTap(characterIndex));
        }
    }
    template <typename D> auto consume_Windows_Phone_UI_Core_IKeyboardInputBuffer<D>::InputScope() const
    {
        winrt::Windows::Phone::UI::Core::CoreInputScope value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::UI::Core::IKeyboardInputBuffer>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::UI::Core::IKeyboardInputBuffer, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::UI::Core::IKeyboardInputBuffer>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_InputScope(reinterpret_cast<int32_t*>(&value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::UI::Core::IKeyboardInputBuffer>**)this;
            check_hresult(_winrt_abi_type->get_InputScope(reinterpret_cast<int32_t*>(&value)));
        }
        return value;
    }
    template <typename D> auto consume_Windows_Phone_UI_Core_IKeyboardInputBuffer<D>::InputScope(winrt::Windows::Phone::UI::Core::CoreInputScope const& value) const
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::UI::Core::IKeyboardInputBuffer>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::UI::Core::IKeyboardInputBuffer, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::UI::Core::IKeyboardInputBuffer>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->put_InputScope(static_cast<int32_t>(value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::UI::Core::IKeyboardInputBuffer>**)this;
            check_hresult(_winrt_abi_type->put_InputScope(static_cast<int32_t>(value)));
        }
    }
    template <typename D> auto consume_Windows_Phone_UI_Core_IKeyboardInputBuffer<D>::TextChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Phone::UI::Core::KeyboardInputBuffer, winrt::Windows::Phone::UI::Core::CoreTextChangedEventArgs> const& handler) const
    {
        winrt::event_token cookie{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::UI::Core::IKeyboardInputBuffer>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::UI::Core::IKeyboardInputBuffer, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::UI::Core::IKeyboardInputBuffer>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->add_TextChanged(*(void**)(&handler), put_abi(cookie)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::UI::Core::IKeyboardInputBuffer>**)this;
            check_hresult(_winrt_abi_type->add_TextChanged(*(void**)(&handler), put_abi(cookie)));
        }
        return cookie;
    }
    template <typename D> auto consume_Windows_Phone_UI_Core_IKeyboardInputBuffer<D>::TextChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Phone::UI::Core::KeyboardInputBuffer, winrt::Windows::Phone::UI::Core::CoreTextChangedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, TextChanged_revoker>(this, TextChanged(handler));
    }
    template <typename D> auto consume_Windows_Phone_UI_Core_IKeyboardInputBuffer<D>::TextChanged(winrt::event_token const& cookie) const noexcept
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::UI::Core::IKeyboardInputBuffer>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::UI::Core::IKeyboardInputBuffer, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::UI::Core::IKeyboardInputBuffer>**)&_winrt_casted_result;
            _winrt_abi_type->remove_TextChanged(impl::bind_in(cookie));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::UI::Core::IKeyboardInputBuffer>**)this;
            _winrt_abi_type->remove_TextChanged(impl::bind_in(cookie));
        }
    }
    template <typename D> auto consume_Windows_Phone_UI_Core_IKeyboardInputBuffer<D>::SelectionChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Phone::UI::Core::KeyboardInputBuffer, winrt::Windows::Phone::UI::Core::CoreSelectionChangedEventArgs> const& handler) const
    {
        winrt::event_token cookie{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::UI::Core::IKeyboardInputBuffer>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::UI::Core::IKeyboardInputBuffer, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::UI::Core::IKeyboardInputBuffer>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->add_SelectionChanged(*(void**)(&handler), put_abi(cookie)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::UI::Core::IKeyboardInputBuffer>**)this;
            check_hresult(_winrt_abi_type->add_SelectionChanged(*(void**)(&handler), put_abi(cookie)));
        }
        return cookie;
    }
    template <typename D> auto consume_Windows_Phone_UI_Core_IKeyboardInputBuffer<D>::SelectionChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Phone::UI::Core::KeyboardInputBuffer, winrt::Windows::Phone::UI::Core::CoreSelectionChangedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, SelectionChanged_revoker>(this, SelectionChanged(handler));
    }
    template <typename D> auto consume_Windows_Phone_UI_Core_IKeyboardInputBuffer<D>::SelectionChanged(winrt::event_token const& cookie) const noexcept
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::UI::Core::IKeyboardInputBuffer>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::UI::Core::IKeyboardInputBuffer, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::UI::Core::IKeyboardInputBuffer>**)&_winrt_casted_result;
            _winrt_abi_type->remove_SelectionChanged(impl::bind_in(cookie));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::UI::Core::IKeyboardInputBuffer>**)this;
            _winrt_abi_type->remove_SelectionChanged(impl::bind_in(cookie));
        }
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Phone::UI::Core::ICoreSelectionChangedEventArgs> : produce_base<D, winrt::Windows::Phone::UI::Core::ICoreSelectionChangedEventArgs>
    {
        int32_t __stdcall get_Start(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Start());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Length(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Length());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Phone::UI::Core::ICoreTextChangedEventArgs> : produce_base<D, winrt::Windows::Phone::UI::Core::ICoreTextChangedEventArgs>
    {
        int32_t __stdcall get_Start(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Start());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_OldLength(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().OldLength());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_NewText(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().NewText());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
    template <typename D>
    struct produce<D, winrt::Windows::Phone::UI::Core::ICoreWindowKeyboardInput> : produce_base<D, winrt::Windows::Phone::UI::Core::ICoreWindowKeyboardInput>
    {
        int32_t __stdcall get_IsKeyboardInputEnabled(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsKeyboardInputEnabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_IsKeyboardInputEnabled(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsKeyboardInputEnabled(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_KeyboardInputBuffer(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Phone::UI::Core::KeyboardInputBuffer>(this->shim().KeyboardInputBuffer());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_KeyboardInputBuffer(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().KeyboardInputBuffer(*reinterpret_cast<winrt::Windows::Phone::UI::Core::KeyboardInputBuffer const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Phone::UI::Core::IKeyboardInputBuffer> : produce_base<D, winrt::Windows::Phone::UI::Core::IKeyboardInputBuffer>
    {
        int32_t __stdcall get_Text(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Text());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Text(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Text(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SelectionStart(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().SelectionStart());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SelectionLength(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().SelectionLength());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Select(uint32_t start, uint32_t length) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Select(start, length);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SelectFromTap(uint32_t characterIndex) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SelectFromTap(characterIndex);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_InputScope(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Phone::UI::Core::CoreInputScope>(this->shim().InputScope());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_InputScope(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InputScope(*reinterpret_cast<winrt::Windows::Phone::UI::Core::CoreInputScope const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_TextChanged(void* handler, winrt::event_token* cookie) noexcept final try
        {
            zero_abi<winrt::event_token>(cookie);
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<winrt::event_token>(this->shim().TextChanged(*reinterpret_cast<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Phone::UI::Core::KeyboardInputBuffer, winrt::Windows::Phone::UI::Core::CoreTextChangedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_TextChanged(winrt::event_token cookie) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TextChanged(*reinterpret_cast<winrt::event_token const*>(&cookie));
            return 0;
        }
        int32_t __stdcall add_SelectionChanged(void* handler, winrt::event_token* cookie) noexcept final try
        {
            zero_abi<winrt::event_token>(cookie);
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<winrt::event_token>(this->shim().SelectionChanged(*reinterpret_cast<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Phone::UI::Core::KeyboardInputBuffer, winrt::Windows::Phone::UI::Core::CoreSelectionChangedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_SelectionChanged(winrt::event_token cookie) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SelectionChanged(*reinterpret_cast<winrt::event_token const*>(&cookie));
            return 0;
        }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::Phone::UI::Core
{
    inline KeyboardInputBuffer::KeyboardInputBuffer() :
        KeyboardInputBuffer(impl::call_factory_cast<KeyboardInputBuffer(*)(winrt::Windows::Foundation::IActivationFactory const&), KeyboardInputBuffer>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<KeyboardInputBuffer>(); }))
    {
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::Phone::UI::Core::ICoreSelectionChangedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Phone::UI::Core::ICoreTextChangedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Phone::UI::Core::ICoreWindowKeyboardInput> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Phone::UI::Core::IKeyboardInputBuffer> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Phone::UI::Core::CoreSelectionChangedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Phone::UI::Core::CoreTextChangedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Phone::UI::Core::KeyboardInputBuffer> : winrt::impl::hash_base {};
#endif
#ifdef __cpp_lib_format
#endif
}
#endif
