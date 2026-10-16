#include "004D9A00-MagicObj_Initialize.h"
/* 0x004d9a00 MagicObj_Initialize full linked: callers=1 callees=16 */
void* MagicObj_Initialize()

// Sig: void MagicObj_Initialize(void)
// Note: Initializes the MagicObj task subsystem. The function contains the
// retail strings MagicObj and TASKTYPE_MAGICOBJ, creates the 0x138-byte type,
// allocates its task/event IDs, registers update/delete/render handlers, and
// calls TaskType_Set. Ghidra/r2: exact boundary, 1 basic block, 0 CFG edges,
// cdecl no-argument function.
{
    int32_t var_4 = 0;
    g_548648 = TaskType_Register("MagicObj", 0x138, sub_4c48c0(), 0);
    g_54864a = QTask_UnableToAllocateEven(0);
    g_54864b = QTask_UnableToAllocateEven(0);
    QTask_RemoveEventCallback(g_548648, 4, 0);
    int32_t eax_4 = sub_4c56f0();
    QTask_RemoveEventCallback(g_548648, eax_4, sub_4d99e0);
    QTask_TriggerEvent(g_548648, 1, sub_4d9970);
    QTask_RemoveEventCallback(g_548648, 0, sub_4d9b10);
    int32_t eax_6 = MagicObj_GetEventId();
    QTask_RemoveEventCallback(g_548648, eax_6, sub_4d9c30);
    QTask_RemoveEventCallback(g_548648, 0xc, sub_504250);
    int32_t eax_7 = sub_4c5700();
    int32_t var_8_2 = eax_7;
    eax_7 = g_548648;
    QTask_RemoveEventCallback(eax_7, var_8_2, sub_4d3710);
    QTask_TriggerEvent(g_548648, 2, sub_426860);
    return TaskType_Set("TASKTYPE_MAGICOBJ", *g_548648);
}
