// DO NOT MODIFY THIS FILE DIRECTLY!
// author: @TinySecEx
// ssdt database for 6.3.9600-sp0-windows-8.1 amd64

SDT_NODE static_ssdt_6_3_9600_sp0_windows_8_1_amd64[433] = {

/*0x000*/	{ "NtWorkerFactoryWorkerReady" , 1 } ,

/*0x001*/	{ "NtAcceptConnectPort" , 6 } ,

/*0x002*/	{ "NtMapUserPhysicalPagesScatter" , 3 } ,

/*0x003*/	{ "NtWaitForSingleObject" , 3 } ,

/*0x004*/	{ "NtCallbackReturn" , 3 } ,

/*0x005*/	{ "NtReadFile" , 9 } ,

/*0x006*/	{ "NtDeviceIoControlFile" , 10 } ,

/*0x007*/	{ "NtWriteFile" , 9 } ,

/*0x008*/	{ "NtRemoveIoCompletion" , 5 } ,

/*0x009*/	{ "NtReleaseSemaphore" , 3 } ,

/*0x00A*/	{ "NtReplyWaitReceivePort" , 4 } ,

/*0x00B*/	{ "NtReplyPort" , 2 } ,

/*0x00C*/	{ "NtSetInformationThread" , 4 } ,

/*0x00D*/	{ "NtSetEvent" , 2 } ,

/*0x00E*/	{ "NtClose" , 1 } ,

/*0x00F*/	{ "NtQueryObject" , 5 } ,

/*0x010*/	{ "NtQueryInformationFile" , 5 } ,

/*0x011*/	{ "NtOpenKey" , 3 } ,

/*0x012*/	{ "NtEnumerateValueKey" , 6 } ,

/*0x013*/	{ "NtFindAtom" , 3 } ,

/*0x014*/	{ "NtQueryDefaultLocale" , 2 } ,

/*0x015*/	{ "NtQueryKey" , 5 } ,

/*0x016*/	{ "NtQueryValueKey" , 6 } ,

/*0x017*/	{ "NtAllocateVirtualMemory" , 6 } ,

/*0x018*/	{ "NtQueryInformationProcess" , 5 } ,

/*0x019*/	{ "NtWaitForMultipleObjects32" , 5 } ,

/*0x01A*/	{ "NtWriteFileGather" , 9 } ,

/*0x01B*/	{ "NtSetInformationProcess" , 4 } ,

/*0x01C*/	{ "NtCreateKey" , 7 } ,

/*0x01D*/	{ "NtFreeVirtualMemory" , 4 } ,

/*0x01E*/	{ "NtImpersonateClientOfPort" , 2 } ,

/*0x01F*/	{ "NtReleaseMutant" , 2 } ,

/*0x020*/	{ "NtQueryInformationToken" , 5 } ,

/*0x021*/	{ "NtRequestWaitReplyPort" , 3 } ,

/*0x022*/	{ "NtQueryVirtualMemory" , 6 } ,

/*0x023*/	{ "NtOpenThreadToken" , 4 } ,

/*0x024*/	{ "NtQueryInformationThread" , 5 } ,

/*0x025*/	{ "NtOpenProcess" , 4 } ,

/*0x026*/	{ "NtSetInformationFile" , 5 } ,

/*0x027*/	{ "NtMapViewOfSection" , 10 } ,

/*0x028*/	{ "NtAccessCheckAndAuditAlarm" , 11 } ,

/*0x029*/	{ "NtUnmapViewOfSection" , 2 } ,

/*0x02A*/	{ "NtReplyWaitReceivePortEx" , 5 } ,

/*0x02B*/	{ "NtTerminateProcess" , 2 } ,

/*0x02C*/	{ "NtSetEventBoostPriority" , 1 } ,

/*0x02D*/	{ "NtReadFileScatter" , 9 } ,

/*0x02E*/	{ "NtOpenThreadTokenEx" , 5 } ,

/*0x02F*/	{ "NtOpenProcessTokenEx" , 4 } ,

/*0x030*/	{ "NtQueryPerformanceCounter" , 2 } ,

/*0x031*/	{ "NtEnumerateKey" , 6 } ,

/*0x032*/	{ "NtOpenFile" , 6 } ,

/*0x033*/	{ "NtDelayExecution" , 2 } ,

/*0x034*/	{ "NtQueryDirectoryFile" , 11 } ,

/*0x035*/	{ "NtQuerySystemInformation" , 4 } ,

/*0x036*/	{ "NtOpenSection" , 3 } ,

/*0x037*/	{ "NtQueryTimer" , 5 } ,

/*0x038*/	{ "NtFsControlFile" , 10 } ,

/*0x039*/	{ "NtWriteVirtualMemory" , 5 } ,

/*0x03A*/	{ "NtCloseObjectAuditAlarm" , 3 } ,

/*0x03B*/	{ "NtDuplicateObject" , 7 } ,

/*0x03C*/	{ "NtQueryAttributesFile" , 2 } ,

/*0x03D*/	{ "NtClearEvent" , 1 } ,

/*0x03E*/	{ "NtReadVirtualMemory" , 5 } ,

/*0x03F*/	{ "NtOpenEvent" , 3 } ,

/*0x040*/	{ "NtAdjustPrivilegesToken" , 6 } ,

/*0x041*/	{ "NtDuplicateToken" , 6 } ,

/*0x042*/	{ "NtContinue" , 2 } ,

/*0x043*/	{ "NtQueryDefaultUILanguage" , 1 } ,

/*0x044*/	{ "NtQueueApcThread" , 5 } ,

/*0x045*/	{ "NtYieldExecution" , 0 } ,

/*0x046*/	{ "NtAddAtom" , 3 } ,

/*0x047*/	{ "NtCreateEvent" , 5 } ,

/*0x048*/	{ "NtQueryVolumeInformationFile" , 5 } ,

/*0x049*/	{ "NtCreateSection" , 7 } ,

/*0x04A*/	{ "NtFlushBuffersFile" , 2 } ,

/*0x04B*/	{ "NtApphelpCacheControl" , 2 } ,

/*0x04C*/	{ "NtCreateProcessEx" , 9 } ,

/*0x04D*/	{ "NtCreateThread" , 8 } ,

/*0x04E*/	{ "NtIsProcessInJob" , 2 } ,

/*0x04F*/	{ "NtProtectVirtualMemory" , 5 } ,

/*0x050*/	{ "NtQuerySection" , 5 } ,

/*0x051*/	{ "NtResumeThread" , 2 } ,

/*0x052*/	{ "NtTerminateThread" , 2 } ,

/*0x053*/	{ "NtReadRequestData" , 6 } ,

/*0x054*/	{ "NtCreateFile" , 11 } ,

/*0x055*/	{ "NtQueryEvent" , 5 } ,

/*0x056*/	{ "NtWriteRequestData" , 6 } ,

/*0x057*/	{ "NtOpenDirectoryObject" , 3 } ,

/*0x058*/	{ "NtAccessCheckByTypeAndAuditAlarm" , 16 } ,

/*0x059*/	{ "NtQuerySystemTime" , 1 } ,

/*0x05A*/	{ "NtWaitForMultipleObjects" , 5 } ,

/*0x05B*/	{ "NtSetInformationObject" , 4 } ,

/*0x05C*/	{ "NtCancelIoFile" , 2 } ,

/*0x05D*/	{ "NtTraceEvent" , 4 } ,

/*0x05E*/	{ "NtPowerInformation" , 5 } ,

/*0x05F*/	{ "NtSetValueKey" , 6 } ,

/*0x060*/	{ "NtCancelTimer" , 2 } ,

/*0x061*/	{ "NtSetTimer" , 7 } ,

/*0x062*/	{ "NtAccessCheck" , 8 } ,

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

/*0x081*/	{ "NtAlpcImpersonateClientOfPort" , 3 } ,

/*0x082*/	{ "NtAlpcOpenSenderProcess" , 6 } ,

/*0x083*/	{ "NtAlpcOpenSenderThread" , 6 } ,

/*0x084*/	{ "NtAlpcQueryInformation" , 5 } ,

/*0x085*/	{ "NtAlpcQueryInformationMessage" , 6 } ,

/*0x086*/	{ "NtAlpcRevokeSecurityContext" , 3 } ,

/*0x087*/	{ "NtAlpcSendWaitReceivePort" , 8 } ,

/*0x088*/	{ "NtAlpcSetInformation" , 4 } ,

/*0x089*/	{ "NtAreMappedFilesTheSame" , 2 } ,

/*0x08A*/	{ "NtAssignProcessToJobObject" , 2 } ,

/*0x08B*/	{ "NtAssociateWaitCompletionPacket" , 8 } ,

/*0x08C*/	{ "NtCancelIoFileEx" , 3 } ,

/*0x08D*/	{ "NtCancelSynchronousIoFile" , 3 } ,

/*0x08E*/	{ "NtCancelTimer2" , 2 } ,

/*0x08F*/	{ "NtCancelWaitCompletionPacket" , 2 } ,

/*0x090*/	{ "NtCommitComplete" , 2 } ,

/*0x091*/	{ "NtCommitEnlistment" , 2 } ,

/*0x092*/	{ "NtCommitTransaction" , 2 } ,

/*0x093*/	{ "NtCompactKeys" , 2 } ,

/*0x094*/	{ "NtCompareTokens" , 3 } ,

/*0x095*/	{ "NtCompleteConnectPort" , 1 } ,

/*0x096*/	{ "NtCompressKey" , 1 } ,

/*0x097*/	{ "NtConnectPort" , 8 } ,

/*0x098*/	{ "NtCreateDebugObject" , 4 } ,

/*0x099*/	{ "NtCreateDirectoryObject" , 3 } ,

/*0x09A*/	{ "NtCreateDirectoryObjectEx" , 5 } ,

/*0x09B*/	{ "NtCreateEnlistment" , 8 } ,

/*0x09C*/	{ "NtCreateEventPair" , 3 } ,

/*0x09D*/	{ "NtCreateIRTimer" , 2 } ,

/*0x09E*/	{ "NtCreateIoCompletion" , 4 } ,

/*0x09F*/	{ "NtCreateJobObject" , 3 } ,

/*0x0A0*/	{ "NtCreateJobSet" , 3 } ,

/*0x0A1*/	{ "NtCreateKeyTransacted" , 8 } ,

/*0x0A2*/	{ "NtCreateKeyedEvent" , 4 } ,

/*0x0A3*/	{ "NtCreateLowBoxToken" , 9 } ,

/*0x0A4*/	{ "NtCreateMailslotFile" , 8 } ,

/*0x0A5*/	{ "NtCreateMutant" , 4 } ,

/*0x0A6*/	{ "NtCreateNamedPipeFile" , 14 } ,

/*0x0A7*/	{ "NtCreatePagingFile" , 4 } ,

/*0x0A8*/	{ "NtCreatePort" , 5 } ,

/*0x0A9*/	{ "NtCreatePrivateNamespace" , 4 } ,

/*0x0AA*/	{ "NtCreateProcess" , 8 } ,

/*0x0AB*/	{ "NtCreateProfile" , 9 } ,

/*0x0AC*/	{ "NtCreateProfileEx" , 10 } ,

/*0x0AD*/	{ "NtCreateResourceManager" , 7 } ,

/*0x0AE*/	{ "NtCreateSemaphore" , 5 } ,

/*0x0AF*/	{ "NtCreateSymbolicLinkObject" , 4 } ,

/*0x0B0*/	{ "NtCreateThreadEx" , 11 } ,

/*0x0B1*/	{ "NtCreateTimer" , 4 } ,

/*0x0B2*/	{ "NtCreateTimer2" , 5 } ,

/*0x0B3*/	{ "NtCreateToken" , 13 } ,

/*0x0B4*/	{ "NtCreateTokenEx" , 17 } ,

/*0x0B5*/	{ "NtCreateTransaction" , 10 } ,

/*0x0B6*/	{ "NtCreateTransactionManager" , 6 } ,

/*0x0B7*/	{ "NtCreateUserProcess" , 11 } ,

/*0x0B8*/	{ "NtCreateWaitCompletionPacket" , 3 } ,

/*0x0B9*/	{ "NtCreateWaitablePort" , 5 } ,

/*0x0BA*/	{ "NtCreateWnfStateName" , 7 } ,

/*0x0BB*/	{ "NtCreateWorkerFactory" , 10 } ,

/*0x0BC*/	{ "NtDebugActiveProcess" , 2 } ,

/*0x0BD*/	{ "NtDebugContinue" , 3 } ,

/*0x0BE*/	{ "NtDeleteAtom" , 1 } ,

/*0x0BF*/	{ "NtDeleteBootEntry" , 1 } ,

/*0x0C0*/	{ "NtDeleteDriverEntry" , 1 } ,

/*0x0C1*/	{ "NtDeleteFile" , 1 } ,

/*0x0C2*/	{ "NtDeleteKey" , 1 } ,

/*0x0C3*/	{ "NtDeleteObjectAuditAlarm" , 3 } ,

/*0x0C4*/	{ "NtDeletePrivateNamespace" , 1 } ,

/*0x0C5*/	{ "NtDeleteValueKey" , 2 } ,

/*0x0C6*/	{ "NtDeleteWnfStateData" , 2 } ,

/*0x0C7*/	{ "NtDeleteWnfStateName" , 1 } ,

/*0x0C8*/	{ "NtDisableLastKnownGood" , 0 } ,

/*0x0C9*/	{ "NtDisplayString" , 1 } ,

/*0x0CA*/	{ "NtDrawText" , 1 } ,

/*0x0CB*/	{ "NtEnableLastKnownGood" , 0 } ,

/*0x0CC*/	{ "NtEnumerateBootEntries" , 2 } ,

/*0x0CD*/	{ "NtEnumerateDriverEntries" , 2 } ,

/*0x0CE*/	{ "NtEnumerateSystemEnvironmentValuesEx" , 3 } ,

/*0x0CF*/	{ "NtEnumerateTransactionObject" , 5 } ,

/*0x0D0*/	{ "NtExtendSection" , 2 } ,

/*0x0D1*/	{ "NtFilterBootOption" , 5 } ,

/*0x0D2*/	{ "NtFilterToken" , 6 } ,

/*0x0D3*/	{ "NtFilterTokenEx" , 14 } ,

/*0x0D4*/	{ "NtFlushBuffersFileEx" , 5 } ,

/*0x0D5*/	{ "NtFlushInstallUILanguage" , 2 } ,

/*0x0D6*/	{ "NtFlushInstructionCache" , 3 } ,

/*0x0D7*/	{ "NtFlushKey" , 1 } ,

/*0x0D8*/	{ "NtFlushProcessWriteBuffers" , 0 } ,

/*0x0D9*/	{ "NtFlushVirtualMemory" , 4 } ,

/*0x0DA*/	{ "NtFlushWriteBuffer" , 0 } ,

/*0x0DB*/	{ "NtFreeUserPhysicalPages" , 3 } ,

/*0x0DC*/	{ "NtFreezeRegistry" , 1 } ,

/*0x0DD*/	{ "NtFreezeTransactions" , 2 } ,

/*0x0DE*/	{ "NtGetCachedSigningLevel" , 6 } ,

/*0x0DF*/	{ "NtGetCompleteWnfStateSubscription" , 6 } ,

/*0x0E0*/	{ "NtGetContextThread" , 2 } ,

/*0x0E1*/	{ "NtGetCurrentProcessorNumber" , 0 } ,

/*0x0E2*/	{ "NtGetDevicePowerState" , 2 } ,

/*0x0E3*/	{ "NtGetMUIRegistryInfo" , 3 } ,

/*0x0E4*/	{ "NtGetNextProcess" , 5 } ,

/*0x0E5*/	{ "NtGetNextThread" , 6 } ,

/*0x0E6*/	{ "NtGetNlsSectionPtr" , 5 } ,

/*0x0E7*/	{ "NtGetNotificationResourceManager" , 7 } ,

/*0x0E8*/	{ "NtGetWriteWatch" , 7 } ,

/*0x0E9*/	{ "NtImpersonateAnonymousToken" , 1 } ,

/*0x0EA*/	{ "NtImpersonateThread" , 3 } ,

/*0x0EB*/	{ "NtInitializeNlsFiles" , 3 } ,

/*0x0EC*/	{ "NtInitializeRegistry" , 1 } ,

/*0x0ED*/	{ "NtInitiatePowerAction" , 4 } ,

/*0x0EE*/	{ "NtIsSystemResumeAutomatic" , 0 } ,

/*0x0EF*/	{ "NtIsUILanguageComitted" , 0 } ,

/*0x0F0*/	{ "NtListenPort" , 2 } ,

/*0x0F1*/	{ "NtLoadDriver" , 1 } ,

/*0x0F2*/	{ "NtLoadKey" , 2 } ,

/*0x0F3*/	{ "NtLoadKey2" , 3 } ,

/*0x0F4*/	{ "NtLoadKeyEx" , 8 } ,

/*0x0F5*/	{ "NtLockFile" , 10 } ,

/*0x0F6*/	{ "NtLockProductActivationKeys" , 2 } ,

/*0x0F7*/	{ "NtLockRegistryKey" , 1 } ,

/*0x0F8*/	{ "NtLockVirtualMemory" , 4 } ,

/*0x0F9*/	{ "NtMakePermanentObject" , 1 } ,

/*0x0FA*/	{ "NtMakeTemporaryObject" , 1 } ,

/*0x0FB*/	{ "NtMapCMFModule" , 6 } ,

/*0x0FC*/	{ "NtMapUserPhysicalPages" , 3 } ,

/*0x0FD*/	{ "NtModifyBootEntry" , 1 } ,

/*0x0FE*/	{ "NtModifyDriverEntry" , 1 } ,

/*0x0FF*/	{ "NtNotifyChangeDirectoryFile" , 9 } ,

/*0x100*/	{ "NtNotifyChangeKey" , 10 } ,

/*0x101*/	{ "NtNotifyChangeMultipleKeys" , 12 } ,

/*0x102*/	{ "NtNotifyChangeSession" , 8 } ,

/*0x103*/	{ "NtOpenEnlistment" , 5 } ,

/*0x104*/	{ "NtOpenEventPair" , 3 } ,

/*0x105*/	{ "NtOpenIoCompletion" , 3 } ,

/*0x106*/	{ "NtOpenJobObject" , 3 } ,

/*0x107*/	{ "NtOpenKeyEx" , 4 } ,

/*0x108*/	{ "NtOpenKeyTransacted" , 4 } ,

/*0x109*/	{ "NtOpenKeyTransactedEx" , 5 } ,

/*0x10A*/	{ "NtOpenKeyedEvent" , 3 } ,

/*0x10B*/	{ "NtOpenMutant" , 3 } ,

/*0x10C*/	{ "NtOpenObjectAuditAlarm" , 12 } ,

/*0x10D*/	{ "NtOpenPrivateNamespace" , 4 } ,

/*0x10E*/	{ "NtOpenProcessToken" , 3 } ,

/*0x10F*/	{ "NtOpenResourceManager" , 5 } ,

/*0x110*/	{ "NtOpenSemaphore" , 3 } ,

/*0x111*/	{ "NtOpenSession" , 3 } ,

/*0x112*/	{ "NtOpenSymbolicLinkObject" , 3 } ,

/*0x113*/	{ "NtOpenThread" , 4 } ,

/*0x114*/	{ "NtOpenTimer" , 3 } ,

/*0x115*/	{ "NtOpenTransaction" , 5 } ,

/*0x116*/	{ "NtOpenTransactionManager" , 6 } ,

/*0x117*/	{ "NtPlugPlayControl" , 3 } ,

/*0x118*/	{ "NtPrePrepareComplete" , 2 } ,

/*0x119*/	{ "NtPrePrepareEnlistment" , 2 } ,

/*0x11A*/	{ "NtPrepareComplete" , 2 } ,

/*0x11B*/	{ "NtPrepareEnlistment" , 2 } ,

/*0x11C*/	{ "NtPrivilegeCheck" , 3 } ,

/*0x11D*/	{ "NtPrivilegeObjectAuditAlarm" , 6 } ,

/*0x11E*/	{ "NtPrivilegedServiceAuditAlarm" , 5 } ,

/*0x11F*/	{ "NtPropagationComplete" , 4 } ,

/*0x120*/	{ "NtPropagationFailed" , 3 } ,

/*0x121*/	{ "NtPulseEvent" , 2 } ,

/*0x122*/	{ "NtQueryBootEntryOrder" , 2 } ,

/*0x123*/	{ "NtQueryBootOptions" , 2 } ,

/*0x124*/	{ "NtQueryDebugFilterState" , 2 } ,

/*0x125*/	{ "NtQueryDirectoryObject" , 7 } ,

/*0x126*/	{ "NtQueryDriverEntryOrder" , 2 } ,

/*0x127*/	{ "NtQueryEaFile" , 9 } ,

/*0x128*/	{ "NtQueryFullAttributesFile" , 2 } ,

/*0x129*/	{ "NtQueryInformationAtom" , 5 } ,

/*0x12A*/	{ "NtQueryInformationEnlistment" , 5 } ,

/*0x12B*/	{ "NtQueryInformationJobObject" , 5 } ,

/*0x12C*/	{ "NtQueryInformationPort" , 5 } ,

/*0x12D*/	{ "NtQueryInformationResourceManager" , 5 } ,

/*0x12E*/	{ "NtQueryInformationTransaction" , 5 } ,

/*0x12F*/	{ "NtQueryInformationTransactionManager" , 5 } ,

/*0x130*/	{ "NtQueryInformationWorkerFactory" , 5 } ,

/*0x131*/	{ "NtQueryInstallUILanguage" , 1 } ,

/*0x132*/	{ "NtQueryIntervalProfile" , 2 } ,

/*0x133*/	{ "NtQueryIoCompletion" , 5 } ,

/*0x134*/	{ "NtQueryLicenseValue" , 5 } ,

/*0x135*/	{ "NtQueryMultipleValueKey" , 6 } ,

/*0x136*/	{ "NtQueryMutant" , 5 } ,

/*0x137*/	{ "NtQueryOpenSubKeys" , 2 } ,

/*0x138*/	{ "NtQueryOpenSubKeysEx" , 4 } ,

/*0x139*/	{ "NtQueryPortInformationProcess" , 0 } ,

/*0x13A*/	{ "NtQueryQuotaInformationFile" , 9 } ,

/*0x13B*/	{ "NtQuerySecurityAttributesToken" , 6 } ,

/*0x13C*/	{ "NtQuerySecurityObject" , 5 } ,

/*0x13D*/	{ "NtQuerySemaphore" , 5 } ,

/*0x13E*/	{ "NtQuerySymbolicLinkObject" , 3 } ,

/*0x13F*/	{ "NtQuerySystemEnvironmentValue" , 4 } ,

/*0x140*/	{ "NtQuerySystemEnvironmentValueEx" , 5 } ,

/*0x141*/	{ "NtQuerySystemInformationEx" , 6 } ,

/*0x142*/	{ "NtQueryTimerResolution" , 3 } ,

/*0x143*/	{ "NtQueryWnfStateData" , 6 } ,

/*0x144*/	{ "NtQueryWnfStateNameInformation" , 5 } ,

/*0x145*/	{ "NtQueueApcThreadEx" , 6 } ,

/*0x146*/	{ "NtRaiseException" , 3 } ,

/*0x147*/	{ "NtRaiseHardError" , 6 } ,

/*0x148*/	{ "NtReadOnlyEnlistment" , 2 } ,

/*0x149*/	{ "NtRecoverEnlistment" , 2 } ,

/*0x14A*/	{ "NtRecoverResourceManager" , 1 } ,

/*0x14B*/	{ "NtRecoverTransactionManager" , 1 } ,

/*0x14C*/	{ "NtRegisterProtocolAddressInformation" , 5 } ,

/*0x14D*/	{ "NtRegisterThreadTerminatePort" , 1 } ,

/*0x14E*/	{ "NtReleaseKeyedEvent" , 4 } ,

/*0x14F*/	{ "NtReleaseWorkerFactoryWorker" , 1 } ,

/*0x150*/	{ "NtRemoveIoCompletionEx" , 6 } ,

/*0x151*/	{ "NtRemoveProcessDebug" , 2 } ,

/*0x152*/	{ "NtRenameKey" , 2 } ,

/*0x153*/	{ "NtRenameTransactionManager" , 2 } ,

/*0x154*/	{ "NtReplaceKey" , 3 } ,

/*0x155*/	{ "NtReplacePartitionUnit" , 3 } ,

/*0x156*/	{ "NtReplyWaitReplyPort" , 2 } ,

/*0x157*/	{ "NtRequestPort" , 2 } ,

/*0x158*/	{ "NtResetEvent" , 2 } ,

/*0x159*/	{ "NtResetWriteWatch" , 3 } ,

/*0x15A*/	{ "NtRestoreKey" , 3 } ,

/*0x15B*/	{ "NtResumeProcess" , 1 } ,

/*0x15C*/	{ "NtRollbackComplete" , 2 } ,

/*0x15D*/	{ "NtRollbackEnlistment" , 2 } ,

/*0x15E*/	{ "NtRollbackTransaction" , 2 } ,

/*0x15F*/	{ "NtRollforwardTransactionManager" , 2 } ,

/*0x160*/	{ "NtSaveKey" , 2 } ,

/*0x161*/	{ "NtSaveKeyEx" , 3 } ,

/*0x162*/	{ "NtSaveMergedKeys" , 3 } ,

/*0x163*/	{ "NtSecureConnectPort" , 9 } ,

/*0x164*/	{ "NtSerializeBoot" , 0 } ,

/*0x165*/	{ "NtSetBootEntryOrder" , 2 } ,

/*0x166*/	{ "NtSetBootOptions" , 2 } ,

/*0x167*/	{ "NtSetCachedSigningLevel" , 5 } ,

/*0x168*/	{ "NtSetContextThread" , 2 } ,

/*0x169*/	{ "NtSetDebugFilterState" , 3 } ,

/*0x16A*/	{ "NtSetDefaultHardErrorPort" , 1 } ,

/*0x16B*/	{ "NtSetDefaultLocale" , 2 } ,

/*0x16C*/	{ "NtSetDefaultUILanguage" , 1 } ,

/*0x16D*/	{ "NtSetDriverEntryOrder" , 2 } ,

/*0x16E*/	{ "NtSetEaFile" , 4 } ,

/*0x16F*/	{ "NtSetHighEventPair" , 1 } ,

/*0x170*/	{ "NtSetHighWaitLowEventPair" , 1 } ,

/*0x171*/	{ "NtSetIRTimer" , 2 } ,

/*0x172*/	{ "NtSetInformationDebugObject" , 5 } ,

/*0x173*/	{ "NtSetInformationEnlistment" , 4 } ,

/*0x174*/	{ "NtSetInformationJobObject" , 4 } ,

/*0x175*/	{ "NtSetInformationKey" , 4 } ,

/*0x176*/	{ "NtSetInformationResourceManager" , 4 } ,

/*0x177*/	{ "NtSetInformationToken" , 4 } ,

/*0x178*/	{ "NtSetInformationTransaction" , 4 } ,

/*0x179*/	{ "NtSetInformationTransactionManager" , 4 } ,

/*0x17A*/	{ "NtSetInformationVirtualMemory" , 6 } ,

/*0x17B*/	{ "NtSetInformationWorkerFactory" , 4 } ,

/*0x17C*/	{ "NtSetIntervalProfile" , 2 } ,

/*0x17D*/	{ "NtSetIoCompletion" , 5 } ,

/*0x17E*/	{ "NtSetIoCompletionEx" , 6 } ,

/*0x17F*/	{ "NtSetLdtEntries" , 6 } ,

/*0x180*/	{ "NtSetLowEventPair" , 1 } ,

/*0x181*/	{ "NtSetLowWaitHighEventPair" , 1 } ,

/*0x182*/	{ "NtSetQuotaInformationFile" , 4 } ,

/*0x183*/	{ "NtSetSecurityObject" , 3 } ,

/*0x184*/	{ "NtSetSystemEnvironmentValue" , 2 } ,

/*0x185*/	{ "NtSetSystemEnvironmentValueEx" , 5 } ,

/*0x186*/	{ "NtSetSystemInformation" , 3 } ,

/*0x187*/	{ "NtSetSystemPowerState" , 3 } ,

/*0x188*/	{ "NtSetSystemTime" , 2 } ,

/*0x189*/	{ "NtSetThreadExecutionState" , 2 } ,

/*0x18A*/	{ "NtSetTimer2" , 4 } ,

/*0x18B*/	{ "NtSetTimerEx" , 4 } ,

/*0x18C*/	{ "NtSetTimerResolution" , 3 } ,

/*0x18D*/	{ "NtSetUuidSeed" , 1 } ,

/*0x18E*/	{ "NtSetVolumeInformationFile" , 5 } ,

/*0x18F*/	{ "NtSetWnfProcessNotificationEvent" , 1 } ,

/*0x190*/	{ "NtShutdownSystem" , 1 } ,

/*0x191*/	{ "NtShutdownWorkerFactory" , 2 } ,

/*0x192*/	{ "NtSignalAndWaitForSingleObject" , 4 } ,

/*0x193*/	{ "NtSinglePhaseReject" , 2 } ,

/*0x194*/	{ "NtStartProfile" , 1 } ,

/*0x195*/	{ "NtStopProfile" , 1 } ,

/*0x196*/	{ "NtSubscribeWnfStateChange" , 4 } ,

/*0x197*/	{ "NtSuspendProcess" , 1 } ,

/*0x198*/	{ "NtSuspendThread" , 2 } ,

/*0x199*/	{ "NtSystemDebugControl" , 6 } ,

/*0x19A*/	{ "NtTerminateJobObject" , 2 } ,

/*0x19B*/	{ "NtTestAlert" , 0 } ,

/*0x19C*/	{ "NtThawRegistry" , 0 } ,

/*0x19D*/	{ "NtThawTransactions" , 0 } ,

/*0x19E*/	{ "NtTraceControl" , 6 } ,

/*0x19F*/	{ "NtTranslateFilePath" , 4 } ,

/*0x1A0*/	{ "NtUmsThreadYield" , 1 } ,

/*0x1A1*/	{ "NtUnloadDriver" , 1 } ,

/*0x1A2*/	{ "NtUnloadKey" , 1 } ,

/*0x1A3*/	{ "NtUnloadKey2" , 2 } ,

/*0x1A4*/	{ "NtUnloadKeyEx" , 2 } ,

/*0x1A5*/	{ "NtUnlockFile" , 5 } ,

/*0x1A6*/	{ "NtUnlockVirtualMemory" , 4 } ,

/*0x1A7*/	{ "NtUnmapViewOfSectionEx" , 3 } ,

/*0x1A8*/	{ "NtUnsubscribeWnfStateChange" , 1 } ,

/*0x1A9*/	{ "NtUpdateWnfStateData" , 7 } ,

/*0x1AA*/	{ "NtVdmControl" , 2 } ,

/*0x1AB*/	{ "NtWaitForAlertByThreadId" , 2 } ,

/*0x1AC*/	{ "NtWaitForDebugEvent" , 4 } ,

/*0x1AD*/	{ "NtWaitForKeyedEvent" , 4 } ,

/*0x1AE*/	{ "NtWaitForWorkViaWorkerFactory" , 5 } ,

/*0x1AF*/	{ "NtWaitHighEventPair" , 1 } ,

/*0x1B0*/	{ "NtWaitLowEventPair" , 1 }

};

