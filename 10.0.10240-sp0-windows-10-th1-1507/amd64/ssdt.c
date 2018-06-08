// DO NOT MODIFY THIS FILE DIRECTLY!
// author: @TinySecEx
// ssdt database for 10.0.10240-sp0-windows-10-th1-1507 amd64

SDT_NODE static_ssdt_10_0_10240_sp0_windows_10_th1_1507_amd64[441] = {

/*0x000*/	{ "NtAccessCheck" , 8 } ,

/*0x001*/	{ "NtWorkerFactoryWorkerReady" , 1 } ,

/*0x002*/	{ "NtAcceptConnectPort" , 6 } ,

/*0x003*/	{ "NtMapUserPhysicalPagesScatter" , 3 } ,

/*0x004*/	{ "NtWaitForSingleObject" , 3 } ,

/*0x005*/	{ "NtCallbackReturn" , 3 } ,

/*0x006*/	{ "NtReadFile" , 9 } ,

/*0x007*/	{ "NtDeviceIoControlFile" , 10 } ,

/*0x008*/	{ "NtWriteFile" , 9 } ,

/*0x009*/	{ "NtRemoveIoCompletion" , 5 } ,

/*0x00A*/	{ "NtReleaseSemaphore" , 3 } ,

/*0x00B*/	{ "NtReplyWaitReceivePort" , 4 } ,

/*0x00C*/	{ "NtReplyPort" , 2 } ,

/*0x00D*/	{ "NtSetInformationThread" , 4 } ,

/*0x00E*/	{ "NtSetEvent" , 2 } ,

/*0x00F*/	{ "NtClose" , 1 } ,

/*0x010*/	{ "NtQueryObject" , 5 } ,

/*0x011*/	{ "NtQueryInformationFile" , 5 } ,

/*0x012*/	{ "NtOpenKey" , 3 } ,

/*0x013*/	{ "NtEnumerateValueKey" , 6 } ,

/*0x014*/	{ "NtFindAtom" , 3 } ,

/*0x015*/	{ "NtQueryDefaultLocale" , 2 } ,

/*0x016*/	{ "NtQueryKey" , 5 } ,

/*0x017*/	{ "NtQueryValueKey" , 6 } ,

/*0x018*/	{ "NtAllocateVirtualMemory" , 6 } ,

/*0x019*/	{ "NtQueryInformationProcess" , 5 } ,

/*0x01A*/	{ "NtWaitForMultipleObjects32" , 5 } ,

/*0x01B*/	{ "NtWriteFileGather" , 9 } ,

/*0x01C*/	{ "NtSetInformationProcess" , 4 } ,

/*0x01D*/	{ "NtCreateKey" , 7 } ,

/*0x01E*/	{ "NtFreeVirtualMemory" , 4 } ,

/*0x01F*/	{ "NtImpersonateClientOfPort" , 2 } ,

/*0x020*/	{ "NtReleaseMutant" , 2 } ,

/*0x021*/	{ "NtQueryInformationToken" , 5 } ,

/*0x022*/	{ "NtRequestWaitReplyPort" , 3 } ,

/*0x023*/	{ "NtQueryVirtualMemory" , 6 } ,

/*0x024*/	{ "NtOpenThreadToken" , 4 } ,

/*0x025*/	{ "NtQueryInformationThread" , 5 } ,

/*0x026*/	{ "NtOpenProcess" , 4 } ,

/*0x027*/	{ "NtSetInformationFile" , 5 } ,

/*0x028*/	{ "NtMapViewOfSection" , 10 } ,

/*0x029*/	{ "NtAccessCheckAndAuditAlarm" , 11 } ,

/*0x02A*/	{ "NtUnmapViewOfSection" , 2 } ,

/*0x02B*/	{ "NtReplyWaitReceivePortEx" , 5 } ,

/*0x02C*/	{ "NtTerminateProcess" , 2 } ,

/*0x02D*/	{ "NtSetEventBoostPriority" , 1 } ,

/*0x02E*/	{ "NtReadFileScatter" , 9 } ,

/*0x02F*/	{ "NtOpenThreadTokenEx" , 5 } ,

/*0x030*/	{ "NtOpenProcessTokenEx" , 4 } ,

/*0x031*/	{ "NtQueryPerformanceCounter" , 2 } ,

/*0x032*/	{ "NtEnumerateKey" , 6 } ,

/*0x033*/	{ "NtOpenFile" , 6 } ,

/*0x034*/	{ "NtDelayExecution" , 2 } ,

/*0x035*/	{ "NtQueryDirectoryFile" , 11 } ,

/*0x036*/	{ "NtQuerySystemInformation" , 4 } ,

/*0x037*/	{ "NtOpenSection" , 3 } ,

/*0x038*/	{ "NtQueryTimer" , 5 } ,

/*0x039*/	{ "NtFsControlFile" , 10 } ,

/*0x03A*/	{ "NtWriteVirtualMemory" , 5 } ,

/*0x03B*/	{ "NtCloseObjectAuditAlarm" , 3 } ,

/*0x03C*/	{ "NtDuplicateObject" , 7 } ,

/*0x03D*/	{ "NtQueryAttributesFile" , 2 } ,

/*0x03E*/	{ "NtClearEvent" , 1 } ,

/*0x03F*/	{ "NtReadVirtualMemory" , 5 } ,

/*0x040*/	{ "NtOpenEvent" , 3 } ,

/*0x041*/	{ "NtAdjustPrivilegesToken" , 6 } ,

/*0x042*/	{ "NtDuplicateToken" , 6 } ,

/*0x043*/	{ "NtContinue" , 2 } ,

/*0x044*/	{ "NtQueryDefaultUILanguage" , 1 } ,

/*0x045*/	{ "NtQueueApcThread" , 5 } ,

/*0x046*/	{ "NtYieldExecution" , 0 } ,

/*0x047*/	{ "NtAddAtom" , 3 } ,

/*0x048*/	{ "NtCreateEvent" , 5 } ,

/*0x049*/	{ "NtQueryVolumeInformationFile" , 5 } ,

/*0x04A*/	{ "NtCreateSection" , 7 } ,

/*0x04B*/	{ "NtFlushBuffersFile" , 2 } ,

/*0x04C*/	{ "NtApphelpCacheControl" , 2 } ,

/*0x04D*/	{ "NtCreateProcessEx" , 9 } ,

/*0x04E*/	{ "NtCreateThread" , 8 } ,

/*0x04F*/	{ "NtIsProcessInJob" , 2 } ,

/*0x050*/	{ "NtProtectVirtualMemory" , 5 } ,

/*0x051*/	{ "NtQuerySection" , 5 } ,

/*0x052*/	{ "NtResumeThread" , 2 } ,

/*0x053*/	{ "NtTerminateThread" , 2 } ,

/*0x054*/	{ "NtReadRequestData" , 6 } ,

/*0x055*/	{ "NtCreateFile" , 11 } ,

/*0x056*/	{ "NtQueryEvent" , 5 } ,

/*0x057*/	{ "NtWriteRequestData" , 6 } ,

/*0x058*/	{ "NtOpenDirectoryObject" , 3 } ,

/*0x059*/	{ "NtAccessCheckByTypeAndAuditAlarm" , 16 } ,

/*0x05A*/	{ "NtQuerySystemTime" , 1 } ,

/*0x05B*/	{ "NtWaitForMultipleObjects" , 5 } ,

/*0x05C*/	{ "NtSetInformationObject" , 4 } ,

/*0x05D*/	{ "NtCancelIoFile" , 2 } ,

/*0x05E*/	{ "NtTraceEvent" , 4 } ,

/*0x05F*/	{ "NtPowerInformation" , 5 } ,

/*0x060*/	{ "NtSetValueKey" , 6 } ,

/*0x061*/	{ "NtCancelTimer" , 2 } ,

/*0x062*/	{ "NtSetTimer" , 7 } ,

/*0x063*/	{ "NtAccessCheckByType" , 11 } ,

/*0x064*/	{ "NtAccessCheckByTypeResultList" , 11 } ,

/*0x065*/	{ "NtAccessCheckByTypeResultListAndAuditAlarm" , 16 } ,

/*0x066*/	{ "NtAccessCheckByTypeResultListAndAuditAlarmByHandle" , 17 } ,

/*0x067*/	{ "NtAddAtomEx" , 4 } ,

/*0x068*/	{ "NtAddBootEntry" , 2 } ,

/*0x069*/	{ "NtAddDriverEntry" , 2 } ,

/*0x06A*/	{ "NtAdjustGroupsToken" , 6 } ,

/*0x06B*/	{ "NtAdjustTokenClaimsAndDeviceGroups" , 16 } ,

/*0x06C*/	{ "NtAlertResumeThread" , 2 } ,

/*0x06D*/	{ "NtAlertThread" , 1 } ,

/*0x06E*/	{ "NtAlertThreadByThreadId" , 1 } ,

/*0x06F*/	{ "NtAllocateLocallyUniqueId" , 1 } ,

/*0x070*/	{ "NtAllocateReserveObject" , 3 } ,

/*0x071*/	{ "NtAllocateUserPhysicalPages" , 3 } ,

/*0x072*/	{ "NtAllocateUuids" , 4 } ,

/*0x073*/	{ "NtAlpcAcceptConnectPort" , 9 } ,

/*0x074*/	{ "NtAlpcCancelMessage" , 3 } ,

/*0x075*/	{ "NtAlpcConnectPort" , 11 } ,

/*0x076*/	{ "NtAlpcConnectPortEx" , 11 } ,

/*0x077*/	{ "NtAlpcCreatePort" , 3 } ,

/*0x078*/	{ "NtAlpcCreatePortSection" , 6 } ,

/*0x079*/	{ "NtAlpcCreateResourceReserve" , 4 } ,

/*0x07A*/	{ "NtAlpcCreateSectionView" , 3 } ,

/*0x07B*/	{ "NtAlpcCreateSecurityContext" , 3 } ,

/*0x07C*/	{ "NtAlpcDeletePortSection" , 3 } ,

/*0x07D*/	{ "NtAlpcDeleteResourceReserve" , 3 } ,

/*0x07E*/	{ "NtAlpcDeleteSectionView" , 3 } ,

/*0x07F*/	{ "NtAlpcDeleteSecurityContext" , 3 } ,

/*0x080*/	{ "NtAlpcDisconnectPort" , 2 } ,

/*0x081*/	{ "NtAlpcImpersonateClientContainerOfPort" , 3 } ,

/*0x082*/	{ "NtAlpcImpersonateClientOfPort" , 3 } ,

/*0x083*/	{ "NtAlpcOpenSenderProcess" , 6 } ,

/*0x084*/	{ "NtAlpcOpenSenderThread" , 6 } ,

/*0x085*/	{ "NtAlpcQueryInformation" , 5 } ,

/*0x086*/	{ "NtAlpcQueryInformationMessage" , 6 } ,

/*0x087*/	{ "NtAlpcRevokeSecurityContext" , 3 } ,

/*0x088*/	{ "NtAlpcSendWaitReceivePort" , 8 } ,

/*0x089*/	{ "NtAlpcSetInformation" , 4 } ,

/*0x08A*/	{ "NtAreMappedFilesTheSame" , 2 } ,

/*0x08B*/	{ "NtAssignProcessToJobObject" , 2 } ,

/*0x08C*/	{ "NtAssociateWaitCompletionPacket" , 8 } ,

/*0x08D*/	{ "NtCancelIoFileEx" , 3 } ,

/*0x08E*/	{ "NtCancelSynchronousIoFile" , 3 } ,

/*0x08F*/	{ "NtCancelTimer2" , 2 } ,

/*0x090*/	{ "NtCancelWaitCompletionPacket" , 2 } ,

/*0x091*/	{ "NtCommitComplete" , 2 } ,

/*0x092*/	{ "NtCommitEnlistment" , 2 } ,

/*0x093*/	{ "NtCommitTransaction" , 2 } ,

/*0x094*/	{ "NtCompactKeys" , 2 } ,

/*0x095*/	{ "NtCompareObjects" , 2 } ,

/*0x096*/	{ "NtCompareTokens" , 3 } ,

/*0x097*/	{ "NtCompleteConnectPort" , 1 } ,

/*0x098*/	{ "NtCompressKey" , 1 } ,

/*0x099*/	{ "NtConnectPort" , 8 } ,

/*0x09A*/	{ "NtCreateDebugObject" , 4 } ,

/*0x09B*/	{ "NtCreateDirectoryObject" , 3 } ,

/*0x09C*/	{ "NtCreateDirectoryObjectEx" , 5 } ,

/*0x09D*/	{ "NtCreateEnlistment" , 8 } ,

/*0x09E*/	{ "NtCreateEventPair" , 3 } ,

/*0x09F*/	{ "NtCreateIRTimer" , 2 } ,

/*0x0A0*/	{ "NtCreateIoCompletion" , 4 } ,

/*0x0A1*/	{ "NtCreateJobObject" , 3 } ,

/*0x0A2*/	{ "NtCreateJobSet" , 3 } ,

/*0x0A3*/	{ "NtCreateKeyTransacted" , 8 } ,

/*0x0A4*/	{ "NtCreateKeyedEvent" , 4 } ,

/*0x0A5*/	{ "NtCreateLowBoxToken" , 9 } ,

/*0x0A6*/	{ "NtCreateMailslotFile" , 8 } ,

/*0x0A7*/	{ "NtCreateMutant" , 4 } ,

/*0x0A8*/	{ "NtCreateNamedPipeFile" , 14 } ,

/*0x0A9*/	{ "NtCreatePagingFile" , 4 } ,

/*0x0AA*/	{ "NtCreatePartition" , 5 } ,

/*0x0AB*/	{ "NtCreatePort" , 5 } ,

/*0x0AC*/	{ "NtCreatePrivateNamespace" , 4 } ,

/*0x0AD*/	{ "NtCreateProcess" , 8 } ,

/*0x0AE*/	{ "NtCreateProfile" , 9 } ,

/*0x0AF*/	{ "NtCreateProfileEx" , 10 } ,

/*0x0B0*/	{ "NtCreateResourceManager" , 7 } ,

/*0x0B1*/	{ "NtCreateSemaphore" , 5 } ,

/*0x0B2*/	{ "NtCreateSymbolicLinkObject" , 4 } ,

/*0x0B3*/	{ "NtCreateThreadEx" , 11 } ,

/*0x0B4*/	{ "NtCreateTimer" , 4 } ,

/*0x0B5*/	{ "NtCreateTimer2" , 5 } ,

/*0x0B6*/	{ "NtCreateToken" , 13 } ,

/*0x0B7*/	{ "NtCreateTokenEx" , 17 } ,

/*0x0B8*/	{ "NtCreateTransaction" , 10 } ,

/*0x0B9*/	{ "NtCreateTransactionManager" , 6 } ,

/*0x0BA*/	{ "NtCreateUserProcess" , 11 } ,

/*0x0BB*/	{ "NtCreateWaitCompletionPacket" , 3 } ,

/*0x0BC*/	{ "NtCreateWaitablePort" , 5 } ,

/*0x0BD*/	{ "NtCreateWnfStateName" , 7 } ,

/*0x0BE*/	{ "NtCreateWorkerFactory" , 10 } ,

/*0x0BF*/	{ "NtDebugActiveProcess" , 2 } ,

/*0x0C0*/	{ "NtDebugContinue" , 3 } ,

/*0x0C1*/	{ "NtDeleteAtom" , 1 } ,

/*0x0C2*/	{ "NtDeleteBootEntry" , 1 } ,

/*0x0C3*/	{ "NtDeleteDriverEntry" , 1 } ,

/*0x0C4*/	{ "NtDeleteFile" , 1 } ,

/*0x0C5*/	{ "NtDeleteKey" , 1 } ,

/*0x0C6*/	{ "NtDeleteObjectAuditAlarm" , 3 } ,

/*0x0C7*/	{ "NtDeletePrivateNamespace" , 1 } ,

/*0x0C8*/	{ "NtDeleteValueKey" , 2 } ,

/*0x0C9*/	{ "NtDeleteWnfStateData" , 2 } ,

/*0x0CA*/	{ "NtDeleteWnfStateName" , 1 } ,

/*0x0CB*/	{ "NtDisableLastKnownGood" , 0 } ,

/*0x0CC*/	{ "NtDisplayString" , 1 } ,

/*0x0CD*/	{ "NtDrawText" , 1 } ,

/*0x0CE*/	{ "NtEnableLastKnownGood" , 0 } ,

/*0x0CF*/	{ "NtEnumerateBootEntries" , 2 } ,

/*0x0D0*/	{ "NtEnumerateDriverEntries" , 2 } ,

/*0x0D1*/	{ "NtEnumerateSystemEnvironmentValuesEx" , 3 } ,

/*0x0D2*/	{ "NtEnumerateTransactionObject" , 5 } ,

/*0x0D3*/	{ "NtExtendSection" , 2 } ,

/*0x0D4*/	{ "NtFilterBootOption" , 5 } ,

/*0x0D5*/	{ "NtFilterToken" , 6 } ,

/*0x0D6*/	{ "NtFilterTokenEx" , 14 } ,

/*0x0D7*/	{ "NtFlushBuffersFileEx" , 5 } ,

/*0x0D8*/	{ "NtFlushInstallUILanguage" , 2 } ,

/*0x0D9*/	{ "NtFlushInstructionCache" , 3 } ,

/*0x0DA*/	{ "NtFlushKey" , 1 } ,

/*0x0DB*/	{ "NtFlushProcessWriteBuffers" , 0 } ,

/*0x0DC*/	{ "NtFlushVirtualMemory" , 4 } ,

/*0x0DD*/	{ "NtFlushWriteBuffer" , 0 } ,

/*0x0DE*/	{ "NtFreeUserPhysicalPages" , 3 } ,

/*0x0DF*/	{ "NtFreezeRegistry" , 1 } ,

/*0x0E0*/	{ "NtFreezeTransactions" , 2 } ,

/*0x0E1*/	{ "NtGetCachedSigningLevel" , 6 } ,

/*0x0E2*/	{ "NtGetCompleteWnfStateSubscription" , 6 } ,

/*0x0E3*/	{ "NtGetContextThread" , 2 } ,

/*0x0E4*/	{ "NtGetCurrentProcessorNumber" , 0 } ,

/*0x0E5*/	{ "NtGetCurrentProcessorNumberEx" , 1 } ,

/*0x0E6*/	{ "NtGetDevicePowerState" , 2 } ,

/*0x0E7*/	{ "NtGetMUIRegistryInfo" , 3 } ,

/*0x0E8*/	{ "NtGetNextProcess" , 5 } ,

/*0x0E9*/	{ "NtGetNextThread" , 6 } ,

/*0x0EA*/	{ "NtGetNlsSectionPtr" , 5 } ,

/*0x0EB*/	{ "NtGetNotificationResourceManager" , 7 } ,

/*0x0EC*/	{ "NtGetWriteWatch" , 7 } ,

/*0x0ED*/	{ "NtImpersonateAnonymousToken" , 1 } ,

/*0x0EE*/	{ "NtImpersonateThread" , 3 } ,

/*0x0EF*/	{ "NtInitializeNlsFiles" , 3 } ,

/*0x0F0*/	{ "NtInitializeRegistry" , 1 } ,

/*0x0F1*/	{ "NtInitiatePowerAction" , 4 } ,

/*0x0F2*/	{ "NtIsSystemResumeAutomatic" , 0 } ,

/*0x0F3*/	{ "NtIsUILanguageComitted" , 0 } ,

/*0x0F4*/	{ "NtListenPort" , 2 } ,

/*0x0F5*/	{ "NtLoadDriver" , 1 } ,

/*0x0F6*/	{ "NtLoadKey" , 2 } ,

/*0x0F7*/	{ "NtLoadKey2" , 3 } ,

/*0x0F8*/	{ "NtLoadKeyEx" , 8 } ,

/*0x0F9*/	{ "NtLockFile" , 10 } ,

/*0x0FA*/	{ "NtLockProductActivationKeys" , 2 } ,

/*0x0FB*/	{ "NtLockRegistryKey" , 1 } ,

/*0x0FC*/	{ "NtLockVirtualMemory" , 4 } ,

/*0x0FD*/	{ "NtMakePermanentObject" , 1 } ,

/*0x0FE*/	{ "NtMakeTemporaryObject" , 1 } ,

/*0x0FF*/	{ "NtManagePartition" , 5 } ,

/*0x100*/	{ "NtMapCMFModule" , 6 } ,

/*0x101*/	{ "NtMapUserPhysicalPages" , 3 } ,

/*0x102*/	{ "NtModifyBootEntry" , 1 } ,

/*0x103*/	{ "NtModifyDriverEntry" , 1 } ,

/*0x104*/	{ "NtNotifyChangeDirectoryFile" , 9 } ,

/*0x105*/	{ "NtNotifyChangeKey" , 10 } ,

/*0x106*/	{ "NtNotifyChangeMultipleKeys" , 12 } ,

/*0x107*/	{ "NtNotifyChangeSession" , 8 } ,

/*0x108*/	{ "NtOpenEnlistment" , 5 } ,

/*0x109*/	{ "NtOpenEventPair" , 3 } ,

/*0x10A*/	{ "NtOpenIoCompletion" , 3 } ,

/*0x10B*/	{ "NtOpenJobObject" , 3 } ,

/*0x10C*/	{ "NtOpenKeyEx" , 4 } ,

/*0x10D*/	{ "NtOpenKeyTransacted" , 4 } ,

/*0x10E*/	{ "NtOpenKeyTransactedEx" , 5 } ,

/*0x10F*/	{ "NtOpenKeyedEvent" , 3 } ,

/*0x110*/	{ "NtOpenMutant" , 3 } ,

/*0x111*/	{ "NtOpenObjectAuditAlarm" , 12 } ,

/*0x112*/	{ "NtOpenPartition" , 3 } ,

/*0x113*/	{ "NtOpenPrivateNamespace" , 4 } ,

/*0x114*/	{ "NtOpenProcessToken" , 3 } ,

/*0x115*/	{ "NtOpenResourceManager" , 5 } ,

/*0x116*/	{ "NtOpenSemaphore" , 3 } ,

/*0x117*/	{ "NtOpenSession" , 3 } ,

/*0x118*/	{ "NtOpenSymbolicLinkObject" , 3 } ,

/*0x119*/	{ "NtOpenThread" , 4 } ,

/*0x11A*/	{ "NtOpenTimer" , 3 } ,

/*0x11B*/	{ "NtOpenTransaction" , 5 } ,

/*0x11C*/	{ "NtOpenTransactionManager" , 6 } ,

/*0x11D*/	{ "NtPlugPlayControl" , 3 } ,

/*0x11E*/	{ "NtPrePrepareComplete" , 2 } ,

/*0x11F*/	{ "NtPrePrepareEnlistment" , 2 } ,

/*0x120*/	{ "NtPrepareComplete" , 2 } ,

/*0x121*/	{ "NtPrepareEnlistment" , 2 } ,

/*0x122*/	{ "NtPrivilegeCheck" , 3 } ,

/*0x123*/	{ "NtPrivilegeObjectAuditAlarm" , 6 } ,

/*0x124*/	{ "NtPrivilegedServiceAuditAlarm" , 5 } ,

/*0x125*/	{ "NtPropagationComplete" , 4 } ,

/*0x126*/	{ "NtPropagationFailed" , 3 } ,

/*0x127*/	{ "NtPulseEvent" , 2 } ,

/*0x128*/	{ "NtQueryBootEntryOrder" , 2 } ,

/*0x129*/	{ "NtQueryBootOptions" , 2 } ,

/*0x12A*/	{ "NtQueryDebugFilterState" , 2 } ,

/*0x12B*/	{ "NtQueryDirectoryObject" , 7 } ,

/*0x12C*/	{ "NtQueryDriverEntryOrder" , 2 } ,

/*0x12D*/	{ "NtQueryEaFile" , 9 } ,

/*0x12E*/	{ "NtQueryFullAttributesFile" , 2 } ,

/*0x12F*/	{ "NtQueryInformationAtom" , 5 } ,

/*0x130*/	{ "NtQueryInformationEnlistment" , 5 } ,

/*0x131*/	{ "NtQueryInformationJobObject" , 5 } ,

/*0x132*/	{ "NtQueryInformationPort" , 5 } ,

/*0x133*/	{ "NtQueryInformationResourceManager" , 5 } ,

/*0x134*/	{ "NtQueryInformationTransaction" , 5 } ,

/*0x135*/	{ "NtQueryInformationTransactionManager" , 5 } ,

/*0x136*/	{ "NtQueryInformationWorkerFactory" , 5 } ,

/*0x137*/	{ "NtQueryInstallUILanguage" , 1 } ,

/*0x138*/	{ "NtQueryIntervalProfile" , 2 } ,

/*0x139*/	{ "NtQueryIoCompletion" , 5 } ,

/*0x13A*/	{ "NtQueryLicenseValue" , 5 } ,

/*0x13B*/	{ "NtQueryMultipleValueKey" , 6 } ,

/*0x13C*/	{ "NtQueryMutant" , 5 } ,

/*0x13D*/	{ "NtQueryOpenSubKeys" , 2 } ,

/*0x13E*/	{ "NtQueryOpenSubKeysEx" , 4 } ,

/*0x13F*/	{ "NtQueryPortInformationProcess" , 0 } ,

/*0x140*/	{ "NtQueryQuotaInformationFile" , 9 } ,

/*0x141*/	{ "NtQuerySecurityAttributesToken" , 6 } ,

/*0x142*/	{ "NtQuerySecurityObject" , 5 } ,

/*0x143*/	{ "NtQuerySemaphore" , 5 } ,

/*0x144*/	{ "NtQuerySymbolicLinkObject" , 3 } ,

/*0x145*/	{ "NtQuerySystemEnvironmentValue" , 4 } ,

/*0x146*/	{ "NtQuerySystemEnvironmentValueEx" , 5 } ,

/*0x147*/	{ "NtQuerySystemInformationEx" , 6 } ,

/*0x148*/	{ "NtQueryTimerResolution" , 3 } ,

/*0x149*/	{ "NtQueryWnfStateData" , 6 } ,

/*0x14A*/	{ "NtQueryWnfStateNameInformation" , 5 } ,

/*0x14B*/	{ "NtQueueApcThreadEx" , 6 } ,

/*0x14C*/	{ "NtRaiseException" , 3 } ,

/*0x14D*/	{ "NtRaiseHardError" , 6 } ,

/*0x14E*/	{ "NtReadOnlyEnlistment" , 2 } ,

/*0x14F*/	{ "NtRecoverEnlistment" , 2 } ,

/*0x150*/	{ "NtRecoverResourceManager" , 1 } ,

/*0x151*/	{ "NtRecoverTransactionManager" , 1 } ,

/*0x152*/	{ "NtRegisterProtocolAddressInformation" , 5 } ,

/*0x153*/	{ "NtRegisterThreadTerminatePort" , 1 } ,

/*0x154*/	{ "NtReleaseKeyedEvent" , 4 } ,

/*0x155*/	{ "NtReleaseWorkerFactoryWorker" , 1 } ,

/*0x156*/	{ "NtRemoveIoCompletionEx" , 6 } ,

/*0x157*/	{ "NtRemoveProcessDebug" , 2 } ,

/*0x158*/	{ "NtRenameKey" , 2 } ,

/*0x159*/	{ "NtRenameTransactionManager" , 2 } ,

/*0x15A*/	{ "NtReplaceKey" , 3 } ,

/*0x15B*/	{ "NtReplacePartitionUnit" , 3 } ,

/*0x15C*/	{ "NtReplyWaitReplyPort" , 2 } ,

/*0x15D*/	{ "NtRequestPort" , 2 } ,

/*0x15E*/	{ "NtResetEvent" , 2 } ,

/*0x15F*/	{ "NtResetWriteWatch" , 3 } ,

/*0x160*/	{ "NtRestoreKey" , 3 } ,

/*0x161*/	{ "NtResumeProcess" , 1 } ,

/*0x162*/	{ "NtRevertContainerImpersonation" , 0 } ,

/*0x163*/	{ "NtRollbackComplete" , 2 } ,

/*0x164*/	{ "NtRollbackEnlistment" , 2 } ,

/*0x165*/	{ "NtRollbackTransaction" , 2 } ,

/*0x166*/	{ "NtRollforwardTransactionManager" , 2 } ,

/*0x167*/	{ "NtSaveKey" , 2 } ,

/*0x168*/	{ "NtSaveKeyEx" , 3 } ,

/*0x169*/	{ "NtSaveMergedKeys" , 3 } ,

/*0x16A*/	{ "NtSecureConnectPort" , 9 } ,

/*0x16B*/	{ "NtSerializeBoot" , 0 } ,

/*0x16C*/	{ "NtSetBootEntryOrder" , 2 } ,

/*0x16D*/	{ "NtSetBootOptions" , 2 } ,

/*0x16E*/	{ "NtSetCachedSigningLevel" , 5 } ,

/*0x16F*/	{ "NtSetContextThread" , 2 } ,

/*0x170*/	{ "NtSetDebugFilterState" , 3 } ,

/*0x171*/	{ "NtSetDefaultHardErrorPort" , 1 } ,

/*0x172*/	{ "NtSetDefaultLocale" , 2 } ,

/*0x173*/	{ "NtSetDefaultUILanguage" , 1 } ,

/*0x174*/	{ "NtSetDriverEntryOrder" , 2 } ,

/*0x175*/	{ "NtSetEaFile" , 4 } ,

/*0x176*/	{ "NtSetHighEventPair" , 1 } ,

/*0x177*/	{ "NtSetHighWaitLowEventPair" , 1 } ,

/*0x178*/	{ "NtSetIRTimer" , 2 } ,

/*0x179*/	{ "NtSetInformationDebugObject" , 5 } ,

/*0x17A*/	{ "NtSetInformationEnlistment" , 4 } ,

/*0x17B*/	{ "NtSetInformationJobObject" , 4 } ,

/*0x17C*/	{ "NtSetInformationKey" , 4 } ,

/*0x17D*/	{ "NtSetInformationResourceManager" , 4 } ,

/*0x17E*/	{ "NtSetInformationSymbolicLink" , 4 } ,

/*0x17F*/	{ "NtSetInformationToken" , 4 } ,

/*0x180*/	{ "NtSetInformationTransaction" , 4 } ,

/*0x181*/	{ "NtSetInformationTransactionManager" , 4 } ,

/*0x182*/	{ "NtSetInformationVirtualMemory" , 6 } ,

/*0x183*/	{ "NtSetInformationWorkerFactory" , 4 } ,

/*0x184*/	{ "NtSetIntervalProfile" , 2 } ,

/*0x185*/	{ "NtSetIoCompletion" , 5 } ,

/*0x186*/	{ "NtSetIoCompletionEx" , 6 } ,

/*0x187*/	{ "NtSetLdtEntries" , 6 } ,

/*0x188*/	{ "NtSetLowEventPair" , 1 } ,

/*0x189*/	{ "NtSetLowWaitHighEventPair" , 1 } ,

/*0x18A*/	{ "NtSetQuotaInformationFile" , 4 } ,

/*0x18B*/	{ "NtSetSecurityObject" , 3 } ,

/*0x18C*/	{ "NtSetSystemEnvironmentValue" , 2 } ,

/*0x18D*/	{ "NtSetSystemEnvironmentValueEx" , 5 } ,

/*0x18E*/	{ "NtSetSystemInformation" , 3 } ,

/*0x18F*/	{ "NtSetSystemPowerState" , 3 } ,

/*0x190*/	{ "NtSetSystemTime" , 2 } ,

/*0x191*/	{ "NtSetThreadExecutionState" , 2 } ,

/*0x192*/	{ "NtSetTimer2" , 4 } ,

/*0x193*/	{ "NtSetTimerEx" , 4 } ,

/*0x194*/	{ "NtSetTimerResolution" , 3 } ,

/*0x195*/	{ "NtSetUuidSeed" , 1 } ,

/*0x196*/	{ "NtSetVolumeInformationFile" , 5 } ,

/*0x197*/	{ "NtSetWnfProcessNotificationEvent" , 1 } ,

/*0x198*/	{ "NtShutdownSystem" , 1 } ,

/*0x199*/	{ "NtShutdownWorkerFactory" , 2 } ,

/*0x19A*/	{ "NtSignalAndWaitForSingleObject" , 4 } ,

/*0x19B*/	{ "NtSinglePhaseReject" , 2 } ,

/*0x19C*/	{ "NtStartProfile" , 1 } ,

/*0x19D*/	{ "NtStopProfile" , 1 } ,

/*0x19E*/	{ "NtSubscribeWnfStateChange" , 4 } ,

/*0x19F*/	{ "NtSuspendProcess" , 1 } ,

/*0x1A0*/	{ "NtSuspendThread" , 2 } ,

/*0x1A1*/	{ "NtSystemDebugControl" , 6 } ,

/*0x1A2*/	{ "NtTerminateJobObject" , 2 } ,

/*0x1A3*/	{ "NtTestAlert" , 0 } ,

/*0x1A4*/	{ "NtThawRegistry" , 0 } ,

/*0x1A5*/	{ "NtThawTransactions" , 0 } ,

/*0x1A6*/	{ "NtTraceControl" , 6 } ,

/*0x1A7*/	{ "NtTranslateFilePath" , 4 } ,

/*0x1A8*/	{ "NtUmsThreadYield" , 1 } ,

/*0x1A9*/	{ "NtUnloadDriver" , 1 } ,

/*0x1AA*/	{ "NtUnloadKey" , 1 } ,

/*0x1AB*/	{ "NtUnloadKey2" , 2 } ,

/*0x1AC*/	{ "NtUnloadKeyEx" , 2 } ,

/*0x1AD*/	{ "NtUnlockFile" , 5 } ,

/*0x1AE*/	{ "NtUnlockVirtualMemory" , 4 } ,

/*0x1AF*/	{ "NtUnmapViewOfSectionEx" , 3 } ,

/*0x1B0*/	{ "NtUnsubscribeWnfStateChange" , 1 } ,

/*0x1B1*/	{ "NtUpdateWnfStateData" , 7 } ,

/*0x1B2*/	{ "NtVdmControl" , 2 } ,

/*0x1B3*/	{ "NtWaitForAlertByThreadId" , 2 } ,

/*0x1B4*/	{ "NtWaitForDebugEvent" , 4 } ,

/*0x1B5*/	{ "NtWaitForKeyedEvent" , 4 } ,

/*0x1B6*/	{ "NtWaitForWorkViaWorkerFactory" , 5 } ,

/*0x1B7*/	{ "NtWaitHighEventPair" , 1 } ,

/*0x1B8*/	{ "NtWaitLowEventPair" , 1 }

};

