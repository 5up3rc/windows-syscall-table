// DO NOT MODIFY THIS FILE DIRECTLY!
// author: @TinySecEx
// ssdt database for 5.2.3790-sp2-windows-2003 i386

SDT_NODE static_ssdt_5_2_3790_sp2_windows_2003_i386[296] = {

/*0x000*/	{ "NtAcceptConnectPort" , 6 } ,

/*0x001*/	{ "NtAccessCheck" , 8 } ,

/*0x002*/	{ "NtAccessCheckAndAuditAlarm" , 11 } ,

/*0x003*/	{ "NtAccessCheckByType" , 11 } ,

/*0x004*/	{ "NtAccessCheckByTypeAndAuditAlarm" , 16 } ,

/*0x005*/	{ "NtAccessCheckByTypeResultList" , 11 } ,

/*0x006*/	{ "NtAccessCheckByTypeResultListAndAuditAlarm" , 16 } ,

/*0x007*/	{ "NtAccessCheckByTypeResultListAndAuditAlarmByHandle" , 17 } ,

/*0x008*/	{ "NtAddAtom" , 3 } ,

/*0x009*/	{ "NtAddBootEntry" , 2 } ,

/*0x00A*/	{ "NtAddDriverEntry" , 2 } ,

/*0x00B*/	{ "NtAdjustGroupsToken" , 6 } ,

/*0x00C*/	{ "NtAdjustPrivilegesToken" , 6 } ,

/*0x00D*/	{ "NtAlertResumeThread" , 2 } ,

/*0x00E*/	{ "NtAlertThread" , 1 } ,

/*0x00F*/	{ "NtAllocateLocallyUniqueId" , 1 } ,

/*0x010*/	{ "NtAllocateUserPhysicalPages" , 3 } ,

/*0x011*/	{ "NtAllocateUuids" , 4 } ,

/*0x012*/	{ "NtAllocateVirtualMemory" , 6 } ,

/*0x013*/	{ "NtApphelpCacheControl" , 2 } ,

/*0x014*/	{ "NtAreMappedFilesTheSame" , 2 } ,

/*0x015*/	{ "NtAssignProcessToJobObject" , 2 } ,

/*0x016*/	{ "NtCallbackReturn" , 3 } ,

/*0x017*/	{ "NtCancelDeviceWakeupRequest" , 1 } ,

/*0x018*/	{ "NtCancelIoFile" , 2 } ,

/*0x019*/	{ "NtCancelTimer" , 2 } ,

/*0x01A*/	{ "NtClearEvent" , 1 } ,

/*0x01B*/	{ "NtClose" , 1 } ,

/*0x01C*/	{ "NtCloseObjectAuditAlarm" , 3 } ,

/*0x01D*/	{ "NtCompactKeys" , 2 } ,

/*0x01E*/	{ "NtCompareTokens" , 3 } ,

/*0x01F*/	{ "NtCompleteConnectPort" , 1 } ,

/*0x020*/	{ "NtCompressKey" , 1 } ,

/*0x021*/	{ "NtConnectPort" , 8 } ,

/*0x022*/	{ "NtContinue" , 2 } ,

/*0x023*/	{ "NtCreateDebugObject" , 4 } ,

/*0x024*/	{ "NtCreateDirectoryObject" , 3 } ,

/*0x025*/	{ "NtCreateEvent" , 5 } ,

/*0x026*/	{ "NtCreateEventPair" , 3 } ,

/*0x027*/	{ "NtCreateFile" , 11 } ,

/*0x028*/	{ "NtCreateIoCompletion" , 4 } ,

/*0x029*/	{ "NtCreateJobObject" , 3 } ,

/*0x02A*/	{ "NtCreateJobSet" , 3 } ,

/*0x02B*/	{ "NtCreateKey" , 7 } ,

/*0x02C*/	{ "NtCreateMailslotFile" , 8 } ,

/*0x02D*/	{ "NtCreateMutant" , 4 } ,

/*0x02E*/	{ "NtCreateNamedPipeFile" , 14 } ,

/*0x02F*/	{ "NtCreatePagingFile" , 4 } ,

/*0x030*/	{ "NtCreatePort" , 5 } ,

/*0x031*/	{ "NtCreateProcess" , 8 } ,

/*0x032*/	{ "NtCreateProcessEx" , 9 } ,

/*0x033*/	{ "NtCreateProfile" , 9 } ,

/*0x034*/	{ "NtCreateSection" , 7 } ,

/*0x035*/	{ "NtCreateSemaphore" , 5 } ,

/*0x036*/	{ "NtCreateSymbolicLinkObject" , 4 } ,

/*0x037*/	{ "NtCreateThread" , 8 } ,

/*0x038*/	{ "NtCreateTimer" , 4 } ,

/*0x039*/	{ "NtCreateToken" , 13 } ,

/*0x03A*/	{ "NtCreateWaitablePort" , 5 } ,

/*0x03B*/	{ "NtDebugActiveProcess" , 2 } ,

/*0x03C*/	{ "NtDebugContinue" , 3 } ,

/*0x03D*/	{ "NtDelayExecution" , 2 } ,

/*0x03E*/	{ "NtDeleteAtom" , 1 } ,

/*0x03F*/	{ "NtDeleteBootEntry" , 1 } ,

/*0x040*/	{ "NtDeleteDriverEntry" , 1 } ,

/*0x041*/	{ "NtDeleteFile" , 1 } ,

/*0x042*/	{ "NtDeleteKey" , 1 } ,

/*0x043*/	{ "NtDeleteObjectAuditAlarm" , 3 } ,

/*0x044*/	{ "NtDeleteValueKey" , 2 } ,

/*0x045*/	{ "NtDeviceIoControlFile" , 10 } ,

/*0x046*/	{ "NtDisplayString" , 1 } ,

/*0x047*/	{ "NtDuplicateObject" , 7 } ,

/*0x048*/	{ "NtDuplicateToken" , 6 } ,

/*0x049*/	{ "NtEnumerateBootEntries" , 2 } ,

/*0x04A*/	{ "NtEnumerateDriverEntries" , 2 } ,

/*0x04B*/	{ "NtEnumerateKey" , 6 } ,

/*0x04C*/	{ "NtEnumerateSystemEnvironmentValuesEx" , 3 } ,

/*0x04D*/	{ "NtEnumerateValueKey" , 6 } ,

/*0x04E*/	{ "NtExtendSection" , 2 } ,

/*0x04F*/	{ "NtFilterToken" , 6 } ,

/*0x050*/	{ "NtFindAtom" , 3 } ,

/*0x051*/	{ "NtFlushBuffersFile" , 2 } ,

/*0x052*/	{ "NtFlushInstructionCache" , 3 } ,

/*0x053*/	{ "NtFlushKey" , 1 } ,

/*0x054*/	{ "NtFlushVirtualMemory" , 4 } ,

/*0x055*/	{ "NtFlushWriteBuffer" , 0 } ,

/*0x056*/	{ "NtFreeUserPhysicalPages" , 3 } ,

/*0x057*/	{ "NtFreeVirtualMemory" , 4 } ,

/*0x058*/	{ "NtFsControlFile" , 10 } ,

/*0x059*/	{ "NtGetContextThread" , 2 } ,

/*0x05A*/	{ "NtGetDevicePowerState" , 2 } ,

/*0x05B*/	{ "NtGetPlugPlayEvent" , 4 } ,

/*0x05C*/	{ "NtGetWriteWatch" , 7 } ,

/*0x05D*/	{ "NtImpersonateAnonymousToken" , 1 } ,

/*0x05E*/	{ "NtImpersonateClientOfPort" , 2 } ,

/*0x05F*/	{ "NtImpersonateThread" , 3 } ,

/*0x060*/	{ "NtInitializeRegistry" , 1 } ,

/*0x061*/	{ "NtInitiatePowerAction" , 4 } ,

/*0x062*/	{ "NtIsProcessInJob" , 2 } ,

/*0x063*/	{ "NtIsSystemResumeAutomatic" , 0 } ,

/*0x064*/	{ "NtListenPort" , 2 } ,

/*0x065*/	{ "NtLoadDriver" , 1 } ,

/*0x066*/	{ "NtLoadKey" , 2 } ,

/*0x067*/	{ "NtLoadKey2" , 3 } ,

/*0x068*/	{ "NtLoadKeyEx" , 4 } ,

/*0x069*/	{ "NtLockFile" , 10 } ,

/*0x06A*/	{ "NtLockProductActivationKeys" , 2 } ,

/*0x06B*/	{ "NtLockRegistryKey" , 1 } ,

/*0x06C*/	{ "NtLockVirtualMemory" , 4 } ,

/*0x06D*/	{ "NtMakePermanentObject" , 1 } ,

/*0x06E*/	{ "NtMakeTemporaryObject" , 1 } ,

/*0x06F*/	{ "NtMapUserPhysicalPages" , 3 } ,

/*0x070*/	{ "NtMapUserPhysicalPagesScatter" , 3 } ,

/*0x071*/	{ "NtMapViewOfSection" , 10 } ,

/*0x072*/	{ "NtModifyBootEntry" , 1 } ,

/*0x073*/	{ "NtModifyDriverEntry" , 1 } ,

/*0x074*/	{ "NtNotifyChangeDirectoryFile" , 9 } ,

/*0x075*/	{ "NtNotifyChangeKey" , 10 } ,

/*0x076*/	{ "NtNotifyChangeMultipleKeys" , 12 } ,

/*0x077*/	{ "NtOpenDirectoryObject" , 3 } ,

/*0x078*/	{ "NtOpenEvent" , 3 } ,

/*0x079*/	{ "NtOpenEventPair" , 3 } ,

/*0x07A*/	{ "NtOpenFile" , 6 } ,

/*0x07B*/	{ "NtOpenIoCompletion" , 3 } ,

/*0x07C*/	{ "NtOpenJobObject" , 3 } ,

/*0x07D*/	{ "NtOpenKey" , 3 } ,

/*0x07E*/	{ "NtOpenMutant" , 3 } ,

/*0x07F*/	{ "NtOpenObjectAuditAlarm" , 12 } ,

/*0x080*/	{ "NtOpenProcess" , 4 } ,

/*0x081*/	{ "NtOpenProcessToken" , 3 } ,

/*0x082*/	{ "NtOpenProcessTokenEx" , 4 } ,

/*0x083*/	{ "NtOpenSection" , 3 } ,

/*0x084*/	{ "NtOpenSemaphore" , 3 } ,

/*0x085*/	{ "NtOpenSymbolicLinkObject" , 3 } ,

/*0x086*/	{ "NtOpenThread" , 4 } ,

/*0x087*/	{ "NtOpenThreadToken" , 4 } ,

/*0x088*/	{ "NtOpenThreadTokenEx" , 5 } ,

/*0x089*/	{ "NtOpenTimer" , 3 } ,

/*0x08A*/	{ "NtPlugPlayControl" , 3 } ,

/*0x08B*/	{ "NtPowerInformation" , 5 } ,

/*0x08C*/	{ "NtPrivilegeCheck" , 3 } ,

/*0x08D*/	{ "NtPrivilegeObjectAuditAlarm" , 6 } ,

/*0x08E*/	{ "NtPrivilegedServiceAuditAlarm" , 5 } ,

/*0x08F*/	{ "NtProtectVirtualMemory" , 5 } ,

/*0x090*/	{ "NtPulseEvent" , 2 } ,

/*0x091*/	{ "NtQueryAttributesFile" , 2 } ,

/*0x092*/	{ "NtQueryBootEntryOrder" , 2 } ,

/*0x093*/	{ "NtQueryBootOptions" , 2 } ,

/*0x094*/	{ "NtQueryDebugFilterState" , 2 } ,

/*0x095*/	{ "NtQueryDefaultLocale" , 2 } ,

/*0x096*/	{ "NtQueryDefaultUILanguage" , 1 } ,

/*0x097*/	{ "NtQueryDirectoryFile" , 11 } ,

/*0x098*/	{ "NtQueryDirectoryObject" , 7 } ,

/*0x099*/	{ "NtQueryDriverEntryOrder" , 2 } ,

/*0x09A*/	{ "NtQueryEaFile" , 9 } ,

/*0x09B*/	{ "NtQueryEvent" , 5 } ,

/*0x09C*/	{ "NtQueryFullAttributesFile" , 2 } ,

/*0x09D*/	{ "NtQueryInformationAtom" , 5 } ,

/*0x09E*/	{ "NtQueryInformationFile" , 5 } ,

/*0x09F*/	{ "NtQueryInformationJobObject" , 5 } ,

/*0x0A0*/	{ "NtQueryInformationPort" , 5 } ,

/*0x0A1*/	{ "NtQueryInformationProcess" , 5 } ,

/*0x0A2*/	{ "NtQueryInformationThread" , 5 } ,

/*0x0A3*/	{ "NtQueryInformationToken" , 5 } ,

/*0x0A4*/	{ "NtQueryInstallUILanguage" , 1 } ,

/*0x0A5*/	{ "NtQueryIntervalProfile" , 2 } ,

/*0x0A6*/	{ "NtQueryIoCompletion" , 5 } ,

/*0x0A7*/	{ "NtQueryKey" , 5 } ,

/*0x0A8*/	{ "NtQueryMultipleValueKey" , 6 } ,

/*0x0A9*/	{ "NtQueryMutant" , 5 } ,

/*0x0AA*/	{ "NtQueryObject" , 5 } ,

/*0x0AB*/	{ "NtQueryOpenSubKeys" , 2 } ,

/*0x0AC*/	{ "NtQueryOpenSubKeysEx" , 4 } ,

/*0x0AD*/	{ "NtQueryPerformanceCounter" , 2 } ,

/*0x0AE*/	{ "NtQueryQuotaInformationFile" , 9 } ,

/*0x0AF*/	{ "NtQuerySection" , 5 } ,

/*0x0B0*/	{ "NtQuerySecurityObject" , 5 } ,

/*0x0B1*/	{ "NtQuerySemaphore" , 5 } ,

/*0x0B2*/	{ "NtQuerySymbolicLinkObject" , 3 } ,

/*0x0B3*/	{ "NtQuerySystemEnvironmentValue" , 4 } ,

/*0x0B4*/	{ "NtQuerySystemEnvironmentValueEx" , 5 } ,

/*0x0B5*/	{ "NtQuerySystemInformation" , 4 } ,

/*0x0B6*/	{ "NtQuerySystemTime" , 1 } ,

/*0x0B7*/	{ "NtQueryTimer" , 5 } ,

/*0x0B8*/	{ "NtQueryTimerResolution" , 3 } ,

/*0x0B9*/	{ "NtQueryValueKey" , 6 } ,

/*0x0BA*/	{ "NtQueryVirtualMemory" , 6 } ,

/*0x0BB*/	{ "NtQueryVolumeInformationFile" , 5 } ,

/*0x0BC*/	{ "NtQueueApcThread" , 5 } ,

/*0x0BD*/	{ "NtRaiseException" , 3 } ,

/*0x0BE*/	{ "NtRaiseHardError" , 6 } ,

/*0x0BF*/	{ "NtReadFile" , 9 } ,

/*0x0C0*/	{ "NtReadFileScatter" , 9 } ,

/*0x0C1*/	{ "NtReadRequestData" , 6 } ,

/*0x0C2*/	{ "NtReadVirtualMemory" , 5 } ,

/*0x0C3*/	{ "NtRegisterThreadTerminatePort" , 1 } ,

/*0x0C4*/	{ "NtReleaseMutant" , 2 } ,

/*0x0C5*/	{ "NtReleaseSemaphore" , 3 } ,

/*0x0C6*/	{ "NtRemoveIoCompletion" , 5 } ,

/*0x0C7*/	{ "NtRemoveProcessDebug" , 2 } ,

/*0x0C8*/	{ "NtRenameKey" , 2 } ,

/*0x0C9*/	{ "NtReplaceKey" , 3 } ,

/*0x0CA*/	{ "NtReplyPort" , 2 } ,

/*0x0CB*/	{ "NtReplyWaitReceivePort" , 4 } ,

/*0x0CC*/	{ "NtReplyWaitReceivePortEx" , 5 } ,

/*0x0CD*/	{ "NtReplyWaitReplyPort" , 2 } ,

/*0x0CE*/	{ "NtRequestDeviceWakeup" , 1 } ,

/*0x0CF*/	{ "NtRequestPort" , 2 } ,

/*0x0D0*/	{ "NtRequestWaitReplyPort" , 3 } ,

/*0x0D1*/	{ "NtRequestWakeupLatency" , 1 } ,

/*0x0D2*/	{ "NtResetEvent" , 2 } ,

/*0x0D3*/	{ "NtResetWriteWatch" , 3 } ,

/*0x0D4*/	{ "NtRestoreKey" , 3 } ,

/*0x0D5*/	{ "NtResumeProcess" , 1 } ,

/*0x0D6*/	{ "NtResumeThread" , 2 } ,

/*0x0D7*/	{ "NtSaveKey" , 2 } ,

/*0x0D8*/	{ "NtSaveKeyEx" , 3 } ,

/*0x0D9*/	{ "NtSaveMergedKeys" , 3 } ,

/*0x0DA*/	{ "NtSecureConnectPort" , 9 } ,

/*0x0DB*/	{ "NtSetBootEntryOrder" , 2 } ,

/*0x0DC*/	{ "NtSetBootOptions" , 2 } ,

/*0x0DD*/	{ "NtSetContextThread" , 2 } ,

/*0x0DE*/	{ "NtSetDebugFilterState" , 3 } ,

/*0x0DF*/	{ "NtSetDefaultHardErrorPort" , 1 } ,

/*0x0E0*/	{ "NtSetDefaultLocale" , 2 } ,

/*0x0E1*/	{ "NtSetDefaultUILanguage" , 1 } ,

/*0x0E2*/	{ "NtSetDriverEntryOrder" , 2 } ,

/*0x0E3*/	{ "NtSetEaFile" , 4 } ,

/*0x0E4*/	{ "NtSetEvent" , 2 } ,

/*0x0E5*/	{ "NtSetEventBoostPriority" , 1 } ,

/*0x0E6*/	{ "NtSetHighEventPair" , 1 } ,

/*0x0E7*/	{ "NtSetHighWaitLowEventPair" , 1 } ,

/*0x0E8*/	{ "NtSetInformationDebugObject" , 5 } ,

/*0x0E9*/	{ "NtSetInformationFile" , 5 } ,

/*0x0EA*/	{ "NtSetInformationJobObject" , 4 } ,

/*0x0EB*/	{ "NtSetInformationKey" , 4 } ,

/*0x0EC*/	{ "NtSetInformationObject" , 4 } ,

/*0x0ED*/	{ "NtSetInformationProcess" , 4 } ,

/*0x0EE*/	{ "NtSetInformationThread" , 4 } ,

/*0x0EF*/	{ "NtSetInformationToken" , 4 } ,

/*0x0F0*/	{ "NtSetIntervalProfile" , 2 } ,

/*0x0F1*/	{ "NtSetIoCompletion" , 5 } ,

/*0x0F2*/	{ "NtSetLdtEntries" , 6 } ,

/*0x0F3*/	{ "NtSetLowEventPair" , 1 } ,

/*0x0F4*/	{ "NtSetLowWaitHighEventPair" , 1 } ,

/*0x0F5*/	{ "NtSetQuotaInformationFile" , 4 } ,

/*0x0F6*/	{ "NtSetSecurityObject" , 3 } ,

/*0x0F7*/	{ "NtSetSystemEnvironmentValue" , 2 } ,

/*0x0F8*/	{ "NtSetSystemEnvironmentValueEx" , 5 } ,

/*0x0F9*/	{ "NtSetSystemInformation" , 3 } ,

/*0x0FA*/	{ "NtSetSystemPowerState" , 3 } ,

/*0x0FB*/	{ "NtSetSystemTime" , 2 } ,

/*0x0FC*/	{ "NtSetThreadExecutionState" , 2 } ,

/*0x0FD*/	{ "NtSetTimer" , 7 } ,

/*0x0FE*/	{ "NtSetTimerResolution" , 3 } ,

/*0x0FF*/	{ "NtSetUuidSeed" , 1 } ,

/*0x100*/	{ "NtSetValueKey" , 6 } ,

/*0x101*/	{ "NtSetVolumeInformationFile" , 5 } ,

/*0x102*/	{ "NtShutdownSystem" , 1 } ,

/*0x103*/	{ "NtSignalAndWaitForSingleObject" , 4 } ,

/*0x104*/	{ "NtStartProfile" , 1 } ,

/*0x105*/	{ "NtStopProfile" , 1 } ,

/*0x106*/	{ "NtSuspendProcess" , 1 } ,

/*0x107*/	{ "NtSuspendThread" , 2 } ,

/*0x108*/	{ "NtSystemDebugControl" , 6 } ,

/*0x109*/	{ "NtTerminateJobObject" , 2 } ,

/*0x10A*/	{ "NtTerminateProcess" , 2 } ,

/*0x10B*/	{ "NtTerminateThread" , 2 } ,

/*0x10C*/	{ "NtTestAlert" , 0 } ,

/*0x10D*/	{ "NtTraceEvent" , 4 } ,

/*0x10E*/	{ "NtTranslateFilePath" , 4 } ,

/*0x10F*/	{ "NtUnloadDriver" , 1 } ,

/*0x110*/	{ "NtUnloadKey" , 1 } ,

/*0x111*/	{ "NtUnloadKey2" , 2 } ,

/*0x112*/	{ "NtUnloadKeyEx" , 2 } ,

/*0x113*/	{ "NtUnlockFile" , 5 } ,

/*0x114*/	{ "NtUnlockVirtualMemory" , 4 } ,

/*0x115*/	{ "NtUnmapViewOfSection" , 2 } ,

/*0x116*/	{ "NtVdmControl" , 2 } ,

/*0x117*/	{ "NtWaitForDebugEvent" , 4 } ,

/*0x118*/	{ "NtWaitForMultipleObjects" , 5 } ,

/*0x119*/	{ "NtWaitForSingleObject" , 3 } ,

/*0x11A*/	{ "NtWaitHighEventPair" , 1 } ,

/*0x11B*/	{ "NtWaitLowEventPair" , 1 } ,

/*0x11C*/	{ "NtWriteFile" , 9 } ,

/*0x11D*/	{ "NtWriteFileGather" , 9 } ,

/*0x11E*/	{ "NtWriteRequestData" , 6 } ,

/*0x11F*/	{ "NtWriteVirtualMemory" , 5 } ,

/*0x120*/	{ "NtYieldExecution" , 0 } ,

/*0x121*/	{ "NtCreateKeyedEvent" , 4 } ,

/*0x122*/	{ "NtOpenKeyedEvent" , 3 } ,

/*0x123*/	{ "NtReleaseKeyedEvent" , 4 } ,

/*0x124*/	{ "NtWaitForKeyedEvent" , 4 } ,

/*0x125*/	{ "NtQueryPortInformationProcess" , 0 } ,

/*0x126*/	{ "NtGetCurrentProcessorNumber" , 0 } ,

/*0x127*/	{ "NtWaitForMultipleObjects32" , 5 }

};

