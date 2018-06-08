// DO NOT MODIFY THIS FILE DIRECTLY!
// author: @TinySecEx
// ssdt database for 6.0.6002-sp2-windows-vista amd64

SDT_NODE static_ssdt_6_0_6002_sp2_windows_vista_amd64[391] = {

/*0x000*/	{ "NtMapUserPhysicalPagesScatter" , 3 } ,

/*0x001*/	{ "NtWaitForSingleObject" , 3 } ,

/*0x002*/	{ "NtCallbackReturn" , 3 } ,

/*0x003*/	{ "NtReadFile" , 9 } ,

/*0x004*/	{ "NtDeviceIoControlFile" , 10 } ,

/*0x005*/	{ "NtWriteFile" , 9 } ,

/*0x006*/	{ "NtRemoveIoCompletion" , 5 } ,

/*0x007*/	{ "NtReleaseSemaphore" , 3 } ,

/*0x008*/	{ "NtReplyWaitReceivePort" , 4 } ,

/*0x009*/	{ "NtReplyPort" , 2 } ,

/*0x00A*/	{ "NtSetInformationThread" , 4 } ,

/*0x00B*/	{ "NtSetEvent" , 2 } ,

/*0x00C*/	{ "NtClose" , 1 } ,

/*0x00D*/	{ "NtQueryObject" , 5 } ,

/*0x00E*/	{ "NtQueryInformationFile" , 5 } ,

/*0x00F*/	{ "NtOpenKey" , 3 } ,

/*0x010*/	{ "NtEnumerateValueKey" , 6 } ,

/*0x011*/	{ "NtFindAtom" , 3 } ,

/*0x012*/	{ "NtQueryDefaultLocale" , 2 } ,

/*0x013*/	{ "NtQueryKey" , 5 } ,

/*0x014*/	{ "NtQueryValueKey" , 6 } ,

/*0x015*/	{ "NtAllocateVirtualMemory" , 6 } ,

/*0x016*/	{ "NtQueryInformationProcess" , 5 } ,

/*0x017*/	{ "NtWaitForMultipleObjects32" , 5 } ,

/*0x018*/	{ "NtWriteFileGather" , 9 } ,

/*0x019*/	{ "NtSetInformationProcess" , 4 } ,

/*0x01A*/	{ "NtCreateKey" , 7 } ,

/*0x01B*/	{ "NtFreeVirtualMemory" , 4 } ,

/*0x01C*/	{ "NtImpersonateClientOfPort" , 2 } ,

/*0x01D*/	{ "NtReleaseMutant" , 2 } ,

/*0x01E*/	{ "NtQueryInformationToken" , 5 } ,

/*0x01F*/	{ "NtRequestWaitReplyPort" , 3 } ,

/*0x020*/	{ "NtQueryVirtualMemory" , 6 } ,

/*0x021*/	{ "NtOpenThreadToken" , 4 } ,

/*0x022*/	{ "NtQueryInformationThread" , 5 } ,

/*0x023*/	{ "NtOpenProcess" , 4 } ,

/*0x024*/	{ "NtSetInformationFile" , 5 } ,

/*0x025*/	{ "NtMapViewOfSection" , 10 } ,

/*0x026*/	{ "NtAccessCheckAndAuditAlarm" , 11 } ,

/*0x027*/	{ "NtUnmapViewOfSection" , 2 } ,

/*0x028*/	{ "NtReplyWaitReceivePortEx" , 5 } ,

/*0x029*/	{ "NtTerminateProcess" , 2 } ,

/*0x02A*/	{ "NtSetEventBoostPriority" , 1 } ,

/*0x02B*/	{ "NtReadFileScatter" , 9 } ,

/*0x02C*/	{ "NtOpenThreadTokenEx" , 5 } ,

/*0x02D*/	{ "NtOpenProcessTokenEx" , 4 } ,

/*0x02E*/	{ "NtQueryPerformanceCounter" , 2 } ,

/*0x02F*/	{ "NtEnumerateKey" , 6 } ,

/*0x030*/	{ "NtOpenFile" , 6 } ,

/*0x031*/	{ "NtDelayExecution" , 2 } ,

/*0x032*/	{ "NtQueryDirectoryFile" , 11 } ,

/*0x033*/	{ "NtQuerySystemInformation" , 4 } ,

/*0x034*/	{ "NtOpenSection" , 3 } ,

/*0x035*/	{ "NtQueryTimer" , 5 } ,

/*0x036*/	{ "NtFsControlFile" , 10 } ,

/*0x037*/	{ "NtWriteVirtualMemory" , 5 } ,

/*0x038*/	{ "NtCloseObjectAuditAlarm" , 3 } ,

/*0x039*/	{ "NtDuplicateObject" , 7 } ,

/*0x03A*/	{ "NtQueryAttributesFile" , 2 } ,

/*0x03B*/	{ "NtClearEvent" , 1 } ,

/*0x03C*/	{ "NtReadVirtualMemory" , 5 } ,

/*0x03D*/	{ "NtOpenEvent" , 3 } ,

/*0x03E*/	{ "NtAdjustPrivilegesToken" , 6 } ,

/*0x03F*/	{ "NtDuplicateToken" , 6 } ,

/*0x040*/	{ "NtContinue" , 2 } ,

/*0x041*/	{ "NtQueryDefaultUILanguage" , 1 } ,

/*0x042*/	{ "NtQueueApcThread" , 5 } ,

/*0x043*/	{ "NtYieldExecution" , 0 } ,

/*0x044*/	{ "NtAddAtom" , 3 } ,

/*0x045*/	{ "NtCreateEvent" , 5 } ,

/*0x046*/	{ "NtQueryVolumeInformationFile" , 5 } ,

/*0x047*/	{ "NtCreateSection" , 7 } ,

/*0x048*/	{ "NtFlushBuffersFile" , 2 } ,

/*0x049*/	{ "NtApphelpCacheControl" , 2 } ,

/*0x04A*/	{ "NtCreateProcessEx" , 9 } ,

/*0x04B*/	{ "NtCreateThread" , 8 } ,

/*0x04C*/	{ "NtIsProcessInJob" , 2 } ,

/*0x04D*/	{ "NtProtectVirtualMemory" , 5 } ,

/*0x04E*/	{ "NtQuerySection" , 5 } ,

/*0x04F*/	{ "NtResumeThread" , 2 } ,

/*0x050*/	{ "NtTerminateThread" , 2 } ,

/*0x051*/	{ "NtReadRequestData" , 6 } ,

/*0x052*/	{ "NtCreateFile" , 11 } ,

/*0x053*/	{ "NtQueryEvent" , 5 } ,

/*0x054*/	{ "NtWriteRequestData" , 6 } ,

/*0x055*/	{ "NtOpenDirectoryObject" , 3 } ,

/*0x056*/	{ "NtAccessCheckByTypeAndAuditAlarm" , 16 } ,

/*0x057*/	{ "NtQuerySystemTime" , 1 } ,

/*0x058*/	{ "NtWaitForMultipleObjects" , 5 } ,

/*0x059*/	{ "NtSetInformationObject" , 4 } ,

/*0x05A*/	{ "NtCancelIoFile" , 2 } ,

/*0x05B*/	{ "NtTraceEvent" , 4 } ,

/*0x05C*/	{ "NtPowerInformation" , 5 } ,

/*0x05D*/	{ "NtSetValueKey" , 6 } ,

/*0x05E*/	{ "NtCancelTimer" , 2 } ,

/*0x05F*/	{ "NtSetTimer" , 7 } ,

/*0x060*/	{ "NtAcceptConnectPort" , 6 } ,

/*0x061*/	{ "NtAccessCheck" , 8 } ,

/*0x062*/	{ "NtAccessCheckByType" , 11 } ,

/*0x063*/	{ "NtAccessCheckByTypeResultList" , 11 } ,

/*0x064*/	{ "NtAccessCheckByTypeResultListAndAuditAlarm" , 16 } ,

/*0x065*/	{ "NtAccessCheckByTypeResultListAndAuditAlarmByHandle" , 17 } ,

/*0x066*/	{ "NtAcquireCMFViewOwnership" , 3 } ,

/*0x067*/	{ "NtAddBootEntry" , 2 } ,

/*0x068*/	{ "NtAddDriverEntry" , 2 } ,

/*0x069*/	{ "NtAdjustGroupsToken" , 6 } ,

/*0x06A*/	{ "NtAlertResumeThread" , 2 } ,

/*0x06B*/	{ "NtAlertThread" , 1 } ,

/*0x06C*/	{ "NtAllocateLocallyUniqueId" , 1 } ,

/*0x06D*/	{ "NtAllocateUserPhysicalPages" , 3 } ,

/*0x06E*/	{ "NtAllocateUuids" , 4 } ,

/*0x06F*/	{ "NtAlpcAcceptConnectPort" , 9 } ,

/*0x070*/	{ "NtAlpcCancelMessage" , 3 } ,

/*0x071*/	{ "NtAlpcConnectPort" , 11 } ,

/*0x072*/	{ "NtAlpcCreatePort" , 3 } ,

/*0x073*/	{ "NtAlpcCreatePortSection" , 6 } ,

/*0x074*/	{ "NtAlpcCreateResourceReserve" , 4 } ,

/*0x075*/	{ "NtAlpcCreateSectionView" , 3 } ,

/*0x076*/	{ "NtAlpcCreateSecurityContext" , 3 } ,

/*0x077*/	{ "NtAlpcDeletePortSection" , 3 } ,

/*0x078*/	{ "NtAlpcDeleteResourceReserve" , 3 } ,

/*0x079*/	{ "NtAlpcDeleteSectionView" , 3 } ,

/*0x07A*/	{ "NtAlpcDeleteSecurityContext" , 3 } ,

/*0x07B*/	{ "NtAlpcDisconnectPort" , 2 } ,

/*0x07C*/	{ "NtAlpcImpersonateClientOfPort" , 3 } ,

/*0x07D*/	{ "NtAlpcOpenSenderProcess" , 6 } ,

/*0x07E*/	{ "NtAlpcOpenSenderThread" , 6 } ,

/*0x07F*/	{ "NtAlpcQueryInformation" , 5 } ,

/*0x080*/	{ "NtAlpcQueryInformationMessage" , 6 } ,

/*0x081*/	{ "NtAlpcRevokeSecurityContext" , 3 } ,

/*0x082*/	{ "NtAlpcSendWaitReceivePort" , 8 } ,

/*0x083*/	{ "NtAlpcSetInformation" , 4 } ,

/*0x084*/	{ "NtAreMappedFilesTheSame" , 2 } ,

/*0x085*/	{ "NtAssignProcessToJobObject" , 2 } ,

/*0x086*/	{ "NtCancelDeviceWakeupRequest" , 1 } ,

/*0x087*/	{ "NtCancelIoFileEx" , 3 } ,

/*0x088*/	{ "NtCancelSynchronousIoFile" , 3 } ,

/*0x089*/	{ "NtCommitComplete" , 2 } ,

/*0x08A*/	{ "NtCommitEnlistment" , 2 } ,

/*0x08B*/	{ "NtCommitTransaction" , 2 } ,

/*0x08C*/	{ "NtCompactKeys" , 2 } ,

/*0x08D*/	{ "NtCompareTokens" , 3 } ,

/*0x08E*/	{ "NtCompleteConnectPort" , 1 } ,

/*0x08F*/	{ "NtCompressKey" , 1 } ,

/*0x090*/	{ "NtConnectPort" , 8 } ,

/*0x091*/	{ "NtCreateDebugObject" , 4 } ,

/*0x092*/	{ "NtCreateDirectoryObject" , 3 } ,

/*0x093*/	{ "NtCreateEnlistment" , 8 } ,

/*0x094*/	{ "NtCreateEventPair" , 3 } ,

/*0x095*/	{ "NtCreateIoCompletion" , 4 } ,

/*0x096*/	{ "NtCreateJobObject" , 3 } ,

/*0x097*/	{ "NtCreateJobSet" , 3 } ,

/*0x098*/	{ "NtCreateKeyTransacted" , 8 } ,

/*0x099*/	{ "NtCreateKeyedEvent" , 4 } ,

/*0x09A*/	{ "NtCreateMailslotFile" , 8 } ,

/*0x09B*/	{ "NtCreateMutant" , 4 } ,

/*0x09C*/	{ "NtCreateNamedPipeFile" , 14 } ,

/*0x09D*/	{ "NtCreatePagingFile" , 4 } ,

/*0x09E*/	{ "NtCreatePort" , 5 } ,

/*0x09F*/	{ "NtCreatePrivateNamespace" , 4 } ,

/*0x0A0*/	{ "NtCreateProcess" , 8 } ,

/*0x0A1*/	{ "NtCreateProfile" , 9 } ,

/*0x0A2*/	{ "NtCreateResourceManager" , 7 } ,

/*0x0A3*/	{ "NtCreateSemaphore" , 5 } ,

/*0x0A4*/	{ "NtCreateSymbolicLinkObject" , 4 } ,

/*0x0A5*/	{ "NtCreateThreadEx" , 11 } ,

/*0x0A6*/	{ "NtCreateTimer" , 4 } ,

/*0x0A7*/	{ "NtCreateToken" , 13 } ,

/*0x0A8*/	{ "NtCreateTransaction" , 10 } ,

/*0x0A9*/	{ "NtCreateTransactionManager" , 6 } ,

/*0x0AA*/	{ "NtCreateUserProcess" , 11 } ,

/*0x0AB*/	{ "NtCreateWaitablePort" , 5 } ,

/*0x0AC*/	{ "NtCreateWorkerFactory" , 10 } ,

/*0x0AD*/	{ "NtDebugActiveProcess" , 2 } ,

/*0x0AE*/	{ "NtDebugContinue" , 3 } ,

/*0x0AF*/	{ "NtDeleteAtom" , 1 } ,

/*0x0B0*/	{ "NtDeleteBootEntry" , 1 } ,

/*0x0B1*/	{ "NtDeleteDriverEntry" , 1 } ,

/*0x0B2*/	{ "NtDeleteFile" , 1 } ,

/*0x0B3*/	{ "NtDeleteKey" , 1 } ,

/*0x0B4*/	{ "NtDeleteObjectAuditAlarm" , 3 } ,

/*0x0B5*/	{ "NtDeletePrivateNamespace" , 1 } ,

/*0x0B6*/	{ "NtDeleteValueKey" , 2 } ,

/*0x0B7*/	{ "NtDisplayString" , 1 } ,

/*0x0B8*/	{ "NtEnumerateBootEntries" , 2 } ,

/*0x0B9*/	{ "NtEnumerateDriverEntries" , 2 } ,

/*0x0BA*/	{ "NtEnumerateSystemEnvironmentValuesEx" , 3 } ,

/*0x0BB*/	{ "NtEnumerateTransactionObject" , 5 } ,

/*0x0BC*/	{ "NtExtendSection" , 2 } ,

/*0x0BD*/	{ "NtFilterToken" , 6 } ,

/*0x0BE*/	{ "NtFlushInstallUILanguage" , 2 } ,

/*0x0BF*/	{ "NtFlushInstructionCache" , 3 } ,

/*0x0C0*/	{ "NtFlushKey" , 1 } ,

/*0x0C1*/	{ "NtFlushProcessWriteBuffers" , 0 } ,

/*0x0C2*/	{ "NtFlushVirtualMemory" , 4 } ,

/*0x0C3*/	{ "NtFlushWriteBuffer" , 0 } ,

/*0x0C4*/	{ "NtFreeUserPhysicalPages" , 3 } ,

/*0x0C5*/	{ "NtFreezeRegistry" , 1 } ,

/*0x0C6*/	{ "NtFreezeTransactions" , 2 } ,

/*0x0C7*/	{ "NtGetContextThread" , 2 } ,

/*0x0C8*/	{ "NtGetCurrentProcessorNumber" , 0 } ,

/*0x0C9*/	{ "NtGetDevicePowerState" , 2 } ,

/*0x0CA*/	{ "NtGetMUIRegistryInfo" , 3 } ,

/*0x0CB*/	{ "NtGetNextProcess" , 5 } ,

/*0x0CC*/	{ "NtGetNextThread" , 6 } ,

/*0x0CD*/	{ "NtGetNlsSectionPtr" , 5 } ,

/*0x0CE*/	{ "NtGetNotificationResourceManager" , 7 } ,

/*0x0CF*/	{ "NtGetPlugPlayEvent" , 4 } ,

/*0x0D0*/	{ "NtGetWriteWatch" , 7 } ,

/*0x0D1*/	{ "NtImpersonateAnonymousToken" , 1 } ,

/*0x0D2*/	{ "NtImpersonateThread" , 3 } ,

/*0x0D3*/	{ "NtInitializeNlsFiles" , 4 } ,

/*0x0D4*/	{ "NtInitializeRegistry" , 1 } ,

/*0x0D5*/	{ "NtInitiatePowerAction" , 4 } ,

/*0x0D6*/	{ "NtIsSystemResumeAutomatic" , 0 } ,

/*0x0D7*/	{ "NtIsUILanguageComitted" , 0 } ,

/*0x0D8*/	{ "NtListenPort" , 2 } ,

/*0x0D9*/	{ "NtLoadDriver" , 1 } ,

/*0x0DA*/	{ "NtLoadKey" , 2 } ,

/*0x0DB*/	{ "NtLoadKey2" , 3 } ,

/*0x0DC*/	{ "NtLoadKeyEx" , 8 } ,

/*0x0DD*/	{ "NtLockFile" , 10 } ,

/*0x0DE*/	{ "NtLockProductActivationKeys" , 2 } ,

/*0x0DF*/	{ "NtLockRegistryKey" , 1 } ,

/*0x0E0*/	{ "NtLockVirtualMemory" , 4 } ,

/*0x0E1*/	{ "NtMakePermanentObject" , 1 } ,

/*0x0E2*/	{ "NtMakeTemporaryObject" , 1 } ,

/*0x0E3*/	{ "NtMapCMFModule" , 6 } ,

/*0x0E4*/	{ "NtMapUserPhysicalPages" , 3 } ,

/*0x0E5*/	{ "NtModifyBootEntry" , 1 } ,

/*0x0E6*/	{ "NtModifyDriverEntry" , 1 } ,

/*0x0E7*/	{ "NtNotifyChangeDirectoryFile" , 9 } ,

/*0x0E8*/	{ "NtNotifyChangeKey" , 10 } ,

/*0x0E9*/	{ "NtNotifyChangeMultipleKeys" , 12 } ,

/*0x0EA*/	{ "NtOpenEnlistment" , 5 } ,

/*0x0EB*/	{ "NtOpenEventPair" , 3 } ,

/*0x0EC*/	{ "NtOpenIoCompletion" , 3 } ,

/*0x0ED*/	{ "NtOpenJobObject" , 3 } ,

/*0x0EE*/	{ "NtOpenKeyTransacted" , 4 } ,

/*0x0EF*/	{ "NtOpenKeyedEvent" , 3 } ,

/*0x0F0*/	{ "NtOpenMutant" , 3 } ,

/*0x0F1*/	{ "NtOpenObjectAuditAlarm" , 12 } ,

/*0x0F2*/	{ "NtOpenPrivateNamespace" , 4 } ,

/*0x0F3*/	{ "NtOpenProcessToken" , 3 } ,

/*0x0F4*/	{ "NtOpenResourceManager" , 5 } ,

/*0x0F5*/	{ "NtOpenSemaphore" , 3 } ,

/*0x0F6*/	{ "NtOpenSession" , 3 } ,

/*0x0F7*/	{ "NtOpenSymbolicLinkObject" , 3 } ,

/*0x0F8*/	{ "NtOpenThread" , 4 } ,

/*0x0F9*/	{ "NtOpenTimer" , 3 } ,

/*0x0FA*/	{ "NtOpenTransaction" , 5 } ,

/*0x0FB*/	{ "NtOpenTransactionManager" , 6 } ,

/*0x0FC*/	{ "NtPlugPlayControl" , 3 } ,

/*0x0FD*/	{ "NtPrePrepareComplete" , 2 } ,

/*0x0FE*/	{ "NtPrePrepareEnlistment" , 2 } ,

/*0x0FF*/	{ "NtPrepareComplete" , 2 } ,

/*0x100*/	{ "NtPrepareEnlistment" , 2 } ,

/*0x101*/	{ "NtPrivilegeCheck" , 3 } ,

/*0x102*/	{ "NtPrivilegeObjectAuditAlarm" , 6 } ,

/*0x103*/	{ "NtPrivilegedServiceAuditAlarm" , 5 } ,

/*0x104*/	{ "NtPropagationComplete" , 4 } ,

/*0x105*/	{ "NtPropagationFailed" , 3 } ,

/*0x106*/	{ "NtPulseEvent" , 2 } ,

/*0x107*/	{ "NtQueryBootEntryOrder" , 2 } ,

/*0x108*/	{ "NtQueryBootOptions" , 2 } ,

/*0x109*/	{ "NtQueryDebugFilterState" , 2 } ,

/*0x10A*/	{ "NtQueryDirectoryObject" , 7 } ,

/*0x10B*/	{ "NtQueryDriverEntryOrder" , 2 } ,

/*0x10C*/	{ "NtQueryEaFile" , 9 } ,

/*0x10D*/	{ "NtQueryFullAttributesFile" , 2 } ,

/*0x10E*/	{ "NtQueryInformationAtom" , 5 } ,

/*0x10F*/	{ "NtQueryInformationEnlistment" , 5 } ,

/*0x110*/	{ "NtQueryInformationJobObject" , 5 } ,

/*0x111*/	{ "NtQueryInformationPort" , 5 } ,

/*0x112*/	{ "NtQueryInformationResourceManager" , 5 } ,

/*0x113*/	{ "NtQueryInformationTransaction" , 5 } ,

/*0x114*/	{ "NtQueryInformationTransactionManager" , 5 } ,

/*0x115*/	{ "NtQueryInformationWorkerFactory" , 5 } ,

/*0x116*/	{ "NtQueryInstallUILanguage" , 1 } ,

/*0x117*/	{ "NtQueryIntervalProfile" , 2 } ,

/*0x118*/	{ "NtQueryIoCompletion" , 5 } ,

/*0x119*/	{ "NtQueryLicenseValue" , 5 } ,

/*0x11A*/	{ "NtQueryMultipleValueKey" , 6 } ,

/*0x11B*/	{ "NtQueryMutant" , 5 } ,

/*0x11C*/	{ "NtQueryOpenSubKeys" , 2 } ,

/*0x11D*/	{ "NtQueryOpenSubKeysEx" , 4 } ,

/*0x11E*/	{ "NtQueryPortInformationProcess" , 0 } ,

/*0x11F*/	{ "NtQueryQuotaInformationFile" , 9 } ,

/*0x120*/	{ "NtQuerySecurityObject" , 5 } ,

/*0x121*/	{ "NtQuerySemaphore" , 5 } ,

/*0x122*/	{ "NtQuerySymbolicLinkObject" , 3 } ,

/*0x123*/	{ "NtQuerySystemEnvironmentValue" , 4 } ,

/*0x124*/	{ "NtQuerySystemEnvironmentValueEx" , 5 } ,

/*0x125*/	{ "NtQueryTimerResolution" , 3 } ,

/*0x126*/	{ "NtRaiseException" , 3 } ,

/*0x127*/	{ "NtRaiseHardError" , 6 } ,

/*0x128*/	{ "NtReadOnlyEnlistment" , 2 } ,

/*0x129*/	{ "NtRecoverEnlistment" , 2 } ,

/*0x12A*/	{ "NtRecoverResourceManager" , 1 } ,

/*0x12B*/	{ "NtRecoverTransactionManager" , 1 } ,

/*0x12C*/	{ "NtRegisterProtocolAddressInformation" , 5 } ,

/*0x12D*/	{ "NtRegisterThreadTerminatePort" , 1 } ,

/*0x12E*/	{ "NtReleaseCMFViewOwnership" , 0 } ,

/*0x12F*/	{ "NtReleaseKeyedEvent" , 4 } ,

/*0x130*/	{ "NtReleaseWorkerFactoryWorker" , 1 } ,

/*0x131*/	{ "NtRemoveIoCompletionEx" , 6 } ,

/*0x132*/	{ "NtRemoveProcessDebug" , 2 } ,

/*0x133*/	{ "NtRenameKey" , 2 } ,

/*0x134*/	{ "NtRenameTransactionManager" , 2 } ,

/*0x135*/	{ "NtReplaceKey" , 3 } ,

/*0x136*/	{ "NtReplacePartitionUnit" , 3 } ,

/*0x137*/	{ "NtReplyWaitReplyPort" , 2 } ,

/*0x138*/	{ "NtRequestDeviceWakeup" , 1 } ,

/*0x139*/	{ "NtRequestPort" , 2 } ,

/*0x13A*/	{ "NtRequestWakeupLatency" , 1 } ,

/*0x13B*/	{ "NtResetEvent" , 2 } ,

/*0x13C*/	{ "NtResetWriteWatch" , 3 } ,

/*0x13D*/	{ "NtRestoreKey" , 3 } ,

/*0x13E*/	{ "NtResumeProcess" , 1 } ,

/*0x13F*/	{ "NtRollbackComplete" , 2 } ,

/*0x140*/	{ "NtRollbackEnlistment" , 2 } ,

/*0x141*/	{ "NtRollbackTransaction" , 2 } ,

/*0x142*/	{ "NtRollforwardTransactionManager" , 2 } ,

/*0x143*/	{ "NtSaveKey" , 2 } ,

/*0x144*/	{ "NtSaveKeyEx" , 3 } ,

/*0x145*/	{ "NtSaveMergedKeys" , 3 } ,

/*0x146*/	{ "NtSecureConnectPort" , 9 } ,

/*0x147*/	{ "NtSetBootEntryOrder" , 2 } ,

/*0x148*/	{ "NtSetBootOptions" , 2 } ,

/*0x149*/	{ "NtSetContextThread" , 2 } ,

/*0x14A*/	{ "NtSetDebugFilterState" , 3 } ,

/*0x14B*/	{ "NtSetDefaultHardErrorPort" , 1 } ,

/*0x14C*/	{ "NtSetDefaultLocale" , 2 } ,

/*0x14D*/	{ "NtSetDefaultUILanguage" , 1 } ,

/*0x14E*/	{ "NtSetDriverEntryOrder" , 2 } ,

/*0x14F*/	{ "NtSetEaFile" , 4 } ,

/*0x150*/	{ "NtSetHighEventPair" , 1 } ,

/*0x151*/	{ "NtSetHighWaitLowEventPair" , 1 } ,

/*0x152*/	{ "NtSetInformationDebugObject" , 5 } ,

/*0x153*/	{ "NtSetInformationEnlistment" , 4 } ,

/*0x154*/	{ "NtSetInformationJobObject" , 4 } ,

/*0x155*/	{ "NtSetInformationKey" , 4 } ,

/*0x156*/	{ "NtSetInformationResourceManager" , 4 } ,

/*0x157*/	{ "NtSetInformationToken" , 4 } ,

/*0x158*/	{ "NtSetInformationTransaction" , 4 } ,

/*0x159*/	{ "NtSetInformationTransactionManager" , 4 } ,

/*0x15A*/	{ "NtSetInformationWorkerFactory" , 4 } ,

/*0x15B*/	{ "NtSetIntervalProfile" , 2 } ,

/*0x15C*/	{ "NtSetIoCompletion" , 5 } ,

/*0x15D*/	{ "NtSetLdtEntries" , 6 } ,

/*0x15E*/	{ "NtSetLowEventPair" , 1 } ,

/*0x15F*/	{ "NtSetLowWaitHighEventPair" , 1 } ,

/*0x160*/	{ "NtSetQuotaInformationFile" , 4 } ,

/*0x161*/	{ "NtSetSecurityObject" , 3 } ,

/*0x162*/	{ "NtSetSystemEnvironmentValue" , 2 } ,

/*0x163*/	{ "NtSetSystemEnvironmentValueEx" , 5 } ,

/*0x164*/	{ "NtSetSystemInformation" , 3 } ,

/*0x165*/	{ "NtSetSystemPowerState" , 3 } ,

/*0x166*/	{ "NtSetSystemTime" , 2 } ,

/*0x167*/	{ "NtSetThreadExecutionState" , 2 } ,

/*0x168*/	{ "NtSetTimerResolution" , 3 } ,

/*0x169*/	{ "NtSetUuidSeed" , 1 } ,

/*0x16A*/	{ "NtSetVolumeInformationFile" , 5 } ,

/*0x16B*/	{ "NtShutdownSystem" , 1 } ,

/*0x16C*/	{ "NtShutdownWorkerFactory" , 2 } ,

/*0x16D*/	{ "NtSignalAndWaitForSingleObject" , 4 } ,

/*0x16E*/	{ "NtSinglePhaseReject" , 2 } ,

/*0x16F*/	{ "NtStartProfile" , 1 } ,

/*0x170*/	{ "NtStopProfile" , 1 } ,

/*0x171*/	{ "NtSuspendProcess" , 1 } ,

/*0x172*/	{ "NtSuspendThread" , 2 } ,

/*0x173*/	{ "NtSystemDebugControl" , 6 } ,

/*0x174*/	{ "NtTerminateJobObject" , 2 } ,

/*0x175*/	{ "NtTestAlert" , 0 } ,

/*0x176*/	{ "NtThawRegistry" , 0 } ,

/*0x177*/	{ "NtThawTransactions" , 0 } ,

/*0x178*/	{ "NtTraceControl" , 6 } ,

/*0x179*/	{ "NtTranslateFilePath" , 4 } ,

/*0x17A*/	{ "NtUnloadDriver" , 1 } ,

/*0x17B*/	{ "NtUnloadKey" , 1 } ,

/*0x17C*/	{ "NtUnloadKey2" , 2 } ,

/*0x17D*/	{ "NtUnloadKeyEx" , 2 } ,

/*0x17E*/	{ "NtUnlockFile" , 5 } ,

/*0x17F*/	{ "NtUnlockVirtualMemory" , 4 } ,

/*0x180*/	{ "NtVdmControl" , 2 } ,

/*0x181*/	{ "NtWaitForDebugEvent" , 4 } ,

/*0x182*/	{ "NtWaitForKeyedEvent" , 4 } ,

/*0x183*/	{ "NtWaitForWorkViaWorkerFactory" , 2 } ,

/*0x184*/	{ "NtWaitHighEventPair" , 1 } ,

/*0x185*/	{ "NtWaitLowEventPair" , 1 } ,

/*0x186*/	{ "NtWorkerFactoryWorkerReady" , 1 }

};

