// DO NOT MODIFY THIS FILE DIRECTLY!
// author: @TinySecEx
// ssdt database for 6.2.9200-sp0-windows-8 i386

SDT_NODE static_ssdt_6_2_9200_sp0_windows_8_i386[429] = {

/*0x000*/	{ "NtWorkerFactoryWorkerReady" , 1 } ,

/*0x001*/	{ "NtYieldExecution" , 0 } ,

/*0x002*/	{ "NtWriteVirtualMemory" , 5 } ,

/*0x003*/	{ "NtWriteRequestData" , 6 } ,

/*0x004*/	{ "NtWriteFileGather" , 9 } ,

/*0x005*/	{ "NtWriteFile" , 9 } ,

/*0x006*/	{ "NtWaitLowEventPair" , 1 } ,

/*0x007*/	{ "NtWaitHighEventPair" , 1 } ,

/*0x008*/	{ "NtWaitForWorkViaWorkerFactory" , 4 } ,

/*0x009*/	{ "NtWaitForWnfNotifications" , 2 } ,

/*0x00A*/	{ "NtWaitForSingleObject" , 3 } ,

/*0x00B*/	{ "NtWaitForMultipleObjects32" , 5 } ,

/*0x00C*/	{ "NtWaitForMultipleObjects" , 5 } ,

/*0x00D*/	{ "NtWaitForKeyedEvent" , 4 } ,

/*0x00E*/	{ "NtWaitForDebugEvent" , 4 } ,

/*0x00F*/	{ "NtWaitForAlertByThreadId" , 2 } ,

/*0x010*/	{ "NtVdmControl" , 2 } ,

/*0x011*/	{ "NtUnsubscribeWnfStateChange" , 1 } ,

/*0x012*/	{ "NtUpdateWnfStateData" , 7 } ,

/*0x013*/	{ "NtUnmapViewOfSection" , 2 } ,

/*0x014*/	{ "NtUnmapViewOfSectionEx" , 3 } ,

/*0x015*/	{ "NtUnlockVirtualMemory" , 4 } ,

/*0x016*/	{ "NtUnlockFile" , 5 } ,

/*0x017*/	{ "NtUnloadKeyEx" , 2 } ,

/*0x018*/	{ "NtUnloadKey2" , 2 } ,

/*0x019*/	{ "NtUnloadKey" , 1 } ,

/*0x01A*/	{ "NtUnloadDriver" , 1 } ,

/*0x01B*/	{ "NtUmsThreadYield" , 1 } ,

/*0x01C*/	{ "NtTranslateFilePath" , 4 } ,

/*0x01D*/	{ "NtTraceEvent" , 4 } ,

/*0x01E*/	{ "NtTraceControl" , 6 } ,

/*0x01F*/	{ "NtThawTransactions" , 0 } ,

/*0x020*/	{ "NtThawRegistry" , 0 } ,

/*0x021*/	{ "NtTestAlert" , 0 } ,

/*0x022*/	{ "NtTerminateThread" , 2 } ,

/*0x023*/	{ "NtTerminateProcess" , 2 } ,

/*0x024*/	{ "NtTerminateJobObject" , 2 } ,

/*0x025*/	{ "NtSystemDebugControl" , 6 } ,

/*0x026*/	{ "NtSuspendThread" , 2 } ,

/*0x027*/	{ "NtSuspendProcess" , 1 } ,

/*0x028*/	{ "NtSubscribeWnfStateChange" , 4 } ,

/*0x029*/	{ "NtStopProfile" , 1 } ,

/*0x02A*/	{ "NtStartProfile" , 1 } ,

/*0x02B*/	{ "NtSinglePhaseReject" , 2 } ,

/*0x02C*/	{ "NtSignalAndWaitForSingleObject" , 4 } ,

/*0x02D*/	{ "NtShutdownWorkerFactory" , 2 } ,

/*0x02E*/	{ "NtShutdownSystem" , 1 } ,

/*0x02F*/	{ "NtSetVolumeInformationFile" , 5 } ,

/*0x030*/	{ "NtSetValueKey" , 6 } ,

/*0x031*/	{ "NtSetUuidSeed" , 1 } ,

/*0x032*/	{ "NtSetTimerResolution" , 3 } ,

/*0x033*/	{ "NtSetTimerEx" , 4 } ,

/*0x034*/	{ "NtSetTimer" , 7 } ,

/*0x035*/	{ "NtSetThreadExecutionState" , 2 } ,

/*0x036*/	{ "NtSetSystemTime" , 2 } ,

/*0x037*/	{ "NtSetSystemPowerState" , 3 } ,

/*0x038*/	{ "NtSetSystemInformation" , 3 } ,

/*0x039*/	{ "NtSetSystemEnvironmentValueEx" , 5 } ,

/*0x03A*/	{ "NtSetSystemEnvironmentValue" , 2 } ,

/*0x03B*/	{ "NtSetSecurityObject" , 3 } ,

/*0x03C*/	{ "NtSetQuotaInformationFile" , 4 } ,

/*0x03D*/	{ "NtSetLowWaitHighEventPair" , 1 } ,

/*0x03E*/	{ "NtSetLowEventPair" , 1 } ,

/*0x03F*/	{ "NtSetLdtEntries" , 6 } ,

/*0x040*/	{ "NtSetIRTimer" , 2 } ,

/*0x041*/	{ "NtSetIoCompletionEx" , 6 } ,

/*0x042*/	{ "NtSetIoCompletion" , 5 } ,

/*0x043*/	{ "NtSetIntervalProfile" , 2 } ,

/*0x044*/	{ "NtSetInformationWorkerFactory" , 4 } ,

/*0x045*/	{ "NtSetInformationTransactionManager" , 4 } ,

/*0x046*/	{ "NtSetInformationTransaction" , 4 } ,

/*0x047*/	{ "NtSetInformationToken" , 4 } ,

/*0x048*/	{ "NtSetInformationThread" , 4 } ,

/*0x049*/	{ "NtSetInformationResourceManager" , 4 } ,

/*0x04A*/	{ "NtSetInformationProcess" , 4 } ,

/*0x04B*/	{ "NtSetInformationObject" , 4 } ,

/*0x04C*/	{ "NtSetInformationKey" , 4 } ,

/*0x04D*/	{ "NtSetInformationJobObject" , 4 } ,

/*0x04E*/	{ "NtSetInformationFile" , 5 } ,

/*0x04F*/	{ "NtSetInformationEnlistment" , 4 } ,

/*0x050*/	{ "NtSetInformationDebugObject" , 5 } ,

/*0x051*/	{ "NtSetHighWaitLowEventPair" , 1 } ,

/*0x052*/	{ "NtSetHighEventPair" , 1 } ,

/*0x053*/	{ "NtSetEventBoostPriority" , 1 } ,

/*0x054*/	{ "NtSetEvent" , 2 } ,

/*0x055*/	{ "NtSetEaFile" , 4 } ,

/*0x056*/	{ "NtSetDriverEntryOrder" , 2 } ,

/*0x057*/	{ "NtSetDefaultUILanguage" , 1 } ,

/*0x058*/	{ "NtSetDefaultLocale" , 2 } ,

/*0x059*/	{ "NtSetDefaultHardErrorPort" , 1 } ,

/*0x05A*/	{ "NtSetDebugFilterState" , 3 } ,

/*0x05B*/	{ "NtSetContextThread" , 2 } ,

/*0x05C*/	{ "NtSetCachedSigningLevel" , 5 } ,

/*0x05D*/	{ "NtSetBootOptions" , 2 } ,

/*0x05E*/	{ "NtSetBootEntryOrder" , 2 } ,

/*0x05F*/	{ "NtSerializeBoot" , 0 } ,

/*0x060*/	{ "NtSecureConnectPort" , 9 } ,

/*0x061*/	{ "NtSaveMergedKeys" , 3 } ,

/*0x062*/	{ "NtSaveKeyEx" , 3 } ,

/*0x063*/	{ "NtSaveKey" , 2 } ,

/*0x064*/	{ "NtRollforwardTransactionManager" , 2 } ,

/*0x065*/	{ "NtRollbackTransaction" , 2 } ,

/*0x066*/	{ "NtRollbackEnlistment" , 2 } ,

/*0x067*/	{ "NtRollbackComplete" , 2 } ,

/*0x068*/	{ "NtResumeThread" , 2 } ,

/*0x069*/	{ "NtResumeProcess" , 1 } ,

/*0x06A*/	{ "NtRestoreKey" , 3 } ,

/*0x06B*/	{ "NtResetWriteWatch" , 3 } ,

/*0x06C*/	{ "NtResetEvent" , 2 } ,

/*0x06D*/	{ "NtRequestWaitReplyPort" , 3 } ,

/*0x06E*/	{ "NtRequestPort" , 2 } ,

/*0x06F*/	{ "NtReplyWaitReplyPort" , 2 } ,

/*0x070*/	{ "NtReplyWaitReceivePortEx" , 5 } ,

/*0x071*/	{ "NtReplyWaitReceivePort" , 4 } ,

/*0x072*/	{ "NtReplyPort" , 2 } ,

/*0x073*/	{ "NtReplacePartitionUnit" , 3 } ,

/*0x074*/	{ "NtReplaceKey" , 3 } ,

/*0x075*/	{ "NtRenameTransactionManager" , 2 } ,

/*0x076*/	{ "NtRenameKey" , 2 } ,

/*0x077*/	{ "NtRemoveProcessDebug" , 2 } ,

/*0x078*/	{ "NtRemoveIoCompletionEx" , 6 } ,

/*0x079*/	{ "NtRemoveIoCompletion" , 5 } ,

/*0x07A*/	{ "NtReleaseWorkerFactoryWorker" , 1 } ,

/*0x07B*/	{ "NtReleaseSemaphore" , 3 } ,

/*0x07C*/	{ "NtReleaseMutant" , 2 } ,

/*0x07D*/	{ "NtReleaseKeyedEvent" , 4 } ,

/*0x07E*/	{ "NtRegisterThreadTerminatePort" , 1 } ,

/*0x07F*/	{ "NtRegisterProtocolAddressInformation" , 5 } ,

/*0x080*/	{ "NtRecoverTransactionManager" , 1 } ,

/*0x081*/	{ "NtRecoverResourceManager" , 1 } ,

/*0x082*/	{ "NtRecoverEnlistment" , 2 } ,

/*0x083*/	{ "NtReadVirtualMemory" , 5 } ,

/*0x084*/	{ "NtReadRequestData" , 6 } ,

/*0x085*/	{ "NtReadOnlyEnlistment" , 2 } ,

/*0x086*/	{ "NtReadFileScatter" , 9 } ,

/*0x087*/	{ "NtReadFile" , 9 } ,

/*0x088*/	{ "NtRaiseHardError" , 6 } ,

/*0x089*/	{ "NtRaiseException" , 3 } ,

/*0x08A*/	{ "NtQueueApcThreadEx" , 6 } ,

/*0x08B*/	{ "NtQueueApcThread" , 5 } ,

/*0x08C*/	{ "NtQueryWnfStateData" , 6 } ,

/*0x08D*/	{ "NtQueryWnfStateNameInformation" , 5 } ,

/*0x08E*/	{ "NtQueryVolumeInformationFile" , 5 } ,

/*0x08F*/	{ "NtQueryVirtualMemory" , 6 } ,

/*0x090*/	{ "NtQueryValueKey" , 6 } ,

/*0x091*/	{ "NtQueryTimerResolution" , 3 } ,

/*0x092*/	{ "NtQueryTimer" , 5 } ,

/*0x093*/	{ "NtQuerySystemTime" , 1 } ,

/*0x094*/	{ "NtQuerySystemInformationEx" , 6 } ,

/*0x095*/	{ "NtQuerySystemInformation" , 4 } ,

/*0x096*/	{ "NtQuerySystemEnvironmentValueEx" , 5 } ,

/*0x097*/	{ "NtQuerySystemEnvironmentValue" , 4 } ,

/*0x098*/	{ "NtQuerySymbolicLinkObject" , 3 } ,

/*0x099*/	{ "NtQuerySemaphore" , 5 } ,

/*0x09A*/	{ "NtQuerySecurityObject" , 5 } ,

/*0x09B*/	{ "NtQuerySecurityAttributesToken" , 6 } ,

/*0x09C*/	{ "NtQuerySection" , 5 } ,

/*0x09D*/	{ "NtQueryQuotaInformationFile" , 9 } ,

/*0x09E*/	{ "NtQueryPortInformationProcess" , 0 } ,

/*0x09F*/	{ "NtQueryPerformanceCounter" , 2 } ,

/*0x0A0*/	{ "NtQueryOpenSubKeysEx" , 4 } ,

/*0x0A1*/	{ "NtQueryOpenSubKeys" , 2 } ,

/*0x0A2*/	{ "NtQueryObject" , 5 } ,

/*0x0A3*/	{ "NtQueryMutant" , 5 } ,

/*0x0A4*/	{ "NtQueryMultipleValueKey" , 6 } ,

/*0x0A5*/	{ "NtQueryLicenseValue" , 5 } ,

/*0x0A6*/	{ "NtQueryKey" , 5 } ,

/*0x0A7*/	{ "NtQueryIoCompletion" , 5 } ,

/*0x0A8*/	{ "NtQueryIntervalProfile" , 2 } ,

/*0x0A9*/	{ "NtQueryInstallUILanguage" , 1 } ,

/*0x0AA*/	{ "NtQueryInformationWorkerFactory" , 5 } ,

/*0x0AB*/	{ "NtQueryInformationTransactionManager" , 5 } ,

/*0x0AC*/	{ "NtQueryInformationTransaction" , 5 } ,

/*0x0AD*/	{ "NtQueryInformationToken" , 5 } ,

/*0x0AE*/	{ "NtQueryInformationThread" , 5 } ,

/*0x0AF*/	{ "NtQueryInformationResourceManager" , 5 } ,

/*0x0B0*/	{ "NtQueryInformationProcess" , 5 } ,

/*0x0B1*/	{ "NtQueryInformationPort" , 5 } ,

/*0x0B2*/	{ "NtQueryInformationJobObject" , 5 } ,

/*0x0B3*/	{ "NtQueryInformationFile" , 5 } ,

/*0x0B4*/	{ "NtQueryInformationEnlistment" , 5 } ,

/*0x0B5*/	{ "NtQueryInformationAtom" , 5 } ,

/*0x0B6*/	{ "NtQueryFullAttributesFile" , 2 } ,

/*0x0B7*/	{ "NtQueryEvent" , 5 } ,

/*0x0B8*/	{ "NtQueryEaFile" , 9 } ,

/*0x0B9*/	{ "NtQueryDriverEntryOrder" , 2 } ,

/*0x0BA*/	{ "NtQueryDirectoryObject" , 7 } ,

/*0x0BB*/	{ "NtQueryDirectoryFile" , 11 } ,

/*0x0BC*/	{ "NtQueryDefaultUILanguage" , 1 } ,

/*0x0BD*/	{ "NtQueryDefaultLocale" , 2 } ,

/*0x0BE*/	{ "NtQueryDebugFilterState" , 2 } ,

/*0x0BF*/	{ "NtQueryBootOptions" , 2 } ,

/*0x0C0*/	{ "NtQueryBootEntryOrder" , 2 } ,

/*0x0C1*/	{ "NtQueryAttributesFile" , 2 } ,

/*0x0C2*/	{ "NtPulseEvent" , 2 } ,

/*0x0C3*/	{ "NtProtectVirtualMemory" , 5 } ,

/*0x0C4*/	{ "NtPropagationFailed" , 3 } ,

/*0x0C5*/	{ "NtPropagationComplete" , 4 } ,

/*0x0C6*/	{ "NtPrivilegeObjectAuditAlarm" , 6 } ,

/*0x0C7*/	{ "NtPrivilegedServiceAuditAlarm" , 5 } ,

/*0x0C8*/	{ "NtPrivilegeCheck" , 3 } ,

/*0x0C9*/	{ "NtSetInformationVirtualMemory" , 6 } ,

/*0x0CA*/	{ "NtPrePrepareEnlistment" , 2 } ,

/*0x0CB*/	{ "NtPrePrepareComplete" , 2 } ,

/*0x0CC*/	{ "NtPrepareEnlistment" , 2 } ,

/*0x0CD*/	{ "NtPrepareComplete" , 2 } ,

/*0x0CE*/	{ "NtPowerInformation" , 5 } ,

/*0x0CF*/	{ "NtPlugPlayControl" , 3 } ,

/*0x0D0*/	{ "NtOpenTransactionManager" , 6 } ,

/*0x0D1*/	{ "NtOpenTransaction" , 5 } ,

/*0x0D2*/	{ "NtOpenTimer" , 3 } ,

/*0x0D3*/	{ "NtOpenThreadTokenEx" , 5 } ,

/*0x0D4*/	{ "NtOpenThreadToken" , 4 } ,

/*0x0D5*/	{ "NtOpenThread" , 4 } ,

/*0x0D6*/	{ "NtOpenSymbolicLinkObject" , 3 } ,

/*0x0D7*/	{ "NtOpenSession" , 3 } ,

/*0x0D8*/	{ "NtOpenSemaphore" , 3 } ,

/*0x0D9*/	{ "NtOpenSection" , 3 } ,

/*0x0DA*/	{ "NtOpenResourceManager" , 5 } ,

/*0x0DB*/	{ "NtOpenProcessTokenEx" , 4 } ,

/*0x0DC*/	{ "NtOpenProcessToken" , 3 } ,

/*0x0DD*/	{ "NtOpenProcess" , 4 } ,

/*0x0DE*/	{ "NtOpenPrivateNamespace" , 4 } ,

/*0x0DF*/	{ "NtOpenObjectAuditAlarm" , 12 } ,

/*0x0E0*/	{ "NtOpenMutant" , 3 } ,

/*0x0E1*/	{ "NtOpenKeyTransactedEx" , 5 } ,

/*0x0E2*/	{ "NtOpenKeyTransacted" , 4 } ,

/*0x0E3*/	{ "NtOpenKeyEx" , 4 } ,

/*0x0E4*/	{ "NtOpenKeyedEvent" , 3 } ,

/*0x0E5*/	{ "NtOpenKey" , 3 } ,

/*0x0E6*/	{ "NtOpenJobObject" , 3 } ,

/*0x0E7*/	{ "NtOpenIoCompletion" , 3 } ,

/*0x0E8*/	{ "NtOpenFile" , 6 } ,

/*0x0E9*/	{ "NtOpenEventPair" , 3 } ,

/*0x0EA*/	{ "NtOpenEvent" , 3 } ,

/*0x0EB*/	{ "NtOpenEnlistment" , 5 } ,

/*0x0EC*/	{ "NtOpenDirectoryObject" , 3 } ,

/*0x0ED*/	{ "NtNotifyChangeSession" , 8 } ,

/*0x0EE*/	{ "NtNotifyChangeMultipleKeys" , 12 } ,

/*0x0EF*/	{ "NtNotifyChangeKey" , 10 } ,

/*0x0F0*/	{ "NtNotifyChangeDirectoryFile" , 9 } ,

/*0x0F1*/	{ "NtModifyDriverEntry" , 1 } ,

/*0x0F2*/	{ "NtModifyBootEntry" , 1 } ,

/*0x0F3*/	{ "NtMapViewOfSection" , 10 } ,

/*0x0F4*/	{ "NtMapUserPhysicalPagesScatter" , 3 } ,

/*0x0F5*/	{ "NtMapUserPhysicalPages" , 3 } ,

/*0x0F6*/	{ "NtMapCMFModule" , 6 } ,

/*0x0F7*/	{ "NtMakeTemporaryObject" , 1 } ,

/*0x0F8*/	{ "NtMakePermanentObject" , 1 } ,

/*0x0F9*/	{ "NtLockVirtualMemory" , 4 } ,

/*0x0FA*/	{ "NtLockRegistryKey" , 1 } ,

/*0x0FB*/	{ "NtLockProductActivationKeys" , 2 } ,

/*0x0FC*/	{ "NtLockFile" , 10 } ,

/*0x0FD*/	{ "NtLoadKeyEx" , 8 } ,

/*0x0FE*/	{ "NtLoadKey2" , 3 } ,

/*0x0FF*/	{ "NtLoadKey" , 2 } ,

/*0x100*/	{ "NtLoadDriver" , 1 } ,

/*0x101*/	{ "NtListenPort" , 2 } ,

/*0x102*/	{ "NtIsUILanguageComitted" , 0 } ,

/*0x103*/	{ "NtIsSystemResumeAutomatic" , 0 } ,

/*0x104*/	{ "NtIsProcessInJob" , 2 } ,

/*0x105*/	{ "NtInitiatePowerAction" , 4 } ,

/*0x106*/	{ "NtInitializeRegistry" , 1 } ,

/*0x107*/	{ "NtInitializeNlsFiles" , 3 } ,

/*0x108*/	{ "NtImpersonateThread" , 3 } ,

/*0x109*/	{ "NtImpersonateClientOfPort" , 2 } ,

/*0x10A*/	{ "NtImpersonateAnonymousToken" , 1 } ,

/*0x10B*/	{ "NtGetWriteWatch" , 7 } ,

/*0x10C*/	{ "NtGetNotificationResourceManager" , 7 } ,

/*0x10D*/	{ "NtGetNlsSectionPtr" , 5 } ,

/*0x10E*/	{ "NtGetNextThread" , 6 } ,

/*0x10F*/	{ "NtGetNextProcess" , 5 } ,

/*0x110*/	{ "NtGetMUIRegistryInfo" , 3 } ,

/*0x111*/	{ "NtGetDevicePowerState" , 2 } ,

/*0x112*/	{ "NtGetCurrentProcessorNumber" , 0 } ,

/*0x113*/	{ "NtGetContextThread" , 2 } ,

/*0x114*/	{ "NtGetCachedSigningLevel" , 6 } ,

/*0x115*/	{ "NtFsControlFile" , 10 } ,

/*0x116*/	{ "NtFreezeTransactions" , 2 } ,

/*0x117*/	{ "NtFreezeRegistry" , 1 } ,

/*0x118*/	{ "NtFreeVirtualMemory" , 4 } ,

/*0x119*/	{ "NtFreeUserPhysicalPages" , 3 } ,

/*0x11A*/	{ "NtFlushWriteBuffer" , 0 } ,

/*0x11B*/	{ "NtFlushVirtualMemory" , 4 } ,

/*0x11C*/	{ "NtFlushProcessWriteBuffers" , 0 } ,

/*0x11D*/	{ "NtFlushKey" , 1 } ,

/*0x11E*/	{ "NtFlushInstructionCache" , 3 } ,

/*0x11F*/	{ "NtFlushInstallUILanguage" , 2 } ,

/*0x120*/	{ "NtFlushBuffersFile" , 2 } ,

/*0x121*/	{ "NtFlushBuffersFileEx" , 5 } ,

/*0x122*/	{ "NtFindAtom" , 3 } ,

/*0x123*/	{ "NtFilterToken" , 6 } ,

/*0x124*/	{ "NtFilterTokenEx" , 14 } ,

/*0x125*/	{ "NtFilterBootOption" , 5 } ,

/*0x126*/	{ "NtExtendSection" , 2 } ,

/*0x127*/	{ "NtEnumerateValueKey" , 6 } ,

/*0x128*/	{ "NtEnumerateTransactionObject" , 5 } ,

/*0x129*/	{ "NtEnumerateSystemEnvironmentValuesEx" , 3 } ,

/*0x12A*/	{ "NtEnumerateKey" , 6 } ,

/*0x12B*/	{ "NtEnumerateDriverEntries" , 2 } ,

/*0x12C*/	{ "NtEnumerateBootEntries" , 2 } ,

/*0x12D*/	{ "NtEnableLastKnownGood" , 0 } ,

/*0x12E*/	{ "NtDuplicateToken" , 6 } ,

/*0x12F*/	{ "NtDuplicateObject" , 7 } ,

/*0x130*/	{ "NtDrawText" , 1 } ,

/*0x131*/	{ "NtDisplayString" , 1 } ,

/*0x132*/	{ "NtDisableLastKnownGood" , 0 } ,

/*0x133*/	{ "NtDeviceIoControlFile" , 10 } ,

/*0x134*/	{ "NtDeleteWnfStateName" , 1 } ,

/*0x135*/	{ "NtDeleteWnfStateData" , 2 } ,

/*0x136*/	{ "NtDeleteValueKey" , 2 } ,

/*0x137*/	{ "NtDeletePrivateNamespace" , 1 } ,

/*0x138*/	{ "NtDeleteObjectAuditAlarm" , 3 } ,

/*0x139*/	{ "NtDeleteKey" , 1 } ,

/*0x13A*/	{ "NtDeleteFile" , 1 } ,

/*0x13B*/	{ "NtDeleteDriverEntry" , 1 } ,

/*0x13C*/	{ "NtDeleteBootEntry" , 1 } ,

/*0x13D*/	{ "NtDeleteAtom" , 1 } ,

/*0x13E*/	{ "NtDelayExecution" , 2 } ,

/*0x13F*/	{ "NtDebugContinue" , 3 } ,

/*0x140*/	{ "NtDebugActiveProcess" , 2 } ,

/*0x141*/	{ "NtCreateWorkerFactory" , 10 } ,

/*0x142*/	{ "NtCreateWnfStateName" , 7 } ,

/*0x143*/	{ "NtCreateWaitCompletionPacket" , 3 } ,

/*0x144*/	{ "NtCreateWaitablePort" , 5 } ,

/*0x145*/	{ "NtCreateUserProcess" , 11 } ,

/*0x146*/	{ "NtCreateTransactionManager" , 6 } ,

/*0x147*/	{ "NtCreateTransaction" , 10 } ,

/*0x148*/	{ "NtCreateToken" , 13 } ,

/*0x149*/	{ "NtCreateLowBoxToken" , 9 } ,

/*0x14A*/	{ "NtCreateTokenEx" , 17 } ,

/*0x14B*/	{ "NtCreateTimer" , 4 } ,

/*0x14C*/	{ "NtCreateThreadEx" , 11 } ,

/*0x14D*/	{ "NtCreateThread" , 8 } ,

/*0x14E*/	{ "NtCreateSymbolicLinkObject" , 4 } ,

/*0x14F*/	{ "NtCreateSemaphore" , 5 } ,

/*0x150*/	{ "NtCreateSection" , 7 } ,

/*0x151*/	{ "NtCreateResourceManager" , 7 } ,

/*0x152*/	{ "NtCreateProfileEx" , 10 } ,

/*0x153*/	{ "NtCreateProfile" , 9 } ,

/*0x154*/	{ "NtCreateProcessEx" , 9 } ,

/*0x155*/	{ "NtCreateProcess" , 8 } ,

/*0x156*/	{ "NtCreatePrivateNamespace" , 4 } ,

/*0x157*/	{ "NtCreatePort" , 5 } ,

/*0x158*/	{ "NtCreatePagingFile" , 4 } ,

/*0x159*/	{ "NtCreateNamedPipeFile" , 14 } ,

/*0x15A*/	{ "NtCreateMutant" , 4 } ,

/*0x15B*/	{ "NtCreateMailslotFile" , 8 } ,

/*0x15C*/	{ "NtCreateKeyTransacted" , 8 } ,

/*0x15D*/	{ "NtCreateKeyedEvent" , 4 } ,

/*0x15E*/	{ "NtCreateKey" , 7 } ,

/*0x15F*/	{ "NtCreateJobSet" , 3 } ,

/*0x160*/	{ "NtCreateJobObject" , 3 } ,

/*0x161*/	{ "NtCreateIRTimer" , 2 } ,

/*0x162*/	{ "NtCreateIoCompletion" , 4 } ,

/*0x163*/	{ "NtCreateFile" , 11 } ,

/*0x164*/	{ "NtCreateEventPair" , 3 } ,

/*0x165*/	{ "NtCreateEvent" , 5 } ,

/*0x166*/	{ "NtCreateEnlistment" , 8 } ,

/*0x167*/	{ "NtCreateDirectoryObjectEx" , 5 } ,

/*0x168*/	{ "NtCreateDirectoryObject" , 3 } ,

/*0x169*/	{ "NtCreateDebugObject" , 4 } ,

/*0x16A*/	{ "NtContinue" , 2 } ,

/*0x16B*/	{ "NtConnectPort" , 8 } ,

/*0x16C*/	{ "NtCompressKey" , 1 } ,

/*0x16D*/	{ "NtCompleteConnectPort" , 1 } ,

/*0x16E*/	{ "NtCompareTokens" , 3 } ,

/*0x16F*/	{ "NtCompactKeys" , 2 } ,

/*0x170*/	{ "NtCommitTransaction" , 2 } ,

/*0x171*/	{ "NtCommitEnlistment" , 2 } ,

/*0x172*/	{ "NtCommitComplete" , 2 } ,

/*0x173*/	{ "NtCloseObjectAuditAlarm" , 3 } ,

/*0x174*/	{ "NtClose" , 1 } ,

/*0x175*/	{ "NtClearEvent" , 1 } ,

/*0x176*/	{ "NtCancelWaitCompletionPacket" , 2 } ,

/*0x177*/	{ "NtCancelTimer" , 2 } ,

/*0x178*/	{ "NtCancelSynchronousIoFile" , 3 } ,

/*0x179*/	{ "NtCancelIoFileEx" , 3 } ,

/*0x17A*/	{ "NtCancelIoFile" , 2 } ,

/*0x17B*/	{ "NtCallbackReturn" , 3 } ,

/*0x17C*/	{ "NtAssociateWaitCompletionPacket" , 8 } ,

/*0x17D*/	{ "NtAssignProcessToJobObject" , 2 } ,

/*0x17E*/	{ "NtAreMappedFilesTheSame" , 2 } ,

/*0x17F*/	{ "NtApphelpCacheControl" , 2 } ,

/*0x180*/	{ "NtAlpcSetInformation" , 4 } ,

/*0x181*/	{ "NtAlpcSendWaitReceivePort" , 8 } ,

/*0x182*/	{ "NtAlpcRevokeSecurityContext" , 3 } ,

/*0x183*/	{ "NtAlpcQueryInformationMessage" , 6 } ,

/*0x184*/	{ "NtAlpcQueryInformation" , 5 } ,

/*0x185*/	{ "NtAlpcOpenSenderThread" , 6 } ,

/*0x186*/	{ "NtAlpcOpenSenderProcess" , 6 } ,

/*0x187*/	{ "NtAlpcImpersonateClientOfPort" , 3 } ,

/*0x188*/	{ "NtAlpcDisconnectPort" , 2 } ,

/*0x189*/	{ "NtAlpcDeleteSecurityContext" , 3 } ,

/*0x18A*/	{ "NtAlpcDeleteSectionView" , 3 } ,

/*0x18B*/	{ "NtAlpcDeleteResourceReserve" , 3 } ,

/*0x18C*/	{ "NtAlpcDeletePortSection" , 3 } ,

/*0x18D*/	{ "NtAlpcCreateSecurityContext" , 3 } ,

/*0x18E*/	{ "NtAlpcCreateSectionView" , 3 } ,

/*0x18F*/	{ "NtAlpcCreateResourceReserve" , 4 } ,

/*0x190*/	{ "NtAlpcCreatePortSection" , 6 } ,

/*0x191*/	{ "NtAlpcCreatePort" , 3 } ,

/*0x192*/	{ "NtAlpcConnectPort" , 11 } ,

/*0x193*/	{ "NtAlpcConnectPortEx" , 11 } ,

/*0x194*/	{ "NtAlpcCancelMessage" , 3 } ,

/*0x195*/	{ "NtAlpcAcceptConnectPort" , 9 } ,

/*0x196*/	{ "NtAllocateVirtualMemory" , 6 } ,

/*0x197*/	{ "NtAllocateUuids" , 4 } ,

/*0x198*/	{ "NtAllocateUserPhysicalPages" , 3 } ,

/*0x199*/	{ "NtAllocateReserveObject" , 3 } ,

/*0x19A*/	{ "NtAllocateLocallyUniqueId" , 1 } ,

/*0x19B*/	{ "NtAlertThreadByThreadId" , 1 } ,

/*0x19C*/	{ "NtAlertThread" , 1 } ,

/*0x19D*/	{ "NtAlertResumeThread" , 2 } ,

/*0x19E*/	{ "NtAdjustPrivilegesToken" , 6 } ,

/*0x19F*/	{ "NtAdjustGroupsToken" , 6 } ,

/*0x1A0*/	{ "NtAdjustTokenClaimsAndDeviceGroups" , 16 } ,

/*0x1A1*/	{ "NtAddDriverEntry" , 2 } ,

/*0x1A2*/	{ "NtAddBootEntry" , 2 } ,

/*0x1A3*/	{ "NtAddAtom" , 3 } ,

/*0x1A4*/	{ "NtAddAtomEx" , 4 } ,

/*0x1A5*/	{ "NtAccessCheckByTypeResultListAndAuditAlarmByHandle" , 17 } ,

/*0x1A6*/	{ "NtAccessCheckByTypeResultListAndAuditAlarm" , 16 } ,

/*0x1A7*/	{ "NtAccessCheckByTypeResultList" , 11 } ,

/*0x1A8*/	{ "NtAccessCheckByTypeAndAuditAlarm" , 16 } ,

/*0x1A9*/	{ "NtAccessCheckByType" , 11 } ,

/*0x1AA*/	{ "NtAccessCheckAndAuditAlarm" , 11 } ,

/*0x1AB*/	{ "NtAccessCheck" , 8 } ,

/*0x1AC*/	{ "NtAcceptConnectPort" , 6 }

};

