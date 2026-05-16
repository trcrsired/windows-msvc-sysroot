// C++/WinRT v2.0.250303.1

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Management_Update_Cluster_H
#define WINRT_Windows_Management_Update_Cluster_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.250303.1"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.250303.1"
#include "winrt/windows.management.update.h"
#include "winrt/impl/windows.foundation.2.h"
#include "winrt/impl/windows.foundation.collections.2.h"
#include "winrt/impl/windows.management.update.cluster.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_Management_Update_Cluster_IAcquireEnvironmentInfoResult<D>::Result() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IAcquireEnvironmentInfoResult>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IAcquireEnvironmentInfoResult, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IAcquireEnvironmentInfoResult>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_Result(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IAcquireEnvironmentInfoResult>**)this;
            check_hresult(_winrt_abi_type->get_Result(&value));
        }
        return winrt::Windows::Management::Update::Cluster::UpdateTaskResult{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IAcquireEnvironmentInfoResult<D>::EnvironmentInfo() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IAcquireEnvironmentInfoResult>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IAcquireEnvironmentInfoResult, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IAcquireEnvironmentInfoResult>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_EnvironmentInfo(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IAcquireEnvironmentInfoResult>**)this;
            check_hresult(_winrt_abi_type->get_EnvironmentInfo(&value));
        }
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IAcquireEnvironmentInfoResultFactory<D>::CreateInstance(winrt::Windows::Management::Update::Cluster::UpdateTaskResult const& result, param::hstring const& environmentInfo) const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IAcquireEnvironmentInfoResultFactory>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IAcquireEnvironmentInfoResultFactory, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IAcquireEnvironmentInfoResultFactory>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->CreateInstance(*(void**)(&result), *(void**)(&environmentInfo), &value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IAcquireEnvironmentInfoResultFactory>**)this;
            check_hresult(_winrt_abi_type->CreateInstance(*(void**)(&result), *(void**)(&environmentInfo), &value));
        }
        return winrt::Windows::Management::Update::Cluster::AcquireEnvironmentInfoResult{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IAreRebootsPendingResult<D>::Result() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IAreRebootsPendingResult>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IAreRebootsPendingResult, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IAreRebootsPendingResult>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_Result(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IAreRebootsPendingResult>**)this;
            check_hresult(_winrt_abi_type->get_Result(&value));
        }
        return winrt::Windows::Management::Update::Cluster::UpdateOperationResult{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IAreRebootsPendingResult<D>::IsRebootPending() const
    {
        bool value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IAreRebootsPendingResult>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IAreRebootsPendingResult, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IAreRebootsPendingResult>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_IsRebootPending(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IAreRebootsPendingResult>**)this;
            check_hresult(_winrt_abi_type->get_IsRebootPending(&value));
        }
        return value;
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IAreRebootsPendingResultFactory<D>::CreateInstance(winrt::Windows::Management::Update::Cluster::UpdateOperationResult const& result, bool isRebootPending) const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IAreRebootsPendingResultFactory>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IAreRebootsPendingResultFactory, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IAreRebootsPendingResultFactory>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->CreateInstance(*(void**)(&result), isRebootPending, &value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IAreRebootsPendingResultFactory>**)this;
            check_hresult(_winrt_abi_type->CreateInstance(*(void**)(&result), isRebootPending, &value));
        }
        return winrt::Windows::Management::Update::Cluster::AreRebootsPendingResult{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IClusterNativeEnvironmentOperations<D>::AcquireNodeEnvironmentInfo() const
    {
        void* result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IClusterNativeEnvironmentOperations>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IClusterNativeEnvironmentOperations, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterNativeEnvironmentOperations>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->AcquireNodeEnvironmentInfo(&result));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterNativeEnvironmentOperations>**)this;
            check_hresult(_winrt_abi_type->AcquireNodeEnvironmentInfo(&result));
        }
        return winrt::Windows::Management::Update::Cluster::AcquireEnvironmentInfoResult{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IClusterNativeEnvironmentOperations<D>::ValidateClusterEnvironment(param::map_view<hstring, hstring> const& nodeEnvironmentInfo) const
    {
        void* result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IClusterNativeEnvironmentOperations>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IClusterNativeEnvironmentOperations, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterNativeEnvironmentOperations>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->ValidateClusterEnvironment(*(void**)(&nodeEnvironmentInfo), &result));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterNativeEnvironmentOperations>**)this;
            check_hresult(_winrt_abi_type->ValidateClusterEnvironment(*(void**)(&nodeEnvironmentInfo), &result));
        }
        return winrt::Windows::Management::Update::Cluster::ValidateClusterEnvironmentResult{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IClusterNativeEnvironmentOperations<D>::StartPreUpdateRunOperation() const
    {
        void* result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IClusterNativeEnvironmentOperations>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IClusterNativeEnvironmentOperations, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterNativeEnvironmentOperations>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->StartPreUpdateRunOperation(&result));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterNativeEnvironmentOperations>**)this;
            check_hresult(_winrt_abi_type->StartPreUpdateRunOperation(&result));
        }
        return winrt::Windows::Management::Update::Cluster::UpdateOperationResult{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IClusterNativeEnvironmentOperations<D>::IsPreUpdateRunOperationComplete() const
    {
        void* result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IClusterNativeEnvironmentOperations>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IClusterNativeEnvironmentOperations, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterNativeEnvironmentOperations>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->IsPreUpdateRunOperationComplete(&result));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterNativeEnvironmentOperations>**)this;
            check_hresult(_winrt_abi_type->IsPreUpdateRunOperationComplete(&result));
        }
        return winrt::Windows::Management::Update::Cluster::UpdatePendingOperationResult{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IClusterNativeEnvironmentOperations<D>::StartPostUpdateRunOperation() const
    {
        void* result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IClusterNativeEnvironmentOperations>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IClusterNativeEnvironmentOperations, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterNativeEnvironmentOperations>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->StartPostUpdateRunOperation(&result));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterNativeEnvironmentOperations>**)this;
            check_hresult(_winrt_abi_type->StartPostUpdateRunOperation(&result));
        }
        return winrt::Windows::Management::Update::Cluster::UpdateOperationResult{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IClusterNativeEnvironmentOperations<D>::IsPostUpdateRunOperationComplete() const
    {
        void* result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IClusterNativeEnvironmentOperations>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IClusterNativeEnvironmentOperations, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterNativeEnvironmentOperations>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->IsPostUpdateRunOperationComplete(&result));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterNativeEnvironmentOperations>**)this;
            check_hresult(_winrt_abi_type->IsPostUpdateRunOperationComplete(&result));
        }
        return winrt::Windows::Management::Update::Cluster::UpdatePendingOperationResult{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IClusterNativeEnvironmentOperationsPlugin<D>::Name() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IClusterNativeEnvironmentOperationsPlugin>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IClusterNativeEnvironmentOperationsPlugin, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterNativeEnvironmentOperationsPlugin>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_Name(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterNativeEnvironmentOperationsPlugin>**)this;
            check_hresult(_winrt_abi_type->get_Name(&value));
        }
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IClusterNativeEnvironmentOperationsPlugin<D>::FriendlyName() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IClusterNativeEnvironmentOperationsPlugin>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IClusterNativeEnvironmentOperationsPlugin, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterNativeEnvironmentOperationsPlugin>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_FriendlyName(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterNativeEnvironmentOperationsPlugin>**)this;
            check_hresult(_winrt_abi_type->get_FriendlyName(&value));
        }
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IClusterNativeEnvironmentOperationsPlugin<D>::Description() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IClusterNativeEnvironmentOperationsPlugin>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IClusterNativeEnvironmentOperationsPlugin, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterNativeEnvironmentOperationsPlugin>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_Description(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterNativeEnvironmentOperationsPlugin>**)this;
            check_hresult(_winrt_abi_type->get_Description(&value));
        }
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IClusterNativeEnvironmentOperationsPlugin<D>::Version() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IClusterNativeEnvironmentOperationsPlugin>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IClusterNativeEnvironmentOperationsPlugin, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterNativeEnvironmentOperationsPlugin>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_Version(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterNativeEnvironmentOperationsPlugin>**)this;
            check_hresult(_winrt_abi_type->get_Version(&value));
        }
        return winrt::Windows::Management::Update::Cluster::UpdatePluginVersionInfo{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IClusterNativeEnvironmentOperationsPlugin<D>::DefaultOptions() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IClusterNativeEnvironmentOperationsPlugin>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IClusterNativeEnvironmentOperationsPlugin, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterNativeEnvironmentOperationsPlugin>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_DefaultOptions(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterNativeEnvironmentOperationsPlugin>**)this;
            check_hresult(_winrt_abi_type->get_DefaultOptions(&value));
        }
        return winrt::Windows::Foundation::Collections::IMapView<hstring, hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IClusterNativeEnvironmentOperationsPlugin<D>::CreateEnvironmentOperations(param::hstring const& clusterName, param::hstring const& runId, param::map<hstring, hstring> const& options, winrt::Windows::Management::Update::Cluster::ClusterUpdateServices const& updateServices) const
    {
        void* result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IClusterNativeEnvironmentOperationsPlugin>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IClusterNativeEnvironmentOperationsPlugin, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterNativeEnvironmentOperationsPlugin>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->CreateEnvironmentOperations(*(void**)(&clusterName), *(void**)(&runId), *(void**)(&options), *(void**)(&updateServices), &result));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterNativeEnvironmentOperationsPlugin>**)this;
            check_hresult(_winrt_abi_type->CreateEnvironmentOperations(*(void**)(&clusterName), *(void**)(&runId), *(void**)(&options), *(void**)(&updateServices), &result));
        }
        return winrt::Windows::Management::Update::Cluster::IClusterNativeEnvironmentOperations{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IClusterNativeNodeOperations<D>::AreAdditionalRebootsPending() const
    {
        void* result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperations>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperations, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperations>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->AreAdditionalRebootsPending(&result));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperations>**)this;
            check_hresult(_winrt_abi_type->AreAdditionalRebootsPending(&result));
        }
        return winrt::Windows::Management::Update::Cluster::AreRebootsPendingResult{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IClusterNativeNodeOperations<D>::StartPreRebootOperation() const
    {
        void* result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperations>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperations, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperations>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->StartPreRebootOperation(&result));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperations>**)this;
            check_hresult(_winrt_abi_type->StartPreRebootOperation(&result));
        }
        return winrt::Windows::Management::Update::Cluster::UpdateOperationResult{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IClusterNativeNodeOperations<D>::IsPreRebootOperationComplete() const
    {
        void* result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperations>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperations, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperations>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->IsPreRebootOperationComplete(&result));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperations>**)this;
            check_hresult(_winrt_abi_type->IsPreRebootOperationComplete(&result));
        }
        return winrt::Windows::Management::Update::Cluster::UpdatePendingOperationResult{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IClusterNativeNodeOperations<D>::StartPostRebootOperation() const
    {
        void* result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperations>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperations, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperations>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->StartPostRebootOperation(&result));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperations>**)this;
            check_hresult(_winrt_abi_type->StartPostRebootOperation(&result));
        }
        return winrt::Windows::Management::Update::Cluster::UpdateOperationResult{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IClusterNativeNodeOperations<D>::IsPostRebootOperationComplete() const
    {
        void* result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperations>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperations, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperations>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->IsPostRebootOperationComplete(&result));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperations>**)this;
            check_hresult(_winrt_abi_type->IsPostRebootOperationComplete(&result));
        }
        return winrt::Windows::Management::Update::Cluster::UpdatePendingOperationResult{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IClusterNativeNodeOperations<D>::StartPreDrainOperation() const
    {
        void* result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperations>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperations, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperations>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->StartPreDrainOperation(&result));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperations>**)this;
            check_hresult(_winrt_abi_type->StartPreDrainOperation(&result));
        }
        return winrt::Windows::Management::Update::Cluster::UpdateOperationResult{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IClusterNativeNodeOperations<D>::IsPreDrainOperationComplete() const
    {
        void* result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperations>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperations, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperations>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->IsPreDrainOperationComplete(&result));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperations>**)this;
            check_hresult(_winrt_abi_type->IsPreDrainOperationComplete(&result));
        }
        return winrt::Windows::Management::Update::Cluster::UpdatePendingOperationResult{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IClusterNativeNodeOperations<D>::StartPostResumeOperation() const
    {
        void* result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperations>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperations, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperations>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->StartPostResumeOperation(&result));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperations>**)this;
            check_hresult(_winrt_abi_type->StartPostResumeOperation(&result));
        }
        return winrt::Windows::Management::Update::Cluster::UpdateOperationResult{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IClusterNativeNodeOperations<D>::IsPostResumeOperationComplete() const
    {
        void* result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperations>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperations, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperations>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->IsPostResumeOperationComplete(&result));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperations>**)this;
            check_hresult(_winrt_abi_type->IsPostResumeOperationComplete(&result));
        }
        return winrt::Windows::Management::Update::Cluster::UpdatePendingOperationResult{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IClusterNativeNodeOperations<D>::StartPreUpdateRunOperation() const
    {
        void* result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperations>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperations, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperations>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->StartPreUpdateRunOperation(&result));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperations>**)this;
            check_hresult(_winrt_abi_type->StartPreUpdateRunOperation(&result));
        }
        return winrt::Windows::Management::Update::Cluster::UpdateOperationResult{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IClusterNativeNodeOperations<D>::IsPreUpdateRunOperationComplete() const
    {
        void* result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperations>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperations, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperations>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->IsPreUpdateRunOperationComplete(&result));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperations>**)this;
            check_hresult(_winrt_abi_type->IsPreUpdateRunOperationComplete(&result));
        }
        return winrt::Windows::Management::Update::Cluster::UpdatePendingOperationResult{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IClusterNativeNodeOperations<D>::StartPostUpdateRunOperation() const
    {
        void* result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperations>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperations, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperations>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->StartPostUpdateRunOperation(&result));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperations>**)this;
            check_hresult(_winrt_abi_type->StartPostUpdateRunOperation(&result));
        }
        return winrt::Windows::Management::Update::Cluster::UpdateOperationResult{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IClusterNativeNodeOperations<D>::IsPostUpdateRunOperationComplete() const
    {
        void* result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperations>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperations, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperations>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->IsPostUpdateRunOperationComplete(&result));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperations>**)this;
            check_hresult(_winrt_abi_type->IsPostUpdateRunOperationComplete(&result));
        }
        return winrt::Windows::Management::Update::Cluster::UpdatePendingOperationResult{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IClusterNativeNodeOperationsPlugin<D>::Name() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperationsPlugin>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperationsPlugin, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperationsPlugin>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_Name(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperationsPlugin>**)this;
            check_hresult(_winrt_abi_type->get_Name(&value));
        }
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IClusterNativeNodeOperationsPlugin<D>::FriendlyName() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperationsPlugin>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperationsPlugin, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperationsPlugin>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_FriendlyName(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperationsPlugin>**)this;
            check_hresult(_winrt_abi_type->get_FriendlyName(&value));
        }
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IClusterNativeNodeOperationsPlugin<D>::Description() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperationsPlugin>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperationsPlugin, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperationsPlugin>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_Description(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperationsPlugin>**)this;
            check_hresult(_winrt_abi_type->get_Description(&value));
        }
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IClusterNativeNodeOperationsPlugin<D>::Version() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperationsPlugin>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperationsPlugin, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperationsPlugin>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_Version(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperationsPlugin>**)this;
            check_hresult(_winrt_abi_type->get_Version(&value));
        }
        return winrt::Windows::Management::Update::Cluster::UpdatePluginVersionInfo{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IClusterNativeNodeOperationsPlugin<D>::DefaultOptions() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperationsPlugin>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperationsPlugin, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperationsPlugin>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_DefaultOptions(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperationsPlugin>**)this;
            check_hresult(_winrt_abi_type->get_DefaultOptions(&value));
        }
        return winrt::Windows::Foundation::Collections::IMapView<hstring, hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IClusterNativeNodeOperationsPlugin<D>::CreateNodeOperations(param::hstring const& clusterName, param::hstring const& runId, param::map<hstring, hstring> const& options, winrt::Windows::Management::Update::Cluster::ClusterUpdateServices const& updateServices) const
    {
        void* result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperationsPlugin>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperationsPlugin, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperationsPlugin>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->CreateNodeOperations(*(void**)(&clusterName), *(void**)(&runId), *(void**)(&options), *(void**)(&updateServices), &result));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperationsPlugin>**)this;
            check_hresult(_winrt_abi_type->CreateNodeOperations(*(void**)(&clusterName), *(void**)(&runId), *(void**)(&options), *(void**)(&updateServices), &result));
        }
        return winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperations{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IClusterUpdateServices<D>::WriteLogEntry(winrt::Windows::Management::Update::Cluster::ClusterNativeUpdateLogLevel const& level, param::hstring const& message) const
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IClusterUpdateServices>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IClusterUpdateServices, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterUpdateServices>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->WriteLogEntry(static_cast<int32_t>(level), *(void**)(&message)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterUpdateServices>**)this;
            check_hresult(_winrt_abi_type->WriteLogEntry(static_cast<int32_t>(level), *(void**)(&message)));
        }
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IClusterUpdateServices<D>::ReportProgress(int32_t currentStep, int32_t maxSteps, param::hstring const& message) const
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IClusterUpdateServices>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IClusterUpdateServices, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterUpdateServices>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->ReportProgress(currentStep, maxSteps, *(void**)(&message)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterUpdateServices>**)this;
            check_hresult(_winrt_abi_type->ReportProgress(currentStep, maxSteps, *(void**)(&message)));
        }
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IClusterUpdateServices<D>::GetPluginCredential(param::hstring const& credentialId) const
    {
        void* result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IClusterUpdateServices>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IClusterUpdateServices, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterUpdateServices>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->GetPluginCredential(*(void**)(&credentialId), &result));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterUpdateServices>**)this;
            check_hresult(_winrt_abi_type->GetPluginCredential(*(void**)(&credentialId), &result));
        }
        return winrt::Windows::Management::Update::Cluster::UpdateCredential{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IClusterUpdateServices<D>::IsOperationMarkedAsCanceled() const
    {
        bool result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IClusterUpdateServices>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IClusterUpdateServices, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterUpdateServices>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->IsOperationMarkedAsCanceled(&result));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterUpdateServices>**)this;
            check_hresult(_winrt_abi_type->IsOperationMarkedAsCanceled(&result));
        }
        return result;
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IClusterUpdateServices<D>::SaveRunStateInformation(param::hstring const& persistentInformation) const
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IClusterUpdateServices>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IClusterUpdateServices, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterUpdateServices>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->SaveRunStateInformation(*(void**)(&persistentInformation)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterUpdateServices>**)this;
            check_hresult(_winrt_abi_type->SaveRunStateInformation(*(void**)(&persistentInformation)));
        }
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IClusterUpdateServices<D>::GetRunStateInformation() const
    {
        void* result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IClusterUpdateServices>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IClusterUpdateServices, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterUpdateServices>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->GetRunStateInformation(&result));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterUpdateServices>**)this;
            check_hresult(_winrt_abi_type->GetRunStateInformation(&result));
        }
        return hstring{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IClusterUpdateServices<D>::SaveRunIndependentInformation(param::hstring const& persistentInformation) const
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IClusterUpdateServices>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IClusterUpdateServices, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterUpdateServices>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->SaveRunIndependentInformation(*(void**)(&persistentInformation)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterUpdateServices>**)this;
            check_hresult(_winrt_abi_type->SaveRunIndependentInformation(*(void**)(&persistentInformation)));
        }
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IClusterUpdateServices<D>::GetRunIndependentInformation() const
    {
        void* result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IClusterUpdateServices>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IClusterUpdateServices, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterUpdateServices>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->GetRunIndependentInformation(&result));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IClusterUpdateServices>**)this;
            check_hresult(_winrt_abi_type->GetRunIndependentInformation(&result));
        }
        return hstring{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IInstallUpdateTaskResult<D>::Result() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IInstallUpdateTaskResult>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IInstallUpdateTaskResult, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IInstallUpdateTaskResult>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_Result(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IInstallUpdateTaskResult>**)this;
            check_hresult(_winrt_abi_type->get_Result(&value));
        }
        return winrt::Windows::Management::Update::Cluster::UpdateTaskResult{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IInstallUpdateTaskResult<D>::InstallRecords() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IInstallUpdateTaskResult>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IInstallUpdateTaskResult, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IInstallUpdateTaskResult>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_InstallRecords(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IInstallUpdateTaskResult>**)this;
            check_hresult(_winrt_abi_type->get_InstallRecords(&value));
        }
        return winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Management::Update::Cluster::UpdateInstallRecord>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IInstallUpdateTaskResult<D>::ShouldRollback() const
    {
        bool value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IInstallUpdateTaskResult>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IInstallUpdateTaskResult, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IInstallUpdateTaskResult>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_ShouldRollback(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IInstallUpdateTaskResult>**)this;
            check_hresult(_winrt_abi_type->get_ShouldRollback(&value));
        }
        return value;
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IInstallUpdateTaskResultFactory<D>::CreateInstance(winrt::Windows::Management::Update::Cluster::UpdateTaskResult const& result, param::vector_view<winrt::Windows::Management::Update::Cluster::UpdateInstallRecord> const& installRecords, bool shouldRollback) const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IInstallUpdateTaskResultFactory>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IInstallUpdateTaskResultFactory, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IInstallUpdateTaskResultFactory>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->CreateInstance(*(void**)(&result), *(void**)(&installRecords), shouldRollback, &value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IInstallUpdateTaskResultFactory>**)this;
            check_hresult(_winrt_abi_type->CreateInstance(*(void**)(&result), *(void**)(&installRecords), shouldRollback, &value));
        }
        return winrt::Windows::Management::Update::Cluster::InstallUpdateTaskResult{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IRollbackUpdateTaskResult<D>::Result() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IRollbackUpdateTaskResult>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IRollbackUpdateTaskResult, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IRollbackUpdateTaskResult>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_Result(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IRollbackUpdateTaskResult>**)this;
            check_hresult(_winrt_abi_type->get_Result(&value));
        }
        return winrt::Windows::Management::Update::Cluster::UpdateTaskResult{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IRollbackUpdateTaskResult<D>::InstallRecords() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IRollbackUpdateTaskResult>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IRollbackUpdateTaskResult, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IRollbackUpdateTaskResult>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_InstallRecords(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IRollbackUpdateTaskResult>**)this;
            check_hresult(_winrt_abi_type->get_InstallRecords(&value));
        }
        return winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Management::Update::Cluster::UpdateInstallRecord>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IRollbackUpdateTaskResultFactory<D>::CreateInstance(winrt::Windows::Management::Update::Cluster::UpdateTaskResult const& result, param::vector_view<winrt::Windows::Management::Update::Cluster::UpdateInstallRecord> const& installRecords) const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IRollbackUpdateTaskResultFactory>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IRollbackUpdateTaskResultFactory, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IRollbackUpdateTaskResultFactory>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->CreateInstance(*(void**)(&result), *(void**)(&installRecords), &value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IRollbackUpdateTaskResultFactory>**)this;
            check_hresult(_winrt_abi_type->CreateInstance(*(void**)(&result), *(void**)(&installRecords), &value));
        }
        return winrt::Windows::Management::Update::Cluster::RollbackUpdateTaskResult{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IScanUpdateTaskResult<D>::Result() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IScanUpdateTaskResult>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IScanUpdateTaskResult, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IScanUpdateTaskResult>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_Result(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IScanUpdateTaskResult>**)this;
            check_hresult(_winrt_abi_type->get_Result(&value));
        }
        return winrt::Windows::Management::Update::Cluster::UpdateTaskResult{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IScanUpdateTaskResult<D>::ScanRecords() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IScanUpdateTaskResult>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IScanUpdateTaskResult, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IScanUpdateTaskResult>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_ScanRecords(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IScanUpdateTaskResult>**)this;
            check_hresult(_winrt_abi_type->get_ScanRecords(&value));
        }
        return winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Management::Update::Cluster::UpdateScanRecord>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IScanUpdateTaskResultFactory<D>::CreateInstance(winrt::Windows::Management::Update::Cluster::UpdateTaskResult const& result, param::vector_view<winrt::Windows::Management::Update::Cluster::UpdateScanRecord> const& scanRecords) const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IScanUpdateTaskResultFactory>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IScanUpdateTaskResultFactory, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IScanUpdateTaskResultFactory>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->CreateInstance(*(void**)(&result), *(void**)(&scanRecords), &value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IScanUpdateTaskResultFactory>**)this;
            check_hresult(_winrt_abi_type->CreateInstance(*(void**)(&result), *(void**)(&scanRecords), &value));
        }
        return winrt::Windows::Management::Update::Cluster::ScanUpdateTaskResult{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IStageUpdateTaskResult<D>::Result() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IStageUpdateTaskResult>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IStageUpdateTaskResult, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IStageUpdateTaskResult>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_Result(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IStageUpdateTaskResult>**)this;
            check_hresult(_winrt_abi_type->get_Result(&value));
        }
        return winrt::Windows::Management::Update::Cluster::UpdateTaskResult{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IStageUpdateTaskResult<D>::StageRecords() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IStageUpdateTaskResult>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IStageUpdateTaskResult, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IStageUpdateTaskResult>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_StageRecords(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IStageUpdateTaskResult>**)this;
            check_hresult(_winrt_abi_type->get_StageRecords(&value));
        }
        return winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Management::Update::Cluster::UpdateStageRecord>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IStageUpdateTaskResultFactory<D>::CreateInstance(winrt::Windows::Management::Update::Cluster::UpdateTaskResult const& result, param::vector_view<winrt::Windows::Management::Update::Cluster::UpdateStageRecord> const& stageRecords) const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IStageUpdateTaskResultFactory>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IStageUpdateTaskResultFactory, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IStageUpdateTaskResultFactory>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->CreateInstance(*(void**)(&result), *(void**)(&stageRecords), &value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IStageUpdateTaskResultFactory>**)this;
            check_hresult(_winrt_abi_type->CreateInstance(*(void**)(&result), *(void**)(&stageRecords), &value));
        }
        return winrt::Windows::Management::Update::Cluster::StageUpdateTaskResult{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IUpdateCredential<D>::Status() const
    {
        winrt::Windows::Management::Update::Cluster::ClusterNativeUpdateCredentialStatus value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IUpdateCredential>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IUpdateCredential, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateCredential>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_Status(reinterpret_cast<int32_t*>(&value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateCredential>**)this;
            check_hresult(_winrt_abi_type->get_Status(reinterpret_cast<int32_t*>(&value)));
        }
        return value;
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IUpdateCredential<D>::UserName() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IUpdateCredential>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IUpdateCredential, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateCredential>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_UserName(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateCredential>**)this;
            check_hresult(_winrt_abi_type->get_UserName(&value));
        }
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IUpdateCredential<D>::Password() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IUpdateCredential>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IUpdateCredential, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateCredential>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_Password(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateCredential>**)this;
            check_hresult(_winrt_abi_type->get_Password(&value));
        }
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IUpdateCredentialFactory<D>::CreateInstance(winrt::Windows::Management::Update::Cluster::ClusterNativeUpdateCredentialStatus const& status, param::hstring const& userName, param::hstring const& password) const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IUpdateCredentialFactory>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IUpdateCredentialFactory, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateCredentialFactory>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->CreateInstance(static_cast<int32_t>(status), *(void**)(&userName), *(void**)(&password), &value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateCredentialFactory>**)this;
            check_hresult(_winrt_abi_type->CreateInstance(static_cast<int32_t>(status), *(void**)(&userName), *(void**)(&password), &value));
        }
        return winrt::Windows::Management::Update::Cluster::UpdateCredential{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IUpdateInstallRecord<D>::UpdateId() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IUpdateInstallRecord>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IUpdateInstallRecord, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateInstallRecord>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_UpdateId(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateInstallRecord>**)this;
            check_hresult(_winrt_abi_type->get_UpdateId(&value));
        }
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IUpdateInstallRecord<D>::IsRebootRequired() const
    {
        bool value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IUpdateInstallRecord>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IUpdateInstallRecord, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateInstallRecord>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_IsRebootRequired(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateInstallRecord>**)this;
            check_hresult(_winrt_abi_type->get_IsRebootRequired(&value));
        }
        return value;
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IUpdateInstallRecord<D>::Status() const
    {
        winrt::Windows::Management::Update::Cluster::ClusterNativeUpdateCompletionStatus value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IUpdateInstallRecord>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IUpdateInstallRecord, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateInstallRecord>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_Status(reinterpret_cast<int32_t*>(&value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateInstallRecord>**)this;
            check_hresult(_winrt_abi_type->get_Status(reinterpret_cast<int32_t*>(&value)));
        }
        return value;
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IUpdateInstallRecord<D>::FailureMessage() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IUpdateInstallRecord>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IUpdateInstallRecord, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateInstallRecord>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_FailureMessage(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateInstallRecord>**)this;
            check_hresult(_winrt_abi_type->get_FailureMessage(&value));
        }
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IUpdateInstallRecordFactory<D>::CreateInstance(param::hstring const& updateId, bool isRebootRequired, winrt::Windows::Management::Update::Cluster::ClusterNativeUpdateCompletionStatus const& status, param::hstring const& failureMessage) const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IUpdateInstallRecordFactory>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IUpdateInstallRecordFactory, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateInstallRecordFactory>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->CreateInstance(*(void**)(&updateId), isRebootRequired, static_cast<int32_t>(status), *(void**)(&failureMessage), &value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateInstallRecordFactory>**)this;
            check_hresult(_winrt_abi_type->CreateInstance(*(void**)(&updateId), isRebootRequired, static_cast<int32_t>(status), *(void**)(&failureMessage), &value));
        }
        return winrt::Windows::Management::Update::Cluster::UpdateInstallRecord{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IUpdateInstaller<D>::Scan() const
    {
        void* result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IUpdateInstaller>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IUpdateInstaller, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateInstaller>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->Scan(&result));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateInstaller>**)this;
            check_hresult(_winrt_abi_type->Scan(&result));
        }
        return winrt::Windows::Management::Update::Cluster::ScanUpdateTaskResult{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IUpdateInstaller<D>::Stage(param::vector_view<winrt::Windows::Management::Update::Cluster::UpdateScanRecord> const& updatesToStage) const
    {
        void* result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IUpdateInstaller>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IUpdateInstaller, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateInstaller>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->Stage(*(void**)(&updatesToStage), &result));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateInstaller>**)this;
            check_hresult(_winrt_abi_type->Stage(*(void**)(&updatesToStage), &result));
        }
        return winrt::Windows::Management::Update::Cluster::StageUpdateTaskResult{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IUpdateInstaller<D>::Install(param::vector_view<winrt::Windows::Management::Update::Cluster::UpdateScanRecord> const& updatesToInstall) const
    {
        void* result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IUpdateInstaller>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IUpdateInstaller, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateInstaller>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->Install(*(void**)(&updatesToInstall), &result));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateInstaller>**)this;
            check_hresult(_winrt_abi_type->Install(*(void**)(&updatesToInstall), &result));
        }
        return winrt::Windows::Management::Update::Cluster::InstallUpdateTaskResult{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IUpdateInstaller<D>::Rollback(param::vector_view<winrt::Windows::Management::Update::Cluster::UpdateScanRecord> const& updatesToRollback) const
    {
        void* result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IUpdateInstaller>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IUpdateInstaller, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateInstaller>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->Rollback(*(void**)(&updatesToRollback), &result));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateInstaller>**)this;
            check_hresult(_winrt_abi_type->Rollback(*(void**)(&updatesToRollback), &result));
        }
        return winrt::Windows::Management::Update::Cluster::RollbackUpdateTaskResult{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IUpdateInstaller<D>::ShouldUsePluginSpecificReboot(bool& usePluginReboot) const
    {
        void* result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IUpdateInstaller>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IUpdateInstaller, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateInstaller>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->ShouldUsePluginSpecificReboot(&usePluginReboot, &result));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateInstaller>**)this;
            check_hresult(_winrt_abi_type->ShouldUsePluginSpecificReboot(&usePluginReboot, &result));
        }
        return winrt::Windows::Management::Update::Cluster::UpdateTaskResult{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IUpdateInstaller<D>::RebootNode() const
    {
        void* result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IUpdateInstaller>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IUpdateInstaller, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateInstaller>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->RebootNode(&result));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateInstaller>**)this;
            check_hresult(_winrt_abi_type->RebootNode(&result));
        }
        return winrt::Windows::Management::Update::Cluster::UpdateTaskResult{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IUpdateInstaller<D>::AcquireUpdateListValidationInfo(hstring& recipeValidationInfo) const
    {
        void* result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IUpdateInstaller>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IUpdateInstaller, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateInstaller>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->AcquireUpdateListValidationInfo(impl::bind_out(recipeValidationInfo), &result));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateInstaller>**)this;
            check_hresult(_winrt_abi_type->AcquireUpdateListValidationInfo(impl::bind_out(recipeValidationInfo), &result));
        }
        return winrt::Windows::Management::Update::Cluster::UpdateTaskResult{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IUpdateInstaller<D>::ValidateAllNodesUpdateRecipe(param::vector_view<winrt::Windows::Management::Update::Cluster::UpdateRecipeNodeValidationInfoRecord> const& allNodesRecipeValidationInfo) const
    {
        void* result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IUpdateInstaller>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IUpdateInstaller, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateInstaller>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->ValidateAllNodesUpdateRecipe(*(void**)(&allNodesRecipeValidationInfo), &result));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateInstaller>**)this;
            check_hresult(_winrt_abi_type->ValidateAllNodesUpdateRecipe(*(void**)(&allNodesRecipeValidationInfo), &result));
        }
        return winrt::Windows::Management::Update::Cluster::ValidateAllNodesUpdateRecipeResult{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IUpdateInstallerPlugin<D>::Name() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IUpdateInstallerPlugin>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IUpdateInstallerPlugin, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateInstallerPlugin>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_Name(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateInstallerPlugin>**)this;
            check_hresult(_winrt_abi_type->get_Name(&value));
        }
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IUpdateInstallerPlugin<D>::FriendlyName() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IUpdateInstallerPlugin>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IUpdateInstallerPlugin, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateInstallerPlugin>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_FriendlyName(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateInstallerPlugin>**)this;
            check_hresult(_winrt_abi_type->get_FriendlyName(&value));
        }
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IUpdateInstallerPlugin<D>::Description() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IUpdateInstallerPlugin>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IUpdateInstallerPlugin, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateInstallerPlugin>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_Description(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateInstallerPlugin>**)this;
            check_hresult(_winrt_abi_type->get_Description(&value));
        }
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IUpdateInstallerPlugin<D>::Version() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IUpdateInstallerPlugin>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IUpdateInstallerPlugin, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateInstallerPlugin>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_Version(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateInstallerPlugin>**)this;
            check_hresult(_winrt_abi_type->get_Version(&value));
        }
        return winrt::Windows::Management::Update::Cluster::UpdatePluginVersionInfo{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IUpdateInstallerPlugin<D>::IsUpdateRollbackSupported() const
    {
        bool value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IUpdateInstallerPlugin>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IUpdateInstallerPlugin, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateInstallerPlugin>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_IsUpdateRollbackSupported(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateInstallerPlugin>**)this;
            check_hresult(_winrt_abi_type->get_IsUpdateRollbackSupported(&value));
        }
        return value;
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IUpdateInstallerPlugin<D>::DefaultOptions() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IUpdateInstallerPlugin>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IUpdateInstallerPlugin, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateInstallerPlugin>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_DefaultOptions(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateInstallerPlugin>**)this;
            check_hresult(_winrt_abi_type->get_DefaultOptions(&value));
        }
        return winrt::Windows::Foundation::Collections::IMapView<hstring, hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IUpdateInstallerPlugin<D>::CreateUpdateInstaller(param::hstring const& clusterName, param::hstring const& runId, param::map<hstring, hstring> const& options, winrt::Windows::Management::Update::Cluster::ClusterUpdateServices const& updateServices) const
    {
        void* result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IUpdateInstallerPlugin>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IUpdateInstallerPlugin, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateInstallerPlugin>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->CreateUpdateInstaller(*(void**)(&clusterName), *(void**)(&runId), *(void**)(&options), *(void**)(&updateServices), &result));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateInstallerPlugin>**)this;
            check_hresult(_winrt_abi_type->CreateUpdateInstaller(*(void**)(&clusterName), *(void**)(&runId), *(void**)(&options), *(void**)(&updateServices), &result));
        }
        return winrt::Windows::Management::Update::Cluster::IUpdateInstaller{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IUpdateOperationResult<D>::StatusCode() const
    {
        winrt::Windows::Management::Update::Cluster::ClusterNativeUpdateOperationStatus value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IUpdateOperationResult>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IUpdateOperationResult, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateOperationResult>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_StatusCode(reinterpret_cast<int32_t*>(&value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateOperationResult>**)this;
            check_hresult(_winrt_abi_type->get_StatusCode(reinterpret_cast<int32_t*>(&value)));
        }
        return value;
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IUpdateOperationResult<D>::Reason() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IUpdateOperationResult>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IUpdateOperationResult, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateOperationResult>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_Reason(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateOperationResult>**)this;
            check_hresult(_winrt_abi_type->get_Reason(&value));
        }
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IUpdateOperationResult<D>::ErrorCode() const
    {
        int32_t value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IUpdateOperationResult>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IUpdateOperationResult, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateOperationResult>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_ErrorCode(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateOperationResult>**)this;
            check_hresult(_winrt_abi_type->get_ErrorCode(&value));
        }
        return value;
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IUpdateOperationResultFactory<D>::CreateInstance(winrt::Windows::Management::Update::Cluster::ClusterNativeUpdateOperationStatus const& status, param::hstring const& reason) const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IUpdateOperationResultFactory>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IUpdateOperationResultFactory, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateOperationResultFactory>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->CreateInstance(static_cast<int32_t>(status), *(void**)(&reason), &value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateOperationResultFactory>**)this;
            check_hresult(_winrt_abi_type->CreateInstance(static_cast<int32_t>(status), *(void**)(&reason), &value));
        }
        return winrt::Windows::Management::Update::Cluster::UpdateOperationResult{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IUpdateOperationResultFactory<D>::CreateInstance2(winrt::Windows::Management::Update::Cluster::ClusterNativeUpdateOperationStatus const& status, param::hstring const& reason, int32_t errorCode) const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IUpdateOperationResultFactory>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IUpdateOperationResultFactory, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateOperationResultFactory>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->CreateInstance2(static_cast<int32_t>(status), *(void**)(&reason), errorCode, &value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateOperationResultFactory>**)this;
            check_hresult(_winrt_abi_type->CreateInstance2(static_cast<int32_t>(status), *(void**)(&reason), errorCode, &value));
        }
        return winrt::Windows::Management::Update::Cluster::UpdateOperationResult{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IUpdatePendingOperationResult<D>::Result() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IUpdatePendingOperationResult>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IUpdatePendingOperationResult, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdatePendingOperationResult>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_Result(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdatePendingOperationResult>**)this;
            check_hresult(_winrt_abi_type->get_Result(&value));
        }
        return winrt::Windows::Management::Update::Cluster::UpdateOperationResult{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IUpdatePendingOperationResult<D>::SuggestedRecheckInterval() const
    {
        winrt::Windows::Foundation::TimeSpan value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IUpdatePendingOperationResult>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IUpdatePendingOperationResult, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdatePendingOperationResult>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_SuggestedRecheckInterval(put_abi(value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdatePendingOperationResult>**)this;
            check_hresult(_winrt_abi_type->get_SuggestedRecheckInterval(put_abi(value)));
        }
        return value;
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IUpdatePendingOperationResultFactory<D>::CreateInstance(winrt::Windows::Management::Update::Cluster::UpdateOperationResult const& result, winrt::Windows::Foundation::TimeSpan const& suggestedRecheckInterval) const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IUpdatePendingOperationResultFactory>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IUpdatePendingOperationResultFactory, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdatePendingOperationResultFactory>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->CreateInstance(*(void**)(&result), impl::bind_in(suggestedRecheckInterval), &value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdatePendingOperationResultFactory>**)this;
            check_hresult(_winrt_abi_type->CreateInstance(*(void**)(&result), impl::bind_in(suggestedRecheckInterval), &value));
        }
        return winrt::Windows::Management::Update::Cluster::UpdatePendingOperationResult{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IUpdatePluginVersionInfo<D>::MajorVersion() const
    {
        uint32_t value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IUpdatePluginVersionInfo>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IUpdatePluginVersionInfo, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdatePluginVersionInfo>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_MajorVersion(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdatePluginVersionInfo>**)this;
            check_hresult(_winrt_abi_type->get_MajorVersion(&value));
        }
        return value;
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IUpdatePluginVersionInfo<D>::MinorVersion() const
    {
        uint32_t value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IUpdatePluginVersionInfo>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IUpdatePluginVersionInfo, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdatePluginVersionInfo>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_MinorVersion(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdatePluginVersionInfo>**)this;
            check_hresult(_winrt_abi_type->get_MinorVersion(&value));
        }
        return value;
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IUpdatePluginVersionInfo<D>::PatchLevel() const
    {
        uint32_t value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IUpdatePluginVersionInfo>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IUpdatePluginVersionInfo, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdatePluginVersionInfo>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_PatchLevel(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdatePluginVersionInfo>**)this;
            check_hresult(_winrt_abi_type->get_PatchLevel(&value));
        }
        return value;
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IUpdatePluginVersionInfoFactory<D>::CreateInstance(uint32_t majorVersion, uint32_t minorVersion, uint32_t patchLevel) const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IUpdatePluginVersionInfoFactory>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IUpdatePluginVersionInfoFactory, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdatePluginVersionInfoFactory>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->CreateInstance(majorVersion, minorVersion, patchLevel, &value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdatePluginVersionInfoFactory>**)this;
            check_hresult(_winrt_abi_type->CreateInstance(majorVersion, minorVersion, patchLevel, &value));
        }
        return winrt::Windows::Management::Update::Cluster::UpdatePluginVersionInfo{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IUpdateRecipeNodeValidationInfoRecord<D>::NodeName() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IUpdateRecipeNodeValidationInfoRecord>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IUpdateRecipeNodeValidationInfoRecord, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateRecipeNodeValidationInfoRecord>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_NodeName(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateRecipeNodeValidationInfoRecord>**)this;
            check_hresult(_winrt_abi_type->get_NodeName(&value));
        }
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IUpdateRecipeNodeValidationInfoRecord<D>::RecipeValidationInfo() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IUpdateRecipeNodeValidationInfoRecord>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IUpdateRecipeNodeValidationInfoRecord, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateRecipeNodeValidationInfoRecord>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_RecipeValidationInfo(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateRecipeNodeValidationInfoRecord>**)this;
            check_hresult(_winrt_abi_type->get_RecipeValidationInfo(&value));
        }
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IUpdateRecipeNodeValidationInfoRecord<D>::ScanResults() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IUpdateRecipeNodeValidationInfoRecord>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IUpdateRecipeNodeValidationInfoRecord, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateRecipeNodeValidationInfoRecord>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_ScanResults(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateRecipeNodeValidationInfoRecord>**)this;
            check_hresult(_winrt_abi_type->get_ScanResults(&value));
        }
        return winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Management::Update::Cluster::UpdateScanRecord>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IUpdateRecipeNodeValidationInfoRecordFactory<D>::CreateInstance(param::hstring const& nodeName, param::hstring const& recipeValidationInfo, param::vector_view<winrt::Windows::Management::Update::Cluster::UpdateScanRecord> const& scanResults) const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IUpdateRecipeNodeValidationInfoRecordFactory>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IUpdateRecipeNodeValidationInfoRecordFactory, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateRecipeNodeValidationInfoRecordFactory>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->CreateInstance(*(void**)(&nodeName), *(void**)(&recipeValidationInfo), *(void**)(&scanResults), &value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateRecipeNodeValidationInfoRecordFactory>**)this;
            check_hresult(_winrt_abi_type->CreateInstance(*(void**)(&nodeName), *(void**)(&recipeValidationInfo), *(void**)(&scanResults), &value));
        }
        return winrt::Windows::Management::Update::Cluster::UpdateRecipeNodeValidationInfoRecord{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IUpdateScanRecord<D>::UpdateId() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IUpdateScanRecord>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IUpdateScanRecord, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateScanRecord>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_UpdateId(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateScanRecord>**)this;
            check_hresult(_winrt_abi_type->get_UpdateId(&value));
        }
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IUpdateScanRecord<D>::UpdateTitle() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IUpdateScanRecord>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IUpdateScanRecord, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateScanRecord>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_UpdateTitle(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateScanRecord>**)this;
            check_hresult(_winrt_abi_type->get_UpdateTitle(&value));
        }
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IUpdateScanRecord<D>::UpdateDescription() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IUpdateScanRecord>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IUpdateScanRecord, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateScanRecord>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_UpdateDescription(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateScanRecord>**)this;
            check_hresult(_winrt_abi_type->get_UpdateDescription(&value));
        }
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IUpdateScanRecord<D>::IsRebootRequired() const
    {
        bool value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IUpdateScanRecord>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IUpdateScanRecord, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateScanRecord>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_IsRebootRequired(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateScanRecord>**)this;
            check_hresult(_winrt_abi_type->get_IsRebootRequired(&value));
        }
        return value;
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IUpdateScanRecord<D>::PluginSpecificData() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IUpdateScanRecord>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IUpdateScanRecord, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateScanRecord>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_PluginSpecificData(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateScanRecord>**)this;
            check_hresult(_winrt_abi_type->get_PluginSpecificData(&value));
        }
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IUpdateScanRecordFactory<D>::CreateInstance(param::hstring const& updateId, param::hstring const& updateTitle, param::hstring const& updateDescription, bool isRebootRequired, param::hstring const& pluginSpecificData) const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IUpdateScanRecordFactory>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IUpdateScanRecordFactory, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateScanRecordFactory>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->CreateInstance(*(void**)(&updateId), *(void**)(&updateTitle), *(void**)(&updateDescription), isRebootRequired, *(void**)(&pluginSpecificData), &value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateScanRecordFactory>**)this;
            check_hresult(_winrt_abi_type->CreateInstance(*(void**)(&updateId), *(void**)(&updateTitle), *(void**)(&updateDescription), isRebootRequired, *(void**)(&pluginSpecificData), &value));
        }
        return winrt::Windows::Management::Update::Cluster::UpdateScanRecord{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IUpdateStageRecord<D>::UpdateId() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IUpdateStageRecord>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IUpdateStageRecord, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateStageRecord>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_UpdateId(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateStageRecord>**)this;
            check_hresult(_winrt_abi_type->get_UpdateId(&value));
        }
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IUpdateStageRecord<D>::Status() const
    {
        winrt::Windows::Management::Update::Cluster::ClusterNativeUpdateCompletionStatus value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IUpdateStageRecord>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IUpdateStageRecord, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateStageRecord>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_Status(reinterpret_cast<int32_t*>(&value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateStageRecord>**)this;
            check_hresult(_winrt_abi_type->get_Status(reinterpret_cast<int32_t*>(&value)));
        }
        return value;
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IUpdateStageRecord<D>::FailureMessage() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IUpdateStageRecord>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IUpdateStageRecord, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateStageRecord>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_FailureMessage(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateStageRecord>**)this;
            check_hresult(_winrt_abi_type->get_FailureMessage(&value));
        }
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IUpdateStageRecord<D>::UpdatedPluginSpecificData() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IUpdateStageRecord>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IUpdateStageRecord, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateStageRecord>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_UpdatedPluginSpecificData(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateStageRecord>**)this;
            check_hresult(_winrt_abi_type->get_UpdatedPluginSpecificData(&value));
        }
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IUpdateStageRecordFactory<D>::CreateInstance(param::hstring const& updateId, winrt::Windows::Management::Update::Cluster::ClusterNativeUpdateCompletionStatus const& status, param::hstring const& failureMessage) const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IUpdateStageRecordFactory>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IUpdateStageRecordFactory, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateStageRecordFactory>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->CreateInstance(*(void**)(&updateId), static_cast<int32_t>(status), *(void**)(&failureMessage), &value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateStageRecordFactory>**)this;
            check_hresult(_winrt_abi_type->CreateInstance(*(void**)(&updateId), static_cast<int32_t>(status), *(void**)(&failureMessage), &value));
        }
        return winrt::Windows::Management::Update::Cluster::UpdateStageRecord{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IUpdateStageRecordFactory<D>::CreateInstance2(param::hstring const& updateId, winrt::Windows::Management::Update::Cluster::ClusterNativeUpdateCompletionStatus const& status, param::hstring const& failureMessage, param::hstring const& updatedPluginSpecificData) const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IUpdateStageRecordFactory>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IUpdateStageRecordFactory, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateStageRecordFactory>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->CreateInstance2(*(void**)(&updateId), static_cast<int32_t>(status), *(void**)(&failureMessage), *(void**)(&updatedPluginSpecificData), &value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateStageRecordFactory>**)this;
            check_hresult(_winrt_abi_type->CreateInstance2(*(void**)(&updateId), static_cast<int32_t>(status), *(void**)(&failureMessage), *(void**)(&updatedPluginSpecificData), &value));
        }
        return winrt::Windows::Management::Update::Cluster::UpdateStageRecord{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IUpdateTaskResult<D>::Succeeded() const
    {
        bool value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IUpdateTaskResult>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IUpdateTaskResult, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateTaskResult>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_Succeeded(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateTaskResult>**)this;
            check_hresult(_winrt_abi_type->get_Succeeded(&value));
        }
        return value;
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IUpdateTaskResult<D>::Reason() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IUpdateTaskResult>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IUpdateTaskResult, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateTaskResult>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_Reason(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateTaskResult>**)this;
            check_hresult(_winrt_abi_type->get_Reason(&value));
        }
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IUpdateTaskResult<D>::ErrorCode() const
    {
        int32_t value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IUpdateTaskResult>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IUpdateTaskResult, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateTaskResult>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_ErrorCode(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateTaskResult>**)this;
            check_hresult(_winrt_abi_type->get_ErrorCode(&value));
        }
        return value;
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IUpdateTaskResultFactory<D>::CreateInstance(bool succeeded, param::hstring const& reason) const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IUpdateTaskResultFactory>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IUpdateTaskResultFactory, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateTaskResultFactory>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->CreateInstance(succeeded, *(void**)(&reason), &value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateTaskResultFactory>**)this;
            check_hresult(_winrt_abi_type->CreateInstance(succeeded, *(void**)(&reason), &value));
        }
        return winrt::Windows::Management::Update::Cluster::UpdateTaskResult{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IUpdateTaskResultFactory<D>::CreateInstance2(bool succeeded, param::hstring const& reason, int32_t errorCode) const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IUpdateTaskResultFactory>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IUpdateTaskResultFactory, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateTaskResultFactory>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->CreateInstance2(succeeded, *(void**)(&reason), errorCode, &value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateTaskResultFactory>**)this;
            check_hresult(_winrt_abi_type->CreateInstance2(succeeded, *(void**)(&reason), errorCode, &value));
        }
        return winrt::Windows::Management::Update::Cluster::UpdateTaskResult{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IUpdateValidationLogMessage<D>::Severity() const
    {
        winrt::Windows::Management::Update::Cluster::ClusterNativeUpdateLogLevel value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IUpdateValidationLogMessage>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IUpdateValidationLogMessage, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateValidationLogMessage>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_Severity(reinterpret_cast<int32_t*>(&value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateValidationLogMessage>**)this;
            check_hresult(_winrt_abi_type->get_Severity(reinterpret_cast<int32_t*>(&value)));
        }
        return value;
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IUpdateValidationLogMessage<D>::Message() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IUpdateValidationLogMessage>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IUpdateValidationLogMessage, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateValidationLogMessage>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_Message(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateValidationLogMessage>**)this;
            check_hresult(_winrt_abi_type->get_Message(&value));
        }
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IUpdateValidationLogMessageFactory<D>::CreateInstance(winrt::Windows::Management::Update::Cluster::ClusterNativeUpdateLogLevel const& severity, param::hstring const& message) const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IUpdateValidationLogMessageFactory>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IUpdateValidationLogMessageFactory, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateValidationLogMessageFactory>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->CreateInstance(static_cast<int32_t>(severity), *(void**)(&message), &value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IUpdateValidationLogMessageFactory>**)this;
            check_hresult(_winrt_abi_type->CreateInstance(static_cast<int32_t>(severity), *(void**)(&message), &value));
        }
        return winrt::Windows::Management::Update::Cluster::UpdateValidationLogMessage{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IValidateAllNodesUpdateRecipeResult<D>::Result() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IValidateAllNodesUpdateRecipeResult>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IValidateAllNodesUpdateRecipeResult, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IValidateAllNodesUpdateRecipeResult>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_Result(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IValidateAllNodesUpdateRecipeResult>**)this;
            check_hresult(_winrt_abi_type->get_Result(&value));
        }
        return winrt::Windows::Management::Update::Cluster::UpdateTaskResult{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IValidateAllNodesUpdateRecipeResult<D>::AreUpdatesApproved() const
    {
        bool value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IValidateAllNodesUpdateRecipeResult>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IValidateAllNodesUpdateRecipeResult, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IValidateAllNodesUpdateRecipeResult>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_AreUpdatesApproved(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IValidateAllNodesUpdateRecipeResult>**)this;
            check_hresult(_winrt_abi_type->get_AreUpdatesApproved(&value));
        }
        return value;
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IValidateAllNodesUpdateRecipeResult<D>::ValidationMessages() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IValidateAllNodesUpdateRecipeResult>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IValidateAllNodesUpdateRecipeResult, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IValidateAllNodesUpdateRecipeResult>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_ValidationMessages(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IValidateAllNodesUpdateRecipeResult>**)this;
            check_hresult(_winrt_abi_type->get_ValidationMessages(&value));
        }
        return winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Management::Update::Cluster::UpdateValidationLogMessage>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IValidateAllNodesUpdateRecipeResultFactory<D>::CreateInstance(winrt::Windows::Management::Update::Cluster::UpdateTaskResult const& result, bool areUpdatesApproved, param::vector_view<winrt::Windows::Management::Update::Cluster::UpdateValidationLogMessage> const& validationMessages) const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IValidateAllNodesUpdateRecipeResultFactory>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IValidateAllNodesUpdateRecipeResultFactory, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IValidateAllNodesUpdateRecipeResultFactory>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->CreateInstance(*(void**)(&result), areUpdatesApproved, *(void**)(&validationMessages), &value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IValidateAllNodesUpdateRecipeResultFactory>**)this;
            check_hresult(_winrt_abi_type->CreateInstance(*(void**)(&result), areUpdatesApproved, *(void**)(&validationMessages), &value));
        }
        return winrt::Windows::Management::Update::Cluster::ValidateAllNodesUpdateRecipeResult{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IValidateClusterEnvironmentResult<D>::Result() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IValidateClusterEnvironmentResult>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IValidateClusterEnvironmentResult, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IValidateClusterEnvironmentResult>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_Result(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IValidateClusterEnvironmentResult>**)this;
            check_hresult(_winrt_abi_type->get_Result(&value));
        }
        return winrt::Windows::Management::Update::Cluster::UpdateTaskResult{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IValidateClusterEnvironmentResult<D>::ApprovalStatus() const
    {
        winrt::Windows::Management::Update::Cluster::ClusterNativeUpdateEnvironmentValidationStatus value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IValidateClusterEnvironmentResult>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IValidateClusterEnvironmentResult, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IValidateClusterEnvironmentResult>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_ApprovalStatus(reinterpret_cast<int32_t*>(&value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IValidateClusterEnvironmentResult>**)this;
            check_hresult(_winrt_abi_type->get_ApprovalStatus(reinterpret_cast<int32_t*>(&value)));
        }
        return value;
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IValidateClusterEnvironmentResult<D>::ValidationMessages() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IValidateClusterEnvironmentResult>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IValidateClusterEnvironmentResult, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IValidateClusterEnvironmentResult>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_ValidationMessages(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IValidateClusterEnvironmentResult>**)this;
            check_hresult(_winrt_abi_type->get_ValidationMessages(&value));
        }
        return winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Management::Update::Cluster::UpdateValidationLogMessage>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_Cluster_IValidateClusterEnvironmentResultFactory<D>::CreateInstance(winrt::Windows::Management::Update::Cluster::UpdateTaskResult const& result, winrt::Windows::Management::Update::Cluster::ClusterNativeUpdateEnvironmentValidationStatus const& approvalStatus, param::vector_view<winrt::Windows::Management::Update::Cluster::UpdateValidationLogMessage> const& validationMessages) const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::Management::Update::Cluster::IValidateClusterEnvironmentResultFactory>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::Management::Update::Cluster::IValidateClusterEnvironmentResultFactory, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IValidateClusterEnvironmentResultFactory>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->CreateInstance(*(void**)(&result), static_cast<int32_t>(approvalStatus), *(void**)(&validationMessages), &value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::Management::Update::Cluster::IValidateClusterEnvironmentResultFactory>**)this;
            check_hresult(_winrt_abi_type->CreateInstance(*(void**)(&result), static_cast<int32_t>(approvalStatus), *(void**)(&validationMessages), &value));
        }
        return winrt::Windows::Management::Update::Cluster::ValidateClusterEnvironmentResult{ value, take_ownership_from_abi };
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Update::Cluster::IAcquireEnvironmentInfoResult> : produce_base<D, winrt::Windows::Management::Update::Cluster::IAcquireEnvironmentInfoResult>
    {
        int32_t __stdcall get_Result(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Management::Update::Cluster::UpdateTaskResult>(this->shim().Result());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_EnvironmentInfo(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().EnvironmentInfo());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Update::Cluster::IAcquireEnvironmentInfoResultFactory> : produce_base<D, winrt::Windows::Management::Update::Cluster::IAcquireEnvironmentInfoResultFactory>
    {
        int32_t __stdcall CreateInstance(void* result, void* environmentInfo, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Management::Update::Cluster::AcquireEnvironmentInfoResult>(this->shim().CreateInstance(*reinterpret_cast<winrt::Windows::Management::Update::Cluster::UpdateTaskResult const*>(&result), *reinterpret_cast<hstring const*>(&environmentInfo)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Update::Cluster::IAreRebootsPendingResult> : produce_base<D, winrt::Windows::Management::Update::Cluster::IAreRebootsPendingResult>
    {
        int32_t __stdcall get_Result(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Management::Update::Cluster::UpdateOperationResult>(this->shim().Result());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsRebootPending(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsRebootPending());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Update::Cluster::IAreRebootsPendingResultFactory> : produce_base<D, winrt::Windows::Management::Update::Cluster::IAreRebootsPendingResultFactory>
    {
        int32_t __stdcall CreateInstance(void* result, bool isRebootPending, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Management::Update::Cluster::AreRebootsPendingResult>(this->shim().CreateInstance(*reinterpret_cast<winrt::Windows::Management::Update::Cluster::UpdateOperationResult const*>(&result), isRebootPending));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
    template <typename D>
    struct produce<D, winrt::Windows::Management::Update::Cluster::IClusterNativeEnvironmentOperations> : produce_base<D, winrt::Windows::Management::Update::Cluster::IClusterNativeEnvironmentOperations>
    {
        int32_t __stdcall AcquireNodeEnvironmentInfo(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Management::Update::Cluster::AcquireEnvironmentInfoResult>(this->shim().AcquireNodeEnvironmentInfo());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ValidateClusterEnvironment(void* nodeEnvironmentInfo, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Management::Update::Cluster::ValidateClusterEnvironmentResult>(this->shim().ValidateClusterEnvironment(*reinterpret_cast<winrt::Windows::Foundation::Collections::IMapView<hstring, hstring> const*>(&nodeEnvironmentInfo)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall StartPreUpdateRunOperation(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Management::Update::Cluster::UpdateOperationResult>(this->shim().StartPreUpdateRunOperation());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IsPreUpdateRunOperationComplete(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Management::Update::Cluster::UpdatePendingOperationResult>(this->shim().IsPreUpdateRunOperationComplete());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall StartPostUpdateRunOperation(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Management::Update::Cluster::UpdateOperationResult>(this->shim().StartPostUpdateRunOperation());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IsPostUpdateRunOperationComplete(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Management::Update::Cluster::UpdatePendingOperationResult>(this->shim().IsPostUpdateRunOperationComplete());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, winrt::Windows::Management::Update::Cluster::IClusterNativeEnvironmentOperationsPlugin> : produce_base<D, winrt::Windows::Management::Update::Cluster::IClusterNativeEnvironmentOperationsPlugin>
    {
        int32_t __stdcall get_Name(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Name());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FriendlyName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().FriendlyName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Description(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Description());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Version(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Management::Update::Cluster::UpdatePluginVersionInfo>(this->shim().Version());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DefaultOptions(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IMapView<hstring, hstring>>(this->shim().DefaultOptions());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateEnvironmentOperations(void* clusterName, void* runId, void* options, void* updateServices, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Management::Update::Cluster::IClusterNativeEnvironmentOperations>(this->shim().CreateEnvironmentOperations(*reinterpret_cast<hstring const*>(&clusterName), *reinterpret_cast<hstring const*>(&runId), *reinterpret_cast<winrt::Windows::Foundation::Collections::IMap<hstring, hstring> const*>(&options), *reinterpret_cast<winrt::Windows::Management::Update::Cluster::ClusterUpdateServices const*>(&updateServices)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperations> : produce_base<D, winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperations>
    {
        int32_t __stdcall AreAdditionalRebootsPending(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Management::Update::Cluster::AreRebootsPendingResult>(this->shim().AreAdditionalRebootsPending());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall StartPreRebootOperation(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Management::Update::Cluster::UpdateOperationResult>(this->shim().StartPreRebootOperation());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IsPreRebootOperationComplete(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Management::Update::Cluster::UpdatePendingOperationResult>(this->shim().IsPreRebootOperationComplete());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall StartPostRebootOperation(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Management::Update::Cluster::UpdateOperationResult>(this->shim().StartPostRebootOperation());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IsPostRebootOperationComplete(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Management::Update::Cluster::UpdatePendingOperationResult>(this->shim().IsPostRebootOperationComplete());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall StartPreDrainOperation(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Management::Update::Cluster::UpdateOperationResult>(this->shim().StartPreDrainOperation());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IsPreDrainOperationComplete(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Management::Update::Cluster::UpdatePendingOperationResult>(this->shim().IsPreDrainOperationComplete());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall StartPostResumeOperation(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Management::Update::Cluster::UpdateOperationResult>(this->shim().StartPostResumeOperation());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IsPostResumeOperationComplete(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Management::Update::Cluster::UpdatePendingOperationResult>(this->shim().IsPostResumeOperationComplete());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall StartPreUpdateRunOperation(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Management::Update::Cluster::UpdateOperationResult>(this->shim().StartPreUpdateRunOperation());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IsPreUpdateRunOperationComplete(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Management::Update::Cluster::UpdatePendingOperationResult>(this->shim().IsPreUpdateRunOperationComplete());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall StartPostUpdateRunOperation(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Management::Update::Cluster::UpdateOperationResult>(this->shim().StartPostUpdateRunOperation());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IsPostUpdateRunOperationComplete(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Management::Update::Cluster::UpdatePendingOperationResult>(this->shim().IsPostUpdateRunOperationComplete());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperationsPlugin> : produce_base<D, winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperationsPlugin>
    {
        int32_t __stdcall get_Name(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Name());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FriendlyName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().FriendlyName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Description(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Description());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Version(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Management::Update::Cluster::UpdatePluginVersionInfo>(this->shim().Version());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DefaultOptions(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IMapView<hstring, hstring>>(this->shim().DefaultOptions());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateNodeOperations(void* clusterName, void* runId, void* options, void* updateServices, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperations>(this->shim().CreateNodeOperations(*reinterpret_cast<hstring const*>(&clusterName), *reinterpret_cast<hstring const*>(&runId), *reinterpret_cast<winrt::Windows::Foundation::Collections::IMap<hstring, hstring> const*>(&options), *reinterpret_cast<winrt::Windows::Management::Update::Cluster::ClusterUpdateServices const*>(&updateServices)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Update::Cluster::IClusterUpdateServices> : produce_base<D, winrt::Windows::Management::Update::Cluster::IClusterUpdateServices>
    {
        int32_t __stdcall WriteLogEntry(int32_t level, void* message) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WriteLogEntry(*reinterpret_cast<winrt::Windows::Management::Update::Cluster::ClusterNativeUpdateLogLevel const*>(&level), *reinterpret_cast<hstring const*>(&message));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ReportProgress(int32_t currentStep, int32_t maxSteps, void* message) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReportProgress(currentStep, maxSteps, *reinterpret_cast<hstring const*>(&message));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetPluginCredential(void* credentialId, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Management::Update::Cluster::UpdateCredential>(this->shim().GetPluginCredential(*reinterpret_cast<hstring const*>(&credentialId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IsOperationMarkedAsCanceled(bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsOperationMarkedAsCanceled());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SaveRunStateInformation(void* persistentInformation) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SaveRunStateInformation(*reinterpret_cast<hstring const*>(&persistentInformation));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetRunStateInformation(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<hstring>(this->shim().GetRunStateInformation());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SaveRunIndependentInformation(void* persistentInformation) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SaveRunIndependentInformation(*reinterpret_cast<hstring const*>(&persistentInformation));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetRunIndependentInformation(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<hstring>(this->shim().GetRunIndependentInformation());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Update::Cluster::IInstallUpdateTaskResult> : produce_base<D, winrt::Windows::Management::Update::Cluster::IInstallUpdateTaskResult>
    {
        int32_t __stdcall get_Result(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Management::Update::Cluster::UpdateTaskResult>(this->shim().Result());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_InstallRecords(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Management::Update::Cluster::UpdateInstallRecord>>(this->shim().InstallRecords());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ShouldRollback(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().ShouldRollback());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Update::Cluster::IInstallUpdateTaskResultFactory> : produce_base<D, winrt::Windows::Management::Update::Cluster::IInstallUpdateTaskResultFactory>
    {
        int32_t __stdcall CreateInstance(void* result, void* installRecords, bool shouldRollback, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Management::Update::Cluster::InstallUpdateTaskResult>(this->shim().CreateInstance(*reinterpret_cast<winrt::Windows::Management::Update::Cluster::UpdateTaskResult const*>(&result), *reinterpret_cast<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Management::Update::Cluster::UpdateInstallRecord> const*>(&installRecords), shouldRollback));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Update::Cluster::IRollbackUpdateTaskResult> : produce_base<D, winrt::Windows::Management::Update::Cluster::IRollbackUpdateTaskResult>
    {
        int32_t __stdcall get_Result(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Management::Update::Cluster::UpdateTaskResult>(this->shim().Result());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_InstallRecords(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Management::Update::Cluster::UpdateInstallRecord>>(this->shim().InstallRecords());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Update::Cluster::IRollbackUpdateTaskResultFactory> : produce_base<D, winrt::Windows::Management::Update::Cluster::IRollbackUpdateTaskResultFactory>
    {
        int32_t __stdcall CreateInstance(void* result, void* installRecords, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Management::Update::Cluster::RollbackUpdateTaskResult>(this->shim().CreateInstance(*reinterpret_cast<winrt::Windows::Management::Update::Cluster::UpdateTaskResult const*>(&result), *reinterpret_cast<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Management::Update::Cluster::UpdateInstallRecord> const*>(&installRecords)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Update::Cluster::IScanUpdateTaskResult> : produce_base<D, winrt::Windows::Management::Update::Cluster::IScanUpdateTaskResult>
    {
        int32_t __stdcall get_Result(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Management::Update::Cluster::UpdateTaskResult>(this->shim().Result());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ScanRecords(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Management::Update::Cluster::UpdateScanRecord>>(this->shim().ScanRecords());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Update::Cluster::IScanUpdateTaskResultFactory> : produce_base<D, winrt::Windows::Management::Update::Cluster::IScanUpdateTaskResultFactory>
    {
        int32_t __stdcall CreateInstance(void* result, void* scanRecords, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Management::Update::Cluster::ScanUpdateTaskResult>(this->shim().CreateInstance(*reinterpret_cast<winrt::Windows::Management::Update::Cluster::UpdateTaskResult const*>(&result), *reinterpret_cast<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Management::Update::Cluster::UpdateScanRecord> const*>(&scanRecords)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Update::Cluster::IStageUpdateTaskResult> : produce_base<D, winrt::Windows::Management::Update::Cluster::IStageUpdateTaskResult>
    {
        int32_t __stdcall get_Result(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Management::Update::Cluster::UpdateTaskResult>(this->shim().Result());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_StageRecords(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Management::Update::Cluster::UpdateStageRecord>>(this->shim().StageRecords());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Update::Cluster::IStageUpdateTaskResultFactory> : produce_base<D, winrt::Windows::Management::Update::Cluster::IStageUpdateTaskResultFactory>
    {
        int32_t __stdcall CreateInstance(void* result, void* stageRecords, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Management::Update::Cluster::StageUpdateTaskResult>(this->shim().CreateInstance(*reinterpret_cast<winrt::Windows::Management::Update::Cluster::UpdateTaskResult const*>(&result), *reinterpret_cast<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Management::Update::Cluster::UpdateStageRecord> const*>(&stageRecords)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Update::Cluster::IUpdateCredential> : produce_base<D, winrt::Windows::Management::Update::Cluster::IUpdateCredential>
    {
        int32_t __stdcall get_Status(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Management::Update::Cluster::ClusterNativeUpdateCredentialStatus>(this->shim().Status());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_UserName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().UserName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Password(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Password());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Update::Cluster::IUpdateCredentialFactory> : produce_base<D, winrt::Windows::Management::Update::Cluster::IUpdateCredentialFactory>
    {
        int32_t __stdcall CreateInstance(int32_t status, void* userName, void* password, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Management::Update::Cluster::UpdateCredential>(this->shim().CreateInstance(*reinterpret_cast<winrt::Windows::Management::Update::Cluster::ClusterNativeUpdateCredentialStatus const*>(&status), *reinterpret_cast<hstring const*>(&userName), *reinterpret_cast<hstring const*>(&password)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Update::Cluster::IUpdateInstallRecord> : produce_base<D, winrt::Windows::Management::Update::Cluster::IUpdateInstallRecord>
    {
        int32_t __stdcall get_UpdateId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().UpdateId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsRebootRequired(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsRebootRequired());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Status(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Management::Update::Cluster::ClusterNativeUpdateCompletionStatus>(this->shim().Status());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FailureMessage(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().FailureMessage());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Update::Cluster::IUpdateInstallRecordFactory> : produce_base<D, winrt::Windows::Management::Update::Cluster::IUpdateInstallRecordFactory>
    {
        int32_t __stdcall CreateInstance(void* updateId, bool isRebootRequired, int32_t status, void* failureMessage, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Management::Update::Cluster::UpdateInstallRecord>(this->shim().CreateInstance(*reinterpret_cast<hstring const*>(&updateId), isRebootRequired, *reinterpret_cast<winrt::Windows::Management::Update::Cluster::ClusterNativeUpdateCompletionStatus const*>(&status), *reinterpret_cast<hstring const*>(&failureMessage)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
    template <typename D>
    struct produce<D, winrt::Windows::Management::Update::Cluster::IUpdateInstaller> : produce_base<D, winrt::Windows::Management::Update::Cluster::IUpdateInstaller>
    {
        int32_t __stdcall Scan(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Management::Update::Cluster::ScanUpdateTaskResult>(this->shim().Scan());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Stage(void* updatesToStage, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Management::Update::Cluster::StageUpdateTaskResult>(this->shim().Stage(*reinterpret_cast<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Management::Update::Cluster::UpdateScanRecord> const*>(&updatesToStage)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Install(void* updatesToInstall, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Management::Update::Cluster::InstallUpdateTaskResult>(this->shim().Install(*reinterpret_cast<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Management::Update::Cluster::UpdateScanRecord> const*>(&updatesToInstall)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Rollback(void* updatesToRollback, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Management::Update::Cluster::RollbackUpdateTaskResult>(this->shim().Rollback(*reinterpret_cast<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Management::Update::Cluster::UpdateScanRecord> const*>(&updatesToRollback)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ShouldUsePluginSpecificReboot(bool* usePluginReboot, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Management::Update::Cluster::UpdateTaskResult>(this->shim().ShouldUsePluginSpecificReboot(*usePluginReboot));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RebootNode(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Management::Update::Cluster::UpdateTaskResult>(this->shim().RebootNode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall AcquireUpdateListValidationInfo(void** recipeValidationInfo, void** result) noexcept final try
        {
            clear_abi(recipeValidationInfo);
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Management::Update::Cluster::UpdateTaskResult>(this->shim().AcquireUpdateListValidationInfo(*reinterpret_cast<hstring*>(recipeValidationInfo)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ValidateAllNodesUpdateRecipe(void* allNodesRecipeValidationInfo, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Management::Update::Cluster::ValidateAllNodesUpdateRecipeResult>(this->shim().ValidateAllNodesUpdateRecipe(*reinterpret_cast<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Management::Update::Cluster::UpdateRecipeNodeValidationInfoRecord> const*>(&allNodesRecipeValidationInfo)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, winrt::Windows::Management::Update::Cluster::IUpdateInstallerPlugin> : produce_base<D, winrt::Windows::Management::Update::Cluster::IUpdateInstallerPlugin>
    {
        int32_t __stdcall get_Name(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Name());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FriendlyName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().FriendlyName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Description(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Description());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Version(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Management::Update::Cluster::UpdatePluginVersionInfo>(this->shim().Version());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsUpdateRollbackSupported(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsUpdateRollbackSupported());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DefaultOptions(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IMapView<hstring, hstring>>(this->shim().DefaultOptions());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateUpdateInstaller(void* clusterName, void* runId, void* options, void* updateServices, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Management::Update::Cluster::IUpdateInstaller>(this->shim().CreateUpdateInstaller(*reinterpret_cast<hstring const*>(&clusterName), *reinterpret_cast<hstring const*>(&runId), *reinterpret_cast<winrt::Windows::Foundation::Collections::IMap<hstring, hstring> const*>(&options), *reinterpret_cast<winrt::Windows::Management::Update::Cluster::ClusterUpdateServices const*>(&updateServices)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Update::Cluster::IUpdateOperationResult> : produce_base<D, winrt::Windows::Management::Update::Cluster::IUpdateOperationResult>
    {
        int32_t __stdcall get_StatusCode(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Management::Update::Cluster::ClusterNativeUpdateOperationStatus>(this->shim().StatusCode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Reason(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Reason());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ErrorCode(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().ErrorCode());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Update::Cluster::IUpdateOperationResultFactory> : produce_base<D, winrt::Windows::Management::Update::Cluster::IUpdateOperationResultFactory>
    {
        int32_t __stdcall CreateInstance(int32_t status, void* reason, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Management::Update::Cluster::UpdateOperationResult>(this->shim().CreateInstance(*reinterpret_cast<winrt::Windows::Management::Update::Cluster::ClusterNativeUpdateOperationStatus const*>(&status), *reinterpret_cast<hstring const*>(&reason)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateInstance2(int32_t status, void* reason, int32_t errorCode, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Management::Update::Cluster::UpdateOperationResult>(this->shim().CreateInstance2(*reinterpret_cast<winrt::Windows::Management::Update::Cluster::ClusterNativeUpdateOperationStatus const*>(&status), *reinterpret_cast<hstring const*>(&reason), errorCode));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Update::Cluster::IUpdatePendingOperationResult> : produce_base<D, winrt::Windows::Management::Update::Cluster::IUpdatePendingOperationResult>
    {
        int32_t __stdcall get_Result(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Management::Update::Cluster::UpdateOperationResult>(this->shim().Result());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SuggestedRecheckInterval(int64_t* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::TimeSpan>(this->shim().SuggestedRecheckInterval());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Update::Cluster::IUpdatePendingOperationResultFactory> : produce_base<D, winrt::Windows::Management::Update::Cluster::IUpdatePendingOperationResultFactory>
    {
        int32_t __stdcall CreateInstance(void* result, int64_t suggestedRecheckInterval, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Management::Update::Cluster::UpdatePendingOperationResult>(this->shim().CreateInstance(*reinterpret_cast<winrt::Windows::Management::Update::Cluster::UpdateOperationResult const*>(&result), *reinterpret_cast<winrt::Windows::Foundation::TimeSpan const*>(&suggestedRecheckInterval)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Update::Cluster::IUpdatePluginVersionInfo> : produce_base<D, winrt::Windows::Management::Update::Cluster::IUpdatePluginVersionInfo>
    {
        int32_t __stdcall get_MajorVersion(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().MajorVersion());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MinorVersion(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().MinorVersion());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PatchLevel(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().PatchLevel());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Update::Cluster::IUpdatePluginVersionInfoFactory> : produce_base<D, winrt::Windows::Management::Update::Cluster::IUpdatePluginVersionInfoFactory>
    {
        int32_t __stdcall CreateInstance(uint32_t majorVersion, uint32_t minorVersion, uint32_t patchLevel, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Management::Update::Cluster::UpdatePluginVersionInfo>(this->shim().CreateInstance(majorVersion, minorVersion, patchLevel));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Update::Cluster::IUpdateRecipeNodeValidationInfoRecord> : produce_base<D, winrt::Windows::Management::Update::Cluster::IUpdateRecipeNodeValidationInfoRecord>
    {
        int32_t __stdcall get_NodeName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().NodeName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RecipeValidationInfo(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().RecipeValidationInfo());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ScanResults(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Management::Update::Cluster::UpdateScanRecord>>(this->shim().ScanResults());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Update::Cluster::IUpdateRecipeNodeValidationInfoRecordFactory> : produce_base<D, winrt::Windows::Management::Update::Cluster::IUpdateRecipeNodeValidationInfoRecordFactory>
    {
        int32_t __stdcall CreateInstance(void* nodeName, void* recipeValidationInfo, void* scanResults, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Management::Update::Cluster::UpdateRecipeNodeValidationInfoRecord>(this->shim().CreateInstance(*reinterpret_cast<hstring const*>(&nodeName), *reinterpret_cast<hstring const*>(&recipeValidationInfo), *reinterpret_cast<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Management::Update::Cluster::UpdateScanRecord> const*>(&scanResults)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Update::Cluster::IUpdateScanRecord> : produce_base<D, winrt::Windows::Management::Update::Cluster::IUpdateScanRecord>
    {
        int32_t __stdcall get_UpdateId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().UpdateId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_UpdateTitle(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().UpdateTitle());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_UpdateDescription(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().UpdateDescription());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsRebootRequired(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsRebootRequired());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PluginSpecificData(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PluginSpecificData());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Update::Cluster::IUpdateScanRecordFactory> : produce_base<D, winrt::Windows::Management::Update::Cluster::IUpdateScanRecordFactory>
    {
        int32_t __stdcall CreateInstance(void* updateId, void* updateTitle, void* updateDescription, bool isRebootRequired, void* pluginSpecificData, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Management::Update::Cluster::UpdateScanRecord>(this->shim().CreateInstance(*reinterpret_cast<hstring const*>(&updateId), *reinterpret_cast<hstring const*>(&updateTitle), *reinterpret_cast<hstring const*>(&updateDescription), isRebootRequired, *reinterpret_cast<hstring const*>(&pluginSpecificData)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Update::Cluster::IUpdateStageRecord> : produce_base<D, winrt::Windows::Management::Update::Cluster::IUpdateStageRecord>
    {
        int32_t __stdcall get_UpdateId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().UpdateId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Status(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Management::Update::Cluster::ClusterNativeUpdateCompletionStatus>(this->shim().Status());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FailureMessage(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().FailureMessage());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_UpdatedPluginSpecificData(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().UpdatedPluginSpecificData());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Update::Cluster::IUpdateStageRecordFactory> : produce_base<D, winrt::Windows::Management::Update::Cluster::IUpdateStageRecordFactory>
    {
        int32_t __stdcall CreateInstance(void* updateId, int32_t status, void* failureMessage, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Management::Update::Cluster::UpdateStageRecord>(this->shim().CreateInstance(*reinterpret_cast<hstring const*>(&updateId), *reinterpret_cast<winrt::Windows::Management::Update::Cluster::ClusterNativeUpdateCompletionStatus const*>(&status), *reinterpret_cast<hstring const*>(&failureMessage)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateInstance2(void* updateId, int32_t status, void* failureMessage, void* updatedPluginSpecificData, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Management::Update::Cluster::UpdateStageRecord>(this->shim().CreateInstance2(*reinterpret_cast<hstring const*>(&updateId), *reinterpret_cast<winrt::Windows::Management::Update::Cluster::ClusterNativeUpdateCompletionStatus const*>(&status), *reinterpret_cast<hstring const*>(&failureMessage), *reinterpret_cast<hstring const*>(&updatedPluginSpecificData)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Update::Cluster::IUpdateTaskResult> : produce_base<D, winrt::Windows::Management::Update::Cluster::IUpdateTaskResult>
    {
        int32_t __stdcall get_Succeeded(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Succeeded());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Reason(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Reason());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ErrorCode(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().ErrorCode());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Update::Cluster::IUpdateTaskResultFactory> : produce_base<D, winrt::Windows::Management::Update::Cluster::IUpdateTaskResultFactory>
    {
        int32_t __stdcall CreateInstance(bool succeeded, void* reason, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Management::Update::Cluster::UpdateTaskResult>(this->shim().CreateInstance(succeeded, *reinterpret_cast<hstring const*>(&reason)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateInstance2(bool succeeded, void* reason, int32_t errorCode, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Management::Update::Cluster::UpdateTaskResult>(this->shim().CreateInstance2(succeeded, *reinterpret_cast<hstring const*>(&reason), errorCode));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Update::Cluster::IUpdateValidationLogMessage> : produce_base<D, winrt::Windows::Management::Update::Cluster::IUpdateValidationLogMessage>
    {
        int32_t __stdcall get_Severity(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Management::Update::Cluster::ClusterNativeUpdateLogLevel>(this->shim().Severity());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Message(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Message());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Update::Cluster::IUpdateValidationLogMessageFactory> : produce_base<D, winrt::Windows::Management::Update::Cluster::IUpdateValidationLogMessageFactory>
    {
        int32_t __stdcall CreateInstance(int32_t severity, void* message, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Management::Update::Cluster::UpdateValidationLogMessage>(this->shim().CreateInstance(*reinterpret_cast<winrt::Windows::Management::Update::Cluster::ClusterNativeUpdateLogLevel const*>(&severity), *reinterpret_cast<hstring const*>(&message)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Update::Cluster::IValidateAllNodesUpdateRecipeResult> : produce_base<D, winrt::Windows::Management::Update::Cluster::IValidateAllNodesUpdateRecipeResult>
    {
        int32_t __stdcall get_Result(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Management::Update::Cluster::UpdateTaskResult>(this->shim().Result());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AreUpdatesApproved(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AreUpdatesApproved());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ValidationMessages(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Management::Update::Cluster::UpdateValidationLogMessage>>(this->shim().ValidationMessages());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Update::Cluster::IValidateAllNodesUpdateRecipeResultFactory> : produce_base<D, winrt::Windows::Management::Update::Cluster::IValidateAllNodesUpdateRecipeResultFactory>
    {
        int32_t __stdcall CreateInstance(void* result, bool areUpdatesApproved, void* validationMessages, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Management::Update::Cluster::ValidateAllNodesUpdateRecipeResult>(this->shim().CreateInstance(*reinterpret_cast<winrt::Windows::Management::Update::Cluster::UpdateTaskResult const*>(&result), areUpdatesApproved, *reinterpret_cast<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Management::Update::Cluster::UpdateValidationLogMessage> const*>(&validationMessages)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Update::Cluster::IValidateClusterEnvironmentResult> : produce_base<D, winrt::Windows::Management::Update::Cluster::IValidateClusterEnvironmentResult>
    {
        int32_t __stdcall get_Result(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Management::Update::Cluster::UpdateTaskResult>(this->shim().Result());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ApprovalStatus(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Management::Update::Cluster::ClusterNativeUpdateEnvironmentValidationStatus>(this->shim().ApprovalStatus());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ValidationMessages(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Management::Update::Cluster::UpdateValidationLogMessage>>(this->shim().ValidationMessages());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Update::Cluster::IValidateClusterEnvironmentResultFactory> : produce_base<D, winrt::Windows::Management::Update::Cluster::IValidateClusterEnvironmentResultFactory>
    {
        int32_t __stdcall CreateInstance(void* result, int32_t approvalStatus, void* validationMessages, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Management::Update::Cluster::ValidateClusterEnvironmentResult>(this->shim().CreateInstance(*reinterpret_cast<winrt::Windows::Management::Update::Cluster::UpdateTaskResult const*>(&result), *reinterpret_cast<winrt::Windows::Management::Update::Cluster::ClusterNativeUpdateEnvironmentValidationStatus const*>(&approvalStatus), *reinterpret_cast<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Management::Update::Cluster::UpdateValidationLogMessage> const*>(&validationMessages)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::Management::Update::Cluster
{
    inline AcquireEnvironmentInfoResult::AcquireEnvironmentInfoResult(winrt::Windows::Management::Update::Cluster::UpdateTaskResult const& result, param::hstring const& environmentInfo) :
        AcquireEnvironmentInfoResult(impl::call_factory<AcquireEnvironmentInfoResult, IAcquireEnvironmentInfoResultFactory>([&](IAcquireEnvironmentInfoResultFactory const& f) { return f.CreateInstance(result, environmentInfo); }))
    {
    }
    inline AreRebootsPendingResult::AreRebootsPendingResult(winrt::Windows::Management::Update::Cluster::UpdateOperationResult const& result, bool isRebootPending) :
        AreRebootsPendingResult(impl::call_factory<AreRebootsPendingResult, IAreRebootsPendingResultFactory>([&](IAreRebootsPendingResultFactory const& f) { return f.CreateInstance(result, isRebootPending); }))
    {
    }
    inline InstallUpdateTaskResult::InstallUpdateTaskResult(winrt::Windows::Management::Update::Cluster::UpdateTaskResult const& result, param::vector_view<winrt::Windows::Management::Update::Cluster::UpdateInstallRecord> const& installRecords, bool shouldRollback) :
        InstallUpdateTaskResult(impl::call_factory<InstallUpdateTaskResult, IInstallUpdateTaskResultFactory>([&](IInstallUpdateTaskResultFactory const& f) { return f.CreateInstance(result, installRecords, shouldRollback); }))
    {
    }
    inline RollbackUpdateTaskResult::RollbackUpdateTaskResult(winrt::Windows::Management::Update::Cluster::UpdateTaskResult const& result, param::vector_view<winrt::Windows::Management::Update::Cluster::UpdateInstallRecord> const& installRecords) :
        RollbackUpdateTaskResult(impl::call_factory<RollbackUpdateTaskResult, IRollbackUpdateTaskResultFactory>([&](IRollbackUpdateTaskResultFactory const& f) { return f.CreateInstance(result, installRecords); }))
    {
    }
    inline ScanUpdateTaskResult::ScanUpdateTaskResult(winrt::Windows::Management::Update::Cluster::UpdateTaskResult const& result, param::vector_view<winrt::Windows::Management::Update::Cluster::UpdateScanRecord> const& scanRecords) :
        ScanUpdateTaskResult(impl::call_factory<ScanUpdateTaskResult, IScanUpdateTaskResultFactory>([&](IScanUpdateTaskResultFactory const& f) { return f.CreateInstance(result, scanRecords); }))
    {
    }
    inline StageUpdateTaskResult::StageUpdateTaskResult(winrt::Windows::Management::Update::Cluster::UpdateTaskResult const& result, param::vector_view<winrt::Windows::Management::Update::Cluster::UpdateStageRecord> const& stageRecords) :
        StageUpdateTaskResult(impl::call_factory<StageUpdateTaskResult, IStageUpdateTaskResultFactory>([&](IStageUpdateTaskResultFactory const& f) { return f.CreateInstance(result, stageRecords); }))
    {
    }
    inline UpdateCredential::UpdateCredential(winrt::Windows::Management::Update::Cluster::ClusterNativeUpdateCredentialStatus const& status, param::hstring const& userName, param::hstring const& password) :
        UpdateCredential(impl::call_factory<UpdateCredential, IUpdateCredentialFactory>([&](IUpdateCredentialFactory const& f) { return f.CreateInstance(status, userName, password); }))
    {
    }
    inline UpdateInstallRecord::UpdateInstallRecord(param::hstring const& updateId, bool isRebootRequired, winrt::Windows::Management::Update::Cluster::ClusterNativeUpdateCompletionStatus const& status, param::hstring const& failureMessage) :
        UpdateInstallRecord(impl::call_factory<UpdateInstallRecord, IUpdateInstallRecordFactory>([&](IUpdateInstallRecordFactory const& f) { return f.CreateInstance(updateId, isRebootRequired, status, failureMessage); }))
    {
    }
    inline UpdateOperationResult::UpdateOperationResult(winrt::Windows::Management::Update::Cluster::ClusterNativeUpdateOperationStatus const& status, param::hstring const& reason) :
        UpdateOperationResult(impl::call_factory<UpdateOperationResult, IUpdateOperationResultFactory>([&](IUpdateOperationResultFactory const& f) { return f.CreateInstance(status, reason); }))
    {
    }
    inline UpdateOperationResult::UpdateOperationResult(winrt::Windows::Management::Update::Cluster::ClusterNativeUpdateOperationStatus const& status, param::hstring const& reason, int32_t errorCode) :
        UpdateOperationResult(impl::call_factory<UpdateOperationResult, IUpdateOperationResultFactory>([&](IUpdateOperationResultFactory const& f) { return f.CreateInstance2(status, reason, errorCode); }))
    {
    }
    inline UpdatePendingOperationResult::UpdatePendingOperationResult(winrt::Windows::Management::Update::Cluster::UpdateOperationResult const& result, winrt::Windows::Foundation::TimeSpan const& suggestedRecheckInterval) :
        UpdatePendingOperationResult(impl::call_factory<UpdatePendingOperationResult, IUpdatePendingOperationResultFactory>([&](IUpdatePendingOperationResultFactory const& f) { return f.CreateInstance(result, suggestedRecheckInterval); }))
    {
    }
    inline UpdatePluginVersionInfo::UpdatePluginVersionInfo(uint32_t majorVersion, uint32_t minorVersion, uint32_t patchLevel) :
        UpdatePluginVersionInfo(impl::call_factory<UpdatePluginVersionInfo, IUpdatePluginVersionInfoFactory>([&](IUpdatePluginVersionInfoFactory const& f) { return f.CreateInstance(majorVersion, minorVersion, patchLevel); }))
    {
    }
    inline UpdateRecipeNodeValidationInfoRecord::UpdateRecipeNodeValidationInfoRecord(param::hstring const& nodeName, param::hstring const& recipeValidationInfo, param::vector_view<winrt::Windows::Management::Update::Cluster::UpdateScanRecord> const& scanResults) :
        UpdateRecipeNodeValidationInfoRecord(impl::call_factory<UpdateRecipeNodeValidationInfoRecord, IUpdateRecipeNodeValidationInfoRecordFactory>([&](IUpdateRecipeNodeValidationInfoRecordFactory const& f) { return f.CreateInstance(nodeName, recipeValidationInfo, scanResults); }))
    {
    }
    inline UpdateScanRecord::UpdateScanRecord(param::hstring const& updateId, param::hstring const& updateTitle, param::hstring const& updateDescription, bool isRebootRequired, param::hstring const& pluginSpecificData) :
        UpdateScanRecord(impl::call_factory<UpdateScanRecord, IUpdateScanRecordFactory>([&](IUpdateScanRecordFactory const& f) { return f.CreateInstance(updateId, updateTitle, updateDescription, isRebootRequired, pluginSpecificData); }))
    {
    }
    inline UpdateStageRecord::UpdateStageRecord(param::hstring const& updateId, winrt::Windows::Management::Update::Cluster::ClusterNativeUpdateCompletionStatus const& status, param::hstring const& failureMessage) :
        UpdateStageRecord(impl::call_factory<UpdateStageRecord, IUpdateStageRecordFactory>([&](IUpdateStageRecordFactory const& f) { return f.CreateInstance(updateId, status, failureMessage); }))
    {
    }
    inline UpdateStageRecord::UpdateStageRecord(param::hstring const& updateId, winrt::Windows::Management::Update::Cluster::ClusterNativeUpdateCompletionStatus const& status, param::hstring const& failureMessage, param::hstring const& updatedPluginSpecificData) :
        UpdateStageRecord(impl::call_factory<UpdateStageRecord, IUpdateStageRecordFactory>([&](IUpdateStageRecordFactory const& f) { return f.CreateInstance2(updateId, status, failureMessage, updatedPluginSpecificData); }))
    {
    }
    inline UpdateTaskResult::UpdateTaskResult(bool succeeded, param::hstring const& reason) :
        UpdateTaskResult(impl::call_factory<UpdateTaskResult, IUpdateTaskResultFactory>([&](IUpdateTaskResultFactory const& f) { return f.CreateInstance(succeeded, reason); }))
    {
    }
    inline UpdateTaskResult::UpdateTaskResult(bool succeeded, param::hstring const& reason, int32_t errorCode) :
        UpdateTaskResult(impl::call_factory<UpdateTaskResult, IUpdateTaskResultFactory>([&](IUpdateTaskResultFactory const& f) { return f.CreateInstance2(succeeded, reason, errorCode); }))
    {
    }
    inline UpdateValidationLogMessage::UpdateValidationLogMessage(winrt::Windows::Management::Update::Cluster::ClusterNativeUpdateLogLevel const& severity, param::hstring const& message) :
        UpdateValidationLogMessage(impl::call_factory<UpdateValidationLogMessage, IUpdateValidationLogMessageFactory>([&](IUpdateValidationLogMessageFactory const& f) { return f.CreateInstance(severity, message); }))
    {
    }
    inline ValidateAllNodesUpdateRecipeResult::ValidateAllNodesUpdateRecipeResult(winrt::Windows::Management::Update::Cluster::UpdateTaskResult const& result, bool areUpdatesApproved, param::vector_view<winrt::Windows::Management::Update::Cluster::UpdateValidationLogMessage> const& validationMessages) :
        ValidateAllNodesUpdateRecipeResult(impl::call_factory<ValidateAllNodesUpdateRecipeResult, IValidateAllNodesUpdateRecipeResultFactory>([&](IValidateAllNodesUpdateRecipeResultFactory const& f) { return f.CreateInstance(result, areUpdatesApproved, validationMessages); }))
    {
    }
    inline ValidateClusterEnvironmentResult::ValidateClusterEnvironmentResult(winrt::Windows::Management::Update::Cluster::UpdateTaskResult const& result, winrt::Windows::Management::Update::Cluster::ClusterNativeUpdateEnvironmentValidationStatus const& approvalStatus, param::vector_view<winrt::Windows::Management::Update::Cluster::UpdateValidationLogMessage> const& validationMessages) :
        ValidateClusterEnvironmentResult(impl::call_factory<ValidateClusterEnvironmentResult, IValidateClusterEnvironmentResultFactory>([&](IValidateClusterEnvironmentResultFactory const& f) { return f.CreateInstance(result, approvalStatus, validationMessages); }))
    {
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::Management::Update::Cluster::IAcquireEnvironmentInfoResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Update::Cluster::IAcquireEnvironmentInfoResultFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Update::Cluster::IAreRebootsPendingResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Update::Cluster::IAreRebootsPendingResultFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Update::Cluster::IClusterNativeEnvironmentOperations> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Update::Cluster::IClusterNativeEnvironmentOperationsPlugin> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperations> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperationsPlugin> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Update::Cluster::IClusterUpdateServices> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Update::Cluster::IInstallUpdateTaskResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Update::Cluster::IInstallUpdateTaskResultFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Update::Cluster::IRollbackUpdateTaskResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Update::Cluster::IRollbackUpdateTaskResultFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Update::Cluster::IScanUpdateTaskResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Update::Cluster::IScanUpdateTaskResultFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Update::Cluster::IStageUpdateTaskResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Update::Cluster::IStageUpdateTaskResultFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Update::Cluster::IUpdateCredential> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Update::Cluster::IUpdateCredentialFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Update::Cluster::IUpdateInstallRecord> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Update::Cluster::IUpdateInstallRecordFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Update::Cluster::IUpdateInstaller> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Update::Cluster::IUpdateInstallerPlugin> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Update::Cluster::IUpdateOperationResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Update::Cluster::IUpdateOperationResultFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Update::Cluster::IUpdatePendingOperationResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Update::Cluster::IUpdatePendingOperationResultFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Update::Cluster::IUpdatePluginVersionInfo> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Update::Cluster::IUpdatePluginVersionInfoFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Update::Cluster::IUpdateRecipeNodeValidationInfoRecord> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Update::Cluster::IUpdateRecipeNodeValidationInfoRecordFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Update::Cluster::IUpdateScanRecord> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Update::Cluster::IUpdateScanRecordFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Update::Cluster::IUpdateStageRecord> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Update::Cluster::IUpdateStageRecordFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Update::Cluster::IUpdateTaskResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Update::Cluster::IUpdateTaskResultFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Update::Cluster::IUpdateValidationLogMessage> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Update::Cluster::IUpdateValidationLogMessageFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Update::Cluster::IValidateAllNodesUpdateRecipeResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Update::Cluster::IValidateAllNodesUpdateRecipeResultFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Update::Cluster::IValidateClusterEnvironmentResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Update::Cluster::IValidateClusterEnvironmentResultFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Update::Cluster::AcquireEnvironmentInfoResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Update::Cluster::AreRebootsPendingResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Update::Cluster::ClusterUpdateServices> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Update::Cluster::InstallUpdateTaskResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Update::Cluster::RollbackUpdateTaskResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Update::Cluster::ScanUpdateTaskResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Update::Cluster::StageUpdateTaskResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Update::Cluster::UpdateCredential> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Update::Cluster::UpdateInstallRecord> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Update::Cluster::UpdateOperationResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Update::Cluster::UpdatePendingOperationResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Update::Cluster::UpdatePluginVersionInfo> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Update::Cluster::UpdateRecipeNodeValidationInfoRecord> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Update::Cluster::UpdateScanRecord> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Update::Cluster::UpdateStageRecord> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Update::Cluster::UpdateTaskResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Update::Cluster::UpdateValidationLogMessage> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Update::Cluster::ValidateAllNodesUpdateRecipeResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Update::Cluster::ValidateClusterEnvironmentResult> : winrt::impl::hash_base {};
#endif
#ifdef __cpp_lib_format
#endif
}
#endif
