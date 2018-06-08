// DO NOT MODIFY THIS FILE DIRECTLY!
// author: @TinySecEx
// ssdt database for 10.0.10586-sp0-windows-10-th2-1511 amd64

SDT_NODE static_ssdt_10_0_10586_sp0_windows_10_th2_1511_amd64[444] = {

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

/*0x09D*/	{ "NtCreateEnclave" , 9 } ,

/*0x09E*/	{ "NtCreateEnlistment" , 8 } ,

/*0x09F*/	{ "NtCreateEventPair" , 3 } ,

/*0x0A0*/	{ "NtCreateIRTimer" , 2 } ,

/*0x0A1*/	{ "NtCreateIoCompletion" , 4 } ,

/*0x0A2*/	{ "NtCreateJobObject" , 3 } ,

/*0x0A3*/	{ "NtCreateJobSet" , 3 } ,

/*0x0A4*/	{ "NtCreateKeyTransacted" , 8 } ,

/*0x0A5*/	{ "NtCreateKeyedEvent" , 4 } ,

/*0x0A6*/	{ "NtCreateLowBoxToken" , 9 } ,

/*0x0A7*/	{ "NtCreateMailslotFile" , 8 } ,

/*0x0A8*/	{ "NtCreateMutant" , 4 } ,

/*0x0A9*/	{ "NtCreateNamedPipeFile" , 14 } ,

/*0x0AA*/	{ "NtCreatePagingFile" , 4 } ,

/*0x0AB*/	{ "NtCreatePartition" , 4 } ,

/*0x0AC*/	{ "NtCreatePort" , 5 } ,

/*0x0AD*/	{ "NtCreatePrivateNamespace" , 4 } ,

/*0x0AE*/	{ "NtCreateProcess" , 8 } ,

/*0x0AF*/	{ "NtCreateProfile" , 9 } ,

/*0x0B0*/	{ "NtCreateProfileEx" , 10 } ,

/*0x0B1*/	{ "NtCreateResourceManager" , 7 } ,

/*0x0B2*/	{ "NtCreateSemaphore" , 5 } ,

/*0x0B3*/	{ "NtCreateSymbolicLinkObject" , 4 } ,

/*0x0B4*/	{ "NtCreateThreadEx" , 11 } ,

/*0x0B5*/	{ "NtCreateTimer" , 4 } ,

/*0x0B6*/	{ "NtCreateTimer2" , 5 } ,

/*0x0B7*/	{ "NtCreateToken" , 13 } ,

/*0x0B8*/	{ "NtCreateTokenEx" , 17 } ,

/*0x0B9*/	{ "NtCreateTransaction" , 10 } ,

/*0x0BA*/	{ "NtCreateTransactionManager" , 6 } ,

/*0x0BB*/	{ "NtCreateUserProcess" , 11 } ,

/*0x0BC*/	{ "NtCreateWaitCompletionPacket" , 3 } ,

/*0x0BD*/	{ "NtCreateWaitablePort" , 5 } ,

/*0x0BE*/	{ "NtCreateWnfStateName" , 7 } ,

/*0x0BF*/	{ "NtCreateWorkerFactory" , 10 } ,

/*0x0C0*/	{ "NtDebugActiveProcess" , 2 } ,

/*0x0C1*/	{ "NtDebugContinue" , 3 } ,

/*0x0C2*/	{ "NtDeleteAtom" , 1 } ,

/*0x0C3*/	{ "NtDeleteBootEntry" , 1 } ,

/*0x0C4*/	{ "NtDeleteDriverEntry" , 1 } ,

/*0x0C5*/	{ "NtDeleteFile" , 1 } ,

/*0x0C6*/	{ "NtDeleteKey" , 1 } ,

/*0x0C7*/	{ "NtDeleteObjectAuditAlarm" , 3 } ,

/*0x0C8*/	{ "NtDeletePrivateNamespace" , 1 } ,

/*0x0C9*/	{ "NtDeleteValueKey" , 2 } ,

/*0x0CA*/	{ "NtDeleteWnfStateData" , 2 } ,

/*0x0CB*/	{ "NtDeleteWnfStateName" , 1 } ,

/*0x0CC*/	{ "NtDisableLastKnownGood" , 0 } ,

/*0x0CD*/	{ "NtDisplayString" , 1 } ,

/*0x0CE*/	{ "NtDrawText" , 1 } ,

/*0x0CF*/	{ "NtEnableLastKnownGood" , 0 } ,

/*0x0D0*/	{ "NtEnumerateBootEntries" , 2 } ,

/*0x0D1*/	{ "NtEnumerateDriverEntries" , 2 } ,

/*0x0D2*/	{ "NtEnumerateSystemEnvironmentValuesEx" , 3 } ,

/*0x0D3*/	{ "NtEnumerateTransactionObject" , 5 } ,

/*0x0D4*/	{ "NtExtendSection" , 2 } ,

/*0x0D5*/	{ "NtFilterBootOption" , 5 } ,

/*0x0D6*/	{ "NtFilterToken" , 6 } ,

/*0x0D7*/	{ "NtFilterTokenEx" , 14 } ,

/*0x0D8*/	{ "NtFlushBuffersFileEx" , 5 } ,

/*0x0D9*/	{ "NtFlushInstallUILanguage" , 2 } ,

/*0x0DA*/	{ "NtFlushInstructionCache" , 3 } ,

/*0x0DB*/	{ "NtFlushKey" , 1 } ,

/*0x0DC*/	{ "NtFlushProcessWriteBuffers" , 0 } ,

/*0x0DD*/	{ "NtFlushVirtualMemory" , 4 } ,

/*0x0DE*/	{ "NtFlushWriteBuffer" , 0 } ,

/*0x0DF*/	{ "NtFreeUserPhysicalPages" , 3 } ,

/*0x0E0*/	{ "NtFreezeRegistry" , 1 } ,

/*0x0E1*/	{ "NtFreezeTransactions" , 2 } ,

/*0x0E2*/	{ "NtGetCachedSigningLevel" , 6 } ,

/*0x0E3*/	{ "NtGetCompleteWnfStateSubscription" , 6 } ,

/*0x0E4*/	{ "NtGetContextThread" , 2 } ,

/*0x0E5*/	{ "NtGetCurrentProcessorNumber" , 0 } ,

/*0x0E6*/	{ "NtGetCurrentProcessorNumberEx" , 1 } ,

/*0x0E7*/	{ "NtGetDevicePowerState" , 2 } ,

/*0x0E8*/	{ "NtGetMUIRegistryInfo" , 3 } ,

/*0x0E9*/	{ "NtGetNextProcess" , 5 } ,

/*0x0EA*/	{ "NtGetNextThread" , 6 } ,

/*0x0EB*/	{ "NtGetNlsSectionPtr" , 5 } ,

/*0x0EC*/	{ "NtGetNotificationResourceManager" , 7 } ,

/*0x0ED*/	{ "NtGetWriteWatch" , 7 } ,

/*0x0EE*/	{ "NtImpersonateAnonymousToken" , 1 } ,

/*0x0EF*/	{ "NtImpersonateThread" , 3 } ,

/*0x0F0*/	{ "NtInitializeEnclave" , 5 } ,

/*0x0F1*/	{ "NtInitializeNlsFiles" , 3 } ,

/*0x0F2*/	{ "NtInitializeRegistry" , 1 } ,

/*0x0F3*/	{ "NtInitiatePowerAction" , 4 } ,

/*0x0F4*/	{ "NtIsSystemResumeAutomatic" , 0 } ,

/*0x0F5*/	{ "NtIsUILanguageComitted" , 0 } ,

/*0x0F6*/	{ "NtListenPort" , 2 } ,

/*0x0F7*/	{ "NtLoadDriver" , 1 } ,

/*0x0F8*/	{ "NtLoadEnclaveData" , 9 } ,

/*0x0F9*/	{ "NtLoadKey" , 2 } ,

/*0x0FA*/	{ "NtLoadKey2" , 3 } ,

/*0x0FB*/	{ "NtLoadKeyEx" , 8 } ,

/*0x0FC*/	{ "NtLockFile" , 10 } ,

/*0x0FD*/	{ "NtLockProductActivationKeys" , 2 } ,

/*0x0FE*/	{ "NtLockRegistryKey" , 1 } ,

/*0x0FF*/	{ "NtLockVirtualMemory" , 4 } ,

/*0x100*/	{ "NtMakePermanentObject" , 1 } ,

/*0x101*/	{ "NtMakeTemporaryObject" , 1 } ,

/*0x102*/	{ "NtManagePartition" , 5 } ,

/*0x103*/	{ "NtMapCMFModule" , 6 } ,

/*0x104*/	{ "NtMapUserPhysicalPages" , 3 } ,

/*0x105*/	{ "NtModifyBootEntry" , 1 } ,

/*0x106*/	{ "NtModifyDriverEntry" , 1 } ,

/*0x107*/	{ "NtNotifyChangeDirectoryFile" , 9 } ,

/*0x108*/	{ "NtNotifyChangeKey" , 10 } ,

/*0x109*/	{ "NtNotifyChangeMultipleKeys" , 12 } ,

/*0x10A*/	{ "NtNotifyChangeSession" , 8 } ,

/*0x10B*/	{ "NtOpenEnlistment" , 5 } ,

/*0x10C*/	{ "NtOpenEventPair" , 3 } ,

/*0x10D*/	{ "NtOpenIoCompletion" , 3 } ,

/*0x10E*/	{ "NtOpenJobObject" , 3 } ,

/*0x10F*/	{ "NtOpenKeyEx" , 4 } ,

/*0x110*/	{ "NtOpenKeyTransacted" , 4 } ,

/*0x111*/	{ "NtOpenKeyTransactedEx" , 5 } ,

/*0x112*/	{ "NtOpenKeyedEvent" , 3 } ,

/*0x113*/	{ "NtOpenMutant" , 3 } ,

/*0x114*/	{ "NtOpenObjectAuditAlarm" , 12 } ,

/*0x115*/	{ "NtOpenPartition" , 3 } ,

/*0x116*/	{ "NtOpenPrivateNamespace" , 4 } ,

/*0x117*/	{ "NtOpenProcessToken" , 3 } ,

/*0x118*/	{ "NtOpenResourceManager" , 5 } ,

/*0x119*/	{ "NtOpenSemaphore" , 3 } ,

/*0x11A*/	{ "NtOpenSession" , 3 } ,

/*0x11B*/	{ "NtOpenSymbolicLinkObject" , 3 } ,

/*0x11C*/	{ "NtOpenThread" , 4 } ,

/*0x11D*/	{ "NtOpenTimer" , 3 } ,

/*0x11E*/	{ "NtOpenTransaction" , 5 } ,

/*0x11F*/	{ "NtOpenTransactionManager" , 6 } ,

/*0x120*/	{ "NtPlugPlayControl" , 3 } ,

/*0x121*/	{ "NtPrePrepareComplete" , 2 } ,

/*0x122*/	{ "NtPrePrepareEnlistment" , 2 } ,

/*0x123*/	{ "NtPrepareComplete" , 2 } ,

/*0x124*/	{ "NtPrepareEnlistment" , 2 } ,

/*0x125*/	{ "NtPrivilegeCheck" , 3 } ,

/*0x126*/	{ "NtPrivilegeObjectAuditAlarm" , 6 } ,

/*0x127*/	{ "NtPrivilegedServiceAuditAlarm" , 5 } ,

/*0x128*/	{ "NtPropagationComplete" , 4 } ,

/*0x129*/	{ "NtPropagationFailed" , 3 } ,

/*0x12A*/	{ "NtPulseEvent" , 2 } ,

/*0x12B*/	{ "NtQueryBootEntryOrder" , 2 } ,

/*0x12C*/	{ "NtQueryBootOptions" , 2 } ,

/*0x12D*/	{ "NtQueryDebugFilterState" , 2 } ,

/*0x12E*/	{ "NtQueryDirectoryObject" , 7 } ,

/*0x12F*/	{ "NtQueryDriverEntryOrder" , 2 } ,

/*0x130*/	{ "NtQueryEaFile" , 9 } ,

/*0x131*/	{ "NtQueryFullAttributesFile" , 2 } ,

/*0x132*/	{ "NtQueryInformationAtom" , 5 } ,

/*0x133*/	{ "NtQueryInformationEnlistment" , 5 } ,

/*0x134*/	{ "NtQueryInformationJobObject" , 5 } ,

/*0x135*/	{ "NtQueryInformationPort" , 5 } ,

/*0x136*/	{ "NtQueryInformationResourceManager" , 5 } ,

/*0x137*/	{ "NtQueryInformationTransaction" , 5 } ,

/*0x138*/	{ "NtQueryInformationTransactionManager" , 5 } ,

/*0x139*/	{ "NtQueryInformationWorkerFactory" , 5 } ,

/*0x13A*/	{ "NtQueryInstallUILanguage" , 1 } ,

/*0x13B*/	{ "NtQueryIntervalProfile" , 2 } ,

/*0x13C*/	{ "NtQueryIoCompletion" , 5 } ,

/*0x13D*/	{ "NtQueryLicenseValue" , 5 } ,

/*0x13E*/	{ "NtQueryMultipleValueKey" , 6 } ,

/*0x13F*/	{ "NtQueryMutant" , 5 } ,

/*0x140*/	{ "NtQueryOpenSubKeys" , 2 } ,

/*0x141*/	{ "NtQueryOpenSubKeysEx" , 4 } ,

/*0x142*/	{ "NtQueryPortInformationProcess" , 0 } ,

/*0x143*/	{ "NtQueryQuotaInformationFile" , 9 } ,

/*0x144*/	{ "NtQuerySecurityAttributesToken" , 6 } ,

/*0x145*/	{ "NtQuerySecurityObject" , 5 } ,

/*0x146*/	{ "NtQuerySemaphore" , 5 } ,

/*0x147*/	{ "NtQuerySymbolicLinkObject" , 3 } ,

/*0x148*/	{ "NtQuerySystemEnvironmentValue" , 4 } ,

/*0x149*/	{ "NtQuerySystemEnvironmentValueEx" , 5 } ,

/*0x14A*/	{ "NtQuerySystemInformationEx" , 6 } ,

/*0x14B*/	{ "NtQueryTimerResolution" , 3 } ,

/*0x14C*/	{ "NtQueryWnfStateData" , 6 } ,

/*0x14D*/	{ "NtQueryWnfStateNameInformation" , 5 } ,

/*0x14E*/	{ "NtQueueApcThreadEx" , 6 } ,

/*0x14F*/	{ "NtRaiseException" , 3 } ,

/*0x150*/	{ "NtRaiseHardError" , 6 } ,

/*0x151*/	{ "NtReadOnlyEnlistment" , 2 } ,

/*0x152*/	{ "NtRecoverEnlistment" , 2 } ,

/*0x153*/	{ "NtRecoverResourceManager" , 1 } ,

/*0x154*/	{ "NtRecoverTransactionManager" , 1 } ,

/*0x155*/	{ "NtRegisterProtocolAddressInformation" , 5 } ,

/*0x156*/	{ "NtRegisterThreadTerminatePort" , 1 } ,

/*0x157*/	{ "NtReleaseKeyedEvent" , 4 } ,

/*0x158*/	{ "NtReleaseWorkerFactoryWorker" , 1 } ,

/*0x159*/	{ "NtRemoveIoCompletionEx" , 6 } ,

/*0x15A*/	{ "NtRemoveProcessDebug" , 2 } ,

/*0x15B*/	{ "NtRenameKey" , 2 } ,

/*0x15C*/	{ "NtRenameTransactionManager" , 2 } ,

/*0x15D*/	{ "NtReplaceKey" , 3 } ,

/*0x15E*/	{ "NtReplacePartitionUnit" , 3 } ,

/*0x15F*/	{ "NtReplyWaitReplyPort" , 2 } ,

/*0x160*/	{ "NtRequestPort" , 2 } ,

/*0x161*/	{ "NtResetEvent" , 2 } ,

/*0x162*/	{ "NtResetWriteWatch" , 3 } ,

/*0x163*/	{ "NtRestoreKey" , 3 } ,

/*0x164*/	{ "NtResumeProcess" , 1 } ,

/*0x165*/	{ "NtRevertContainerImpersonation" , 0 } ,

/*0x166*/	{ "NtRollbackComplete" , 2 } ,

/*0x167*/	{ "NtRollbackEnlistment" , 2 } ,

/*0x168*/	{ "NtRollbackTransaction" , 2 } ,

/*0x169*/	{ "NtRollforwardTransactionManager" , 2 } ,

/*0x16A*/	{ "NtSaveKey" , 2 } ,

/*0x16B*/	{ "NtSaveKeyEx" , 3 } ,

/*0x16C*/	{ "NtSaveMergedKeys" , 3 } ,

/*0x16D*/	{ "NtSecureConnectPort" , 9 } ,

/*0x16E*/	{ "NtSerializeBoot" , 0 } ,

/*0x16F*/	{ "NtSetBootEntryOrder" , 2 } ,

/*0x170*/	{ "NtSetBootOptions" , 2 } ,

/*0x171*/	{ "NtSetCachedSigningLevel" , 5 } ,

/*0x172*/	{ "NtSetContextThread" , 2 } ,

/*0x173*/	{ "NtSetDebugFilterState" , 3 } ,

/*0x174*/	{ "NtSetDefaultHardErrorPort" , 1 } ,

/*0x175*/	{ "NtSetDefaultLocale" , 2 } ,

/*0x176*/	{ "NtSetDefaultUILanguage" , 1 } ,

/*0x177*/	{ "NtSetDriverEntryOrder" , 2 } ,

/*0x178*/	{ "NtSetEaFile" , 4 } ,

/*0x179*/	{ "NtSetHighEventPair" , 1 } ,

/*0x17A*/	{ "NtSetHighWaitLowEventPair" , 1 } ,

/*0x17B*/	{ "NtSetIRTimer" , 2 } ,

/*0x17C*/	{ "NtSetInformationDebugObject" , 5 } ,

/*0x17D*/	{ "NtSetInformationEnlistment" , 4 } ,

/*0x17E*/	{ "NtSetInformationJobObject" , 4 } ,

/*0x17F*/	{ "NtSetInformationKey" , 4 } ,

/*0x180*/	{ "NtSetInformationResourceManager" , 4 } ,

/*0x181*/	{ "NtSetInformationSymbolicLink" , 4 } ,

/*0x182*/	{ "NtSetInformationToken" , 4 } ,

/*0x183*/	{ "NtSetInformationTransaction" , 4 } ,

/*0x184*/	{ "NtSetInformationTransactionManager" , 4 } ,

/*0x185*/	{ "NtSetInformationVirtualMemory" , 6 } ,

/*0x186*/	{ "NtSetInformationWorkerFactory" , 4 } ,

/*0x187*/	{ "NtSetIntervalProfile" , 2 } ,

/*0x188*/	{ "NtSetIoCompletion" , 5 } ,

/*0x189*/	{ "NtSetIoCompletionEx" , 6 } ,

/*0x18A*/	{ "NtSetLdtEntries" , 6 } ,

/*0x18B*/	{ "NtSetLowEventPair" , 1 } ,

/*0x18C*/	{ "NtSetLowWaitHighEventPair" , 1 } ,

/*0x18D*/	{ "NtSetQuotaInformationFile" , 4 } ,

/*0x18E*/	{ "NtSetSecurityObject" , 3 } ,

/*0x18F*/	{ "NtSetSystemEnvironmentValue" , 2 } ,

/*0x190*/	{ "NtSetSystemEnvironmentValueEx" , 5 } ,

/*0x191*/	{ "NtSetSystemInformation" , 3 } ,

/*0x192*/	{ "NtSetSystemPowerState" , 3 } ,

/*0x193*/	{ "NtSetSystemTime" , 2 } ,

/*0x194*/	{ "NtSetThreadExecutionState" , 2 } ,

/*0x195*/	{ "NtSetTimer2" , 4 } ,

/*0x196*/	{ "NtSetTimerEx" , 4 } ,

/*0x197*/	{ "NtSetTimerResolution" , 3 } ,

/*0x198*/	{ "NtSetUuidSeed" , 1 } ,

/*0x199*/	{ "NtSetVolumeInformationFile" , 5 } ,

/*0x19A*/	{ "NtSetWnfProcessNotificationEvent" , 1 } ,

/*0x19B*/	{ "NtShutdownSystem" , 1 } ,

/*0x19C*/	{ "NtShutdownWorkerFactory" , 2 } ,

/*0x19D*/	{ "NtSignalAndWaitForSingleObject" , 4 } ,

/*0x19E*/	{ "NtSinglePhaseReject" , 2 } ,

/*0x19F*/	{ "NtStartProfile" , 1 } ,

/*0x1A0*/	{ "NtStopProfile" , 1 } ,

/*0x1A1*/	{ "NtSubscribeWnfStateChange" , 4 } ,

/*0x1A2*/	{ "NtSuspendProcess" , 1 } ,

/*0x1A3*/	{ "NtSuspendThread" , 2 } ,

/*0x1A4*/	{ "NtSystemDebugControl" , 6 } ,

/*0x1A5*/	{ "NtTerminateJobObject" , 2 } ,

/*0x1A6*/	{ "NtTestAlert" , 0 } ,

/*0x1A7*/	{ "NtThawRegistry" , 0 } ,

/*0x1A8*/	{ "NtThawTransactions" , 0 } ,

/*0x1A9*/	{ "NtTraceControl" , 6 } ,

/*0x1AA*/	{ "NtTranslateFilePath" , 4 } ,

/*0x1AB*/	{ "NtUmsThreadYield" , 1 } ,

/*0x1AC*/	{ "NtUnloadDriver" , 1 } ,

/*0x1AD*/	{ "NtUnloadKey" , 1 } ,

/*0x1AE*/	{ "NtUnloadKey2" , 2 } ,

/*0x1AF*/	{ "NtUnloadKeyEx" , 2 } ,

/*0x1B0*/	{ "NtUnlockFile" , 5 } ,

/*0x1B1*/	{ "NtUnlockVirtualMemory" , 4 } ,

/*0x1B2*/	{ "NtUnmapViewOfSectionEx" , 3 } ,

/*0x1B3*/	{ "NtUnsubscribeWnfStateChange" , 1 } ,

/*0x1B4*/	{ "NtUpdateWnfStateData" , 7 } ,

/*0x1B5*/	{ "NtVdmControl" , 2 } ,

/*0x1B6*/	{ "NtWaitForAlertByThreadId" , 2 } ,

/*0x1B7*/	{ "NtWaitForDebugEvent" , 4 } ,

/*0x1B8*/	{ "NtWaitForKeyedEvent" , 4 } ,

/*0x1B9*/	{ "NtWaitForWorkViaWorkerFactory" , 5 } ,

/*0x1BA*/	{ "NtWaitHighEventPair" , 1 } ,

/*0x1BB*/	{ "NtWaitLowEventPair" , 1 }

};

