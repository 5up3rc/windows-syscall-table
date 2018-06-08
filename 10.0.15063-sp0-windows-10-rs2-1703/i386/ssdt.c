// DO NOT MODIFY THIS FILE DIRECTLY!
// author: @TinySecEx
// ssdt database for 10.0.15063-sp0-windows-10-rs2-1703 i386

SDT_NODE static_ssdt_10_0_15063_sp0_windows_10_rs2_1703_i386[456] = {

/*0x000*/	{ "NtAccessCheck" , 8 } ,

/*0x001*/	{ "NtWorkerFactoryWorkerReady" , 1 } ,

/*0x002*/	{ "NtAcceptConnectPort" , 6 } ,

/*0x003*/	{ "NtYieldExecution" , 0 } ,

/*0x004*/	{ "NtWriteVirtualMemory" , 5 } ,

/*0x005*/	{ "NtWriteRequestData" , 6 } ,

/*0x006*/	{ "NtWriteFileGather" , 9 } ,

/*0x007*/	{ "NtWriteFile" , 9 } ,

/*0x008*/	{ "NtWaitLowEventPair" , 1 } ,

/*0x009*/	{ "NtWaitHighEventPair" , 1 } ,

/*0x00A*/	{ "NtWaitForWorkViaWorkerFactory" , 5 } ,

/*0x00B*/	{ "NtWaitForSingleObject" , 3 } ,

/*0x00C*/	{ "NtWaitForMultipleObjects32" , 5 } ,

/*0x00D*/	{ "NtWaitForMultipleObjects" , 5 } ,

/*0x00E*/	{ "NtWaitForKeyedEvent" , 4 } ,

/*0x00F*/	{ "NtWaitForDebugEvent" , 4 } ,

/*0x010*/	{ "NtWaitForAlertByThreadId" , 2 } ,

/*0x011*/	{ "NtVdmControl" , 2 } ,

/*0x012*/	{ "NtUnsubscribeWnfStateChange" , 1 } ,

/*0x013*/	{ "NtUpdateWnfStateData" , 7 } ,

/*0x014*/	{ "NtUnmapViewOfSection" , 2 } ,

/*0x015*/	{ "NtUnmapViewOfSectionEx" , 3 } ,

/*0x016*/	{ "NtUnlockVirtualMemory" , 4 } ,

/*0x017*/	{ "NtUnlockFile" , 5 } ,

/*0x018*/	{ "NtUnloadKeyEx" , 2 } ,

/*0x019*/	{ "NtUnloadKey2" , 2 } ,

/*0x01A*/	{ "NtUnloadKey" , 1 } ,

/*0x01B*/	{ "NtUnloadDriver" , 1 } ,

/*0x01C*/	{ "NtUmsThreadYield" , 1 } ,

/*0x01D*/	{ "NtTranslateFilePath" , 4 } ,

/*0x01E*/	{ "NtTraceEvent" , 4 } ,

/*0x01F*/	{ "NtTraceControl" , 6 } ,

/*0x020*/	{ "NtThawTransactions" , 0 } ,

/*0x021*/	{ "NtThawRegistry" , 0 } ,

/*0x022*/	{ "NtTestAlert" , 0 } ,

/*0x023*/	{ "NtTerminateThread" , 2 } ,

/*0x024*/	{ "NtTerminateProcess" , 2 } ,

/*0x025*/	{ "NtTerminateJobObject" , 2 } ,

/*0x026*/	{ "NtSystemDebugControl" , 6 } ,

/*0x027*/	{ "NtSuspendThread" , 2 } ,

/*0x028*/	{ "NtSuspendProcess" , 1 } ,

/*0x029*/	{ "NtSubscribeWnfStateChange" , 4 } ,

/*0x02A*/	{ "NtStopProfile" , 1 } ,

/*0x02B*/	{ "NtStartProfile" , 1 } ,

/*0x02C*/	{ "NtSinglePhaseReject" , 2 } ,

/*0x02D*/	{ "NtSignalAndWaitForSingleObject" , 4 } ,

/*0x02E*/	{ "NtShutdownWorkerFactory" , 2 } ,

/*0x02F*/	{ "NtShutdownSystem" , 1 } ,

/*0x030*/	{ "NtSetWnfProcessNotificationEvent" , 1 } ,

/*0x031*/	{ "NtSetVolumeInformationFile" , 5 } ,

/*0x032*/	{ "NtSetValueKey" , 6 } ,

/*0x033*/	{ "NtSetUuidSeed" , 1 } ,

/*0x034*/	{ "NtSetTimerResolution" , 3 } ,

/*0x035*/	{ "NtSetTimerEx" , 4 } ,

/*0x036*/	{ "NtSetTimer" , 7 } ,

/*0x037*/	{ "NtSetThreadExecutionState" , 2 } ,

/*0x038*/	{ "NtSetSystemTime" , 2 } ,

/*0x039*/	{ "NtSetSystemPowerState" , 3 } ,

/*0x03A*/	{ "NtSetSystemInformation" , 3 } ,

/*0x03B*/	{ "NtSetSystemEnvironmentValueEx" , 5 } ,

/*0x03C*/	{ "NtSetSystemEnvironmentValue" , 2 } ,

/*0x03D*/	{ "NtSetSecurityObject" , 3 } ,

/*0x03E*/	{ "NtSetQuotaInformationFile" , 4 } ,

/*0x03F*/	{ "NtSetLowWaitHighEventPair" , 1 } ,

/*0x040*/	{ "NtSetLowEventPair" , 1 } ,

/*0x041*/	{ "NtSetLdtEntries" , 6 } ,

/*0x042*/	{ "NtSetIRTimer" , 2 } ,

/*0x043*/	{ "NtSetTimer2" , 4 } ,

/*0x044*/	{ "NtCancelTimer2" , 2 } ,

/*0x045*/	{ "NtSetIoCompletionEx" , 6 } ,

/*0x046*/	{ "NtSetIoCompletion" , 5 } ,

/*0x047*/	{ "NtSetIntervalProfile" , 2 } ,

/*0x048*/	{ "NtSetInformationWorkerFactory" , 4 } ,

/*0x049*/	{ "NtSetInformationTransactionManager" , 4 } ,

/*0x04A*/	{ "NtSetInformationTransaction" , 4 } ,

/*0x04B*/	{ "NtSetInformationToken" , 4 } ,

/*0x04C*/	{ "NtSetInformationThread" , 4 } ,

/*0x04D*/	{ "NtSetInformationResourceManager" , 4 } ,

/*0x04E*/	{ "NtSetInformationProcess" , 4 } ,

/*0x04F*/	{ "NtSetInformationObject" , 4 } ,

/*0x050*/	{ "NtSetInformationKey" , 4 } ,

/*0x051*/	{ "NtSetInformationJobObject" , 4 } ,

/*0x052*/	{ "NtSetInformationFile" , 5 } ,

/*0x053*/	{ "NtSetInformationEnlistment" , 4 } ,

/*0x054*/	{ "NtSetInformationDebugObject" , 5 } ,

/*0x055*/	{ "NtSetHighWaitLowEventPair" , 1 } ,

/*0x056*/	{ "NtSetHighEventPair" , 1 } ,

/*0x057*/	{ "NtSetEventBoostPriority" , 1 } ,

/*0x058*/	{ "NtSetEvent" , 2 } ,

/*0x059*/	{ "NtSetEaFile" , 4 } ,

/*0x05A*/	{ "NtSetDriverEntryOrder" , 2 } ,

/*0x05B*/	{ "NtSetDefaultUILanguage" , 1 } ,

/*0x05C*/	{ "NtSetDefaultLocale" , 2 } ,

/*0x05D*/	{ "NtSetDefaultHardErrorPort" , 1 } ,

/*0x05E*/	{ "NtSetDebugFilterState" , 3 } ,

/*0x05F*/	{ "NtSetContextThread" , 2 } ,

/*0x060*/	{ "NtSetCachedSigningLevel2" , 6 } ,

/*0x061*/	{ "NtSetCachedSigningLevel" , 5 } ,

/*0x062*/	{ "NtSetBootOptions" , 2 } ,

/*0x063*/	{ "NtSetBootEntryOrder" , 2 } ,

/*0x064*/	{ "NtSerializeBoot" , 0 } ,

/*0x065*/	{ "NtSecureConnectPort" , 9 } ,

/*0x066*/	{ "NtSaveMergedKeys" , 3 } ,

/*0x067*/	{ "NtSaveKeyEx" , 3 } ,

/*0x068*/	{ "NtSaveKey" , 2 } ,

/*0x069*/	{ "NtRollforwardTransactionManager" , 2 } ,

/*0x06A*/	{ "NtRollbackTransaction" , 2 } ,

/*0x06B*/	{ "NtRollbackEnlistment" , 2 } ,

/*0x06C*/	{ "NtRollbackComplete" , 2 } ,

/*0x06D*/	{ "NtRevertContainerImpersonation" , 0 } ,

/*0x06E*/	{ "NtResumeThread" , 2 } ,

/*0x06F*/	{ "NtResumeProcess" , 1 } ,

/*0x070*/	{ "NtRestoreKey" , 3 } ,

/*0x071*/	{ "NtResetWriteWatch" , 3 } ,

/*0x072*/	{ "NtResetEvent" , 2 } ,

/*0x073*/	{ "NtRequestWaitReplyPort" , 3 } ,

/*0x074*/	{ "NtRequestPort" , 2 } ,

/*0x075*/	{ "NtReplyWaitReplyPort" , 2 } ,

/*0x076*/	{ "NtReplyWaitReceivePortEx" , 5 } ,

/*0x077*/	{ "NtReplyWaitReceivePort" , 4 } ,

/*0x078*/	{ "NtReplyPort" , 2 } ,

/*0x079*/	{ "NtReplacePartitionUnit" , 3 } ,

/*0x07A*/	{ "NtReplaceKey" , 3 } ,

/*0x07B*/	{ "NtRenameTransactionManager" , 2 } ,

/*0x07C*/	{ "NtRenameKey" , 2 } ,

/*0x07D*/	{ "NtRemoveProcessDebug" , 2 } ,

/*0x07E*/	{ "NtRemoveIoCompletionEx" , 6 } ,

/*0x07F*/	{ "NtRemoveIoCompletion" , 5 } ,

/*0x080*/	{ "NtReleaseWorkerFactoryWorker" , 1 } ,

/*0x081*/	{ "NtReleaseSemaphore" , 3 } ,

/*0x082*/	{ "NtReleaseMutant" , 2 } ,

/*0x083*/	{ "NtReleaseKeyedEvent" , 4 } ,

/*0x084*/	{ "NtRegisterThreadTerminatePort" , 1 } ,

/*0x085*/	{ "NtRegisterProtocolAddressInformation" , 5 } ,

/*0x086*/	{ "NtRecoverTransactionManager" , 1 } ,

/*0x087*/	{ "NtRecoverResourceManager" , 1 } ,

/*0x088*/	{ "NtRecoverEnlistment" , 2 } ,

/*0x089*/	{ "NtReadVirtualMemory" , 5 } ,

/*0x08A*/	{ "NtReadRequestData" , 6 } ,

/*0x08B*/	{ "NtReadOnlyEnlistment" , 2 } ,

/*0x08C*/	{ "NtReadFileScatter" , 9 } ,

/*0x08D*/	{ "NtReadFile" , 9 } ,

/*0x08E*/	{ "NtRaiseHardError" , 6 } ,

/*0x08F*/	{ "NtRaiseException" , 3 } ,

/*0x090*/	{ "NtQueueApcThreadEx" , 6 } ,

/*0x091*/	{ "NtQueueApcThread" , 5 } ,

/*0x092*/	{ "NtQueryAuxiliaryCounterFrequency" , 1 } ,

/*0x093*/	{ "NtQueryWnfStateData" , 6 } ,

/*0x094*/	{ "NtQueryWnfStateNameInformation" , 5 } ,

/*0x095*/	{ "NtQueryVolumeInformationFile" , 5 } ,

/*0x096*/	{ "NtQueryVirtualMemory" , 6 } ,

/*0x097*/	{ "NtQueryValueKey" , 6 } ,

/*0x098*/	{ "NtQueryTimerResolution" , 3 } ,

/*0x099*/	{ "NtQueryTimer" , 5 } ,

/*0x09A*/	{ "NtQuerySystemTime" , 1 } ,

/*0x09B*/	{ "NtQuerySystemInformationEx" , 6 } ,

/*0x09C*/	{ "NtQuerySystemInformation" , 4 } ,

/*0x09D*/	{ "NtQuerySystemEnvironmentValueEx" , 5 } ,

/*0x09E*/	{ "NtQuerySystemEnvironmentValue" , 4 } ,

/*0x09F*/	{ "NtQuerySymbolicLinkObject" , 3 } ,

/*0x0A0*/	{ "NtQuerySemaphore" , 5 } ,

/*0x0A1*/	{ "NtQuerySecurityPolicy" , 6 } ,

/*0x0A2*/	{ "NtQuerySecurityObject" , 5 } ,

/*0x0A3*/	{ "NtQuerySecurityAttributesToken" , 6 } ,

/*0x0A4*/	{ "NtQuerySection" , 5 } ,

/*0x0A5*/	{ "NtQueryQuotaInformationFile" , 9 } ,

/*0x0A6*/	{ "NtQueryPortInformationProcess" , 0 } ,

/*0x0A7*/	{ "NtQueryPerformanceCounter" , 2 } ,

/*0x0A8*/	{ "NtQueryOpenSubKeysEx" , 4 } ,

/*0x0A9*/	{ "NtQueryOpenSubKeys" , 2 } ,

/*0x0AA*/	{ "NtQueryObject" , 5 } ,

/*0x0AB*/	{ "NtQueryMutant" , 5 } ,

/*0x0AC*/	{ "NtQueryMultipleValueKey" , 6 } ,

/*0x0AD*/	{ "NtQueryLicenseValue" , 5 } ,

/*0x0AE*/	{ "NtQueryKey" , 5 } ,

/*0x0AF*/	{ "NtQueryIoCompletion" , 5 } ,

/*0x0B0*/	{ "NtQueryIntervalProfile" , 2 } ,

/*0x0B1*/	{ "NtQueryInstallUILanguage" , 1 } ,

/*0x0B2*/	{ "NtQueryInformationWorkerFactory" , 5 } ,

/*0x0B3*/	{ "NtQueryInformationTransactionManager" , 5 } ,

/*0x0B4*/	{ "NtQueryInformationTransaction" , 5 } ,

/*0x0B5*/	{ "NtQueryInformationToken" , 5 } ,

/*0x0B6*/	{ "NtQueryInformationThread" , 5 } ,

/*0x0B7*/	{ "NtQueryInformationResourceManager" , 5 } ,

/*0x0B8*/	{ "NtQueryInformationProcess" , 5 } ,

/*0x0B9*/	{ "NtQueryInformationPort" , 5 } ,

/*0x0BA*/	{ "NtQueryInformationJobObject" , 5 } ,

/*0x0BB*/	{ "NtQueryInformationFile" , 5 } ,

/*0x0BC*/	{ "NtQueryInformationEnlistment" , 5 } ,

/*0x0BD*/	{ "NtQueryInformationByName" , 5 } ,

/*0x0BE*/	{ "NtQueryInformationAtom" , 5 } ,

/*0x0BF*/	{ "NtQueryFullAttributesFile" , 2 } ,

/*0x0C0*/	{ "NtQueryEvent" , 5 } ,

/*0x0C1*/	{ "NtQueryEaFile" , 9 } ,

/*0x0C2*/	{ "NtQueryDriverEntryOrder" , 2 } ,

/*0x0C3*/	{ "NtQueryDirectoryObject" , 7 } ,

/*0x0C4*/	{ "NtQueryDirectoryFile" , 11 } ,

/*0x0C5*/	{ "NtQueryDefaultUILanguage" , 1 } ,

/*0x0C6*/	{ "NtQueryDefaultLocale" , 2 } ,

/*0x0C7*/	{ "NtQueryDebugFilterState" , 2 } ,

/*0x0C8*/	{ "NtQueryBootOptions" , 2 } ,

/*0x0C9*/	{ "NtQueryBootEntryOrder" , 2 } ,

/*0x0CA*/	{ "NtQueryAttributesFile" , 2 } ,

/*0x0CB*/	{ "NtPulseEvent" , 2 } ,

/*0x0CC*/	{ "NtProtectVirtualMemory" , 5 } ,

/*0x0CD*/	{ "NtPropagationFailed" , 3 } ,

/*0x0CE*/	{ "NtPropagationComplete" , 4 } ,

/*0x0CF*/	{ "NtPrivilegeObjectAuditAlarm" , 6 } ,

/*0x0D0*/	{ "NtPrivilegedServiceAuditAlarm" , 5 } ,

/*0x0D1*/	{ "NtPrivilegeCheck" , 3 } ,

/*0x0D2*/	{ "NtSetInformationVirtualMemory" , 6 } ,

/*0x0D3*/	{ "NtPrePrepareEnlistment" , 2 } ,

/*0x0D4*/	{ "NtPrePrepareComplete" , 2 } ,

/*0x0D5*/	{ "NtPrepareEnlistment" , 2 } ,

/*0x0D6*/	{ "NtPrepareComplete" , 2 } ,

/*0x0D7*/	{ "NtPowerInformation" , 5 } ,

/*0x0D8*/	{ "NtPlugPlayControl" , 3 } ,

/*0x0D9*/	{ "NtOpenTransactionManager" , 6 } ,

/*0x0DA*/	{ "NtOpenTransaction" , 5 } ,

/*0x0DB*/	{ "NtOpenTimer" , 3 } ,

/*0x0DC*/	{ "NtOpenThreadTokenEx" , 5 } ,

/*0x0DD*/	{ "NtOpenThreadToken" , 4 } ,

/*0x0DE*/	{ "NtOpenThread" , 4 } ,

/*0x0DF*/	{ "NtOpenSymbolicLinkObject" , 3 } ,

/*0x0E0*/	{ "NtOpenSession" , 3 } ,

/*0x0E1*/	{ "NtOpenSemaphore" , 3 } ,

/*0x0E2*/	{ "NtOpenSection" , 3 } ,

/*0x0E3*/	{ "NtOpenResourceManager" , 5 } ,

/*0x0E4*/	{ "NtOpenPartition" , 3 } ,

/*0x0E5*/	{ "NtOpenProcessTokenEx" , 4 } ,

/*0x0E6*/	{ "NtOpenProcessToken" , 3 } ,

/*0x0E7*/	{ "NtOpenProcess" , 4 } ,

/*0x0E8*/	{ "NtOpenPrivateNamespace" , 4 } ,

/*0x0E9*/	{ "NtOpenObjectAuditAlarm" , 12 } ,

/*0x0EA*/	{ "NtOpenMutant" , 3 } ,

/*0x0EB*/	{ "NtOpenKeyTransactedEx" , 5 } ,

/*0x0EC*/	{ "NtOpenKeyTransacted" , 4 } ,

/*0x0ED*/	{ "NtOpenKeyEx" , 4 } ,

/*0x0EE*/	{ "NtOpenKeyedEvent" , 3 } ,

/*0x0EF*/	{ "NtOpenKey" , 3 } ,

/*0x0F0*/	{ "NtOpenJobObject" , 3 } ,

/*0x0F1*/	{ "NtOpenIoCompletion" , 3 } ,

/*0x0F2*/	{ "NtOpenFile" , 6 } ,

/*0x0F3*/	{ "NtOpenEventPair" , 3 } ,

/*0x0F4*/	{ "NtOpenEvent" , 3 } ,

/*0x0F5*/	{ "NtOpenEnlistment" , 5 } ,

/*0x0F6*/	{ "NtOpenDirectoryObject" , 3 } ,

/*0x0F7*/	{ "NtNotifyChangeSession" , 8 } ,

/*0x0F8*/	{ "NtNotifyChangeMultipleKeys" , 12 } ,

/*0x0F9*/	{ "NtNotifyChangeKey" , 10 } ,

/*0x0FA*/	{ "NtNotifyChangeDirectoryFile" , 9 } ,

/*0x0FB*/	{ "NtManagePartition" , 5 } ,

/*0x0FC*/	{ "NtModifyDriverEntry" , 1 } ,

/*0x0FD*/	{ "NtModifyBootEntry" , 1 } ,

/*0x0FE*/	{ "NtMapViewOfSection" , 10 } ,

/*0x0FF*/	{ "NtMapUserPhysicalPagesScatter" , 3 } ,

/*0x100*/	{ "NtMapUserPhysicalPages" , 3 } ,

/*0x101*/	{ "NtMapCMFModule" , 6 } ,

/*0x102*/	{ "NtMakeTemporaryObject" , 1 } ,

/*0x103*/	{ "NtMakePermanentObject" , 1 } ,

/*0x104*/	{ "NtLockVirtualMemory" , 4 } ,

/*0x105*/	{ "NtLockRegistryKey" , 1 } ,

/*0x106*/	{ "NtLockProductActivationKeys" , 2 } ,

/*0x107*/	{ "NtLockFile" , 10 } ,

/*0x108*/	{ "NtLoadKeyEx" , 8 } ,

/*0x109*/	{ "NtLoadKey2" , 3 } ,

/*0x10A*/	{ "NtLoadKey" , 2 } ,

/*0x10B*/	{ "NtLoadHotPatch" , 2 } ,

/*0x10C*/	{ "NtLoadEnclaveData" , 9 } ,

/*0x10D*/	{ "NtLoadDriver" , 1 } ,

/*0x10E*/	{ "NtListenPort" , 2 } ,

/*0x10F*/	{ "NtIsUILanguageComitted" , 0 } ,

/*0x110*/	{ "NtIsSystemResumeAutomatic" , 0 } ,

/*0x111*/	{ "NtIsProcessInJob" , 2 } ,

/*0x112*/	{ "NtInitiatePowerAction" , 4 } ,

/*0x113*/	{ "NtInitializeRegistry" , 1 } ,

/*0x114*/	{ "NtInitializeNlsFiles" , 3 } ,

/*0x115*/	{ "NtInitializeEnclave" , 5 } ,

/*0x116*/	{ "NtImpersonateThread" , 3 } ,

/*0x117*/	{ "NtImpersonateClientOfPort" , 2 } ,

/*0x118*/	{ "NtImpersonateAnonymousToken" , 1 } ,

/*0x119*/	{ "NtGetWriteWatch" , 7 } ,

/*0x11A*/	{ "NtGetNotificationResourceManager" , 7 } ,

/*0x11B*/	{ "NtGetNlsSectionPtr" , 5 } ,

/*0x11C*/	{ "NtGetNextThread" , 6 } ,

/*0x11D*/	{ "NtGetNextProcess" , 5 } ,

/*0x11E*/	{ "NtGetMUIRegistryInfo" , 3 } ,

/*0x11F*/	{ "NtGetDevicePowerState" , 2 } ,

/*0x120*/	{ "NtGetCurrentProcessorNumberEx" , 1 } ,

/*0x121*/	{ "NtGetCurrentProcessorNumber" , 0 } ,

/*0x122*/	{ "NtGetContextThread" , 2 } ,

/*0x123*/	{ "NtGetCompleteWnfStateSubscription" , 6 } ,

/*0x124*/	{ "NtGetCachedSigningLevel" , 6 } ,

/*0x125*/	{ "NtFsControlFile" , 10 } ,

/*0x126*/	{ "NtFreezeTransactions" , 2 } ,

/*0x127*/	{ "NtFreezeRegistry" , 1 } ,

/*0x128*/	{ "NtFreeVirtualMemory" , 4 } ,

/*0x129*/	{ "NtFreeUserPhysicalPages" , 3 } ,

/*0x12A*/	{ "NtFlushWriteBuffer" , 0 } ,

/*0x12B*/	{ "NtFlushVirtualMemory" , 4 } ,

/*0x12C*/	{ "NtFlushProcessWriteBuffers" , 0 } ,

/*0x12D*/	{ "NtFlushKey" , 1 } ,

/*0x12E*/	{ "NtFlushInstructionCache" , 3 } ,

/*0x12F*/	{ "NtFlushInstallUILanguage" , 2 } ,

/*0x130*/	{ "NtFlushBuffersFile" , 2 } ,

/*0x131*/	{ "NtFlushBuffersFileEx" , 5 } ,

/*0x132*/	{ "NtFindAtom" , 3 } ,

/*0x133*/	{ "NtFilterToken" , 6 } ,

/*0x134*/	{ "NtFilterTokenEx" , 14 } ,

/*0x135*/	{ "NtFilterBootOption" , 5 } ,

/*0x136*/	{ "NtExtendSection" , 2 } ,

/*0x137*/	{ "NtEnumerateValueKey" , 6 } ,

/*0x138*/	{ "NtEnumerateTransactionObject" , 5 } ,

/*0x139*/	{ "NtEnumerateSystemEnvironmentValuesEx" , 3 } ,

/*0x13A*/	{ "NtEnumerateKey" , 6 } ,

/*0x13B*/	{ "NtEnumerateDriverEntries" , 2 } ,

/*0x13C*/	{ "NtEnumerateBootEntries" , 2 } ,

/*0x13D*/	{ "NtEnableLastKnownGood" , 0 } ,

/*0x13E*/	{ "NtDuplicateToken" , 6 } ,

/*0x13F*/	{ "NtDuplicateObject" , 7 } ,

/*0x140*/	{ "NtDrawText" , 1 } ,

/*0x141*/	{ "NtDisplayString" , 1 } ,

/*0x142*/	{ "NtDisableLastKnownGood" , 0 } ,

/*0x143*/	{ "NtDeviceIoControlFile" , 10 } ,

/*0x144*/	{ "NtDeleteWnfStateName" , 1 } ,

/*0x145*/	{ "NtDeleteWnfStateData" , 2 } ,

/*0x146*/	{ "NtDeleteValueKey" , 2 } ,

/*0x147*/	{ "NtDeletePrivateNamespace" , 1 } ,

/*0x148*/	{ "NtDeleteObjectAuditAlarm" , 3 } ,

/*0x149*/	{ "NtDeleteKey" , 1 } ,

/*0x14A*/	{ "NtDeleteFile" , 1 } ,

/*0x14B*/	{ "NtDeleteDriverEntry" , 1 } ,

/*0x14C*/	{ "NtDeleteBootEntry" , 1 } ,

/*0x14D*/	{ "NtDeleteAtom" , 1 } ,

/*0x14E*/	{ "NtDelayExecution" , 2 } ,

/*0x14F*/	{ "NtDebugContinue" , 3 } ,

/*0x150*/	{ "NtDebugActiveProcess" , 2 } ,

/*0x151*/	{ "NtCreatePartition" , 4 } ,

/*0x152*/	{ "NtCreateWorkerFactory" , 10 } ,

/*0x153*/	{ "NtCreateWnfStateName" , 7 } ,

/*0x154*/	{ "NtCreateWaitCompletionPacket" , 3 } ,

/*0x155*/	{ "NtCreateWaitablePort" , 5 } ,

/*0x156*/	{ "NtCreateUserProcess" , 11 } ,

/*0x157*/	{ "NtCreateTransactionManager" , 6 } ,

/*0x158*/	{ "NtCreateTransaction" , 10 } ,

/*0x159*/	{ "NtCreateToken" , 13 } ,

/*0x15A*/	{ "NtCreateLowBoxToken" , 9 } ,

/*0x15B*/	{ "NtCreateTokenEx" , 17 } ,

/*0x15C*/	{ "NtCreateTimer" , 4 } ,

/*0x15D*/	{ "NtCreateThreadEx" , 11 } ,

/*0x15E*/	{ "NtCreateThread" , 8 } ,

/*0x15F*/	{ "NtCreateSymbolicLinkObject" , 4 } ,

/*0x160*/	{ "NtCreateSemaphore" , 5 } ,

/*0x161*/	{ "NtCreateSection" , 7 } ,

/*0x162*/	{ "NtCreateResourceManager" , 7 } ,

/*0x163*/	{ "NtCreateProfileEx" , 10 } ,

/*0x164*/	{ "NtCreateProfile" , 9 } ,

/*0x165*/	{ "NtCreateProcessEx" , 9 } ,

/*0x166*/	{ "NtCreateProcess" , 8 } ,

/*0x167*/	{ "NtCreatePrivateNamespace" , 4 } ,

/*0x168*/	{ "NtCreatePort" , 5 } ,

/*0x169*/	{ "NtCreatePagingFile" , 4 } ,

/*0x16A*/	{ "NtCreateNamedPipeFile" , 14 } ,

/*0x16B*/	{ "NtCreateMutant" , 4 } ,

/*0x16C*/	{ "NtCreateMailslotFile" , 8 } ,

/*0x16D*/	{ "NtCreateKeyTransacted" , 8 } ,

/*0x16E*/	{ "NtCreateKeyedEvent" , 4 } ,

/*0x16F*/	{ "NtCreateKey" , 7 } ,

/*0x170*/	{ "NtCreateJobSet" , 3 } ,

/*0x171*/	{ "NtCreateJobObject" , 3 } ,

/*0x172*/	{ "NtCreateIRTimer" , 3 } ,

/*0x173*/	{ "NtCreateTimer2" , 5 } ,

/*0x174*/	{ "NtCreateIoCompletion" , 4 } ,

/*0x175*/	{ "NtCreateFile" , 11 } ,

/*0x176*/	{ "NtCreateEventPair" , 3 } ,

/*0x177*/	{ "NtCreateEvent" , 5 } ,

/*0x178*/	{ "NtCreateEnlistment" , 8 } ,

/*0x179*/	{ "NtCreateEnclave" , 9 } ,

/*0x17A*/	{ "NtCreateDirectoryObjectEx" , 5 } ,

/*0x17B*/	{ "NtCreateDirectoryObject" , 3 } ,

/*0x17C*/	{ "NtCreateDebugObject" , 4 } ,

/*0x17D*/	{ "NtConvertBetweenAuxiliaryCounterAndPerformanceCounter" , 4 } ,

/*0x17E*/	{ "NtContinue" , 2 } ,

/*0x17F*/	{ "NtConnectPort" , 8 } ,

/*0x180*/	{ "NtCompressKey" , 1 } ,

/*0x181*/	{ "NtCompleteConnectPort" , 1 } ,

/*0x182*/	{ "NtCompareTokens" , 3 } ,

/*0x183*/	{ "NtCompareSigningLevels" , 2 } ,

/*0x184*/	{ "NtCompareObjects" , 2 } ,

/*0x185*/	{ "NtCompactKeys" , 2 } ,

/*0x186*/	{ "NtCommitTransaction" , 2 } ,

/*0x187*/	{ "NtCommitEnlistment" , 2 } ,

/*0x188*/	{ "NtCommitComplete" , 2 } ,

/*0x189*/	{ "NtCloseObjectAuditAlarm" , 3 } ,

/*0x18A*/	{ "NtClose" , 1 } ,

/*0x18B*/	{ "NtClearEvent" , 1 } ,

/*0x18C*/	{ "NtCancelWaitCompletionPacket" , 2 } ,

/*0x18D*/	{ "NtCancelTimer" , 2 } ,

/*0x18E*/	{ "NtCancelSynchronousIoFile" , 3 } ,

/*0x18F*/	{ "NtCancelIoFileEx" , 3 } ,

/*0x190*/	{ "NtCancelIoFile" , 2 } ,

/*0x191*/	{ "NtCallbackReturn" , 3 } ,

/*0x192*/	{ "NtAssociateWaitCompletionPacket" , 8 } ,

/*0x193*/	{ "NtAssignProcessToJobObject" , 2 } ,

/*0x194*/	{ "NtAreMappedFilesTheSame" , 2 } ,

/*0x195*/	{ "NtApphelpCacheControl" , 2 } ,

/*0x196*/	{ "NtAlpcSetInformation" , 4 } ,

/*0x197*/	{ "NtAlpcSendWaitReceivePort" , 8 } ,

/*0x198*/	{ "NtAlpcRevokeSecurityContext" , 3 } ,

/*0x199*/	{ "NtAlpcQueryInformationMessage" , 6 } ,

/*0x19A*/	{ "NtAlpcQueryInformation" , 5 } ,

/*0x19B*/	{ "NtAlpcOpenSenderThread" , 6 } ,

/*0x19C*/	{ "NtAlpcOpenSenderProcess" , 6 } ,

/*0x19D*/	{ "NtAlpcImpersonateClientOfPort" , 3 } ,

/*0x19E*/	{ "NtAlpcImpersonateClientContainerOfPort" , 3 } ,

/*0x19F*/	{ "NtAlpcDisconnectPort" , 2 } ,

/*0x1A0*/	{ "NtAlpcDeleteSecurityContext" , 3 } ,

/*0x1A1*/	{ "NtAlpcDeleteSectionView" , 3 } ,

/*0x1A2*/	{ "NtAlpcDeleteResourceReserve" , 3 } ,

/*0x1A3*/	{ "NtAlpcDeletePortSection" , 3 } ,

/*0x1A4*/	{ "NtAlpcCreateSecurityContext" , 3 } ,

/*0x1A5*/	{ "NtAlpcCreateSectionView" , 3 } ,

/*0x1A6*/	{ "NtAlpcCreateResourceReserve" , 4 } ,

/*0x1A7*/	{ "NtAlpcCreatePortSection" , 6 } ,

/*0x1A8*/	{ "NtAlpcCreatePort" , 3 } ,

/*0x1A9*/	{ "NtAlpcConnectPort" , 11 } ,

/*0x1AA*/	{ "NtAlpcConnectPortEx" , 11 } ,

/*0x1AB*/	{ "NtAlpcCancelMessage" , 3 } ,

/*0x1AC*/	{ "NtAlpcAcceptConnectPort" , 9 } ,

/*0x1AD*/	{ "NtAllocateVirtualMemory" , 6 } ,

/*0x1AE*/	{ "NtAllocateUuids" , 4 } ,

/*0x1AF*/	{ "NtAllocateUserPhysicalPages" , 3 } ,

/*0x1B0*/	{ "NtAllocateReserveObject" , 3 } ,

/*0x1B1*/	{ "NtAllocateLocallyUniqueId" , 1 } ,

/*0x1B2*/	{ "NtAlertThreadByThreadId" , 1 } ,

/*0x1B3*/	{ "NtAlertThread" , 1 } ,

/*0x1B4*/	{ "NtAlertResumeThread" , 2 } ,

/*0x1B5*/	{ "NtAdjustPrivilegesToken" , 6 } ,

/*0x1B6*/	{ "NtAdjustGroupsToken" , 6 } ,

/*0x1B7*/	{ "NtAdjustTokenClaimsAndDeviceGroups" , 16 } ,

/*0x1B8*/	{ "NtAddDriverEntry" , 2 } ,

/*0x1B9*/	{ "NtAddBootEntry" , 2 } ,

/*0x1BA*/	{ "NtAddAtom" , 3 } ,

/*0x1BB*/	{ "NtAddAtomEx" , 4 } ,

/*0x1BC*/	{ "NtAcquireProcessActivityReference" , 3 } ,

/*0x1BD*/	{ "NtAccessCheckByTypeResultListAndAuditAlarmByHandle" , 17 } ,

/*0x1BE*/	{ "NtAccessCheckByTypeResultListAndAuditAlarm" , 16 } ,

/*0x1BF*/	{ "NtAccessCheckByTypeResultList" , 11 } ,

/*0x1C0*/	{ "NtAccessCheckByTypeAndAuditAlarm" , 16 } ,

/*0x1C1*/	{ "NtAccessCheckByType" , 11 } ,

/*0x1C2*/	{ "NtAccessCheckAndAuditAlarm" , 11 } ,

/*0x1C3*/	{ "NtSetInformationSymbolicLink" , 4 } ,

/*0x1C4*/	{ "NtCreateRegistryTransaction" , 4 } ,

/*0x1C5*/	{ "NtOpenRegistryTransaction" , 3 } ,

/*0x1C6*/	{ "NtCommitRegistryTransaction" , 2 } ,

/*0x1C7*/	{ "NtRollbackRegistryTransaction" , 2 }

};

