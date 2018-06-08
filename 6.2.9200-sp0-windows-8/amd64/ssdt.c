// DO NOT MODIFY THIS FILE DIRECTLY!
// author: @TinySecEx
// ssdt database for 6.2.9200-sp0-windows-8 amd64

SDT_NODE static_ssdt_6_2_9200_sp0_windows_8_amd64[429] = {

/*0x000*/	{ "NtWorkerFactoryWorkerReady" , 1 } ,

/*0x001*/	{ "NtMapUserPhysicalPagesScatter" , 3 } ,

/*0x002*/	{ "NtWaitForSingleObject" , 3 } ,

/*0x003*/	{ "NtCallbackReturn" , 3 } ,

/*0x004*/	{ "NtReadFile" , 9 } ,

/*0x005*/	{ "NtDeviceIoControlFile" , 10 } ,

/*0x006*/	{ "NtWriteFile" , 9 } ,

/*0x007*/	{ "NtRemoveIoCompletion" , 5 } ,

/*0x008*/	{ "NtReleaseSemaphore" , 3 } ,

/*0x009*/	{ "NtReplyWaitReceivePort" , 4 } ,

/*0x00A*/	{ "NtReplyPort" , 2 } ,

/*0x00B*/	{ "NtSetInformationThread" , 4 } ,

/*0x00C*/	{ "NtSetEvent" , 2 } ,

/*0x00D*/	{ "NtClose" , 1 } ,

/*0x00E*/	{ "NtQueryObject" , 5 } ,

/*0x00F*/	{ "NtQueryInformationFile" , 5 } ,

/*0x010*/	{ "NtOpenKey" , 3 } ,

/*0x011*/	{ "NtEnumerateValueKey" , 6 } ,

/*0x012*/	{ "NtFindAtom" , 3 } ,

/*0x013*/	{ "NtQueryDefaultLocale" , 2 } ,

/*0x014*/	{ "NtQueryKey" , 5 } ,

/*0x015*/	{ "NtQueryValueKey" , 6 } ,

/*0x016*/	{ "NtAllocateVirtualMemory" , 6 } ,

/*0x017*/	{ "NtQueryInformationProcess" , 5 } ,

/*0x018*/	{ "NtWaitForMultipleObjects32" , 5 } ,

/*0x019*/	{ "NtWriteFileGather" , 9 } ,

/*0x01A*/	{ "NtSetInformationProcess" , 4 } ,

/*0x01B*/	{ "NtCreateKey" , 7 } ,

/*0x01C*/	{ "NtFreeVirtualMemory" , 4 } ,

/*0x01D*/	{ "NtImpersonateClientOfPort" , 2 } ,

/*0x01E*/	{ "NtReleaseMutant" , 2 } ,

/*0x01F*/	{ "NtQueryInformationToken" , 5 } ,

/*0x020*/	{ "NtRequestWaitReplyPort" , 3 } ,

/*0x021*/	{ "NtQueryVirtualMemory" , 6 } ,

/*0x022*/	{ "NtOpenThreadToken" , 4 } ,

/*0x023*/	{ "NtQueryInformationThread" , 5 } ,

/*0x024*/	{ "NtOpenProcess" , 4 } ,

/*0x025*/	{ "NtSetInformationFile" , 5 } ,

/*0x026*/	{ "NtMapViewOfSection" , 10 } ,

/*0x027*/	{ "NtAccessCheckAndAuditAlarm" , 11 } ,

/*0x028*/	{ "NtUnmapViewOfSection" , 2 } ,

/*0x029*/	{ "NtReplyWaitReceivePortEx" , 5 } ,

/*0x02A*/	{ "NtTerminateProcess" , 2 } ,

/*0x02B*/	{ "NtSetEventBoostPriority" , 1 } ,

/*0x02C*/	{ "NtReadFileScatter" , 9 } ,

/*0x02D*/	{ "NtOpenThreadTokenEx" , 5 } ,

/*0x02E*/	{ "NtOpenProcessTokenEx" , 4 } ,

/*0x02F*/	{ "NtQueryPerformanceCounter" , 2 } ,

/*0x030*/	{ "NtEnumerateKey" , 6 } ,

/*0x031*/	{ "NtOpenFile" , 6 } ,

/*0x032*/	{ "NtDelayExecution" , 2 } ,

/*0x033*/	{ "NtQueryDirectoryFile" , 11 } ,

/*0x034*/	{ "NtQuerySystemInformation" , 4 } ,

/*0x035*/	{ "NtOpenSection" , 3 } ,

/*0x036*/	{ "NtQueryTimer" , 5 } ,

/*0x037*/	{ "NtFsControlFile" , 10 } ,

/*0x038*/	{ "NtWriteVirtualMemory" , 5 } ,

/*0x039*/	{ "NtCloseObjectAuditAlarm" , 3 } ,

/*0x03A*/	{ "NtDuplicateObject" , 7 } ,

/*0x03B*/	{ "NtQueryAttributesFile" , 2 } ,

/*0x03C*/	{ "NtClearEvent" , 1 } ,

/*0x03D*/	{ "NtReadVirtualMemory" , 5 } ,

/*0x03E*/	{ "NtOpenEvent" , 3 } ,

/*0x03F*/	{ "NtAdjustPrivilegesToken" , 6 } ,

/*0x040*/	{ "NtDuplicateToken" , 6 } ,

/*0x041*/	{ "NtContinue" , 2 } ,

/*0x042*/	{ "NtQueryDefaultUILanguage" , 1 } ,

/*0x043*/	{ "NtQueueApcThread" , 5 } ,

/*0x044*/	{ "NtYieldExecution" , 0 } ,

/*0x045*/	{ "NtAddAtom" , 3 } ,

/*0x046*/	{ "NtCreateEvent" , 5 } ,

/*0x047*/	{ "NtQueryVolumeInformationFile" , 5 } ,

/*0x048*/	{ "NtCreateSection" , 7 } ,

/*0x049*/	{ "NtFlushBuffersFile" , 2 } ,

/*0x04A*/	{ "NtApphelpCacheControl" , 2 } ,

/*0x04B*/	{ "NtCreateProcessEx" , 9 } ,

/*0x04C*/	{ "NtCreateThread" , 8 } ,

/*0x04D*/	{ "NtIsProcessInJob" , 2 } ,

/*0x04E*/	{ "NtProtectVirtualMemory" , 5 } ,

/*0x04F*/	{ "NtQuerySection" , 5 } ,

/*0x050*/	{ "NtResumeThread" , 2 } ,

/*0x051*/	{ "NtTerminateThread" , 2 } ,

/*0x052*/	{ "NtReadRequestData" , 6 } ,

/*0x053*/	{ "NtCreateFile" , 11 } ,

/*0x054*/	{ "NtQueryEvent" , 5 } ,

/*0x055*/	{ "NtWriteRequestData" , 6 } ,

/*0x056*/	{ "NtOpenDirectoryObject" , 3 } ,

/*0x057*/	{ "NtAccessCheckByTypeAndAuditAlarm" , 16 } ,

/*0x058*/	{ "NtQuerySystemTime" , 1 } ,

/*0x059*/	{ "NtWaitForMultipleObjects" , 5 } ,

/*0x05A*/	{ "NtSetInformationObject" , 4 } ,

/*0x05B*/	{ "NtCancelIoFile" , 2 } ,

/*0x05C*/	{ "NtTraceEvent" , 4 } ,

/*0x05D*/	{ "NtPowerInformation" , 5 } ,

/*0x05E*/	{ "NtSetValueKey" , 6 } ,

/*0x05F*/	{ "NtCancelTimer" , 2 } ,

/*0x060*/	{ "NtSetTimer" , 7 } ,

/*0x061*/	{ "NtAcceptConnectPort" , 6 } ,

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

/*0x08E*/	{ "NtCancelWaitCompletionPacket" , 2 } ,

/*0x08F*/	{ "NtCommitComplete" , 2 } ,

/*0x090*/	{ "NtCommitEnlistment" , 2 } ,

/*0x091*/	{ "NtCommitTransaction" , 2 } ,

/*0x092*/	{ "NtCompactKeys" , 2 } ,

/*0x093*/	{ "NtCompareTokens" , 3 } ,

/*0x094*/	{ "NtCompleteConnectPort" , 1 } ,

/*0x095*/	{ "NtCompressKey" , 1 } ,

/*0x096*/	{ "NtConnectPort" , 8 } ,

/*0x097*/	{ "NtCreateDebugObject" , 4 } ,

/*0x098*/	{ "NtCreateDirectoryObject" , 3 } ,

/*0x099*/	{ "NtCreateDirectoryObjectEx" , 5 } ,

/*0x09A*/	{ "NtCreateEnlistment" , 8 } ,

/*0x09B*/	{ "NtCreateEventPair" , 3 } ,

/*0x09C*/	{ "NtCreateIRTimer" , 2 } ,

/*0x09D*/	{ "NtCreateIoCompletion" , 4 } ,

/*0x09E*/	{ "NtCreateJobObject" , 3 } ,

/*0x09F*/	{ "NtCreateJobSet" , 3 } ,

/*0x0A0*/	{ "NtCreateKeyTransacted" , 8 } ,

/*0x0A1*/	{ "NtCreateKeyedEvent" , 4 } ,

/*0x0A2*/	{ "NtCreateLowBoxToken" , 9 } ,

/*0x0A3*/	{ "NtCreateMailslotFile" , 8 } ,

/*0x0A4*/	{ "NtCreateMutant" , 4 } ,

/*0x0A5*/	{ "NtCreateNamedPipeFile" , 14 } ,

/*0x0A6*/	{ "NtCreatePagingFile" , 4 } ,

/*0x0A7*/	{ "NtCreatePort" , 5 } ,

/*0x0A8*/	{ "NtCreatePrivateNamespace" , 4 } ,

/*0x0A9*/	{ "NtCreateProcess" , 8 } ,

/*0x0AA*/	{ "NtCreateProfile" , 9 } ,

/*0x0AB*/	{ "NtCreateProfileEx" , 10 } ,

/*0x0AC*/	{ "NtCreateResourceManager" , 7 } ,

/*0x0AD*/	{ "NtCreateSemaphore" , 5 } ,

/*0x0AE*/	{ "NtCreateSymbolicLinkObject" , 4 } ,

/*0x0AF*/	{ "NtCreateThreadEx" , 11 } ,

/*0x0B0*/	{ "NtCreateTimer" , 4 } ,

/*0x0B1*/	{ "NtCreateToken" , 13 } ,

/*0x0B2*/	{ "NtCreateTokenEx" , 17 } ,

/*0x0B3*/	{ "NtCreateTransaction" , 10 } ,

/*0x0B4*/	{ "NtCreateTransactionManager" , 6 } ,

/*0x0B5*/	{ "NtCreateUserProcess" , 11 } ,

/*0x0B6*/	{ "NtCreateWaitCompletionPacket" , 3 } ,

/*0x0B7*/	{ "NtCreateWaitablePort" , 5 } ,

/*0x0B8*/	{ "NtCreateWnfStateName" , 7 } ,

/*0x0B9*/	{ "NtCreateWorkerFactory" , 10 } ,

/*0x0BA*/	{ "NtDebugActiveProcess" , 2 } ,

/*0x0BB*/	{ "NtDebugContinue" , 3 } ,

/*0x0BC*/	{ "NtDeleteAtom" , 1 } ,

/*0x0BD*/	{ "NtDeleteBootEntry" , 1 } ,

/*0x0BE*/	{ "NtDeleteDriverEntry" , 1 } ,

/*0x0BF*/	{ "NtDeleteFile" , 1 } ,

/*0x0C0*/	{ "NtDeleteKey" , 1 } ,

/*0x0C1*/	{ "NtDeleteObjectAuditAlarm" , 3 } ,

/*0x0C2*/	{ "NtDeletePrivateNamespace" , 1 } ,

/*0x0C3*/	{ "NtDeleteValueKey" , 2 } ,

/*0x0C4*/	{ "NtDeleteWnfStateData" , 2 } ,

/*0x0C5*/	{ "NtDeleteWnfStateName" , 1 } ,

/*0x0C6*/	{ "NtDisableLastKnownGood" , 0 } ,

/*0x0C7*/	{ "NtDisplayString" , 1 } ,

/*0x0C8*/	{ "NtDrawText" , 1 } ,

/*0x0C9*/	{ "NtEnableLastKnownGood" , 0 } ,

/*0x0CA*/	{ "NtEnumerateBootEntries" , 2 } ,

/*0x0CB*/	{ "NtEnumerateDriverEntries" , 2 } ,

/*0x0CC*/	{ "NtEnumerateSystemEnvironmentValuesEx" , 3 } ,

/*0x0CD*/	{ "NtEnumerateTransactionObject" , 5 } ,

/*0x0CE*/	{ "NtExtendSection" , 2 } ,

/*0x0CF*/	{ "NtFilterBootOption" , 5 } ,

/*0x0D0*/	{ "NtFilterToken" , 6 } ,

/*0x0D1*/	{ "NtFilterTokenEx" , 14 } ,

/*0x0D2*/	{ "NtFlushBuffersFileEx" , 5 } ,

/*0x0D3*/	{ "NtFlushInstallUILanguage" , 2 } ,

/*0x0D4*/	{ "NtFlushInstructionCache" , 3 } ,

/*0x0D5*/	{ "NtFlushKey" , 1 } ,

/*0x0D6*/	{ "NtFlushProcessWriteBuffers" , 0 } ,

/*0x0D7*/	{ "NtFlushVirtualMemory" , 4 } ,

/*0x0D8*/	{ "NtFlushWriteBuffer" , 0 } ,

/*0x0D9*/	{ "NtFreeUserPhysicalPages" , 3 } ,

/*0x0DA*/	{ "NtFreezeRegistry" , 1 } ,

/*0x0DB*/	{ "NtFreezeTransactions" , 2 } ,

/*0x0DC*/	{ "NtGetCachedSigningLevel" , 6 } ,

/*0x0DD*/	{ "NtGetContextThread" , 2 } ,

/*0x0DE*/	{ "NtGetCurrentProcessorNumber" , 0 } ,

/*0x0DF*/	{ "NtGetDevicePowerState" , 2 } ,

/*0x0E0*/	{ "NtGetMUIRegistryInfo" , 3 } ,

/*0x0E1*/	{ "NtGetNextProcess" , 5 } ,

/*0x0E2*/	{ "NtGetNextThread" , 6 } ,

/*0x0E3*/	{ "NtGetNlsSectionPtr" , 5 } ,

/*0x0E4*/	{ "NtGetNotificationResourceManager" , 7 } ,

/*0x0E5*/	{ "NtGetWriteWatch" , 7 } ,

/*0x0E6*/	{ "NtImpersonateAnonymousToken" , 1 } ,

/*0x0E7*/	{ "NtImpersonateThread" , 3 } ,

/*0x0E8*/	{ "NtInitializeNlsFiles" , 3 } ,

/*0x0E9*/	{ "NtInitializeRegistry" , 1 } ,

/*0x0EA*/	{ "NtInitiatePowerAction" , 4 } ,

/*0x0EB*/	{ "NtIsSystemResumeAutomatic" , 0 } ,

/*0x0EC*/	{ "NtIsUILanguageComitted" , 0 } ,

/*0x0ED*/	{ "NtListenPort" , 2 } ,

/*0x0EE*/	{ "NtLoadDriver" , 1 } ,

/*0x0EF*/	{ "NtLoadKey" , 2 } ,

/*0x0F0*/	{ "NtLoadKey2" , 3 } ,

/*0x0F1*/	{ "NtLoadKeyEx" , 8 } ,

/*0x0F2*/	{ "NtLockFile" , 10 } ,

/*0x0F3*/	{ "NtLockProductActivationKeys" , 2 } ,

/*0x0F4*/	{ "NtLockRegistryKey" , 1 } ,

/*0x0F5*/	{ "NtLockVirtualMemory" , 4 } ,

/*0x0F6*/	{ "NtMakePermanentObject" , 1 } ,

/*0x0F7*/	{ "NtMakeTemporaryObject" , 1 } ,

/*0x0F8*/	{ "NtMapCMFModule" , 6 } ,

/*0x0F9*/	{ "NtMapUserPhysicalPages" , 3 } ,

/*0x0FA*/	{ "NtModifyBootEntry" , 1 } ,

/*0x0FB*/	{ "NtModifyDriverEntry" , 1 } ,

/*0x0FC*/	{ "NtNotifyChangeDirectoryFile" , 9 } ,

/*0x0FD*/	{ "NtNotifyChangeKey" , 10 } ,

/*0x0FE*/	{ "NtNotifyChangeMultipleKeys" , 12 } ,

/*0x0FF*/	{ "NtNotifyChangeSession" , 8 } ,

/*0x100*/	{ "NtOpenEnlistment" , 5 } ,

/*0x101*/	{ "NtOpenEventPair" , 3 } ,

/*0x102*/	{ "NtOpenIoCompletion" , 3 } ,

/*0x103*/	{ "NtOpenJobObject" , 3 } ,

/*0x104*/	{ "NtOpenKeyEx" , 4 } ,

/*0x105*/	{ "NtOpenKeyTransacted" , 4 } ,

/*0x106*/	{ "NtOpenKeyTransactedEx" , 5 } ,

/*0x107*/	{ "NtOpenKeyedEvent" , 3 } ,

/*0x108*/	{ "NtOpenMutant" , 3 } ,

/*0x109*/	{ "NtOpenObjectAuditAlarm" , 12 } ,

/*0x10A*/	{ "NtOpenPrivateNamespace" , 4 } ,

/*0x10B*/	{ "NtOpenProcessToken" , 3 } ,

/*0x10C*/	{ "NtOpenResourceManager" , 5 } ,

/*0x10D*/	{ "NtOpenSemaphore" , 3 } ,

/*0x10E*/	{ "NtOpenSession" , 3 } ,

/*0x10F*/	{ "NtOpenSymbolicLinkObject" , 3 } ,

/*0x110*/	{ "NtOpenThread" , 4 } ,

/*0x111*/	{ "NtOpenTimer" , 3 } ,

/*0x112*/	{ "NtOpenTransaction" , 5 } ,

/*0x113*/	{ "NtOpenTransactionManager" , 6 } ,

/*0x114*/	{ "NtPlugPlayControl" , 3 } ,

/*0x115*/	{ "NtPrePrepareComplete" , 2 } ,

/*0x116*/	{ "NtPrePrepareEnlistment" , 2 } ,

/*0x117*/	{ "NtPrepareComplete" , 2 } ,

/*0x118*/	{ "NtPrepareEnlistment" , 2 } ,

/*0x119*/	{ "NtPrivilegeCheck" , 3 } ,

/*0x11A*/	{ "NtPrivilegeObjectAuditAlarm" , 6 } ,

/*0x11B*/	{ "NtPrivilegedServiceAuditAlarm" , 5 } ,

/*0x11C*/	{ "NtPropagationComplete" , 4 } ,

/*0x11D*/	{ "NtPropagationFailed" , 3 } ,

/*0x11E*/	{ "NtPulseEvent" , 2 } ,

/*0x11F*/	{ "NtQueryBootEntryOrder" , 2 } ,

/*0x120*/	{ "NtQueryBootOptions" , 2 } ,

/*0x121*/	{ "NtQueryDebugFilterState" , 2 } ,

/*0x122*/	{ "NtQueryDirectoryObject" , 7 } ,

/*0x123*/	{ "NtQueryDriverEntryOrder" , 2 } ,

/*0x124*/	{ "NtQueryEaFile" , 9 } ,

/*0x125*/	{ "NtQueryFullAttributesFile" , 2 } ,

/*0x126*/	{ "NtQueryInformationAtom" , 5 } ,

/*0x127*/	{ "NtQueryInformationEnlistment" , 5 } ,

/*0x128*/	{ "NtQueryInformationJobObject" , 5 } ,

/*0x129*/	{ "NtQueryInformationPort" , 5 } ,

/*0x12A*/	{ "NtQueryInformationResourceManager" , 5 } ,

/*0x12B*/	{ "NtQueryInformationTransaction" , 5 } ,

/*0x12C*/	{ "NtQueryInformationTransactionManager" , 5 } ,

/*0x12D*/	{ "NtQueryInformationWorkerFactory" , 5 } ,

/*0x12E*/	{ "NtQueryInstallUILanguage" , 1 } ,

/*0x12F*/	{ "NtQueryIntervalProfile" , 2 } ,

/*0x130*/	{ "NtQueryIoCompletion" , 5 } ,

/*0x131*/	{ "NtQueryLicenseValue" , 5 } ,

/*0x132*/	{ "NtQueryMultipleValueKey" , 6 } ,

/*0x133*/	{ "NtQueryMutant" , 5 } ,

/*0x134*/	{ "NtQueryOpenSubKeys" , 2 } ,

/*0x135*/	{ "NtQueryOpenSubKeysEx" , 4 } ,

/*0x136*/	{ "NtQueryPortInformationProcess" , 0 } ,

/*0x137*/	{ "NtQueryQuotaInformationFile" , 9 } ,

/*0x138*/	{ "NtQuerySecurityAttributesToken" , 6 } ,

/*0x139*/	{ "NtQuerySecurityObject" , 5 } ,

/*0x13A*/	{ "NtQuerySemaphore" , 5 } ,

/*0x13B*/	{ "NtQuerySymbolicLinkObject" , 3 } ,

/*0x13C*/	{ "NtQuerySystemEnvironmentValue" , 4 } ,

/*0x13D*/	{ "NtQuerySystemEnvironmentValueEx" , 5 } ,

/*0x13E*/	{ "NtQuerySystemInformationEx" , 6 } ,

/*0x13F*/	{ "NtQueryTimerResolution" , 3 } ,

/*0x140*/	{ "NtQueryWnfStateData" , 6 } ,

/*0x141*/	{ "NtQueryWnfStateNameInformation" , 5 } ,

/*0x142*/	{ "NtQueueApcThreadEx" , 6 } ,

/*0x143*/	{ "NtRaiseException" , 3 } ,

/*0x144*/	{ "NtRaiseHardError" , 6 } ,

/*0x145*/	{ "NtReadOnlyEnlistment" , 2 } ,

/*0x146*/	{ "NtRecoverEnlistment" , 2 } ,

/*0x147*/	{ "NtRecoverResourceManager" , 1 } ,

/*0x148*/	{ "NtRecoverTransactionManager" , 1 } ,

/*0x149*/	{ "NtRegisterProtocolAddressInformation" , 5 } ,

/*0x14A*/	{ "NtRegisterThreadTerminatePort" , 1 } ,

/*0x14B*/	{ "NtReleaseKeyedEvent" , 4 } ,

/*0x14C*/	{ "NtReleaseWorkerFactoryWorker" , 1 } ,

/*0x14D*/	{ "NtRemoveIoCompletionEx" , 6 } ,

/*0x14E*/	{ "NtRemoveProcessDebug" , 2 } ,

/*0x14F*/	{ "NtRenameKey" , 2 } ,

/*0x150*/	{ "NtRenameTransactionManager" , 2 } ,

/*0x151*/	{ "NtReplaceKey" , 3 } ,

/*0x152*/	{ "NtReplacePartitionUnit" , 3 } ,

/*0x153*/	{ "NtReplyWaitReplyPort" , 2 } ,

/*0x154*/	{ "NtRequestPort" , 2 } ,

/*0x155*/	{ "NtResetEvent" , 2 } ,

/*0x156*/	{ "NtResetWriteWatch" , 3 } ,

/*0x157*/	{ "NtRestoreKey" , 3 } ,

/*0x158*/	{ "NtResumeProcess" , 1 } ,

/*0x159*/	{ "NtRollbackComplete" , 2 } ,

/*0x15A*/	{ "NtRollbackEnlistment" , 2 } ,

/*0x15B*/	{ "NtRollbackTransaction" , 2 } ,

/*0x15C*/	{ "NtRollforwardTransactionManager" , 2 } ,

/*0x15D*/	{ "NtSaveKey" , 2 } ,

/*0x15E*/	{ "NtSaveKeyEx" , 3 } ,

/*0x15F*/	{ "NtSaveMergedKeys" , 3 } ,

/*0x160*/	{ "NtSecureConnectPort" , 9 } ,

/*0x161*/	{ "NtSerializeBoot" , 0 } ,

/*0x162*/	{ "NtSetBootEntryOrder" , 2 } ,

/*0x163*/	{ "NtSetBootOptions" , 2 } ,

/*0x164*/	{ "NtSetCachedSigningLevel" , 5 } ,

/*0x165*/	{ "NtSetContextThread" , 2 } ,

/*0x166*/	{ "NtSetDebugFilterState" , 3 } ,

/*0x167*/	{ "NtSetDefaultHardErrorPort" , 1 } ,

/*0x168*/	{ "NtSetDefaultLocale" , 2 } ,

/*0x169*/	{ "NtSetDefaultUILanguage" , 1 } ,

/*0x16A*/	{ "NtSetDriverEntryOrder" , 2 } ,

/*0x16B*/	{ "NtSetEaFile" , 4 } ,

/*0x16C*/	{ "NtSetHighEventPair" , 1 } ,

/*0x16D*/	{ "NtSetHighWaitLowEventPair" , 1 } ,

/*0x16E*/	{ "NtSetIRTimer" , 2 } ,

/*0x16F*/	{ "NtSetInformationDebugObject" , 5 } ,

/*0x170*/	{ "NtSetInformationEnlistment" , 4 } ,

/*0x171*/	{ "NtSetInformationJobObject" , 4 } ,

/*0x172*/	{ "NtSetInformationKey" , 4 } ,

/*0x173*/	{ "NtSetInformationResourceManager" , 4 } ,

/*0x174*/	{ "NtSetInformationToken" , 4 } ,

/*0x175*/	{ "NtSetInformationTransaction" , 4 } ,

/*0x176*/	{ "NtSetInformationTransactionManager" , 4 } ,

/*0x177*/	{ "NtSetInformationVirtualMemory" , 6 } ,

/*0x178*/	{ "NtSetInformationWorkerFactory" , 4 } ,

/*0x179*/	{ "NtSetIntervalProfile" , 2 } ,

/*0x17A*/	{ "NtSetIoCompletion" , 5 } ,

/*0x17B*/	{ "NtSetIoCompletionEx" , 6 } ,

/*0x17C*/	{ "NtSetLdtEntries" , 6 } ,

/*0x17D*/	{ "NtSetLowEventPair" , 1 } ,

/*0x17E*/	{ "NtSetLowWaitHighEventPair" , 1 } ,

/*0x17F*/	{ "NtSetQuotaInformationFile" , 4 } ,

/*0x180*/	{ "NtSetSecurityObject" , 3 } ,

/*0x181*/	{ "NtSetSystemEnvironmentValue" , 2 } ,

/*0x182*/	{ "NtSetSystemEnvironmentValueEx" , 5 } ,

/*0x183*/	{ "NtSetSystemInformation" , 3 } ,

/*0x184*/	{ "NtSetSystemPowerState" , 3 } ,

/*0x185*/	{ "NtSetSystemTime" , 2 } ,

/*0x186*/	{ "NtSetThreadExecutionState" , 2 } ,

/*0x187*/	{ "NtSetTimerEx" , 4 } ,

/*0x188*/	{ "NtSetTimerResolution" , 3 } ,

/*0x189*/	{ "NtSetUuidSeed" , 1 } ,

/*0x18A*/	{ "NtSetVolumeInformationFile" , 5 } ,

/*0x18B*/	{ "NtShutdownSystem" , 1 } ,

/*0x18C*/	{ "NtShutdownWorkerFactory" , 2 } ,

/*0x18D*/	{ "NtSignalAndWaitForSingleObject" , 4 } ,

/*0x18E*/	{ "NtSinglePhaseReject" , 2 } ,

/*0x18F*/	{ "NtStartProfile" , 1 } ,

/*0x190*/	{ "NtStopProfile" , 1 } ,

/*0x191*/	{ "NtSubscribeWnfStateChange" , 4 } ,

/*0x192*/	{ "NtSuspendProcess" , 1 } ,

/*0x193*/	{ "NtSuspendThread" , 2 } ,

/*0x194*/	{ "NtSystemDebugControl" , 6 } ,

/*0x195*/	{ "NtTerminateJobObject" , 2 } ,

/*0x196*/	{ "NtTestAlert" , 0 } ,

/*0x197*/	{ "NtThawRegistry" , 0 } ,

/*0x198*/	{ "NtThawTransactions" , 0 } ,

/*0x199*/	{ "NtTraceControl" , 6 } ,

/*0x19A*/	{ "NtTranslateFilePath" , 4 } ,

/*0x19B*/	{ "NtUmsThreadYield" , 1 } ,

/*0x19C*/	{ "NtUnloadDriver" , 1 } ,

/*0x19D*/	{ "NtUnloadKey" , 1 } ,

/*0x19E*/	{ "NtUnloadKey2" , 2 } ,

/*0x19F*/	{ "NtUnloadKeyEx" , 2 } ,

/*0x1A0*/	{ "NtUnlockFile" , 5 } ,

/*0x1A1*/	{ "NtUnlockVirtualMemory" , 4 } ,

/*0x1A2*/	{ "NtUnmapViewOfSectionEx" , 3 } ,

/*0x1A3*/	{ "NtUnsubscribeWnfStateChange" , 1 } ,

/*0x1A4*/	{ "NtUpdateWnfStateData" , 7 } ,

/*0x1A5*/	{ "NtVdmControl" , 2 } ,

/*0x1A6*/	{ "NtWaitForAlertByThreadId" , 2 } ,

/*0x1A7*/	{ "NtWaitForDebugEvent" , 4 } ,

/*0x1A8*/	{ "NtWaitForKeyedEvent" , 4 } ,

/*0x1A9*/	{ "NtWaitForWnfNotifications" , 2 } ,

/*0x1AA*/	{ "NtWaitForWorkViaWorkerFactory" , 4 } ,

/*0x1AB*/	{ "NtWaitHighEventPair" , 1 } ,

/*0x1AC*/	{ "NtWaitLowEventPair" , 1 }

};

