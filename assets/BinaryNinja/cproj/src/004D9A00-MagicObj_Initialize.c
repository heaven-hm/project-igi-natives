#include "gi_platform.h"
#include "004D9A00-MagicObj_Initialize.h"
void* MagicObj_Initialize()

// Sig: void MagicObj_Initialize(void)
// Note: Initializes the MagicObj task subsystem. The function contains the
// retail strings MagicObj and TASKTYPE_MAGICOBJ, creates the 0x138-byte type,
// allocates its task/event IDs, registers update/delete/render handlers, and
// calls TaskType_Set. Ghidra/r2: exact boundary, 1 basic block, 0 CFG edges,
// cdecl no-argument function.
{
    int32_t v_4 = 0;
    g_548648 = TaskType_Register("MagicObj", 0x138, DynObj_LookupHashItem_5(), 0);
    g_54864a = QTask_UnableToAllocateEvent(0);
    g_54864b = QTask_UnableToAllocateEvent(0);
    QTask_RemoveEventCallback(g_548648, 4, 0);
    int32_t valA4 = DynObj_FindSymbol_6();
    QTask_RemoveEventCallback(g_548648, valA4, sub_4d99e0);
    QTask_TriggerEvent(g_548648, 1, sub_4d9970);
    QTask_RemoveEventCallback(g_548648, 0, sub_4d9b10);
    int32_t valA6 = MagicObj_GetEventId();
    QTask_RemoveEventCallback(g_548648, valA6, MagicObj_ParentTransform);
    QTask_RemoveEventCallback(g_548648, 0xc, sub_504250);
    int32_t valA7 = DynObj_InsertHashItem_6();
    int32_t v_8_2 = valA7;
    valA7 = g_548648;
    QTask_RemoveEventCallback(valA7, v_8_2, AIGraph_LoadParameters);
    QTask_TriggerEvent(g_548648, 2, sub_426860);
    return TaskType_Set("TASKTYPE_MAGICOBJ", *g_548648);
}
