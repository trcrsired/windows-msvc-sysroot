// C++/WinRT v2.0.250303.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Management_Update_Cluster_2_H
#define WINRT_Windows_Management_Update_Cluster_2_H
#include "winrt/impl/windows.foundation.1.h"
#include "winrt/impl/windows.foundation.collections.1.h"
#include "winrt/impl/windows.management.update.cluster.1.h"
WINRT_EXPORT namespace winrt::Windows::Management::Update::Cluster
{
    struct WINRT_IMPL_EMPTY_BASES AcquireEnvironmentInfoResult : winrt::Windows::Management::Update::Cluster::IAcquireEnvironmentInfoResult
    {
        AcquireEnvironmentInfoResult(std::nullptr_t) noexcept {}
        AcquireEnvironmentInfoResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Management::Update::Cluster::IAcquireEnvironmentInfoResult(ptr, take_ownership_from_abi) {}
        AcquireEnvironmentInfoResult(winrt::Windows::Management::Update::Cluster::UpdateTaskResult const& result, param::hstring const& environmentInfo);
    };
    struct WINRT_IMPL_EMPTY_BASES AreRebootsPendingResult : winrt::Windows::Management::Update::Cluster::IAreRebootsPendingResult
    {
        AreRebootsPendingResult(std::nullptr_t) noexcept {}
        AreRebootsPendingResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Management::Update::Cluster::IAreRebootsPendingResult(ptr, take_ownership_from_abi) {}
        AreRebootsPendingResult(winrt::Windows::Management::Update::Cluster::UpdateOperationResult const& result, bool isRebootPending);
    };
    struct WINRT_IMPL_EMPTY_BASES ClusterUpdateServices : winrt::Windows::Management::Update::Cluster::IClusterUpdateServices
    {
        ClusterUpdateServices(std::nullptr_t) noexcept {}
        ClusterUpdateServices(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Management::Update::Cluster::IClusterUpdateServices(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES InstallUpdateTaskResult : winrt::Windows::Management::Update::Cluster::IInstallUpdateTaskResult
    {
        InstallUpdateTaskResult(std::nullptr_t) noexcept {}
        InstallUpdateTaskResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Management::Update::Cluster::IInstallUpdateTaskResult(ptr, take_ownership_from_abi) {}
        InstallUpdateTaskResult(winrt::Windows::Management::Update::Cluster::UpdateTaskResult const& result, param::vector_view<winrt::Windows::Management::Update::Cluster::UpdateInstallRecord> const& installRecords, bool shouldRollback);
    };
    struct WINRT_IMPL_EMPTY_BASES RollbackUpdateTaskResult : winrt::Windows::Management::Update::Cluster::IRollbackUpdateTaskResult
    {
        RollbackUpdateTaskResult(std::nullptr_t) noexcept {}
        RollbackUpdateTaskResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Management::Update::Cluster::IRollbackUpdateTaskResult(ptr, take_ownership_from_abi) {}
        RollbackUpdateTaskResult(winrt::Windows::Management::Update::Cluster::UpdateTaskResult const& result, param::vector_view<winrt::Windows::Management::Update::Cluster::UpdateInstallRecord> const& installRecords);
    };
    struct WINRT_IMPL_EMPTY_BASES ScanUpdateTaskResult : winrt::Windows::Management::Update::Cluster::IScanUpdateTaskResult
    {
        ScanUpdateTaskResult(std::nullptr_t) noexcept {}
        ScanUpdateTaskResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Management::Update::Cluster::IScanUpdateTaskResult(ptr, take_ownership_from_abi) {}
        ScanUpdateTaskResult(winrt::Windows::Management::Update::Cluster::UpdateTaskResult const& result, param::vector_view<winrt::Windows::Management::Update::Cluster::UpdateScanRecord> const& scanRecords);
    };
    struct WINRT_IMPL_EMPTY_BASES StageUpdateTaskResult : winrt::Windows::Management::Update::Cluster::IStageUpdateTaskResult
    {
        StageUpdateTaskResult(std::nullptr_t) noexcept {}
        StageUpdateTaskResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Management::Update::Cluster::IStageUpdateTaskResult(ptr, take_ownership_from_abi) {}
        StageUpdateTaskResult(winrt::Windows::Management::Update::Cluster::UpdateTaskResult const& result, param::vector_view<winrt::Windows::Management::Update::Cluster::UpdateStageRecord> const& stageRecords);
    };
    struct WINRT_IMPL_EMPTY_BASES UpdateCredential : winrt::Windows::Management::Update::Cluster::IUpdateCredential
    {
        UpdateCredential(std::nullptr_t) noexcept {}
        UpdateCredential(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Management::Update::Cluster::IUpdateCredential(ptr, take_ownership_from_abi) {}
        UpdateCredential(winrt::Windows::Management::Update::Cluster::ClusterNativeUpdateCredentialStatus const& status, param::hstring const& userName, param::hstring const& password);
    };
    struct WINRT_IMPL_EMPTY_BASES UpdateInstallRecord : winrt::Windows::Management::Update::Cluster::IUpdateInstallRecord
    {
        UpdateInstallRecord(std::nullptr_t) noexcept {}
        UpdateInstallRecord(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Management::Update::Cluster::IUpdateInstallRecord(ptr, take_ownership_from_abi) {}
        UpdateInstallRecord(param::hstring const& updateId, bool isRebootRequired, winrt::Windows::Management::Update::Cluster::ClusterNativeUpdateCompletionStatus const& status, param::hstring const& failureMessage);
    };
    struct WINRT_IMPL_EMPTY_BASES UpdateOperationResult : winrt::Windows::Management::Update::Cluster::IUpdateOperationResult
    {
        UpdateOperationResult(std::nullptr_t) noexcept {}
        UpdateOperationResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Management::Update::Cluster::IUpdateOperationResult(ptr, take_ownership_from_abi) {}
        UpdateOperationResult(winrt::Windows::Management::Update::Cluster::ClusterNativeUpdateOperationStatus const& status, param::hstring const& reason);
        UpdateOperationResult(winrt::Windows::Management::Update::Cluster::ClusterNativeUpdateOperationStatus const& status, param::hstring const& reason, int32_t errorCode);
    };
    struct WINRT_IMPL_EMPTY_BASES UpdatePendingOperationResult : winrt::Windows::Management::Update::Cluster::IUpdatePendingOperationResult
    {
        UpdatePendingOperationResult(std::nullptr_t) noexcept {}
        UpdatePendingOperationResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Management::Update::Cluster::IUpdatePendingOperationResult(ptr, take_ownership_from_abi) {}
        UpdatePendingOperationResult(winrt::Windows::Management::Update::Cluster::UpdateOperationResult const& result, winrt::Windows::Foundation::TimeSpan const& suggestedRecheckInterval);
    };
    struct WINRT_IMPL_EMPTY_BASES UpdatePluginVersionInfo : winrt::Windows::Management::Update::Cluster::IUpdatePluginVersionInfo
    {
        UpdatePluginVersionInfo(std::nullptr_t) noexcept {}
        UpdatePluginVersionInfo(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Management::Update::Cluster::IUpdatePluginVersionInfo(ptr, take_ownership_from_abi) {}
        UpdatePluginVersionInfo(uint32_t majorVersion, uint32_t minorVersion, uint32_t patchLevel);
    };
    struct WINRT_IMPL_EMPTY_BASES UpdateRecipeNodeValidationInfoRecord : winrt::Windows::Management::Update::Cluster::IUpdateRecipeNodeValidationInfoRecord
    {
        UpdateRecipeNodeValidationInfoRecord(std::nullptr_t) noexcept {}
        UpdateRecipeNodeValidationInfoRecord(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Management::Update::Cluster::IUpdateRecipeNodeValidationInfoRecord(ptr, take_ownership_from_abi) {}
        UpdateRecipeNodeValidationInfoRecord(param::hstring const& nodeName, param::hstring const& recipeValidationInfo, param::vector_view<winrt::Windows::Management::Update::Cluster::UpdateScanRecord> const& scanResults);
    };
    struct WINRT_IMPL_EMPTY_BASES UpdateScanRecord : winrt::Windows::Management::Update::Cluster::IUpdateScanRecord
    {
        UpdateScanRecord(std::nullptr_t) noexcept {}
        UpdateScanRecord(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Management::Update::Cluster::IUpdateScanRecord(ptr, take_ownership_from_abi) {}
        UpdateScanRecord(param::hstring const& updateId, param::hstring const& updateTitle, param::hstring const& updateDescription, bool isRebootRequired, param::hstring const& pluginSpecificData);
    };
    struct WINRT_IMPL_EMPTY_BASES UpdateStageRecord : winrt::Windows::Management::Update::Cluster::IUpdateStageRecord
    {
        UpdateStageRecord(std::nullptr_t) noexcept {}
        UpdateStageRecord(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Management::Update::Cluster::IUpdateStageRecord(ptr, take_ownership_from_abi) {}
        UpdateStageRecord(param::hstring const& updateId, winrt::Windows::Management::Update::Cluster::ClusterNativeUpdateCompletionStatus const& status, param::hstring const& failureMessage);
        UpdateStageRecord(param::hstring const& updateId, winrt::Windows::Management::Update::Cluster::ClusterNativeUpdateCompletionStatus const& status, param::hstring const& failureMessage, param::hstring const& updatedPluginSpecificData);
    };
    struct WINRT_IMPL_EMPTY_BASES UpdateTaskResult : winrt::Windows::Management::Update::Cluster::IUpdateTaskResult
    {
        UpdateTaskResult(std::nullptr_t) noexcept {}
        UpdateTaskResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Management::Update::Cluster::IUpdateTaskResult(ptr, take_ownership_from_abi) {}
        UpdateTaskResult(bool succeeded, param::hstring const& reason);
        UpdateTaskResult(bool succeeded, param::hstring const& reason, int32_t errorCode);
    };
    struct WINRT_IMPL_EMPTY_BASES UpdateValidationLogMessage : winrt::Windows::Management::Update::Cluster::IUpdateValidationLogMessage
    {
        UpdateValidationLogMessage(std::nullptr_t) noexcept {}
        UpdateValidationLogMessage(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Management::Update::Cluster::IUpdateValidationLogMessage(ptr, take_ownership_from_abi) {}
        UpdateValidationLogMessage(winrt::Windows::Management::Update::Cluster::ClusterNativeUpdateLogLevel const& severity, param::hstring const& message);
    };
    struct WINRT_IMPL_EMPTY_BASES ValidateAllNodesUpdateRecipeResult : winrt::Windows::Management::Update::Cluster::IValidateAllNodesUpdateRecipeResult
    {
        ValidateAllNodesUpdateRecipeResult(std::nullptr_t) noexcept {}
        ValidateAllNodesUpdateRecipeResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Management::Update::Cluster::IValidateAllNodesUpdateRecipeResult(ptr, take_ownership_from_abi) {}
        ValidateAllNodesUpdateRecipeResult(winrt::Windows::Management::Update::Cluster::UpdateTaskResult const& result, bool areUpdatesApproved, param::vector_view<winrt::Windows::Management::Update::Cluster::UpdateValidationLogMessage> const& validationMessages);
    };
    struct WINRT_IMPL_EMPTY_BASES ValidateClusterEnvironmentResult : winrt::Windows::Management::Update::Cluster::IValidateClusterEnvironmentResult
    {
        ValidateClusterEnvironmentResult(std::nullptr_t) noexcept {}
        ValidateClusterEnvironmentResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Management::Update::Cluster::IValidateClusterEnvironmentResult(ptr, take_ownership_from_abi) {}
        ValidateClusterEnvironmentResult(winrt::Windows::Management::Update::Cluster::UpdateTaskResult const& result, winrt::Windows::Management::Update::Cluster::ClusterNativeUpdateEnvironmentValidationStatus const& approvalStatus, param::vector_view<winrt::Windows::Management::Update::Cluster::UpdateValidationLogMessage> const& validationMessages);
    };
}
#endif
