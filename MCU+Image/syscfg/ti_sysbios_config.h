/*
 *  ======== ti_sysbios_config.h ========
 *  Configured BIOS module declarations
 *
 *  The macros defined herein are intended for use by applications which
 *  directly include this header. These macros should NOT be hard coded or
 *  copied into library source code.
 *
 *  Symbols declared as const are intended for use with libraries.
 *  Library source code must extern the correct symbol--which is resolved
 *  when the application is linked.
 *
 *  DO NOT EDIT - This file is generated
 *  by the SysConfig tool.
 */
#ifndef ti_sysbios_config_h
#define ti_sysbios_config_h

#include <stdint.h>

/* support C++ sources */
#ifdef __cplusplus
extern "C" {
#endif

/* BIOS module definitions */

#define xdc_runtime_Log_DISABLE_ALL 1

#define BIOS_assertsEnabled_D true
#define BIOS_cpuFrequency_D 80000000
#define BIOS_runtimeCreatesEnabled_D true
#define BIOS_taskEnabled_D true
#define BIOS_swiEnabled_D true
#define BIOS_clockEnabled_D true
#define BIOS_psaEnabled_D false
#define BIOS_heapSize_D 0x1000
#define BIOS_rtsLockType_D BIOS_GateMutex
#define BIOS_numStartUserFuncs_D 0

#define BIOS_RTS_GATE_STRUCT GateMutex_Struct
#define BIOS_RTS_GATE_HANDLE(x) GateMutex_handle(x)
#define BIOS_RTS_GATE_ENTER(x) GateMutex_enter(x)
#define BIOS_RTS_GATE_LEAVE(x,y) GateMutex_leave(x,y)
#define BIOS_RTS_GATE_CONSTRUCT(x,y) GateMutex_construct(x,y)

/* ensure Error and Assert defines come before dependent modules */

/* ti_sysbios_runtime_Error module definitions */
#define Error_policy_D Error_UNWIND
#define Error_raiseHook_D 1
#define Error_printDetails_D 1
#define Error_addFileLine_D 1
#define Error_retainStrings_D 1

/* This header defines macros that rely on the above defines, do not reorder */
#include <ti/sysbios/runtime/Error.h>

#define Error_raiseHookFxn(x)

/* ti_sysbios_runtime_Assert module definitions */

#define Assert_addFileLine_D 1
#define Assert_useBkpt_D 0

/* Settings module definitions */


/* Seconds module definitions */

#define Seconds_generateTimeFunction_D true

/* Hwi module definitions */

#include <ti/sysbios/family/arm/m3/Hwi.h>

#define Hwi_NUM_INTERRUPTS_D 195
#define Hwi_numSparseInterrupts_D 0
#define Hwi_disablePriority_D 0x20
#define Hwi_priGroup_D 0x0
#define Hwi_nvicCCR_D 0x200
#define Hwi_dispatcherAutoNestingSupport_D true
#define Hwi_dispatcherSwiSupport_D true
#define Hwi_dispatcherTaskSupport_D true
#define Hwi_excHandlerFunc_D Hwi_excHandlerMax
#define Hwi_resetVectorAddress_D 0x20004000
#define Hwi_vectorTableAddress_D 0x20000000
#define Hwi_initStackFlag_D true

#define Hwi_resetFunc_D _c_int00
#define Hwi_nmiFunc_D Hwi_excHandlerAsm
#define Hwi_hardFaultFunc_D Hwi_excHandlerAsm
#define Hwi_memFaultFunc_D Hwi_excHandlerAsm
#define Hwi_busFaultFunc_D Hwi_excHandlerAsm
#define Hwi_usageFaultFunc_D Hwi_excHandlerAsm
#define Hwi_svCallFunc_D Hwi_excHandlerAsm
#define Hwi_debugMonFunc_D Hwi_excHandlerAsm
#define Hwi_reservedFunc_D Hwi_excHandlerAsm

#define Hwi_swiDisable_D Swi_disable
#define Hwi_swiRestore_D Swi_restore
#define Hwi_swiRestoreHwi_D Swi_restoreHwi
#define Hwi_taskDisable_D Task_disable
#define Hwi_taskRestoreHwi_D Task_restoreHwi

#define Hwi_nvic (*(volatile Hwi_NVIC *)0xe000e000)


/* HwiHooks module definitions */

#define HwiHooks_numHooks_D 0
#define HwiHooks_array NULL

/* HeapMem module definitions */

#define HeapMem_GateStruct GateMutex_Struct
#define HeapMem_gateConstruct(params) GateMutex_construct(&HeapMem_gate, params)
#define HeapMem_gateEnter() GateMutex_enter(&HeapMem_gate)
#define HeapMem_gateLeave(key) GateMutex_leave(&HeapMem_gate, key)
#define HeapMem_gateCanBlock() GateMutex_canBlock()

/* Clock module definitions */

#define Clock_swiPriority_D 15
#define Clock_tickSource_D Clock_TickSource_TIMER
#define Clock_tickMode_D Clock_TickMode_PERIODIC
#define Clock_tickPeriod_D 1000

/* Idle module definitions */

#define Idle_numFuncs_D 1

/* Semaphore module definitions */

#define Semaphore_supportsPriority_D true
#define Semaphore_supportsEvents_D false
#define Semaphore_eventPost_D NULL
#define Semaphore_eventSync_D NULL

/* Swi module definitions */

#define Swi_taskDisable Task_disable
#define Swi_taskRestore Task_restore

#define Swi_numPriorities_D 16

/* SwiHooks module definitions */
#include <ti/sysbios/knl/Swi.h>

#define SwiHooks_numHooks_D 0
#define SwiHooks_array NULL

/* Task module definitions */

#define Task_allBlockedFunc_D NULL
#define Task_numPriorities_D 16
#define Task_defaultStackSize_D 1024
#define Task_idleTaskStackSize_D 1024
#define Task_idleTaskVitalTaskFlag_D true
#define Task_initStackFlag_D true
#define Task_checkStackFlag_D true
#define Task_deleteTerminatedTasks_D false
#define Task_numVitalTasks_D 0
#define Task_minimizeLatency_D false
#define Task_enableIdleTask_D true

/* TaskHooks module definitions */
#include <ti/sysbios/knl/Task.h>

#define TaskHooks_numHooks_D 0
#define TaskHooks_array NULL

/* MemAlloc module definitions */

#define MemAlloc_generateFunctions_D true

/* Startup module definitions */

/* Startup functions */

/* SysMin module definitions */

#define SysMin_bufSize_D 1024
#define SysMin_outputFunc_D SysMin_output
#define SysMin_flushAtExit_D true

/* System module definitions */

#define System_maxAtexitHandlers_D 8
#define System_abortFxn_D System_abortStd
#define System_exitFxn_D System_exitStd
#define System_supportPercentF_D 0

#ifdef __cplusplus
}
#endif

#endif /* include guard */