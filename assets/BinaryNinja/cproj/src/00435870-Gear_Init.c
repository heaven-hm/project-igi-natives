#include "gi_platform.h"
#include "00435870-Gear_Init.h"
void* Gear_Init()

{
    int32_t v_4 = 0;
    int16_t valA1 = TaskType_Register("Gear", 0x140, MagicObj_GetTypeId(), 0);
    g_57bd64 = valA1;
    QTask_RemoveEventCallback(valA1, 0, sub_435460);
    QTask_TriggerEvent(g_57bd64, 1, sub_435930);
    QTask_TriggerEvent(g_57bd64, 2, sub_51b940);
    int32_t valA3 = MagicObj_GetEventId();
    QTask_RemoveEventCallback(g_57bd64, valA3, Gear_LoadParameters);
    int32_t valA4 = DynObj_RemoveSymbol_5();
    int32_t v_8_1 = valA4;
    valA4 = g_57bd64;
    QTask_RemoveEventCallback(valA4, v_8_1, Gear_Setup);
    int32_t valA5 = DynObj_RegisterSymbol_6();
    QTask_RemoveEventCallback(g_57bd64, valA5, sub_4eff20);
    return TaskType_Set("TASKTYPE_GEAR", *g_57bd64);
}
