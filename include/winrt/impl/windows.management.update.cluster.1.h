// C++/WinRT v2.0.250303.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Management_Update_Cluster_1_H
#define WINRT_Windows_Management_Update_Cluster_1_H
#include "winrt/impl/windows.management.update.cluster.0.h"
WINRT_EXPORT namespace winrt::Windows::Management::Update::Cluster
{
    struct WINRT_IMPL_EMPTY_BASES IAcquireEnvironmentInfoResult :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAcquireEnvironmentInfoResult>
    {
        IAcquireEnvironmentInfoResult(std::nullptr_t = nullptr) noexcept {}
        IAcquireEnvironmentInfoResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IAcquireEnvironmentInfoResultFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAcquireEnvironmentInfoResultFactory>
    {
        IAcquireEnvironmentInfoResultFactory(std::nullptr_t = nullptr) noexcept {}
        IAcquireEnvironmentInfoResultFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IAreRebootsPendingResult :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAreRebootsPendingResult>
    {
        IAreRebootsPendingResult(std::nullptr_t = nullptr) noexcept {}
        IAreRebootsPendingResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IAreRebootsPendingResultFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAreRebootsPendingResultFactory>
    {
        IAreRebootsPendingResultFactory(std::nullptr_t = nullptr) noexcept {}
        IAreRebootsPendingResultFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IClusterNativeEnvironmentOperations :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IClusterNativeEnvironmentOperations>
    {
        IClusterNativeEnvironmentOperations(std::nullptr_t = nullptr) noexcept {}
        IClusterNativeEnvironmentOperations(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IClusterNativeEnvironmentOperationsPlugin :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IClusterNativeEnvironmentOperationsPlugin>
    {
        IClusterNativeEnvironmentOperationsPlugin(std::nullptr_t = nullptr) noexcept {}
        IClusterNativeEnvironmentOperationsPlugin(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IClusterNativeNodeOperations :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IClusterNativeNodeOperations>
    {
        IClusterNativeNodeOperations(std::nullptr_t = nullptr) noexcept {}
        IClusterNativeNodeOperations(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IClusterNativeNodeOperationsPlugin :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IClusterNativeNodeOperationsPlugin>
    {
        IClusterNativeNodeOperationsPlugin(std::nullptr_t = nullptr) noexcept {}
        IClusterNativeNodeOperationsPlugin(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IClusterUpdateServices :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IClusterUpdateServices>
    {
        IClusterUpdateServices(std::nullptr_t = nullptr) noexcept {}
        IClusterUpdateServices(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IInstallUpdateTaskResult :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IInstallUpdateTaskResult>
    {
        IInstallUpdateTaskResult(std::nullptr_t = nullptr) noexcept {}
        IInstallUpdateTaskResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IInstallUpdateTaskResultFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IInstallUpdateTaskResultFactory>
    {
        IInstallUpdateTaskResultFactory(std::nullptr_t = nullptr) noexcept {}
        IInstallUpdateTaskResultFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IRollbackUpdateTaskResult :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IRollbackUpdateTaskResult>
    {
        IRollbackUpdateTaskResult(std::nullptr_t = nullptr) noexcept {}
        IRollbackUpdateTaskResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IRollbackUpdateTaskResultFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IRollbackUpdateTaskResultFactory>
    {
        IRollbackUpdateTaskResultFactory(std::nullptr_t = nullptr) noexcept {}
        IRollbackUpdateTaskResultFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IScanUpdateTaskResult :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IScanUpdateTaskResult>
    {
        IScanUpdateTaskResult(std::nullptr_t = nullptr) noexcept {}
        IScanUpdateTaskResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IScanUpdateTaskResultFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IScanUpdateTaskResultFactory>
    {
        IScanUpdateTaskResultFactory(std::nullptr_t = nullptr) noexcept {}
        IScanUpdateTaskResultFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IStageUpdateTaskResult :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IStageUpdateTaskResult>
    {
        IStageUpdateTaskResult(std::nullptr_t = nullptr) noexcept {}
        IStageUpdateTaskResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IStageUpdateTaskResultFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IStageUpdateTaskResultFactory>
    {
        IStageUpdateTaskResultFactory(std::nullptr_t = nullptr) noexcept {}
        IStageUpdateTaskResultFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IUpdateCredential :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IUpdateCredential>
    {
        IUpdateCredential(std::nullptr_t = nullptr) noexcept {}
        IUpdateCredential(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IUpdateCredentialFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IUpdateCredentialFactory>
    {
        IUpdateCredentialFactory(std::nullptr_t = nullptr) noexcept {}
        IUpdateCredentialFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IUpdateInstallRecord :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IUpdateInstallRecord>
    {
        IUpdateInstallRecord(std::nullptr_t = nullptr) noexcept {}
        IUpdateInstallRecord(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IUpdateInstallRecordFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IUpdateInstallRecordFactory>
    {
        IUpdateInstallRecordFactory(std::nullptr_t = nullptr) noexcept {}
        IUpdateInstallRecordFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IUpdateInstaller :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IUpdateInstaller>
    {
        IUpdateInstaller(std::nullptr_t = nullptr) noexcept {}
        IUpdateInstaller(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IUpdateInstallerPlugin :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IUpdateInstallerPlugin>
    {
        IUpdateInstallerPlugin(std::nullptr_t = nullptr) noexcept {}
        IUpdateInstallerPlugin(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IUpdateOperationResult :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IUpdateOperationResult>
    {
        IUpdateOperationResult(std::nullptr_t = nullptr) noexcept {}
        IUpdateOperationResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IUpdateOperationResultFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IUpdateOperationResultFactory>
    {
        IUpdateOperationResultFactory(std::nullptr_t = nullptr) noexcept {}
        IUpdateOperationResultFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IUpdatePendingOperationResult :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IUpdatePendingOperationResult>
    {
        IUpdatePendingOperationResult(std::nullptr_t = nullptr) noexcept {}
        IUpdatePendingOperationResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IUpdatePendingOperationResultFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IUpdatePendingOperationResultFactory>
    {
        IUpdatePendingOperationResultFactory(std::nullptr_t = nullptr) noexcept {}
        IUpdatePendingOperationResultFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IUpdatePluginVersionInfo :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IUpdatePluginVersionInfo>
    {
        IUpdatePluginVersionInfo(std::nullptr_t = nullptr) noexcept {}
        IUpdatePluginVersionInfo(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IUpdatePluginVersionInfoFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IUpdatePluginVersionInfoFactory>
    {
        IUpdatePluginVersionInfoFactory(std::nullptr_t = nullptr) noexcept {}
        IUpdatePluginVersionInfoFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IUpdateRecipeNodeValidationInfoRecord :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IUpdateRecipeNodeValidationInfoRecord>
    {
        IUpdateRecipeNodeValidationInfoRecord(std::nullptr_t = nullptr) noexcept {}
        IUpdateRecipeNodeValidationInfoRecord(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IUpdateRecipeNodeValidationInfoRecordFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IUpdateRecipeNodeValidationInfoRecordFactory>
    {
        IUpdateRecipeNodeValidationInfoRecordFactory(std::nullptr_t = nullptr) noexcept {}
        IUpdateRecipeNodeValidationInfoRecordFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IUpdateScanRecord :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IUpdateScanRecord>
    {
        IUpdateScanRecord(std::nullptr_t = nullptr) noexcept {}
        IUpdateScanRecord(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IUpdateScanRecordFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IUpdateScanRecordFactory>
    {
        IUpdateScanRecordFactory(std::nullptr_t = nullptr) noexcept {}
        IUpdateScanRecordFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IUpdateStageRecord :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IUpdateStageRecord>
    {
        IUpdateStageRecord(std::nullptr_t = nullptr) noexcept {}
        IUpdateStageRecord(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IUpdateStageRecordFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IUpdateStageRecordFactory>
    {
        IUpdateStageRecordFactory(std::nullptr_t = nullptr) noexcept {}
        IUpdateStageRecordFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IUpdateTaskResult :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IUpdateTaskResult>
    {
        IUpdateTaskResult(std::nullptr_t = nullptr) noexcept {}
        IUpdateTaskResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IUpdateTaskResultFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IUpdateTaskResultFactory>
    {
        IUpdateTaskResultFactory(std::nullptr_t = nullptr) noexcept {}
        IUpdateTaskResultFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IUpdateValidationLogMessage :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IUpdateValidationLogMessage>
    {
        IUpdateValidationLogMessage(std::nullptr_t = nullptr) noexcept {}
        IUpdateValidationLogMessage(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IUpdateValidationLogMessageFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IUpdateValidationLogMessageFactory>
    {
        IUpdateValidationLogMessageFactory(std::nullptr_t = nullptr) noexcept {}
        IUpdateValidationLogMessageFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IValidateAllNodesUpdateRecipeResult :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IValidateAllNodesUpdateRecipeResult>
    {
        IValidateAllNodesUpdateRecipeResult(std::nullptr_t = nullptr) noexcept {}
        IValidateAllNodesUpdateRecipeResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IValidateAllNodesUpdateRecipeResultFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IValidateAllNodesUpdateRecipeResultFactory>
    {
        IValidateAllNodesUpdateRecipeResultFactory(std::nullptr_t = nullptr) noexcept {}
        IValidateAllNodesUpdateRecipeResultFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IValidateClusterEnvironmentResult :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IValidateClusterEnvironmentResult>
    {
        IValidateClusterEnvironmentResult(std::nullptr_t = nullptr) noexcept {}
        IValidateClusterEnvironmentResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IValidateClusterEnvironmentResultFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IValidateClusterEnvironmentResultFactory>
    {
        IValidateClusterEnvironmentResultFactory(std::nullptr_t = nullptr) noexcept {}
        IValidateClusterEnvironmentResultFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
