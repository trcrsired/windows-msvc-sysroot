// C++/WinRT v2.0.250303.1

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Management_Update_Cluster_0_H
#define WINRT_Windows_Management_Update_Cluster_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename K, typename V> struct WINRT_IMPL_EMPTY_BASES IMapView;
    template <typename K, typename V> struct WINRT_IMPL_EMPTY_BASES IMap;
    template <typename T> struct WINRT_IMPL_EMPTY_BASES IVectorView;
}
WINRT_EXPORT namespace winrt::Windows::Management::Update::Cluster
{
    enum class ClusterNativeUpdateCompletionStatus : int32_t
    {
        Completed = 0,
        Failed = 1,
        Canceled = 2,
    };
    enum class ClusterNativeUpdateCredentialStatus : int32_t
    {
        Success = 0,
        NoSuchCredential = 1,
        ErrorRetrievingCredential = 2,
    };
    enum class ClusterNativeUpdateEnvironmentValidationStatus : int32_t
    {
        Approved = 0,
        ApprovedWithWarnings = 1,
        Rejected = 2,
    };
    enum class ClusterNativeUpdateLogLevel : int32_t
    {
        Debug = 0,
        Verbose = 1,
        Info = 2,
        Warning = 3,
        Error = 4,
    };
    enum class ClusterNativeUpdateOperationStatus : int32_t
    {
        Success = 0,
        Failed = 1,
        Pending = 2,
        Canceled = 3,
    };
    struct IAcquireEnvironmentInfoResult;
    struct IAcquireEnvironmentInfoResultFactory;
    struct IAreRebootsPendingResult;
    struct IAreRebootsPendingResultFactory;
    struct IClusterNativeEnvironmentOperations;
    struct IClusterNativeEnvironmentOperationsPlugin;
    struct IClusterNativeNodeOperations;
    struct IClusterNativeNodeOperationsPlugin;
    struct IClusterUpdateServices;
    struct IInstallUpdateTaskResult;
    struct IInstallUpdateTaskResultFactory;
    struct IRollbackUpdateTaskResult;
    struct IRollbackUpdateTaskResultFactory;
    struct IScanUpdateTaskResult;
    struct IScanUpdateTaskResultFactory;
    struct IStageUpdateTaskResult;
    struct IStageUpdateTaskResultFactory;
    struct IUpdateCredential;
    struct IUpdateCredentialFactory;
    struct IUpdateInstallRecord;
    struct IUpdateInstallRecordFactory;
    struct IUpdateInstaller;
    struct IUpdateInstallerPlugin;
    struct IUpdateOperationResult;
    struct IUpdateOperationResultFactory;
    struct IUpdatePendingOperationResult;
    struct IUpdatePendingOperationResultFactory;
    struct IUpdatePluginVersionInfo;
    struct IUpdatePluginVersionInfoFactory;
    struct IUpdateRecipeNodeValidationInfoRecord;
    struct IUpdateRecipeNodeValidationInfoRecordFactory;
    struct IUpdateScanRecord;
    struct IUpdateScanRecordFactory;
    struct IUpdateStageRecord;
    struct IUpdateStageRecordFactory;
    struct IUpdateTaskResult;
    struct IUpdateTaskResultFactory;
    struct IUpdateValidationLogMessage;
    struct IUpdateValidationLogMessageFactory;
    struct IValidateAllNodesUpdateRecipeResult;
    struct IValidateAllNodesUpdateRecipeResultFactory;
    struct IValidateClusterEnvironmentResult;
    struct IValidateClusterEnvironmentResultFactory;
    struct AcquireEnvironmentInfoResult;
    struct AreRebootsPendingResult;
    struct ClusterUpdateServices;
    struct InstallUpdateTaskResult;
    struct RollbackUpdateTaskResult;
    struct ScanUpdateTaskResult;
    struct StageUpdateTaskResult;
    struct UpdateCredential;
    struct UpdateInstallRecord;
    struct UpdateOperationResult;
    struct UpdatePendingOperationResult;
    struct UpdatePluginVersionInfo;
    struct UpdateRecipeNodeValidationInfoRecord;
    struct UpdateScanRecord;
    struct UpdateStageRecord;
    struct UpdateTaskResult;
    struct UpdateValidationLogMessage;
    struct ValidateAllNodesUpdateRecipeResult;
    struct ValidateClusterEnvironmentResult;
    struct ClusterNativeUpdatingContract;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::Management::Update::Cluster::IAcquireEnvironmentInfoResult>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Management::Update::Cluster::IAcquireEnvironmentInfoResultFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Management::Update::Cluster::IAreRebootsPendingResult>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Management::Update::Cluster::IAreRebootsPendingResultFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Management::Update::Cluster::IClusterNativeEnvironmentOperations>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Management::Update::Cluster::IClusterNativeEnvironmentOperationsPlugin>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperations>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperationsPlugin>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Management::Update::Cluster::IClusterUpdateServices>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Management::Update::Cluster::IInstallUpdateTaskResult>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Management::Update::Cluster::IInstallUpdateTaskResultFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Management::Update::Cluster::IRollbackUpdateTaskResult>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Management::Update::Cluster::IRollbackUpdateTaskResultFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Management::Update::Cluster::IScanUpdateTaskResult>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Management::Update::Cluster::IScanUpdateTaskResultFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Management::Update::Cluster::IStageUpdateTaskResult>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Management::Update::Cluster::IStageUpdateTaskResultFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Management::Update::Cluster::IUpdateCredential>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Management::Update::Cluster::IUpdateCredentialFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Management::Update::Cluster::IUpdateInstallRecord>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Management::Update::Cluster::IUpdateInstallRecordFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Management::Update::Cluster::IUpdateInstaller>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Management::Update::Cluster::IUpdateInstallerPlugin>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Management::Update::Cluster::IUpdateOperationResult>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Management::Update::Cluster::IUpdateOperationResultFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Management::Update::Cluster::IUpdatePendingOperationResult>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Management::Update::Cluster::IUpdatePendingOperationResultFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Management::Update::Cluster::IUpdatePluginVersionInfo>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Management::Update::Cluster::IUpdatePluginVersionInfoFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Management::Update::Cluster::IUpdateRecipeNodeValidationInfoRecord>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Management::Update::Cluster::IUpdateRecipeNodeValidationInfoRecordFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Management::Update::Cluster::IUpdateScanRecord>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Management::Update::Cluster::IUpdateScanRecordFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Management::Update::Cluster::IUpdateStageRecord>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Management::Update::Cluster::IUpdateStageRecordFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Management::Update::Cluster::IUpdateTaskResult>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Management::Update::Cluster::IUpdateTaskResultFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Management::Update::Cluster::IUpdateValidationLogMessage>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Management::Update::Cluster::IUpdateValidationLogMessageFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Management::Update::Cluster::IValidateAllNodesUpdateRecipeResult>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Management::Update::Cluster::IValidateAllNodesUpdateRecipeResultFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Management::Update::Cluster::IValidateClusterEnvironmentResult>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Management::Update::Cluster::IValidateClusterEnvironmentResultFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Management::Update::Cluster::AcquireEnvironmentInfoResult>{ using type = class_category; };
    template <> struct category<winrt::Windows::Management::Update::Cluster::AreRebootsPendingResult>{ using type = class_category; };
    template <> struct category<winrt::Windows::Management::Update::Cluster::ClusterUpdateServices>{ using type = class_category; };
    template <> struct category<winrt::Windows::Management::Update::Cluster::InstallUpdateTaskResult>{ using type = class_category; };
    template <> struct category<winrt::Windows::Management::Update::Cluster::RollbackUpdateTaskResult>{ using type = class_category; };
    template <> struct category<winrt::Windows::Management::Update::Cluster::ScanUpdateTaskResult>{ using type = class_category; };
    template <> struct category<winrt::Windows::Management::Update::Cluster::StageUpdateTaskResult>{ using type = class_category; };
    template <> struct category<winrt::Windows::Management::Update::Cluster::UpdateCredential>{ using type = class_category; };
    template <> struct category<winrt::Windows::Management::Update::Cluster::UpdateInstallRecord>{ using type = class_category; };
    template <> struct category<winrt::Windows::Management::Update::Cluster::UpdateOperationResult>{ using type = class_category; };
    template <> struct category<winrt::Windows::Management::Update::Cluster::UpdatePendingOperationResult>{ using type = class_category; };
    template <> struct category<winrt::Windows::Management::Update::Cluster::UpdatePluginVersionInfo>{ using type = class_category; };
    template <> struct category<winrt::Windows::Management::Update::Cluster::UpdateRecipeNodeValidationInfoRecord>{ using type = class_category; };
    template <> struct category<winrt::Windows::Management::Update::Cluster::UpdateScanRecord>{ using type = class_category; };
    template <> struct category<winrt::Windows::Management::Update::Cluster::UpdateStageRecord>{ using type = class_category; };
    template <> struct category<winrt::Windows::Management::Update::Cluster::UpdateTaskResult>{ using type = class_category; };
    template <> struct category<winrt::Windows::Management::Update::Cluster::UpdateValidationLogMessage>{ using type = class_category; };
    template <> struct category<winrt::Windows::Management::Update::Cluster::ValidateAllNodesUpdateRecipeResult>{ using type = class_category; };
    template <> struct category<winrt::Windows::Management::Update::Cluster::ValidateClusterEnvironmentResult>{ using type = class_category; };
    template <> struct category<winrt::Windows::Management::Update::Cluster::ClusterNativeUpdateCompletionStatus>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Management::Update::Cluster::ClusterNativeUpdateCredentialStatus>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Management::Update::Cluster::ClusterNativeUpdateEnvironmentValidationStatus>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Management::Update::Cluster::ClusterNativeUpdateLogLevel>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Management::Update::Cluster::ClusterNativeUpdateOperationStatus>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::AcquireEnvironmentInfoResult> = L"Windows.Management.Update.Cluster.AcquireEnvironmentInfoResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::AreRebootsPendingResult> = L"Windows.Management.Update.Cluster.AreRebootsPendingResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::ClusterUpdateServices> = L"Windows.Management.Update.Cluster.ClusterUpdateServices";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::InstallUpdateTaskResult> = L"Windows.Management.Update.Cluster.InstallUpdateTaskResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::RollbackUpdateTaskResult> = L"Windows.Management.Update.Cluster.RollbackUpdateTaskResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::ScanUpdateTaskResult> = L"Windows.Management.Update.Cluster.ScanUpdateTaskResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::StageUpdateTaskResult> = L"Windows.Management.Update.Cluster.StageUpdateTaskResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::UpdateCredential> = L"Windows.Management.Update.Cluster.UpdateCredential";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::UpdateInstallRecord> = L"Windows.Management.Update.Cluster.UpdateInstallRecord";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::UpdateOperationResult> = L"Windows.Management.Update.Cluster.UpdateOperationResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::UpdatePendingOperationResult> = L"Windows.Management.Update.Cluster.UpdatePendingOperationResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::UpdatePluginVersionInfo> = L"Windows.Management.Update.Cluster.UpdatePluginVersionInfo";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::UpdateRecipeNodeValidationInfoRecord> = L"Windows.Management.Update.Cluster.UpdateRecipeNodeValidationInfoRecord";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::UpdateScanRecord> = L"Windows.Management.Update.Cluster.UpdateScanRecord";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::UpdateStageRecord> = L"Windows.Management.Update.Cluster.UpdateStageRecord";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::UpdateTaskResult> = L"Windows.Management.Update.Cluster.UpdateTaskResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::UpdateValidationLogMessage> = L"Windows.Management.Update.Cluster.UpdateValidationLogMessage";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::ValidateAllNodesUpdateRecipeResult> = L"Windows.Management.Update.Cluster.ValidateAllNodesUpdateRecipeResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::ValidateClusterEnvironmentResult> = L"Windows.Management.Update.Cluster.ValidateClusterEnvironmentResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::ClusterNativeUpdateCompletionStatus> = L"Windows.Management.Update.Cluster.ClusterNativeUpdateCompletionStatus";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::ClusterNativeUpdateCredentialStatus> = L"Windows.Management.Update.Cluster.ClusterNativeUpdateCredentialStatus";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::ClusterNativeUpdateEnvironmentValidationStatus> = L"Windows.Management.Update.Cluster.ClusterNativeUpdateEnvironmentValidationStatus";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::ClusterNativeUpdateLogLevel> = L"Windows.Management.Update.Cluster.ClusterNativeUpdateLogLevel";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::ClusterNativeUpdateOperationStatus> = L"Windows.Management.Update.Cluster.ClusterNativeUpdateOperationStatus";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::IAcquireEnvironmentInfoResult> = L"Windows.Management.Update.Cluster.IAcquireEnvironmentInfoResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::IAcquireEnvironmentInfoResultFactory> = L"Windows.Management.Update.Cluster.IAcquireEnvironmentInfoResultFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::IAreRebootsPendingResult> = L"Windows.Management.Update.Cluster.IAreRebootsPendingResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::IAreRebootsPendingResultFactory> = L"Windows.Management.Update.Cluster.IAreRebootsPendingResultFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::IClusterNativeEnvironmentOperations> = L"Windows.Management.Update.Cluster.IClusterNativeEnvironmentOperations";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::IClusterNativeEnvironmentOperationsPlugin> = L"Windows.Management.Update.Cluster.IClusterNativeEnvironmentOperationsPlugin";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperations> = L"Windows.Management.Update.Cluster.IClusterNativeNodeOperations";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperationsPlugin> = L"Windows.Management.Update.Cluster.IClusterNativeNodeOperationsPlugin";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::IClusterUpdateServices> = L"Windows.Management.Update.Cluster.IClusterUpdateServices";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::IInstallUpdateTaskResult> = L"Windows.Management.Update.Cluster.IInstallUpdateTaskResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::IInstallUpdateTaskResultFactory> = L"Windows.Management.Update.Cluster.IInstallUpdateTaskResultFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::IRollbackUpdateTaskResult> = L"Windows.Management.Update.Cluster.IRollbackUpdateTaskResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::IRollbackUpdateTaskResultFactory> = L"Windows.Management.Update.Cluster.IRollbackUpdateTaskResultFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::IScanUpdateTaskResult> = L"Windows.Management.Update.Cluster.IScanUpdateTaskResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::IScanUpdateTaskResultFactory> = L"Windows.Management.Update.Cluster.IScanUpdateTaskResultFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::IStageUpdateTaskResult> = L"Windows.Management.Update.Cluster.IStageUpdateTaskResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::IStageUpdateTaskResultFactory> = L"Windows.Management.Update.Cluster.IStageUpdateTaskResultFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::IUpdateCredential> = L"Windows.Management.Update.Cluster.IUpdateCredential";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::IUpdateCredentialFactory> = L"Windows.Management.Update.Cluster.IUpdateCredentialFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::IUpdateInstallRecord> = L"Windows.Management.Update.Cluster.IUpdateInstallRecord";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::IUpdateInstallRecordFactory> = L"Windows.Management.Update.Cluster.IUpdateInstallRecordFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::IUpdateInstaller> = L"Windows.Management.Update.Cluster.IUpdateInstaller";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::IUpdateInstallerPlugin> = L"Windows.Management.Update.Cluster.IUpdateInstallerPlugin";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::IUpdateOperationResult> = L"Windows.Management.Update.Cluster.IUpdateOperationResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::IUpdateOperationResultFactory> = L"Windows.Management.Update.Cluster.IUpdateOperationResultFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::IUpdatePendingOperationResult> = L"Windows.Management.Update.Cluster.IUpdatePendingOperationResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::IUpdatePendingOperationResultFactory> = L"Windows.Management.Update.Cluster.IUpdatePendingOperationResultFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::IUpdatePluginVersionInfo> = L"Windows.Management.Update.Cluster.IUpdatePluginVersionInfo";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::IUpdatePluginVersionInfoFactory> = L"Windows.Management.Update.Cluster.IUpdatePluginVersionInfoFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::IUpdateRecipeNodeValidationInfoRecord> = L"Windows.Management.Update.Cluster.IUpdateRecipeNodeValidationInfoRecord";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::IUpdateRecipeNodeValidationInfoRecordFactory> = L"Windows.Management.Update.Cluster.IUpdateRecipeNodeValidationInfoRecordFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::IUpdateScanRecord> = L"Windows.Management.Update.Cluster.IUpdateScanRecord";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::IUpdateScanRecordFactory> = L"Windows.Management.Update.Cluster.IUpdateScanRecordFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::IUpdateStageRecord> = L"Windows.Management.Update.Cluster.IUpdateStageRecord";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::IUpdateStageRecordFactory> = L"Windows.Management.Update.Cluster.IUpdateStageRecordFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::IUpdateTaskResult> = L"Windows.Management.Update.Cluster.IUpdateTaskResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::IUpdateTaskResultFactory> = L"Windows.Management.Update.Cluster.IUpdateTaskResultFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::IUpdateValidationLogMessage> = L"Windows.Management.Update.Cluster.IUpdateValidationLogMessage";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::IUpdateValidationLogMessageFactory> = L"Windows.Management.Update.Cluster.IUpdateValidationLogMessageFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::IValidateAllNodesUpdateRecipeResult> = L"Windows.Management.Update.Cluster.IValidateAllNodesUpdateRecipeResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::IValidateAllNodesUpdateRecipeResultFactory> = L"Windows.Management.Update.Cluster.IValidateAllNodesUpdateRecipeResultFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::IValidateClusterEnvironmentResult> = L"Windows.Management.Update.Cluster.IValidateClusterEnvironmentResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::IValidateClusterEnvironmentResultFactory> = L"Windows.Management.Update.Cluster.IValidateClusterEnvironmentResultFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Update::Cluster::ClusterNativeUpdatingContract> = L"Windows.Management.Update.Cluster.ClusterNativeUpdatingContract";
    template <> inline constexpr guid guid_v<winrt::Windows::Management::Update::Cluster::IAcquireEnvironmentInfoResult>{ 0xB720E3A4,0x9A34,0x51C1,{ 0xA1,0xFA,0x0C,0x66,0x73,0xBE,0xF6,0x89 } }; // B720E3A4-9A34-51C1-A1FA-0C6673BEF689
    template <> inline constexpr guid guid_v<winrt::Windows::Management::Update::Cluster::IAcquireEnvironmentInfoResultFactory>{ 0xBBE87F45,0x0125,0x5B6D,{ 0xB9,0xDE,0x05,0xEF,0xFC,0x98,0xBE,0xCB } }; // BBE87F45-0125-5B6D-B9DE-05EFFC98BECB
    template <> inline constexpr guid guid_v<winrt::Windows::Management::Update::Cluster::IAreRebootsPendingResult>{ 0xA0C93FFD,0x8409,0x5FE1,{ 0x87,0x6B,0xD5,0x9D,0x5D,0x99,0x51,0xB5 } }; // A0C93FFD-8409-5FE1-876B-D59D5D9951B5
    template <> inline constexpr guid guid_v<winrt::Windows::Management::Update::Cluster::IAreRebootsPendingResultFactory>{ 0x801C7304,0x1FDF,0x59B4,{ 0x9E,0xF6,0xAD,0xBD,0x05,0x44,0xD9,0x8F } }; // 801C7304-1FDF-59B4-9EF6-ADBD0544D98F
    template <> inline constexpr guid guid_v<winrt::Windows::Management::Update::Cluster::IClusterNativeEnvironmentOperations>{ 0xA6D3D05E,0x1CFE,0x5363,{ 0xB7,0x45,0xC6,0x98,0x1D,0x0E,0x6B,0x25 } }; // A6D3D05E-1CFE-5363-B745-C6981D0E6B25
    template <> inline constexpr guid guid_v<winrt::Windows::Management::Update::Cluster::IClusterNativeEnvironmentOperationsPlugin>{ 0x534B9984,0x3201,0x5A90,{ 0xA4,0x2B,0x42,0xD9,0xC9,0x8C,0x96,0x1A } }; // 534B9984-3201-5A90-A42B-42D9C98C961A
    template <> inline constexpr guid guid_v<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperations>{ 0xCE23DB69,0xB72B,0x5204,{ 0x9D,0x1C,0xC5,0x3D,0x0B,0x2D,0x80,0x3D } }; // CE23DB69-B72B-5204-9D1C-C53D0B2D803D
    template <> inline constexpr guid guid_v<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperationsPlugin>{ 0x5F7A457C,0xE9D3,0x5CEC,{ 0xA9,0x67,0x0D,0xA9,0xD9,0x5F,0xD6,0xF4 } }; // 5F7A457C-E9D3-5CEC-A967-0DA9D95FD6F4
    template <> inline constexpr guid guid_v<winrt::Windows::Management::Update::Cluster::IClusterUpdateServices>{ 0x38461E68,0x1445,0x53E3,{ 0xB9,0x14,0xCE,0x19,0xE3,0xB7,0x30,0xC4 } }; // 38461E68-1445-53E3-B914-CE19E3B730C4
    template <> inline constexpr guid guid_v<winrt::Windows::Management::Update::Cluster::IInstallUpdateTaskResult>{ 0xD519090A,0x4E93,0x5916,{ 0x92,0xBB,0x93,0x56,0xDA,0x52,0x34,0x4B } }; // D519090A-4E93-5916-92BB-9356DA52344B
    template <> inline constexpr guid guid_v<winrt::Windows::Management::Update::Cluster::IInstallUpdateTaskResultFactory>{ 0x07473356,0x1A87,0x554D,{ 0x9C,0x14,0x48,0x9C,0x0D,0x69,0xB2,0x58 } }; // 07473356-1A87-554D-9C14-489C0D69B258
    template <> inline constexpr guid guid_v<winrt::Windows::Management::Update::Cluster::IRollbackUpdateTaskResult>{ 0x477E2A95,0xBCB6,0x5044,{ 0xAD,0x3D,0xE4,0x18,0x0E,0xFC,0xF1,0xBE } }; // 477E2A95-BCB6-5044-AD3D-E4180EFCF1BE
    template <> inline constexpr guid guid_v<winrt::Windows::Management::Update::Cluster::IRollbackUpdateTaskResultFactory>{ 0x2DBD5BC3,0xEFDF,0x5046,{ 0x89,0x54,0x78,0x98,0x17,0x96,0xF0,0x16 } }; // 2DBD5BC3-EFDF-5046-8954-78981796F016
    template <> inline constexpr guid guid_v<winrt::Windows::Management::Update::Cluster::IScanUpdateTaskResult>{ 0x24E9F302,0xA976,0x5148,{ 0xB1,0x09,0x51,0x00,0xAC,0x1A,0x50,0xED } }; // 24E9F302-A976-5148-B109-5100AC1A50ED
    template <> inline constexpr guid guid_v<winrt::Windows::Management::Update::Cluster::IScanUpdateTaskResultFactory>{ 0x12594AD2,0x5312,0x5F8A,{ 0x8F,0xA2,0x2D,0xA4,0xA3,0x4E,0x33,0x19 } }; // 12594AD2-5312-5F8A-8FA2-2DA4A34E3319
    template <> inline constexpr guid guid_v<winrt::Windows::Management::Update::Cluster::IStageUpdateTaskResult>{ 0xC926ADD1,0x335C,0x57F7,{ 0x8D,0xAC,0x1C,0xE2,0xFC,0xE6,0x50,0x60 } }; // C926ADD1-335C-57F7-8DAC-1CE2FCE65060
    template <> inline constexpr guid guid_v<winrt::Windows::Management::Update::Cluster::IStageUpdateTaskResultFactory>{ 0x2256548A,0xF175,0x5143,{ 0x88,0x8A,0xF4,0x9F,0x27,0xA3,0x4E,0xD3 } }; // 2256548A-F175-5143-888A-F49F27A34ED3
    template <> inline constexpr guid guid_v<winrt::Windows::Management::Update::Cluster::IUpdateCredential>{ 0xDE6D09B1,0xBCDB,0x5D6D,{ 0x9D,0x46,0x72,0x50,0xB8,0x53,0xFF,0xFE } }; // DE6D09B1-BCDB-5D6D-9D46-7250B853FFFE
    template <> inline constexpr guid guid_v<winrt::Windows::Management::Update::Cluster::IUpdateCredentialFactory>{ 0xE251A298,0x44B1,0x5455,{ 0x8B,0x44,0x59,0x71,0xBD,0x51,0x6F,0x09 } }; // E251A298-44B1-5455-8B44-5971BD516F09
    template <> inline constexpr guid guid_v<winrt::Windows::Management::Update::Cluster::IUpdateInstallRecord>{ 0x38118797,0xDC5D,0x5727,{ 0x89,0xFF,0x5B,0x8A,0x44,0xB3,0xF5,0x3B } }; // 38118797-DC5D-5727-89FF-5B8A44B3F53B
    template <> inline constexpr guid guid_v<winrt::Windows::Management::Update::Cluster::IUpdateInstallRecordFactory>{ 0x9B6C54B5,0xD229,0x5147,{ 0x9D,0x6E,0x16,0xE4,0x7F,0x23,0x17,0xDB } }; // 9B6C54B5-D229-5147-9D6E-16E47F2317DB
    template <> inline constexpr guid guid_v<winrt::Windows::Management::Update::Cluster::IUpdateInstaller>{ 0xC8CFE973,0xDAAF,0x57D3,{ 0x8D,0x3B,0x59,0xEE,0xC0,0xB0,0x82,0xEA } }; // C8CFE973-DAAF-57D3-8D3B-59EEC0B082EA
    template <> inline constexpr guid guid_v<winrt::Windows::Management::Update::Cluster::IUpdateInstallerPlugin>{ 0x61122FAA,0x0CD8,0x5A98,{ 0x89,0x38,0x5C,0x1F,0x88,0xC6,0x32,0xC6 } }; // 61122FAA-0CD8-5A98-8938-5C1F88C632C6
    template <> inline constexpr guid guid_v<winrt::Windows::Management::Update::Cluster::IUpdateOperationResult>{ 0x9FC35275,0x3EB7,0x5785,{ 0xBB,0x32,0x0E,0x37,0xBB,0x52,0xCF,0x41 } }; // 9FC35275-3EB7-5785-BB32-0E37BB52CF41
    template <> inline constexpr guid guid_v<winrt::Windows::Management::Update::Cluster::IUpdateOperationResultFactory>{ 0xFF53C580,0xE92C,0x50A9,{ 0x88,0x11,0xA0,0x57,0xD5,0xA2,0xA5,0x23 } }; // FF53C580-E92C-50A9-8811-A057D5A2A523
    template <> inline constexpr guid guid_v<winrt::Windows::Management::Update::Cluster::IUpdatePendingOperationResult>{ 0x0F83B557,0xE96A,0x5F19,{ 0x94,0x92,0x99,0xFC,0x8B,0xD8,0x3C,0x5D } }; // 0F83B557-E96A-5F19-9492-99FC8BD83C5D
    template <> inline constexpr guid guid_v<winrt::Windows::Management::Update::Cluster::IUpdatePendingOperationResultFactory>{ 0x45A3B731,0xD513,0x5BAF,{ 0xBB,0x44,0x68,0xB9,0x7A,0x93,0x83,0x08 } }; // 45A3B731-D513-5BAF-BB44-68B97A938308
    template <> inline constexpr guid guid_v<winrt::Windows::Management::Update::Cluster::IUpdatePluginVersionInfo>{ 0x0901AF2E,0xB340,0x5E7E,{ 0x98,0x98,0x51,0x6F,0xC9,0x6A,0xDD,0x89 } }; // 0901AF2E-B340-5E7E-9898-516FC96ADD89
    template <> inline constexpr guid guid_v<winrt::Windows::Management::Update::Cluster::IUpdatePluginVersionInfoFactory>{ 0x56BB98CE,0x543C,0x59F2,{ 0x81,0x0D,0x4D,0x2C,0xF8,0x4E,0xE4,0x0E } }; // 56BB98CE-543C-59F2-810D-4D2CF84EE40E
    template <> inline constexpr guid guid_v<winrt::Windows::Management::Update::Cluster::IUpdateRecipeNodeValidationInfoRecord>{ 0x55DFFF15,0x5556,0x51C4,{ 0x80,0xC2,0xAF,0x03,0xF3,0x85,0xD4,0x29 } }; // 55DFFF15-5556-51C4-80C2-AF03F385D429
    template <> inline constexpr guid guid_v<winrt::Windows::Management::Update::Cluster::IUpdateRecipeNodeValidationInfoRecordFactory>{ 0xE0FA2776,0xDD6C,0x5139,{ 0xA9,0x3E,0x23,0xE2,0x18,0x89,0x21,0xAF } }; // E0FA2776-DD6C-5139-A93E-23E2188921AF
    template <> inline constexpr guid guid_v<winrt::Windows::Management::Update::Cluster::IUpdateScanRecord>{ 0xC54AF4FB,0xD316,0x5480,{ 0x95,0x4F,0xD1,0xEB,0x51,0x96,0x1D,0xE5 } }; // C54AF4FB-D316-5480-954F-D1EB51961DE5
    template <> inline constexpr guid guid_v<winrt::Windows::Management::Update::Cluster::IUpdateScanRecordFactory>{ 0xD9A3860E,0xA05A,0x58C3,{ 0xB3,0x68,0x07,0xBB,0x35,0x00,0x72,0xD0 } }; // D9A3860E-A05A-58C3-B368-07BB350072D0
    template <> inline constexpr guid guid_v<winrt::Windows::Management::Update::Cluster::IUpdateStageRecord>{ 0x60D8EDF9,0xEB18,0x59D1,{ 0xBA,0xDB,0x5D,0x86,0x2F,0x93,0x52,0xE9 } }; // 60D8EDF9-EB18-59D1-BADB-5D862F9352E9
    template <> inline constexpr guid guid_v<winrt::Windows::Management::Update::Cluster::IUpdateStageRecordFactory>{ 0xB5C12A84,0xEBF5,0x505B,{ 0x87,0x2F,0x4D,0xE7,0x1F,0xDD,0xA7,0xE8 } }; // B5C12A84-EBF5-505B-872F-4DE71FDDA7E8
    template <> inline constexpr guid guid_v<winrt::Windows::Management::Update::Cluster::IUpdateTaskResult>{ 0x3FDD9274,0x7686,0x5CB9,{ 0x89,0xE4,0x6D,0x61,0x8E,0xD3,0xA4,0x7A } }; // 3FDD9274-7686-5CB9-89E4-6D618ED3A47A
    template <> inline constexpr guid guid_v<winrt::Windows::Management::Update::Cluster::IUpdateTaskResultFactory>{ 0xC5AE4CE3,0x7D1E,0x50BF,{ 0xA6,0x4A,0x95,0xF3,0x47,0x83,0xFC,0x8C } }; // C5AE4CE3-7D1E-50BF-A64A-95F34783FC8C
    template <> inline constexpr guid guid_v<winrt::Windows::Management::Update::Cluster::IUpdateValidationLogMessage>{ 0x1E55BBD5,0x648F,0x584C,{ 0x90,0x4D,0xAE,0x6A,0x05,0x3E,0x80,0xC8 } }; // 1E55BBD5-648F-584C-904D-AE6A053E80C8
    template <> inline constexpr guid guid_v<winrt::Windows::Management::Update::Cluster::IUpdateValidationLogMessageFactory>{ 0x9005A873,0x4C0B,0x5C78,{ 0xA4,0x33,0xBE,0x50,0x95,0xB0,0x22,0x6E } }; // 9005A873-4C0B-5C78-A433-BE5095B0226E
    template <> inline constexpr guid guid_v<winrt::Windows::Management::Update::Cluster::IValidateAllNodesUpdateRecipeResult>{ 0x4A6ADCD4,0xB621,0x5CA6,{ 0xB8,0x2E,0x6C,0xE9,0x6D,0x2A,0x3B,0x93 } }; // 4A6ADCD4-B621-5CA6-B82E-6CE96D2A3B93
    template <> inline constexpr guid guid_v<winrt::Windows::Management::Update::Cluster::IValidateAllNodesUpdateRecipeResultFactory>{ 0x00A73E76,0x0643,0x5793,{ 0xBA,0x1C,0x6E,0x7A,0xA8,0x9F,0xDB,0xA6 } }; // 00A73E76-0643-5793-BA1C-6E7AA89FDBA6
    template <> inline constexpr guid guid_v<winrt::Windows::Management::Update::Cluster::IValidateClusterEnvironmentResult>{ 0x4DF22928,0x9FDE,0x5C16,{ 0x96,0x1C,0xAA,0xB2,0x6F,0x4A,0x77,0x80 } }; // 4DF22928-9FDE-5C16-961C-AAB26F4A7780
    template <> inline constexpr guid guid_v<winrt::Windows::Management::Update::Cluster::IValidateClusterEnvironmentResultFactory>{ 0x9222E2A5,0x7106,0x5DC4,{ 0x86,0x0E,0x66,0x34,0xE4,0x72,0x99,0xFC } }; // 9222E2A5-7106-5DC4-860E-6634E47299FC
    template <> struct default_interface<winrt::Windows::Management::Update::Cluster::AcquireEnvironmentInfoResult>{ using type = winrt::Windows::Management::Update::Cluster::IAcquireEnvironmentInfoResult; };
    template <> struct default_interface<winrt::Windows::Management::Update::Cluster::AreRebootsPendingResult>{ using type = winrt::Windows::Management::Update::Cluster::IAreRebootsPendingResult; };
    template <> struct default_interface<winrt::Windows::Management::Update::Cluster::ClusterUpdateServices>{ using type = winrt::Windows::Management::Update::Cluster::IClusterUpdateServices; };
    template <> struct default_interface<winrt::Windows::Management::Update::Cluster::InstallUpdateTaskResult>{ using type = winrt::Windows::Management::Update::Cluster::IInstallUpdateTaskResult; };
    template <> struct default_interface<winrt::Windows::Management::Update::Cluster::RollbackUpdateTaskResult>{ using type = winrt::Windows::Management::Update::Cluster::IRollbackUpdateTaskResult; };
    template <> struct default_interface<winrt::Windows::Management::Update::Cluster::ScanUpdateTaskResult>{ using type = winrt::Windows::Management::Update::Cluster::IScanUpdateTaskResult; };
    template <> struct default_interface<winrt::Windows::Management::Update::Cluster::StageUpdateTaskResult>{ using type = winrt::Windows::Management::Update::Cluster::IStageUpdateTaskResult; };
    template <> struct default_interface<winrt::Windows::Management::Update::Cluster::UpdateCredential>{ using type = winrt::Windows::Management::Update::Cluster::IUpdateCredential; };
    template <> struct default_interface<winrt::Windows::Management::Update::Cluster::UpdateInstallRecord>{ using type = winrt::Windows::Management::Update::Cluster::IUpdateInstallRecord; };
    template <> struct default_interface<winrt::Windows::Management::Update::Cluster::UpdateOperationResult>{ using type = winrt::Windows::Management::Update::Cluster::IUpdateOperationResult; };
    template <> struct default_interface<winrt::Windows::Management::Update::Cluster::UpdatePendingOperationResult>{ using type = winrt::Windows::Management::Update::Cluster::IUpdatePendingOperationResult; };
    template <> struct default_interface<winrt::Windows::Management::Update::Cluster::UpdatePluginVersionInfo>{ using type = winrt::Windows::Management::Update::Cluster::IUpdatePluginVersionInfo; };
    template <> struct default_interface<winrt::Windows::Management::Update::Cluster::UpdateRecipeNodeValidationInfoRecord>{ using type = winrt::Windows::Management::Update::Cluster::IUpdateRecipeNodeValidationInfoRecord; };
    template <> struct default_interface<winrt::Windows::Management::Update::Cluster::UpdateScanRecord>{ using type = winrt::Windows::Management::Update::Cluster::IUpdateScanRecord; };
    template <> struct default_interface<winrt::Windows::Management::Update::Cluster::UpdateStageRecord>{ using type = winrt::Windows::Management::Update::Cluster::IUpdateStageRecord; };
    template <> struct default_interface<winrt::Windows::Management::Update::Cluster::UpdateTaskResult>{ using type = winrt::Windows::Management::Update::Cluster::IUpdateTaskResult; };
    template <> struct default_interface<winrt::Windows::Management::Update::Cluster::UpdateValidationLogMessage>{ using type = winrt::Windows::Management::Update::Cluster::IUpdateValidationLogMessage; };
    template <> struct default_interface<winrt::Windows::Management::Update::Cluster::ValidateAllNodesUpdateRecipeResult>{ using type = winrt::Windows::Management::Update::Cluster::IValidateAllNodesUpdateRecipeResult; };
    template <> struct default_interface<winrt::Windows::Management::Update::Cluster::ValidateClusterEnvironmentResult>{ using type = winrt::Windows::Management::Update::Cluster::IValidateClusterEnvironmentResult; };
    template <> struct abi<winrt::Windows::Management::Update::Cluster::IAcquireEnvironmentInfoResult>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_Result(void**) noexcept = 0;
            virtual int32_t __stdcall get_EnvironmentInfo(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Management::Update::Cluster::IAcquireEnvironmentInfoResultFactory>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Management::Update::Cluster::IAreRebootsPendingResult>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_Result(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsRebootPending(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Management::Update::Cluster::IAreRebootsPendingResultFactory>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, bool, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Management::Update::Cluster::IClusterNativeEnvironmentOperations>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall AcquireNodeEnvironmentInfo(void**) noexcept = 0;
            virtual int32_t __stdcall ValidateClusterEnvironment(void*, void**) noexcept = 0;
            virtual int32_t __stdcall StartPreUpdateRunOperation(void**) noexcept = 0;
            virtual int32_t __stdcall IsPreUpdateRunOperationComplete(void**) noexcept = 0;
            virtual int32_t __stdcall StartPostUpdateRunOperation(void**) noexcept = 0;
            virtual int32_t __stdcall IsPostUpdateRunOperationComplete(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Management::Update::Cluster::IClusterNativeEnvironmentOperationsPlugin>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall get_FriendlyName(void**) noexcept = 0;
            virtual int32_t __stdcall get_Description(void**) noexcept = 0;
            virtual int32_t __stdcall get_Version(void**) noexcept = 0;
            virtual int32_t __stdcall get_DefaultOptions(void**) noexcept = 0;
            virtual int32_t __stdcall CreateEnvironmentOperations(void*, void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperations>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall AreAdditionalRebootsPending(void**) noexcept = 0;
            virtual int32_t __stdcall StartPreRebootOperation(void**) noexcept = 0;
            virtual int32_t __stdcall IsPreRebootOperationComplete(void**) noexcept = 0;
            virtual int32_t __stdcall StartPostRebootOperation(void**) noexcept = 0;
            virtual int32_t __stdcall IsPostRebootOperationComplete(void**) noexcept = 0;
            virtual int32_t __stdcall StartPreDrainOperation(void**) noexcept = 0;
            virtual int32_t __stdcall IsPreDrainOperationComplete(void**) noexcept = 0;
            virtual int32_t __stdcall StartPostResumeOperation(void**) noexcept = 0;
            virtual int32_t __stdcall IsPostResumeOperationComplete(void**) noexcept = 0;
            virtual int32_t __stdcall StartPreUpdateRunOperation(void**) noexcept = 0;
            virtual int32_t __stdcall IsPreUpdateRunOperationComplete(void**) noexcept = 0;
            virtual int32_t __stdcall StartPostUpdateRunOperation(void**) noexcept = 0;
            virtual int32_t __stdcall IsPostUpdateRunOperationComplete(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperationsPlugin>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall get_FriendlyName(void**) noexcept = 0;
            virtual int32_t __stdcall get_Description(void**) noexcept = 0;
            virtual int32_t __stdcall get_Version(void**) noexcept = 0;
            virtual int32_t __stdcall get_DefaultOptions(void**) noexcept = 0;
            virtual int32_t __stdcall CreateNodeOperations(void*, void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Management::Update::Cluster::IClusterUpdateServices>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall WriteLogEntry(int32_t, void*) noexcept = 0;
            virtual int32_t __stdcall ReportProgress(int32_t, int32_t, void*) noexcept = 0;
            virtual int32_t __stdcall GetPluginCredential(void*, void**) noexcept = 0;
            virtual int32_t __stdcall IsOperationMarkedAsCanceled(bool*) noexcept = 0;
            virtual int32_t __stdcall SaveRunStateInformation(void*) noexcept = 0;
            virtual int32_t __stdcall GetRunStateInformation(void**) noexcept = 0;
            virtual int32_t __stdcall SaveRunIndependentInformation(void*) noexcept = 0;
            virtual int32_t __stdcall GetRunIndependentInformation(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Management::Update::Cluster::IInstallUpdateTaskResult>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_Result(void**) noexcept = 0;
            virtual int32_t __stdcall get_InstallRecords(void**) noexcept = 0;
            virtual int32_t __stdcall get_ShouldRollback(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Management::Update::Cluster::IInstallUpdateTaskResultFactory>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void*, bool, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Management::Update::Cluster::IRollbackUpdateTaskResult>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_Result(void**) noexcept = 0;
            virtual int32_t __stdcall get_InstallRecords(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Management::Update::Cluster::IRollbackUpdateTaskResultFactory>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Management::Update::Cluster::IScanUpdateTaskResult>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_Result(void**) noexcept = 0;
            virtual int32_t __stdcall get_ScanRecords(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Management::Update::Cluster::IScanUpdateTaskResultFactory>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Management::Update::Cluster::IStageUpdateTaskResult>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_Result(void**) noexcept = 0;
            virtual int32_t __stdcall get_StageRecords(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Management::Update::Cluster::IStageUpdateTaskResultFactory>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Management::Update::Cluster::IUpdateCredential>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_UserName(void**) noexcept = 0;
            virtual int32_t __stdcall get_Password(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Management::Update::Cluster::IUpdateCredentialFactory>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(int32_t, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Management::Update::Cluster::IUpdateInstallRecord>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_UpdateId(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsRebootRequired(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_FailureMessage(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Management::Update::Cluster::IUpdateInstallRecordFactory>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, bool, int32_t, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Management::Update::Cluster::IUpdateInstaller>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall Scan(void**) noexcept = 0;
            virtual int32_t __stdcall Stage(void*, void**) noexcept = 0;
            virtual int32_t __stdcall Install(void*, void**) noexcept = 0;
            virtual int32_t __stdcall Rollback(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ShouldUsePluginSpecificReboot(bool*, void**) noexcept = 0;
            virtual int32_t __stdcall RebootNode(void**) noexcept = 0;
            virtual int32_t __stdcall AcquireUpdateListValidationInfo(void**, void**) noexcept = 0;
            virtual int32_t __stdcall ValidateAllNodesUpdateRecipe(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Management::Update::Cluster::IUpdateInstallerPlugin>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall get_FriendlyName(void**) noexcept = 0;
            virtual int32_t __stdcall get_Description(void**) noexcept = 0;
            virtual int32_t __stdcall get_Version(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsUpdateRollbackSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_DefaultOptions(void**) noexcept = 0;
            virtual int32_t __stdcall CreateUpdateInstaller(void*, void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Management::Update::Cluster::IUpdateOperationResult>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_StatusCode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Reason(void**) noexcept = 0;
            virtual int32_t __stdcall get_ErrorCode(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Management::Update::Cluster::IUpdateOperationResultFactory>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(int32_t, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateInstance2(int32_t, void*, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Management::Update::Cluster::IUpdatePendingOperationResult>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_Result(void**) noexcept = 0;
            virtual int32_t __stdcall get_SuggestedRecheckInterval(int64_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Management::Update::Cluster::IUpdatePendingOperationResultFactory>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, int64_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Management::Update::Cluster::IUpdatePluginVersionInfo>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_MajorVersion(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MinorVersion(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_PatchLevel(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Management::Update::Cluster::IUpdatePluginVersionInfoFactory>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(uint32_t, uint32_t, uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Management::Update::Cluster::IUpdateRecipeNodeValidationInfoRecord>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_NodeName(void**) noexcept = 0;
            virtual int32_t __stdcall get_RecipeValidationInfo(void**) noexcept = 0;
            virtual int32_t __stdcall get_ScanResults(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Management::Update::Cluster::IUpdateRecipeNodeValidationInfoRecordFactory>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Management::Update::Cluster::IUpdateScanRecord>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_UpdateId(void**) noexcept = 0;
            virtual int32_t __stdcall get_UpdateTitle(void**) noexcept = 0;
            virtual int32_t __stdcall get_UpdateDescription(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsRebootRequired(bool*) noexcept = 0;
            virtual int32_t __stdcall get_PluginSpecificData(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Management::Update::Cluster::IUpdateScanRecordFactory>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void*, void*, bool, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Management::Update::Cluster::IUpdateStageRecord>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_UpdateId(void**) noexcept = 0;
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_FailureMessage(void**) noexcept = 0;
            virtual int32_t __stdcall get_UpdatedPluginSpecificData(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Management::Update::Cluster::IUpdateStageRecordFactory>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, int32_t, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateInstance2(void*, int32_t, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Management::Update::Cluster::IUpdateTaskResult>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_Succeeded(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Reason(void**) noexcept = 0;
            virtual int32_t __stdcall get_ErrorCode(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Management::Update::Cluster::IUpdateTaskResultFactory>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(bool, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateInstance2(bool, void*, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Management::Update::Cluster::IUpdateValidationLogMessage>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_Severity(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Message(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Management::Update::Cluster::IUpdateValidationLogMessageFactory>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(int32_t, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Management::Update::Cluster::IValidateAllNodesUpdateRecipeResult>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_Result(void**) noexcept = 0;
            virtual int32_t __stdcall get_AreUpdatesApproved(bool*) noexcept = 0;
            virtual int32_t __stdcall get_ValidationMessages(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Management::Update::Cluster::IValidateAllNodesUpdateRecipeResultFactory>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, bool, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Management::Update::Cluster::IValidateClusterEnvironmentResult>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_Result(void**) noexcept = 0;
            virtual int32_t __stdcall get_ApprovalStatus(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ValidationMessages(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Management::Update::Cluster::IValidateClusterEnvironmentResultFactory>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, int32_t, void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Management_Update_Cluster_IAcquireEnvironmentInfoResult
    {
        [[nodiscard]] auto Result() const;
        [[nodiscard]] auto EnvironmentInfo() const;
    };
    template <> struct consume<winrt::Windows::Management::Update::Cluster::IAcquireEnvironmentInfoResult>
    {
        template <typename D> using type = consume_Windows_Management_Update_Cluster_IAcquireEnvironmentInfoResult<D>;
    };
    template <typename D>
    struct consume_Windows_Management_Update_Cluster_IAcquireEnvironmentInfoResultFactory
    {
        auto CreateInstance(winrt::Windows::Management::Update::Cluster::UpdateTaskResult const& result, param::hstring const& environmentInfo) const;
    };
    template <> struct consume<winrt::Windows::Management::Update::Cluster::IAcquireEnvironmentInfoResultFactory>
    {
        template <typename D> using type = consume_Windows_Management_Update_Cluster_IAcquireEnvironmentInfoResultFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Management_Update_Cluster_IAreRebootsPendingResult
    {
        [[nodiscard]] auto Result() const;
        [[nodiscard]] auto IsRebootPending() const;
    };
    template <> struct consume<winrt::Windows::Management::Update::Cluster::IAreRebootsPendingResult>
    {
        template <typename D> using type = consume_Windows_Management_Update_Cluster_IAreRebootsPendingResult<D>;
    };
    template <typename D>
    struct consume_Windows_Management_Update_Cluster_IAreRebootsPendingResultFactory
    {
        auto CreateInstance(winrt::Windows::Management::Update::Cluster::UpdateOperationResult const& result, bool isRebootPending) const;
    };
    template <> struct consume<winrt::Windows::Management::Update::Cluster::IAreRebootsPendingResultFactory>
    {
        template <typename D> using type = consume_Windows_Management_Update_Cluster_IAreRebootsPendingResultFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Management_Update_Cluster_IClusterNativeEnvironmentOperations
    {
        auto AcquireNodeEnvironmentInfo() const;
        auto ValidateClusterEnvironment(param::map_view<hstring, hstring> const& nodeEnvironmentInfo) const;
        auto StartPreUpdateRunOperation() const;
        auto IsPreUpdateRunOperationComplete() const;
        auto StartPostUpdateRunOperation() const;
        auto IsPostUpdateRunOperationComplete() const;
    };
    template <> struct consume<winrt::Windows::Management::Update::Cluster::IClusterNativeEnvironmentOperations>
    {
        template <typename D> using type = consume_Windows_Management_Update_Cluster_IClusterNativeEnvironmentOperations<D>;
    };
    template <typename D>
    struct consume_Windows_Management_Update_Cluster_IClusterNativeEnvironmentOperationsPlugin
    {
        [[nodiscard]] auto Name() const;
        [[nodiscard]] auto FriendlyName() const;
        [[nodiscard]] auto Description() const;
        [[nodiscard]] auto Version() const;
        [[nodiscard]] auto DefaultOptions() const;
        auto CreateEnvironmentOperations(param::hstring const& clusterName, param::hstring const& runId, param::map<hstring, hstring> const& options, winrt::Windows::Management::Update::Cluster::ClusterUpdateServices const& updateServices) const;
    };
    template <> struct consume<winrt::Windows::Management::Update::Cluster::IClusterNativeEnvironmentOperationsPlugin>
    {
        template <typename D> using type = consume_Windows_Management_Update_Cluster_IClusterNativeEnvironmentOperationsPlugin<D>;
    };
    template <typename D>
    struct consume_Windows_Management_Update_Cluster_IClusterNativeNodeOperations
    {
        auto AreAdditionalRebootsPending() const;
        auto StartPreRebootOperation() const;
        auto IsPreRebootOperationComplete() const;
        auto StartPostRebootOperation() const;
        auto IsPostRebootOperationComplete() const;
        auto StartPreDrainOperation() const;
        auto IsPreDrainOperationComplete() const;
        auto StartPostResumeOperation() const;
        auto IsPostResumeOperationComplete() const;
        auto StartPreUpdateRunOperation() const;
        auto IsPreUpdateRunOperationComplete() const;
        auto StartPostUpdateRunOperation() const;
        auto IsPostUpdateRunOperationComplete() const;
    };
    template <> struct consume<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperations>
    {
        template <typename D> using type = consume_Windows_Management_Update_Cluster_IClusterNativeNodeOperations<D>;
    };
    template <typename D>
    struct consume_Windows_Management_Update_Cluster_IClusterNativeNodeOperationsPlugin
    {
        [[nodiscard]] auto Name() const;
        [[nodiscard]] auto FriendlyName() const;
        [[nodiscard]] auto Description() const;
        [[nodiscard]] auto Version() const;
        [[nodiscard]] auto DefaultOptions() const;
        auto CreateNodeOperations(param::hstring const& clusterName, param::hstring const& runId, param::map<hstring, hstring> const& options, winrt::Windows::Management::Update::Cluster::ClusterUpdateServices const& updateServices) const;
    };
    template <> struct consume<winrt::Windows::Management::Update::Cluster::IClusterNativeNodeOperationsPlugin>
    {
        template <typename D> using type = consume_Windows_Management_Update_Cluster_IClusterNativeNodeOperationsPlugin<D>;
    };
    template <typename D>
    struct consume_Windows_Management_Update_Cluster_IClusterUpdateServices
    {
        auto WriteLogEntry(winrt::Windows::Management::Update::Cluster::ClusterNativeUpdateLogLevel const& level, param::hstring const& message) const;
        auto ReportProgress(int32_t currentStep, int32_t maxSteps, param::hstring const& message) const;
        auto GetPluginCredential(param::hstring const& credentialId) const;
        auto IsOperationMarkedAsCanceled() const;
        auto SaveRunStateInformation(param::hstring const& persistentInformation) const;
        auto GetRunStateInformation() const;
        auto SaveRunIndependentInformation(param::hstring const& persistentInformation) const;
        auto GetRunIndependentInformation() const;
    };
    template <> struct consume<winrt::Windows::Management::Update::Cluster::IClusterUpdateServices>
    {
        template <typename D> using type = consume_Windows_Management_Update_Cluster_IClusterUpdateServices<D>;
    };
    template <typename D>
    struct consume_Windows_Management_Update_Cluster_IInstallUpdateTaskResult
    {
        [[nodiscard]] auto Result() const;
        [[nodiscard]] auto InstallRecords() const;
        [[nodiscard]] auto ShouldRollback() const;
    };
    template <> struct consume<winrt::Windows::Management::Update::Cluster::IInstallUpdateTaskResult>
    {
        template <typename D> using type = consume_Windows_Management_Update_Cluster_IInstallUpdateTaskResult<D>;
    };
    template <typename D>
    struct consume_Windows_Management_Update_Cluster_IInstallUpdateTaskResultFactory
    {
        auto CreateInstance(winrt::Windows::Management::Update::Cluster::UpdateTaskResult const& result, param::vector_view<winrt::Windows::Management::Update::Cluster::UpdateInstallRecord> const& installRecords, bool shouldRollback) const;
    };
    template <> struct consume<winrt::Windows::Management::Update::Cluster::IInstallUpdateTaskResultFactory>
    {
        template <typename D> using type = consume_Windows_Management_Update_Cluster_IInstallUpdateTaskResultFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Management_Update_Cluster_IRollbackUpdateTaskResult
    {
        [[nodiscard]] auto Result() const;
        [[nodiscard]] auto InstallRecords() const;
    };
    template <> struct consume<winrt::Windows::Management::Update::Cluster::IRollbackUpdateTaskResult>
    {
        template <typename D> using type = consume_Windows_Management_Update_Cluster_IRollbackUpdateTaskResult<D>;
    };
    template <typename D>
    struct consume_Windows_Management_Update_Cluster_IRollbackUpdateTaskResultFactory
    {
        auto CreateInstance(winrt::Windows::Management::Update::Cluster::UpdateTaskResult const& result, param::vector_view<winrt::Windows::Management::Update::Cluster::UpdateInstallRecord> const& installRecords) const;
    };
    template <> struct consume<winrt::Windows::Management::Update::Cluster::IRollbackUpdateTaskResultFactory>
    {
        template <typename D> using type = consume_Windows_Management_Update_Cluster_IRollbackUpdateTaskResultFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Management_Update_Cluster_IScanUpdateTaskResult
    {
        [[nodiscard]] auto Result() const;
        [[nodiscard]] auto ScanRecords() const;
    };
    template <> struct consume<winrt::Windows::Management::Update::Cluster::IScanUpdateTaskResult>
    {
        template <typename D> using type = consume_Windows_Management_Update_Cluster_IScanUpdateTaskResult<D>;
    };
    template <typename D>
    struct consume_Windows_Management_Update_Cluster_IScanUpdateTaskResultFactory
    {
        auto CreateInstance(winrt::Windows::Management::Update::Cluster::UpdateTaskResult const& result, param::vector_view<winrt::Windows::Management::Update::Cluster::UpdateScanRecord> const& scanRecords) const;
    };
    template <> struct consume<winrt::Windows::Management::Update::Cluster::IScanUpdateTaskResultFactory>
    {
        template <typename D> using type = consume_Windows_Management_Update_Cluster_IScanUpdateTaskResultFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Management_Update_Cluster_IStageUpdateTaskResult
    {
        [[nodiscard]] auto Result() const;
        [[nodiscard]] auto StageRecords() const;
    };
    template <> struct consume<winrt::Windows::Management::Update::Cluster::IStageUpdateTaskResult>
    {
        template <typename D> using type = consume_Windows_Management_Update_Cluster_IStageUpdateTaskResult<D>;
    };
    template <typename D>
    struct consume_Windows_Management_Update_Cluster_IStageUpdateTaskResultFactory
    {
        auto CreateInstance(winrt::Windows::Management::Update::Cluster::UpdateTaskResult const& result, param::vector_view<winrt::Windows::Management::Update::Cluster::UpdateStageRecord> const& stageRecords) const;
    };
    template <> struct consume<winrt::Windows::Management::Update::Cluster::IStageUpdateTaskResultFactory>
    {
        template <typename D> using type = consume_Windows_Management_Update_Cluster_IStageUpdateTaskResultFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Management_Update_Cluster_IUpdateCredential
    {
        [[nodiscard]] auto Status() const;
        [[nodiscard]] auto UserName() const;
        [[nodiscard]] auto Password() const;
    };
    template <> struct consume<winrt::Windows::Management::Update::Cluster::IUpdateCredential>
    {
        template <typename D> using type = consume_Windows_Management_Update_Cluster_IUpdateCredential<D>;
    };
    template <typename D>
    struct consume_Windows_Management_Update_Cluster_IUpdateCredentialFactory
    {
        auto CreateInstance(winrt::Windows::Management::Update::Cluster::ClusterNativeUpdateCredentialStatus const& status, param::hstring const& userName, param::hstring const& password) const;
    };
    template <> struct consume<winrt::Windows::Management::Update::Cluster::IUpdateCredentialFactory>
    {
        template <typename D> using type = consume_Windows_Management_Update_Cluster_IUpdateCredentialFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Management_Update_Cluster_IUpdateInstallRecord
    {
        [[nodiscard]] auto UpdateId() const;
        [[nodiscard]] auto IsRebootRequired() const;
        [[nodiscard]] auto Status() const;
        [[nodiscard]] auto FailureMessage() const;
    };
    template <> struct consume<winrt::Windows::Management::Update::Cluster::IUpdateInstallRecord>
    {
        template <typename D> using type = consume_Windows_Management_Update_Cluster_IUpdateInstallRecord<D>;
    };
    template <typename D>
    struct consume_Windows_Management_Update_Cluster_IUpdateInstallRecordFactory
    {
        auto CreateInstance(param::hstring const& updateId, bool isRebootRequired, winrt::Windows::Management::Update::Cluster::ClusterNativeUpdateCompletionStatus const& status, param::hstring const& failureMessage) const;
    };
    template <> struct consume<winrt::Windows::Management::Update::Cluster::IUpdateInstallRecordFactory>
    {
        template <typename D> using type = consume_Windows_Management_Update_Cluster_IUpdateInstallRecordFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Management_Update_Cluster_IUpdateInstaller
    {
        auto Scan() const;
        auto Stage(param::vector_view<winrt::Windows::Management::Update::Cluster::UpdateScanRecord> const& updatesToStage) const;
        auto Install(param::vector_view<winrt::Windows::Management::Update::Cluster::UpdateScanRecord> const& updatesToInstall) const;
        auto Rollback(param::vector_view<winrt::Windows::Management::Update::Cluster::UpdateScanRecord> const& updatesToRollback) const;
        auto ShouldUsePluginSpecificReboot(bool& usePluginReboot) const;
        auto RebootNode() const;
        auto AcquireUpdateListValidationInfo(hstring& recipeValidationInfo) const;
        auto ValidateAllNodesUpdateRecipe(param::vector_view<winrt::Windows::Management::Update::Cluster::UpdateRecipeNodeValidationInfoRecord> const& allNodesRecipeValidationInfo) const;
    };
    template <> struct consume<winrt::Windows::Management::Update::Cluster::IUpdateInstaller>
    {
        template <typename D> using type = consume_Windows_Management_Update_Cluster_IUpdateInstaller<D>;
    };
    template <typename D>
    struct consume_Windows_Management_Update_Cluster_IUpdateInstallerPlugin
    {
        [[nodiscard]] auto Name() const;
        [[nodiscard]] auto FriendlyName() const;
        [[nodiscard]] auto Description() const;
        [[nodiscard]] auto Version() const;
        [[nodiscard]] auto IsUpdateRollbackSupported() const;
        [[nodiscard]] auto DefaultOptions() const;
        auto CreateUpdateInstaller(param::hstring const& clusterName, param::hstring const& runId, param::map<hstring, hstring> const& options, winrt::Windows::Management::Update::Cluster::ClusterUpdateServices const& updateServices) const;
    };
    template <> struct consume<winrt::Windows::Management::Update::Cluster::IUpdateInstallerPlugin>
    {
        template <typename D> using type = consume_Windows_Management_Update_Cluster_IUpdateInstallerPlugin<D>;
    };
    template <typename D>
    struct consume_Windows_Management_Update_Cluster_IUpdateOperationResult
    {
        [[nodiscard]] auto StatusCode() const;
        [[nodiscard]] auto Reason() const;
        [[nodiscard]] auto ErrorCode() const;
    };
    template <> struct consume<winrt::Windows::Management::Update::Cluster::IUpdateOperationResult>
    {
        template <typename D> using type = consume_Windows_Management_Update_Cluster_IUpdateOperationResult<D>;
    };
    template <typename D>
    struct consume_Windows_Management_Update_Cluster_IUpdateOperationResultFactory
    {
        auto CreateInstance(winrt::Windows::Management::Update::Cluster::ClusterNativeUpdateOperationStatus const& status, param::hstring const& reason) const;
        auto CreateInstance2(winrt::Windows::Management::Update::Cluster::ClusterNativeUpdateOperationStatus const& status, param::hstring const& reason, int32_t errorCode) const;
    };
    template <> struct consume<winrt::Windows::Management::Update::Cluster::IUpdateOperationResultFactory>
    {
        template <typename D> using type = consume_Windows_Management_Update_Cluster_IUpdateOperationResultFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Management_Update_Cluster_IUpdatePendingOperationResult
    {
        [[nodiscard]] auto Result() const;
        [[nodiscard]] auto SuggestedRecheckInterval() const;
    };
    template <> struct consume<winrt::Windows::Management::Update::Cluster::IUpdatePendingOperationResult>
    {
        template <typename D> using type = consume_Windows_Management_Update_Cluster_IUpdatePendingOperationResult<D>;
    };
    template <typename D>
    struct consume_Windows_Management_Update_Cluster_IUpdatePendingOperationResultFactory
    {
        auto CreateInstance(winrt::Windows::Management::Update::Cluster::UpdateOperationResult const& result, winrt::Windows::Foundation::TimeSpan const& suggestedRecheckInterval) const;
    };
    template <> struct consume<winrt::Windows::Management::Update::Cluster::IUpdatePendingOperationResultFactory>
    {
        template <typename D> using type = consume_Windows_Management_Update_Cluster_IUpdatePendingOperationResultFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Management_Update_Cluster_IUpdatePluginVersionInfo
    {
        [[nodiscard]] auto MajorVersion() const;
        [[nodiscard]] auto MinorVersion() const;
        [[nodiscard]] auto PatchLevel() const;
    };
    template <> struct consume<winrt::Windows::Management::Update::Cluster::IUpdatePluginVersionInfo>
    {
        template <typename D> using type = consume_Windows_Management_Update_Cluster_IUpdatePluginVersionInfo<D>;
    };
    template <typename D>
    struct consume_Windows_Management_Update_Cluster_IUpdatePluginVersionInfoFactory
    {
        auto CreateInstance(uint32_t majorVersion, uint32_t minorVersion, uint32_t patchLevel) const;
    };
    template <> struct consume<winrt::Windows::Management::Update::Cluster::IUpdatePluginVersionInfoFactory>
    {
        template <typename D> using type = consume_Windows_Management_Update_Cluster_IUpdatePluginVersionInfoFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Management_Update_Cluster_IUpdateRecipeNodeValidationInfoRecord
    {
        [[nodiscard]] auto NodeName() const;
        [[nodiscard]] auto RecipeValidationInfo() const;
        [[nodiscard]] auto ScanResults() const;
    };
    template <> struct consume<winrt::Windows::Management::Update::Cluster::IUpdateRecipeNodeValidationInfoRecord>
    {
        template <typename D> using type = consume_Windows_Management_Update_Cluster_IUpdateRecipeNodeValidationInfoRecord<D>;
    };
    template <typename D>
    struct consume_Windows_Management_Update_Cluster_IUpdateRecipeNodeValidationInfoRecordFactory
    {
        auto CreateInstance(param::hstring const& nodeName, param::hstring const& recipeValidationInfo, param::vector_view<winrt::Windows::Management::Update::Cluster::UpdateScanRecord> const& scanResults) const;
    };
    template <> struct consume<winrt::Windows::Management::Update::Cluster::IUpdateRecipeNodeValidationInfoRecordFactory>
    {
        template <typename D> using type = consume_Windows_Management_Update_Cluster_IUpdateRecipeNodeValidationInfoRecordFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Management_Update_Cluster_IUpdateScanRecord
    {
        [[nodiscard]] auto UpdateId() const;
        [[nodiscard]] auto UpdateTitle() const;
        [[nodiscard]] auto UpdateDescription() const;
        [[nodiscard]] auto IsRebootRequired() const;
        [[nodiscard]] auto PluginSpecificData() const;
    };
    template <> struct consume<winrt::Windows::Management::Update::Cluster::IUpdateScanRecord>
    {
        template <typename D> using type = consume_Windows_Management_Update_Cluster_IUpdateScanRecord<D>;
    };
    template <typename D>
    struct consume_Windows_Management_Update_Cluster_IUpdateScanRecordFactory
    {
        auto CreateInstance(param::hstring const& updateId, param::hstring const& updateTitle, param::hstring const& updateDescription, bool isRebootRequired, param::hstring const& pluginSpecificData) const;
    };
    template <> struct consume<winrt::Windows::Management::Update::Cluster::IUpdateScanRecordFactory>
    {
        template <typename D> using type = consume_Windows_Management_Update_Cluster_IUpdateScanRecordFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Management_Update_Cluster_IUpdateStageRecord
    {
        [[nodiscard]] auto UpdateId() const;
        [[nodiscard]] auto Status() const;
        [[nodiscard]] auto FailureMessage() const;
        [[nodiscard]] auto UpdatedPluginSpecificData() const;
    };
    template <> struct consume<winrt::Windows::Management::Update::Cluster::IUpdateStageRecord>
    {
        template <typename D> using type = consume_Windows_Management_Update_Cluster_IUpdateStageRecord<D>;
    };
    template <typename D>
    struct consume_Windows_Management_Update_Cluster_IUpdateStageRecordFactory
    {
        auto CreateInstance(param::hstring const& updateId, winrt::Windows::Management::Update::Cluster::ClusterNativeUpdateCompletionStatus const& status, param::hstring const& failureMessage) const;
        auto CreateInstance2(param::hstring const& updateId, winrt::Windows::Management::Update::Cluster::ClusterNativeUpdateCompletionStatus const& status, param::hstring const& failureMessage, param::hstring const& updatedPluginSpecificData) const;
    };
    template <> struct consume<winrt::Windows::Management::Update::Cluster::IUpdateStageRecordFactory>
    {
        template <typename D> using type = consume_Windows_Management_Update_Cluster_IUpdateStageRecordFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Management_Update_Cluster_IUpdateTaskResult
    {
        [[nodiscard]] auto Succeeded() const;
        [[nodiscard]] auto Reason() const;
        [[nodiscard]] auto ErrorCode() const;
    };
    template <> struct consume<winrt::Windows::Management::Update::Cluster::IUpdateTaskResult>
    {
        template <typename D> using type = consume_Windows_Management_Update_Cluster_IUpdateTaskResult<D>;
    };
    template <typename D>
    struct consume_Windows_Management_Update_Cluster_IUpdateTaskResultFactory
    {
        auto CreateInstance(bool succeeded, param::hstring const& reason) const;
        auto CreateInstance2(bool succeeded, param::hstring const& reason, int32_t errorCode) const;
    };
    template <> struct consume<winrt::Windows::Management::Update::Cluster::IUpdateTaskResultFactory>
    {
        template <typename D> using type = consume_Windows_Management_Update_Cluster_IUpdateTaskResultFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Management_Update_Cluster_IUpdateValidationLogMessage
    {
        [[nodiscard]] auto Severity() const;
        [[nodiscard]] auto Message() const;
    };
    template <> struct consume<winrt::Windows::Management::Update::Cluster::IUpdateValidationLogMessage>
    {
        template <typename D> using type = consume_Windows_Management_Update_Cluster_IUpdateValidationLogMessage<D>;
    };
    template <typename D>
    struct consume_Windows_Management_Update_Cluster_IUpdateValidationLogMessageFactory
    {
        auto CreateInstance(winrt::Windows::Management::Update::Cluster::ClusterNativeUpdateLogLevel const& severity, param::hstring const& message) const;
    };
    template <> struct consume<winrt::Windows::Management::Update::Cluster::IUpdateValidationLogMessageFactory>
    {
        template <typename D> using type = consume_Windows_Management_Update_Cluster_IUpdateValidationLogMessageFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Management_Update_Cluster_IValidateAllNodesUpdateRecipeResult
    {
        [[nodiscard]] auto Result() const;
        [[nodiscard]] auto AreUpdatesApproved() const;
        [[nodiscard]] auto ValidationMessages() const;
    };
    template <> struct consume<winrt::Windows::Management::Update::Cluster::IValidateAllNodesUpdateRecipeResult>
    {
        template <typename D> using type = consume_Windows_Management_Update_Cluster_IValidateAllNodesUpdateRecipeResult<D>;
    };
    template <typename D>
    struct consume_Windows_Management_Update_Cluster_IValidateAllNodesUpdateRecipeResultFactory
    {
        auto CreateInstance(winrt::Windows::Management::Update::Cluster::UpdateTaskResult const& result, bool areUpdatesApproved, param::vector_view<winrt::Windows::Management::Update::Cluster::UpdateValidationLogMessage> const& validationMessages) const;
    };
    template <> struct consume<winrt::Windows::Management::Update::Cluster::IValidateAllNodesUpdateRecipeResultFactory>
    {
        template <typename D> using type = consume_Windows_Management_Update_Cluster_IValidateAllNodesUpdateRecipeResultFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Management_Update_Cluster_IValidateClusterEnvironmentResult
    {
        [[nodiscard]] auto Result() const;
        [[nodiscard]] auto ApprovalStatus() const;
        [[nodiscard]] auto ValidationMessages() const;
    };
    template <> struct consume<winrt::Windows::Management::Update::Cluster::IValidateClusterEnvironmentResult>
    {
        template <typename D> using type = consume_Windows_Management_Update_Cluster_IValidateClusterEnvironmentResult<D>;
    };
    template <typename D>
    struct consume_Windows_Management_Update_Cluster_IValidateClusterEnvironmentResultFactory
    {
        auto CreateInstance(winrt::Windows::Management::Update::Cluster::UpdateTaskResult const& result, winrt::Windows::Management::Update::Cluster::ClusterNativeUpdateEnvironmentValidationStatus const& approvalStatus, param::vector_view<winrt::Windows::Management::Update::Cluster::UpdateValidationLogMessage> const& validationMessages) const;
    };
    template <> struct consume<winrt::Windows::Management::Update::Cluster::IValidateClusterEnvironmentResultFactory>
    {
        template <typename D> using type = consume_Windows_Management_Update_Cluster_IValidateClusterEnvironmentResultFactory<D>;
    };
}
#endif
