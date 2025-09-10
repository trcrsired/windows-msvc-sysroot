// C++/WinRT v2.0.250303.1

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Phone_Networking_Voip_H
#define WINRT_Windows_Phone_Networking_Voip_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.250303.1"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.250303.1"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Phone.Networking.Voip.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_Phone_Networking_Voip_ICallAnswerEventArgs<D>::AcceptedMedia() const
    {
        winrt::Windows::Phone::Networking::Voip::VoipCallMedia value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::Networking::Voip::ICallAnswerEventArgs>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::Networking::Voip::ICallAnswerEventArgs, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::ICallAnswerEventArgs>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_AcceptedMedia(reinterpret_cast<uint32_t*>(&value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::ICallAnswerEventArgs>**)this;
            check_hresult(_winrt_abi_type->get_AcceptedMedia(reinterpret_cast<uint32_t*>(&value)));
        }
        return value;
    }
    template <typename D> auto consume_Windows_Phone_Networking_Voip_ICallAnswerEventArgs2<D>::SourceDeviceId() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::Networking::Voip::ICallAnswerEventArgs2>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::Networking::Voip::ICallAnswerEventArgs2, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::ICallAnswerEventArgs2>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_SourceDeviceId(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::ICallAnswerEventArgs2>**)this;
            check_hresult(_winrt_abi_type->get_SourceDeviceId(&value));
        }
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Phone_Networking_Voip_ICallRejectEventArgs<D>::RejectReason() const
    {
        winrt::Windows::Phone::Networking::Voip::VoipCallRejectReason value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::Networking::Voip::ICallRejectEventArgs>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::Networking::Voip::ICallRejectEventArgs, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::ICallRejectEventArgs>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_RejectReason(reinterpret_cast<int32_t*>(&value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::ICallRejectEventArgs>**)this;
            check_hresult(_winrt_abi_type->get_RejectReason(reinterpret_cast<int32_t*>(&value)));
        }
        return value;
    }
    template <typename D> auto consume_Windows_Phone_Networking_Voip_ICallStateChangeEventArgs<D>::State() const
    {
        winrt::Windows::Phone::Networking::Voip::VoipCallState value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::Networking::Voip::ICallStateChangeEventArgs>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::Networking::Voip::ICallStateChangeEventArgs, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::ICallStateChangeEventArgs>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_State(reinterpret_cast<int32_t*>(&value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::ICallStateChangeEventArgs>**)this;
            check_hresult(_winrt_abi_type->get_State(reinterpret_cast<int32_t*>(&value)));
        }
        return value;
    }
    template <typename D> auto consume_Windows_Phone_Networking_Voip_IMuteChangeEventArgs<D>::Muted() const
    {
        bool value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::Networking::Voip::IMuteChangeEventArgs>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::Networking::Voip::IMuteChangeEventArgs, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IMuteChangeEventArgs>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_Muted(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IMuteChangeEventArgs>**)this;
            check_hresult(_winrt_abi_type->get_Muted(&value));
        }
        return value;
    }
    template <typename D> auto consume_Windows_Phone_Networking_Voip_IQuerySeamlessUpgradeSupportOperation<D>::RemoteId() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::Networking::Voip::IQuerySeamlessUpgradeSupportOperation>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::Networking::Voip::IQuerySeamlessUpgradeSupportOperation, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IQuerySeamlessUpgradeSupportOperation>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_RemoteId(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IQuerySeamlessUpgradeSupportOperation>**)this;
            check_hresult(_winrt_abi_type->get_RemoteId(&value));
        }
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Phone_Networking_Voip_IQuerySeamlessUpgradeSupportOperation<D>::NotifyCompletion(bool succeeded, winrt::Windows::Phone::Networking::Voip::SeamlessCallUpgradeSupport const& seamlessCallUpgradeSupport) const
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::Networking::Voip::IQuerySeamlessUpgradeSupportOperation>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::Networking::Voip::IQuerySeamlessUpgradeSupportOperation, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IQuerySeamlessUpgradeSupportOperation>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->NotifyCompletion(succeeded, static_cast<int32_t>(seamlessCallUpgradeSupport)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IQuerySeamlessUpgradeSupportOperation>**)this;
            check_hresult(_winrt_abi_type->NotifyCompletion(succeeded, static_cast<int32_t>(seamlessCallUpgradeSupport)));
        }
    }
    template <typename D> auto consume_Windows_Phone_Networking_Voip_IVoipCallCoordinator<D>::MuteRequested(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Phone::Networking::Voip::VoipCallCoordinator, winrt::Windows::Phone::Networking::Voip::MuteChangeEventArgs> const& muteChangeHandler) const
    {
        winrt::event_token token{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinator>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinator, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinator>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->add_MuteRequested(*(void**)(&muteChangeHandler), put_abi(token)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinator>**)this;
            check_hresult(_winrt_abi_type->add_MuteRequested(*(void**)(&muteChangeHandler), put_abi(token)));
        }
        return token;
    }
    template <typename D> auto consume_Windows_Phone_Networking_Voip_IVoipCallCoordinator<D>::MuteRequested(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Phone::Networking::Voip::VoipCallCoordinator, winrt::Windows::Phone::Networking::Voip::MuteChangeEventArgs> const& muteChangeHandler) const
    {
        return impl::make_event_revoker<D, MuteRequested_revoker>(this, MuteRequested(muteChangeHandler));
    }
    template <typename D> auto consume_Windows_Phone_Networking_Voip_IVoipCallCoordinator<D>::MuteRequested(winrt::event_token const& token) const noexcept
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinator>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinator, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinator>**)&_winrt_casted_result;
            _winrt_abi_type->remove_MuteRequested(impl::bind_in(token));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinator>**)this;
            _winrt_abi_type->remove_MuteRequested(impl::bind_in(token));
        }
    }
    template <typename D> auto consume_Windows_Phone_Networking_Voip_IVoipCallCoordinator<D>::UnmuteRequested(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Phone::Networking::Voip::VoipCallCoordinator, winrt::Windows::Phone::Networking::Voip::MuteChangeEventArgs> const& muteChangeHandler) const
    {
        winrt::event_token token{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinator>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinator, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinator>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->add_UnmuteRequested(*(void**)(&muteChangeHandler), put_abi(token)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinator>**)this;
            check_hresult(_winrt_abi_type->add_UnmuteRequested(*(void**)(&muteChangeHandler), put_abi(token)));
        }
        return token;
    }
    template <typename D> auto consume_Windows_Phone_Networking_Voip_IVoipCallCoordinator<D>::UnmuteRequested(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Phone::Networking::Voip::VoipCallCoordinator, winrt::Windows::Phone::Networking::Voip::MuteChangeEventArgs> const& muteChangeHandler) const
    {
        return impl::make_event_revoker<D, UnmuteRequested_revoker>(this, UnmuteRequested(muteChangeHandler));
    }
    template <typename D> auto consume_Windows_Phone_Networking_Voip_IVoipCallCoordinator<D>::UnmuteRequested(winrt::event_token const& token) const noexcept
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinator>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinator, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinator>**)&_winrt_casted_result;
            _winrt_abi_type->remove_UnmuteRequested(impl::bind_in(token));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinator>**)this;
            _winrt_abi_type->remove_UnmuteRequested(impl::bind_in(token));
        }
    }
    template <typename D> auto consume_Windows_Phone_Networking_Voip_IVoipCallCoordinator<D>::RequestNewIncomingCall(param::hstring const& context, param::hstring const& contactName, param::hstring const& contactNumber, winrt::Windows::Foundation::Uri const& contactImage, param::hstring const& serviceName, winrt::Windows::Foundation::Uri const& brandingImage, param::hstring const& callDetails, winrt::Windows::Foundation::Uri const& ringtone, winrt::Windows::Phone::Networking::Voip::VoipCallMedia const& media, winrt::Windows::Foundation::TimeSpan const& ringTimeout, winrt::Windows::Phone::Networking::Voip::VoipPhoneCall& call) const
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinator>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinator, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinator>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->RequestNewIncomingCall(*(void**)(&context), *(void**)(&contactName), *(void**)(&contactNumber), *(void**)(&contactImage), *(void**)(&serviceName), *(void**)(&brandingImage), *(void**)(&callDetails), *(void**)(&ringtone), static_cast<uint32_t>(media), impl::bind_in(ringTimeout), impl::bind_out(call)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinator>**)this;
            check_hresult(_winrt_abi_type->RequestNewIncomingCall(*(void**)(&context), *(void**)(&contactName), *(void**)(&contactNumber), *(void**)(&contactImage), *(void**)(&serviceName), *(void**)(&brandingImage), *(void**)(&callDetails), *(void**)(&ringtone), static_cast<uint32_t>(media), impl::bind_in(ringTimeout), impl::bind_out(call)));
        }
    }
    template <typename D> auto consume_Windows_Phone_Networking_Voip_IVoipCallCoordinator<D>::RequestNewOutgoingCall(param::hstring const& context, param::hstring const& contactName, param::hstring const& serviceName, winrt::Windows::Phone::Networking::Voip::VoipCallMedia const& media, param::vector<hstring> const& pAssociatedDeviceIds, winrt::Windows::Phone::Networking::Voip::VoipPhoneCall& call) const
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinator>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinator, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinator>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->RequestNewOutgoingCall(*(void**)(&context), *(void**)(&contactName), *(void**)(&serviceName), static_cast<uint32_t>(media), *(void**)(&pAssociatedDeviceIds), impl::bind_out(call)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinator>**)this;
            check_hresult(_winrt_abi_type->RequestNewOutgoingCall(*(void**)(&context), *(void**)(&contactName), *(void**)(&serviceName), static_cast<uint32_t>(media), *(void**)(&pAssociatedDeviceIds), impl::bind_out(call)));
        }
    }
    template <typename D> auto consume_Windows_Phone_Networking_Voip_IVoipCallCoordinator<D>::NotifyMuted() const
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinator>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinator, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinator>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->NotifyMuted());
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinator>**)this;
            check_hresult(_winrt_abi_type->NotifyMuted());
        }
    }
    template <typename D> auto consume_Windows_Phone_Networking_Voip_IVoipCallCoordinator<D>::NotifyUnmuted() const
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinator>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinator, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinator>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->NotifyUnmuted());
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinator>**)this;
            check_hresult(_winrt_abi_type->NotifyUnmuted());
        }
    }
    template <typename D> auto consume_Windows_Phone_Networking_Voip_IVoipCallCoordinator2<D>::SetupNewAcceptedCall(param::hstring const& context, param::hstring const& contactName, param::hstring const& contactNumber, param::hstring const& serviceName, winrt::Windows::Phone::Networking::Voip::VoipCallMedia const& media, param::vector<hstring> const& pAssociatedDeviceIds, winrt::Windows::Phone::Networking::Voip::VoipPhoneCall& call) const
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinator2>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinator2, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinator2>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->SetupNewAcceptedCall(*(void**)(&context), *(void**)(&contactName), *(void**)(&contactNumber), *(void**)(&serviceName), static_cast<uint32_t>(media), *(void**)(&pAssociatedDeviceIds), impl::bind_out(call)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinator2>**)this;
            check_hresult(_winrt_abi_type->SetupNewAcceptedCall(*(void**)(&context), *(void**)(&contactName), *(void**)(&contactNumber), *(void**)(&serviceName), static_cast<uint32_t>(media), *(void**)(&pAssociatedDeviceIds), impl::bind_out(call)));
        }
    }
    template <typename D> auto consume_Windows_Phone_Networking_Voip_IVoipCallCoordinator3<D>::RequestNewIncomingCall(param::hstring const& context, param::hstring const& contactName, param::hstring const& contactNumber, winrt::Windows::Foundation::Uri const& contactImage, param::hstring const& serviceName, winrt::Windows::Foundation::Uri const& brandingImage, param::hstring const& callDetails, winrt::Windows::Foundation::Uri const& ringtone, winrt::Windows::Phone::Networking::Voip::VoipCallMedia const& media, winrt::Windows::Foundation::TimeSpan const& ringTimeout, param::hstring const& contactRemoteId, param::vector<hstring> const& pAssociatedDeviceIds) const
    {
        void* call{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinator3>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinator3, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinator3>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->RequestNewIncomingCallWithContactRemoteId(*(void**)(&context), *(void**)(&contactName), *(void**)(&contactNumber), *(void**)(&contactImage), *(void**)(&serviceName), *(void**)(&brandingImage), *(void**)(&callDetails), *(void**)(&ringtone), static_cast<uint32_t>(media), impl::bind_in(ringTimeout), *(void**)(&contactRemoteId), *(void**)(&pAssociatedDeviceIds), &call));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinator3>**)this;
            check_hresult(_winrt_abi_type->RequestNewIncomingCallWithContactRemoteId(*(void**)(&context), *(void**)(&contactName), *(void**)(&contactNumber), *(void**)(&contactImage), *(void**)(&serviceName), *(void**)(&brandingImage), *(void**)(&callDetails), *(void**)(&ringtone), static_cast<uint32_t>(media), impl::bind_in(ringTimeout), *(void**)(&contactRemoteId), *(void**)(&pAssociatedDeviceIds), &call));
        }
        return winrt::Windows::Phone::Networking::Voip::VoipPhoneCall{ call, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Phone_Networking_Voip_IVoipCallCoordinator3<D>::RequestNewAppInitiatedCall(param::hstring const& context, param::hstring const& contactName, param::hstring const& contactNumber, param::hstring const& serviceName, winrt::Windows::Phone::Networking::Voip::VoipCallMedia const& media, param::vector<hstring> const& pAssociatedDeviceIds, winrt::Windows::Phone::Networking::Voip::VoipPhoneCall& call) const
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinator3>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinator3, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinator3>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->RequestNewAppInitiatedCall(*(void**)(&context), *(void**)(&contactName), *(void**)(&contactNumber), *(void**)(&serviceName), static_cast<uint32_t>(media), *(void**)(&pAssociatedDeviceIds), impl::bind_out(call)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinator3>**)this;
            check_hresult(_winrt_abi_type->RequestNewAppInitiatedCall(*(void**)(&context), *(void**)(&contactName), *(void**)(&contactNumber), *(void**)(&serviceName), static_cast<uint32_t>(media), *(void**)(&pAssociatedDeviceIds), impl::bind_out(call)));
        }
    }
    template <typename D> auto consume_Windows_Phone_Networking_Voip_IVoipCallCoordinatorStatics<D>::GetDefault() const
    {
        void* coordinator{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinatorStatics>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinatorStatics, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinatorStatics>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->GetDefault(&coordinator));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinatorStatics>**)this;
            check_hresult(_winrt_abi_type->GetDefault(&coordinator));
        }
        return winrt::Windows::Phone::Networking::Voip::VoipCallCoordinator{ coordinator, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Phone_Networking_Voip_IVoipCallCoordinatorWithAppDeterminedUpgrade<D>::ConfirmNonSeamlessUpgrade(winrt::guid const& callUpgradeGuid) const
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinatorWithAppDeterminedUpgrade>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinatorWithAppDeterminedUpgrade, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinatorWithAppDeterminedUpgrade>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->ConfirmNonSeamlessUpgrade(impl::bind_in(callUpgradeGuid)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinatorWithAppDeterminedUpgrade>**)this;
            check_hresult(_winrt_abi_type->ConfirmNonSeamlessUpgrade(impl::bind_in(callUpgradeGuid)));
        }
    }
    template <typename D> auto consume_Windows_Phone_Networking_Voip_IVoipCallCoordinatorWithAppDeterminedUpgrade<D>::CancelUpgrade(winrt::guid const& callUpgradeGuid) const
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinatorWithAppDeterminedUpgrade>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinatorWithAppDeterminedUpgrade, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinatorWithAppDeterminedUpgrade>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->CancelUpgrade(impl::bind_in(callUpgradeGuid)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinatorWithAppDeterminedUpgrade>**)this;
            check_hresult(_winrt_abi_type->CancelUpgrade(impl::bind_in(callUpgradeGuid)));
        }
    }
    template <typename D> auto consume_Windows_Phone_Networking_Voip_IVoipCallCoordinatorWithUpgrade<D>::RequestOutgoingUpgradeToVideoCall(winrt::guid const& callUpgradeGuid, param::hstring const& context, param::hstring const& contactName, param::hstring const& serviceName, winrt::Windows::Phone::Networking::Voip::VoipPhoneCall& call) const
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinatorWithUpgrade>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinatorWithUpgrade, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinatorWithUpgrade>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->RequestOutgoingUpgradeToVideoCall(impl::bind_in(callUpgradeGuid), *(void**)(&context), *(void**)(&contactName), *(void**)(&serviceName), impl::bind_out(call)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinatorWithUpgrade>**)this;
            check_hresult(_winrt_abi_type->RequestOutgoingUpgradeToVideoCall(impl::bind_in(callUpgradeGuid), *(void**)(&context), *(void**)(&contactName), *(void**)(&serviceName), impl::bind_out(call)));
        }
    }
    template <typename D> auto consume_Windows_Phone_Networking_Voip_IVoipCallCoordinatorWithUpgrade<D>::RequestIncomingUpgradeToVideoCall(param::hstring const& context, param::hstring const& contactName, param::hstring const& contactNumber, winrt::Windows::Foundation::Uri const& contactImage, param::hstring const& serviceName, winrt::Windows::Foundation::Uri const& brandingImage, param::hstring const& callDetails, winrt::Windows::Foundation::Uri const& ringtone, winrt::Windows::Foundation::TimeSpan const& ringTimeout, winrt::Windows::Phone::Networking::Voip::VoipPhoneCall& call) const
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinatorWithUpgrade>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinatorWithUpgrade, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinatorWithUpgrade>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->RequestIncomingUpgradeToVideoCall(*(void**)(&context), *(void**)(&contactName), *(void**)(&contactNumber), *(void**)(&contactImage), *(void**)(&serviceName), *(void**)(&brandingImage), *(void**)(&callDetails), *(void**)(&ringtone), impl::bind_in(ringTimeout), impl::bind_out(call)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinatorWithUpgrade>**)this;
            check_hresult(_winrt_abi_type->RequestIncomingUpgradeToVideoCall(*(void**)(&context), *(void**)(&contactName), *(void**)(&contactNumber), *(void**)(&contactImage), *(void**)(&serviceName), *(void**)(&brandingImage), *(void**)(&callDetails), *(void**)(&ringtone), impl::bind_in(ringTimeout), impl::bind_out(call)));
        }
    }
    template <typename D> auto consume_Windows_Phone_Networking_Voip_IVoipOperation<D>::Id() const
    {
        uint32_t operationId{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::Networking::Voip::IVoipOperation>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::Networking::Voip::IVoipOperation, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipOperation>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_Id(&operationId));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipOperation>**)this;
            check_hresult(_winrt_abi_type->get_Id(&operationId));
        }
        return operationId;
    }
    template <typename D> auto consume_Windows_Phone_Networking_Voip_IVoipOperation<D>::Type() const
    {
        winrt::Windows::Phone::Networking::Voip::VoipOperationType operationType{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::Networking::Voip::IVoipOperation>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::Networking::Voip::IVoipOperation, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipOperation>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_Type(reinterpret_cast<int32_t*>(&operationType)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipOperation>**)this;
            check_hresult(_winrt_abi_type->get_Type(reinterpret_cast<int32_t*>(&operationType)));
        }
        return operationType;
    }
    template <typename D> auto consume_Windows_Phone_Networking_Voip_IVoipOperationsManager<D>::GetNextOperation() const
    {
        void* voipOperation{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::Networking::Voip::IVoipOperationsManager>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::Networking::Voip::IVoipOperationsManager, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipOperationsManager>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->GetNextOperation(&voipOperation));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipOperationsManager>**)this;
            check_hresult(_winrt_abi_type->GetNextOperation(&voipOperation));
        }
        return winrt::Windows::Phone::Networking::Voip::IVoipOperation{ voipOperation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Phone_Networking_Voip_IVoipPhoneCall<D>::EndRequested(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Phone::Networking::Voip::VoipPhoneCall, winrt::Windows::Phone::Networking::Voip::CallStateChangeEventArgs> const& handler) const
    {
        winrt::event_token token{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->add_EndRequested(*(void**)(&handler), put_abi(token)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall>**)this;
            check_hresult(_winrt_abi_type->add_EndRequested(*(void**)(&handler), put_abi(token)));
        }
        return token;
    }
    template <typename D> auto consume_Windows_Phone_Networking_Voip_IVoipPhoneCall<D>::EndRequested(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Phone::Networking::Voip::VoipPhoneCall, winrt::Windows::Phone::Networking::Voip::CallStateChangeEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, EndRequested_revoker>(this, EndRequested(handler));
    }
    template <typename D> auto consume_Windows_Phone_Networking_Voip_IVoipPhoneCall<D>::EndRequested(winrt::event_token const& token) const noexcept
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall>**)&_winrt_casted_result;
            _winrt_abi_type->remove_EndRequested(impl::bind_in(token));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall>**)this;
            _winrt_abi_type->remove_EndRequested(impl::bind_in(token));
        }
    }
    template <typename D> auto consume_Windows_Phone_Networking_Voip_IVoipPhoneCall<D>::HoldRequested(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Phone::Networking::Voip::VoipPhoneCall, winrt::Windows::Phone::Networking::Voip::CallStateChangeEventArgs> const& handler) const
    {
        winrt::event_token token{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->add_HoldRequested(*(void**)(&handler), put_abi(token)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall>**)this;
            check_hresult(_winrt_abi_type->add_HoldRequested(*(void**)(&handler), put_abi(token)));
        }
        return token;
    }
    template <typename D> auto consume_Windows_Phone_Networking_Voip_IVoipPhoneCall<D>::HoldRequested(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Phone::Networking::Voip::VoipPhoneCall, winrt::Windows::Phone::Networking::Voip::CallStateChangeEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, HoldRequested_revoker>(this, HoldRequested(handler));
    }
    template <typename D> auto consume_Windows_Phone_Networking_Voip_IVoipPhoneCall<D>::HoldRequested(winrt::event_token const& token) const noexcept
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall>**)&_winrt_casted_result;
            _winrt_abi_type->remove_HoldRequested(impl::bind_in(token));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall>**)this;
            _winrt_abi_type->remove_HoldRequested(impl::bind_in(token));
        }
    }
    template <typename D> auto consume_Windows_Phone_Networking_Voip_IVoipPhoneCall<D>::ResumeRequested(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Phone::Networking::Voip::VoipPhoneCall, winrt::Windows::Phone::Networking::Voip::CallStateChangeEventArgs> const& handler) const
    {
        winrt::event_token token{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->add_ResumeRequested(*(void**)(&handler), put_abi(token)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall>**)this;
            check_hresult(_winrt_abi_type->add_ResumeRequested(*(void**)(&handler), put_abi(token)));
        }
        return token;
    }
    template <typename D> auto consume_Windows_Phone_Networking_Voip_IVoipPhoneCall<D>::ResumeRequested(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Phone::Networking::Voip::VoipPhoneCall, winrt::Windows::Phone::Networking::Voip::CallStateChangeEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, ResumeRequested_revoker>(this, ResumeRequested(handler));
    }
    template <typename D> auto consume_Windows_Phone_Networking_Voip_IVoipPhoneCall<D>::ResumeRequested(winrt::event_token const& token) const noexcept
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall>**)&_winrt_casted_result;
            _winrt_abi_type->remove_ResumeRequested(impl::bind_in(token));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall>**)this;
            _winrt_abi_type->remove_ResumeRequested(impl::bind_in(token));
        }
    }
    template <typename D> auto consume_Windows_Phone_Networking_Voip_IVoipPhoneCall<D>::AnswerRequested(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Phone::Networking::Voip::VoipPhoneCall, winrt::Windows::Phone::Networking::Voip::CallAnswerEventArgs> const& acceptHandler) const
    {
        winrt::event_token token{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->add_AnswerRequested(*(void**)(&acceptHandler), put_abi(token)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall>**)this;
            check_hresult(_winrt_abi_type->add_AnswerRequested(*(void**)(&acceptHandler), put_abi(token)));
        }
        return token;
    }
    template <typename D> auto consume_Windows_Phone_Networking_Voip_IVoipPhoneCall<D>::AnswerRequested(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Phone::Networking::Voip::VoipPhoneCall, winrt::Windows::Phone::Networking::Voip::CallAnswerEventArgs> const& acceptHandler) const
    {
        return impl::make_event_revoker<D, AnswerRequested_revoker>(this, AnswerRequested(acceptHandler));
    }
    template <typename D> auto consume_Windows_Phone_Networking_Voip_IVoipPhoneCall<D>::AnswerRequested(winrt::event_token const& token) const noexcept
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall>**)&_winrt_casted_result;
            _winrt_abi_type->remove_AnswerRequested(impl::bind_in(token));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall>**)this;
            _winrt_abi_type->remove_AnswerRequested(impl::bind_in(token));
        }
    }
    template <typename D> auto consume_Windows_Phone_Networking_Voip_IVoipPhoneCall<D>::RejectRequested(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Phone::Networking::Voip::VoipPhoneCall, winrt::Windows::Phone::Networking::Voip::CallRejectEventArgs> const& rejectHandler) const
    {
        winrt::event_token token{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->add_RejectRequested(*(void**)(&rejectHandler), put_abi(token)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall>**)this;
            check_hresult(_winrt_abi_type->add_RejectRequested(*(void**)(&rejectHandler), put_abi(token)));
        }
        return token;
    }
    template <typename D> auto consume_Windows_Phone_Networking_Voip_IVoipPhoneCall<D>::RejectRequested(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Phone::Networking::Voip::VoipPhoneCall, winrt::Windows::Phone::Networking::Voip::CallRejectEventArgs> const& rejectHandler) const
    {
        return impl::make_event_revoker<D, RejectRequested_revoker>(this, RejectRequested(rejectHandler));
    }
    template <typename D> auto consume_Windows_Phone_Networking_Voip_IVoipPhoneCall<D>::RejectRequested(winrt::event_token const& token) const noexcept
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall>**)&_winrt_casted_result;
            _winrt_abi_type->remove_RejectRequested(impl::bind_in(token));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall>**)this;
            _winrt_abi_type->remove_RejectRequested(impl::bind_in(token));
        }
    }
    template <typename D> auto consume_Windows_Phone_Networking_Voip_IVoipPhoneCall<D>::NotifyCallHeld() const
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->NotifyCallHeld());
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall>**)this;
            check_hresult(_winrt_abi_type->NotifyCallHeld());
        }
    }
    template <typename D> auto consume_Windows_Phone_Networking_Voip_IVoipPhoneCall<D>::NotifyCallActive() const
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->NotifyCallActive());
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall>**)this;
            check_hresult(_winrt_abi_type->NotifyCallActive());
        }
    }
    template <typename D> auto consume_Windows_Phone_Networking_Voip_IVoipPhoneCall<D>::NotifyCallEnded() const
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->NotifyCallEnded());
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall>**)this;
            check_hresult(_winrt_abi_type->NotifyCallEnded());
        }
    }
    template <typename D> auto consume_Windows_Phone_Networking_Voip_IVoipPhoneCall<D>::ContactName() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_ContactName(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall>**)this;
            check_hresult(_winrt_abi_type->get_ContactName(&value));
        }
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Phone_Networking_Voip_IVoipPhoneCall<D>::ContactName(param::hstring const& value) const
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->put_ContactName(*(void**)(&value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall>**)this;
            check_hresult(_winrt_abi_type->put_ContactName(*(void**)(&value)));
        }
    }
    template <typename D> auto consume_Windows_Phone_Networking_Voip_IVoipPhoneCall<D>::StartTime() const
    {
        winrt::Windows::Foundation::DateTime value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_StartTime(put_abi(value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall>**)this;
            check_hresult(_winrt_abi_type->get_StartTime(put_abi(value)));
        }
        return value;
    }
    template <typename D> auto consume_Windows_Phone_Networking_Voip_IVoipPhoneCall<D>::StartTime(winrt::Windows::Foundation::DateTime const& value) const
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->put_StartTime(impl::bind_in(value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall>**)this;
            check_hresult(_winrt_abi_type->put_StartTime(impl::bind_in(value)));
        }
    }
    template <typename D> auto consume_Windows_Phone_Networking_Voip_IVoipPhoneCall<D>::CallMedia() const
    {
        winrt::Windows::Phone::Networking::Voip::VoipCallMedia value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_CallMedia(reinterpret_cast<uint32_t*>(&value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall>**)this;
            check_hresult(_winrt_abi_type->get_CallMedia(reinterpret_cast<uint32_t*>(&value)));
        }
        return value;
    }
    template <typename D> auto consume_Windows_Phone_Networking_Voip_IVoipPhoneCall<D>::CallMedia(winrt::Windows::Phone::Networking::Voip::VoipCallMedia const& value) const
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->put_CallMedia(static_cast<uint32_t>(value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall>**)this;
            check_hresult(_winrt_abi_type->put_CallMedia(static_cast<uint32_t>(value)));
        }
    }
    template <typename D> auto consume_Windows_Phone_Networking_Voip_IVoipPhoneCall2<D>::TryShowAppUI() const
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall2>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall2, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall2>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->TryShowAppUI());
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall2>**)this;
            check_hresult(_winrt_abi_type->TryShowAppUI());
        }
    }
    template <typename D> auto consume_Windows_Phone_Networking_Voip_IVoipPhoneCall3<D>::NotifyCallAccepted(winrt::Windows::Phone::Networking::Voip::VoipCallMedia const& media) const
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall3>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall3, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall3>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->NotifyCallAccepted(static_cast<uint32_t>(media)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall3>**)this;
            check_hresult(_winrt_abi_type->NotifyCallAccepted(static_cast<uint32_t>(media)));
        }
    }
    template <typename D> auto consume_Windows_Phone_Networking_Voip_IVoipPhoneCall4<D>::IsUsingAssociatedDevicesList() const
    {
        bool value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall4>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall4, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall4>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_IsUsingAssociatedDevicesList(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall4>**)this;
            check_hresult(_winrt_abi_type->get_IsUsingAssociatedDevicesList(&value));
        }
        return value;
    }
    template <typename D> auto consume_Windows_Phone_Networking_Voip_IVoipPhoneCall4<D>::NotifyCallActive(param::iterable<hstring> const& associatedDeviceIds) const
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall4>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall4, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall4>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->NotifyCallActiveOnDevices(*(void**)(&associatedDeviceIds)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall4>**)this;
            check_hresult(_winrt_abi_type->NotifyCallActiveOnDevices(*(void**)(&associatedDeviceIds)));
        }
    }
    template <typename D> auto consume_Windows_Phone_Networking_Voip_IVoipPhoneCall4<D>::AddAssociatedCallControlDevice(param::hstring const& deviceId) const
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall4>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall4, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall4>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->AddAssociatedCallControlDevice(*(void**)(&deviceId)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall4>**)this;
            check_hresult(_winrt_abi_type->AddAssociatedCallControlDevice(*(void**)(&deviceId)));
        }
    }
    template <typename D> auto consume_Windows_Phone_Networking_Voip_IVoipPhoneCall4<D>::RemoveAssociatedCallControlDevice(param::hstring const& deviceId) const
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall4>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall4, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall4>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->RemoveAssociatedCallControlDevice(*(void**)(&deviceId)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall4>**)this;
            check_hresult(_winrt_abi_type->RemoveAssociatedCallControlDevice(*(void**)(&deviceId)));
        }
    }
    template <typename D> auto consume_Windows_Phone_Networking_Voip_IVoipPhoneCall4<D>::SetAssociatedCallControlDevices(param::iterable<hstring> const& associatedDeviceIds) const
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall4>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall4, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall4>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->SetAssociatedCallControlDevices(*(void**)(&associatedDeviceIds)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall4>**)this;
            check_hresult(_winrt_abi_type->SetAssociatedCallControlDevices(*(void**)(&associatedDeviceIds)));
        }
    }
    template <typename D> auto consume_Windows_Phone_Networking_Voip_IVoipPhoneCall4<D>::GetAssociatedCallControlDevices() const
    {
        void* result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall4>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall4, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall4>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->GetAssociatedCallControlDevices(&result));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall4>**)this;
            check_hresult(_winrt_abi_type->GetAssociatedCallControlDevices(&result));
        }
        return winrt::Windows::Foundation::Collections::IVectorView<hstring>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Phone_Networking_Voip_IVoipPhoneCallReady<D>::NotifyCallReady() const
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::Phone::Networking::Voip::IVoipPhoneCallReady>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCallReady, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCallReady>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->NotifyCallReady());
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCallReady>**)this;
            check_hresult(_winrt_abi_type->NotifyCallReady());
        }
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Phone::Networking::Voip::ICallAnswerEventArgs> : produce_base<D, winrt::Windows::Phone::Networking::Voip::ICallAnswerEventArgs>
    {
        int32_t __stdcall get_AcceptedMedia(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Phone::Networking::Voip::VoipCallMedia>(this->shim().AcceptedMedia());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Phone::Networking::Voip::ICallAnswerEventArgs2> : produce_base<D, winrt::Windows::Phone::Networking::Voip::ICallAnswerEventArgs2>
    {
        int32_t __stdcall get_SourceDeviceId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SourceDeviceId());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Phone::Networking::Voip::ICallRejectEventArgs> : produce_base<D, winrt::Windows::Phone::Networking::Voip::ICallRejectEventArgs>
    {
        int32_t __stdcall get_RejectReason(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Phone::Networking::Voip::VoipCallRejectReason>(this->shim().RejectReason());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Phone::Networking::Voip::ICallStateChangeEventArgs> : produce_base<D, winrt::Windows::Phone::Networking::Voip::ICallStateChangeEventArgs>
    {
        int32_t __stdcall get_State(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Phone::Networking::Voip::VoipCallState>(this->shim().State());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Phone::Networking::Voip::IMuteChangeEventArgs> : produce_base<D, winrt::Windows::Phone::Networking::Voip::IMuteChangeEventArgs>
    {
        int32_t __stdcall get_Muted(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Muted());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Phone::Networking::Voip::IQuerySeamlessUpgradeSupportOperation> : produce_base<D, winrt::Windows::Phone::Networking::Voip::IQuerySeamlessUpgradeSupportOperation>
    {
        int32_t __stdcall get_RemoteId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().RemoteId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall NotifyCompletion(bool succeeded, int32_t seamlessCallUpgradeSupport) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NotifyCompletion(succeeded, *reinterpret_cast<winrt::Windows::Phone::Networking::Voip::SeamlessCallUpgradeSupport const*>(&seamlessCallUpgradeSupport));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinator> : produce_base<D, winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinator>
    {
        int32_t __stdcall add_MuteRequested(void* muteChangeHandler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().MuteRequested(*reinterpret_cast<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Phone::Networking::Voip::VoipCallCoordinator, winrt::Windows::Phone::Networking::Voip::MuteChangeEventArgs> const*>(&muteChangeHandler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_MuteRequested(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MuteRequested(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_UnmuteRequested(void* muteChangeHandler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().UnmuteRequested(*reinterpret_cast<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Phone::Networking::Voip::VoipCallCoordinator, winrt::Windows::Phone::Networking::Voip::MuteChangeEventArgs> const*>(&muteChangeHandler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_UnmuteRequested(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UnmuteRequested(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall RequestNewIncomingCall(void* context, void* contactName, void* contactNumber, void* contactImage, void* serviceName, void* brandingImage, void* callDetails, void* ringtone, uint32_t media, int64_t ringTimeout, void** call) noexcept final try
        {
            clear_abi(call);
            typename D::abi_guard guard(this->shim());
            this->shim().RequestNewIncomingCall(*reinterpret_cast<hstring const*>(&context), *reinterpret_cast<hstring const*>(&contactName), *reinterpret_cast<hstring const*>(&contactNumber), *reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&contactImage), *reinterpret_cast<hstring const*>(&serviceName), *reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&brandingImage), *reinterpret_cast<hstring const*>(&callDetails), *reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&ringtone), *reinterpret_cast<winrt::Windows::Phone::Networking::Voip::VoipCallMedia const*>(&media), *reinterpret_cast<winrt::Windows::Foundation::TimeSpan const*>(&ringTimeout), *reinterpret_cast<winrt::Windows::Phone::Networking::Voip::VoipPhoneCall*>(call));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RequestNewOutgoingCall(void* context, void* contactName, void* serviceName, uint32_t media, void* pAssociatedDeviceIds, void** call) noexcept final try
        {
            clear_abi(call);
            typename D::abi_guard guard(this->shim());
            this->shim().RequestNewOutgoingCall(*reinterpret_cast<hstring const*>(&context), *reinterpret_cast<hstring const*>(&contactName), *reinterpret_cast<hstring const*>(&serviceName), *reinterpret_cast<winrt::Windows::Phone::Networking::Voip::VoipCallMedia const*>(&media), *reinterpret_cast<winrt::Windows::Foundation::Collections::IVector<hstring> const*>(&pAssociatedDeviceIds), *reinterpret_cast<winrt::Windows::Phone::Networking::Voip::VoipPhoneCall*>(call));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall NotifyMuted() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NotifyMuted();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall NotifyUnmuted() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NotifyUnmuted();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinator2> : produce_base<D, winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinator2>
    {
        int32_t __stdcall SetupNewAcceptedCall(void* context, void* contactName, void* contactNumber, void* serviceName, uint32_t media, void* pAssociatedDeviceIds, void** call) noexcept final try
        {
            clear_abi(call);
            typename D::abi_guard guard(this->shim());
            this->shim().SetupNewAcceptedCall(*reinterpret_cast<hstring const*>(&context), *reinterpret_cast<hstring const*>(&contactName), *reinterpret_cast<hstring const*>(&contactNumber), *reinterpret_cast<hstring const*>(&serviceName), *reinterpret_cast<winrt::Windows::Phone::Networking::Voip::VoipCallMedia const*>(&media), *reinterpret_cast<winrt::Windows::Foundation::Collections::IVector<hstring> const*>(&pAssociatedDeviceIds), *reinterpret_cast<winrt::Windows::Phone::Networking::Voip::VoipPhoneCall*>(call));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinator3> : produce_base<D, winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinator3>
    {
        int32_t __stdcall RequestNewIncomingCallWithContactRemoteId(void* context, void* contactName, void* contactNumber, void* contactImage, void* serviceName, void* brandingImage, void* callDetails, void* ringtone, uint32_t media, int64_t ringTimeout, void* contactRemoteId, void* pAssociatedDeviceIds, void** call) noexcept final try
        {
            clear_abi(call);
            typename D::abi_guard guard(this->shim());
            *call = detach_from<winrt::Windows::Phone::Networking::Voip::VoipPhoneCall>(this->shim().RequestNewIncomingCall(*reinterpret_cast<hstring const*>(&context), *reinterpret_cast<hstring const*>(&contactName), *reinterpret_cast<hstring const*>(&contactNumber), *reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&contactImage), *reinterpret_cast<hstring const*>(&serviceName), *reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&brandingImage), *reinterpret_cast<hstring const*>(&callDetails), *reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&ringtone), *reinterpret_cast<winrt::Windows::Phone::Networking::Voip::VoipCallMedia const*>(&media), *reinterpret_cast<winrt::Windows::Foundation::TimeSpan const*>(&ringTimeout), *reinterpret_cast<hstring const*>(&contactRemoteId), *reinterpret_cast<winrt::Windows::Foundation::Collections::IVector<hstring> const*>(&pAssociatedDeviceIds)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RequestNewAppInitiatedCall(void* context, void* contactName, void* contactNumber, void* serviceName, uint32_t media, void* pAssociatedDeviceIds, void** call) noexcept final try
        {
            clear_abi(call);
            typename D::abi_guard guard(this->shim());
            this->shim().RequestNewAppInitiatedCall(*reinterpret_cast<hstring const*>(&context), *reinterpret_cast<hstring const*>(&contactName), *reinterpret_cast<hstring const*>(&contactNumber), *reinterpret_cast<hstring const*>(&serviceName), *reinterpret_cast<winrt::Windows::Phone::Networking::Voip::VoipCallMedia const*>(&media), *reinterpret_cast<winrt::Windows::Foundation::Collections::IVector<hstring> const*>(&pAssociatedDeviceIds), *reinterpret_cast<winrt::Windows::Phone::Networking::Voip::VoipPhoneCall*>(call));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinatorStatics> : produce_base<D, winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinatorStatics>
    {
        int32_t __stdcall GetDefault(void** coordinator) noexcept final try
        {
            clear_abi(coordinator);
            typename D::abi_guard guard(this->shim());
            *coordinator = detach_from<winrt::Windows::Phone::Networking::Voip::VoipCallCoordinator>(this->shim().GetDefault());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinatorWithAppDeterminedUpgrade> : produce_base<D, winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinatorWithAppDeterminedUpgrade>
    {
        int32_t __stdcall ConfirmNonSeamlessUpgrade(winrt::guid callUpgradeGuid) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ConfirmNonSeamlessUpgrade(*reinterpret_cast<winrt::guid const*>(&callUpgradeGuid));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CancelUpgrade(winrt::guid callUpgradeGuid) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CancelUpgrade(*reinterpret_cast<winrt::guid const*>(&callUpgradeGuid));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinatorWithUpgrade> : produce_base<D, winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinatorWithUpgrade>
    {
        int32_t __stdcall RequestOutgoingUpgradeToVideoCall(winrt::guid callUpgradeGuid, void* context, void* contactName, void* serviceName, void** call) noexcept final try
        {
            clear_abi(call);
            typename D::abi_guard guard(this->shim());
            this->shim().RequestOutgoingUpgradeToVideoCall(*reinterpret_cast<winrt::guid const*>(&callUpgradeGuid), *reinterpret_cast<hstring const*>(&context), *reinterpret_cast<hstring const*>(&contactName), *reinterpret_cast<hstring const*>(&serviceName), *reinterpret_cast<winrt::Windows::Phone::Networking::Voip::VoipPhoneCall*>(call));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RequestIncomingUpgradeToVideoCall(void* context, void* contactName, void* contactNumber, void* contactImage, void* serviceName, void* brandingImage, void* callDetails, void* ringtone, int64_t ringTimeout, void** call) noexcept final try
        {
            clear_abi(call);
            typename D::abi_guard guard(this->shim());
            this->shim().RequestIncomingUpgradeToVideoCall(*reinterpret_cast<hstring const*>(&context), *reinterpret_cast<hstring const*>(&contactName), *reinterpret_cast<hstring const*>(&contactNumber), *reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&contactImage), *reinterpret_cast<hstring const*>(&serviceName), *reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&brandingImage), *reinterpret_cast<hstring const*>(&callDetails), *reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&ringtone), *reinterpret_cast<winrt::Windows::Foundation::TimeSpan const*>(&ringTimeout), *reinterpret_cast<winrt::Windows::Phone::Networking::Voip::VoipPhoneCall*>(call));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
    template <typename D>
    struct produce<D, winrt::Windows::Phone::Networking::Voip::IVoipOperation> : produce_base<D, winrt::Windows::Phone::Networking::Voip::IVoipOperation>
    {
        int32_t __stdcall get_Id(uint32_t* operationId) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *operationId = detach_from<uint32_t>(this->shim().Id());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Type(int32_t* operationType) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *operationType = detach_from<winrt::Windows::Phone::Networking::Voip::VoipOperationType>(this->shim().Type());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Phone::Networking::Voip::IVoipOperationsManager> : produce_base<D, winrt::Windows::Phone::Networking::Voip::IVoipOperationsManager>
    {
        int32_t __stdcall GetNextOperation(void** voipOperation) noexcept final try
        {
            clear_abi(voipOperation);
            typename D::abi_guard guard(this->shim());
            *voipOperation = detach_from<winrt::Windows::Phone::Networking::Voip::IVoipOperation>(this->shim().GetNextOperation());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall> : produce_base<D, winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall>
    {
        int32_t __stdcall add_EndRequested(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().EndRequested(*reinterpret_cast<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Phone::Networking::Voip::VoipPhoneCall, winrt::Windows::Phone::Networking::Voip::CallStateChangeEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_EndRequested(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EndRequested(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_HoldRequested(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().HoldRequested(*reinterpret_cast<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Phone::Networking::Voip::VoipPhoneCall, winrt::Windows::Phone::Networking::Voip::CallStateChangeEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_HoldRequested(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HoldRequested(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_ResumeRequested(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().ResumeRequested(*reinterpret_cast<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Phone::Networking::Voip::VoipPhoneCall, winrt::Windows::Phone::Networking::Voip::CallStateChangeEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_ResumeRequested(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ResumeRequested(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_AnswerRequested(void* acceptHandler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().AnswerRequested(*reinterpret_cast<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Phone::Networking::Voip::VoipPhoneCall, winrt::Windows::Phone::Networking::Voip::CallAnswerEventArgs> const*>(&acceptHandler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_AnswerRequested(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AnswerRequested(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_RejectRequested(void* rejectHandler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().RejectRequested(*reinterpret_cast<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Phone::Networking::Voip::VoipPhoneCall, winrt::Windows::Phone::Networking::Voip::CallRejectEventArgs> const*>(&rejectHandler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_RejectRequested(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RejectRequested(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall NotifyCallHeld() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NotifyCallHeld();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall NotifyCallActive() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NotifyCallActive();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall NotifyCallEnded() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NotifyCallEnded();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ContactName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ContactName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ContactName(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ContactName(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_StartTime(int64_t* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::DateTime>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::DateTime>(this->shim().StartTime());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_StartTime(int64_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartTime(*reinterpret_cast<winrt::Windows::Foundation::DateTime const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CallMedia(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Phone::Networking::Voip::VoipCallMedia>(this->shim().CallMedia());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_CallMedia(uint32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CallMedia(*reinterpret_cast<winrt::Windows::Phone::Networking::Voip::VoipCallMedia const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall2> : produce_base<D, winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall2>
    {
        int32_t __stdcall TryShowAppUI() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TryShowAppUI();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall3> : produce_base<D, winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall3>
    {
        int32_t __stdcall NotifyCallAccepted(uint32_t media) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NotifyCallAccepted(*reinterpret_cast<winrt::Windows::Phone::Networking::Voip::VoipCallMedia const*>(&media));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall4> : produce_base<D, winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall4>
    {
        int32_t __stdcall get_IsUsingAssociatedDevicesList(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsUsingAssociatedDevicesList());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall NotifyCallActiveOnDevices(void* associatedDeviceIds) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NotifyCallActive(*reinterpret_cast<winrt::Windows::Foundation::Collections::IIterable<hstring> const*>(&associatedDeviceIds));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall AddAssociatedCallControlDevice(void* deviceId) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddAssociatedCallControlDevice(*reinterpret_cast<hstring const*>(&deviceId));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RemoveAssociatedCallControlDevice(void* deviceId) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoveAssociatedCallControlDevice(*reinterpret_cast<hstring const*>(&deviceId));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetAssociatedCallControlDevices(void* associatedDeviceIds) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetAssociatedCallControlDevices(*reinterpret_cast<winrt::Windows::Foundation::Collections::IIterable<hstring> const*>(&associatedDeviceIds));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetAssociatedCallControlDevices(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::Collections::IVectorView<hstring>>(this->shim().GetAssociatedCallControlDevices());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Phone::Networking::Voip::IVoipPhoneCallReady> : produce_base<D, winrt::Windows::Phone::Networking::Voip::IVoipPhoneCallReady>
    {
        int32_t __stdcall NotifyCallReady() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NotifyCallReady();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::Phone::Networking::Voip
{
    constexpr auto operator|(VoipCallMedia const left, VoipCallMedia const right) noexcept
    {
        return static_cast<VoipCallMedia>(impl::to_underlying_type(left) | impl::to_underlying_type(right));
    }
    constexpr auto operator|=(VoipCallMedia& left, VoipCallMedia const right) noexcept
    {
        left = left | right;
        return left;
    }
    constexpr auto operator&(VoipCallMedia const left, VoipCallMedia const right) noexcept
    {
        return static_cast<VoipCallMedia>(impl::to_underlying_type(left) & impl::to_underlying_type(right));
    }
    constexpr auto operator&=(VoipCallMedia& left, VoipCallMedia const right) noexcept
    {
        left = left & right;
        return left;
    }
    constexpr auto operator~(VoipCallMedia const value) noexcept
    {
        return static_cast<VoipCallMedia>(~impl::to_underlying_type(value));
    }
    constexpr auto operator^(VoipCallMedia const left, VoipCallMedia const right) noexcept
    {
        return static_cast<VoipCallMedia>(impl::to_underlying_type(left) ^ impl::to_underlying_type(right));
    }
    constexpr auto operator^=(VoipCallMedia& left, VoipCallMedia const right) noexcept
    {
        left = left ^ right;
        return left;
    }
    inline auto VoipCallCoordinator::GetDefault()
    {
        return impl::call_factory_cast<winrt::Windows::Phone::Networking::Voip::VoipCallCoordinator(*)(IVoipCallCoordinatorStatics const&), VoipCallCoordinator, IVoipCallCoordinatorStatics>([](IVoipCallCoordinatorStatics const& f) { return f.GetDefault(); });
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::Phone::Networking::Voip::ICallAnswerEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Phone::Networking::Voip::ICallAnswerEventArgs2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Phone::Networking::Voip::ICallRejectEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Phone::Networking::Voip::ICallStateChangeEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Phone::Networking::Voip::IMuteChangeEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Phone::Networking::Voip::IQuerySeamlessUpgradeSupportOperation> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinator> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinator2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinator3> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinatorStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinatorWithAppDeterminedUpgrade> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Phone::Networking::Voip::IVoipCallCoordinatorWithUpgrade> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Phone::Networking::Voip::IVoipOperation> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Phone::Networking::Voip::IVoipOperationsManager> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall3> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCall4> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Phone::Networking::Voip::IVoipPhoneCallReady> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Phone::Networking::Voip::CallAnswerEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Phone::Networking::Voip::CallRejectEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Phone::Networking::Voip::CallStateChangeEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Phone::Networking::Voip::MuteChangeEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Phone::Networking::Voip::QuerySeamlessUpgradeSupportOperation> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Phone::Networking::Voip::VoipCallCoordinator> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Phone::Networking::Voip::VoipPhoneCall> : winrt::impl::hash_base {};
#endif
#ifdef __cpp_lib_format
#endif
}
#endif
