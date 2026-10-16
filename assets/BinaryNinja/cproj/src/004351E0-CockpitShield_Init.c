#include "gi_platform.h"
#include "004351E0-CockpitShield_Init.h"
void* CockpitShield_Init()

{
    int32_t v_4 = 0;
    int16_t valA1 = TaskType_Register("CockpitShield", 0x140, MagicObj_GetTypeId(), 0);
    g_57bd5c = valA1;
    QTask_RemoveEventCallback(valA1, 0, sub_434e10);
    QTask_TriggerEvent(g_57bd5c, 1, sub_4352a0);
    QTask_TriggerEvent(g_57bd5c, 2, sub_51b940);
    int32_t valA3 = MagicObj_GetEventId();
    QTask_RemoveEventCallback(g_57bd5c, valA3, CockpitShield_LoadParameters);
    int32_t valA4 = DynObj_RemoveSymbol_5();
    int32_t v_8_1 = valA4;
    valA4 = g_57bd5c;
    QTask_RemoveEventCallback(valA4, v_8_1, sub_436090);
    int32_t valA5 = DynObj_RegisterSymbol_6();
    QTask_RemoveEventCallback(g_57bd5c, valA5, sub_427d70);
    return TaskType_Set("TASKTYPE_COCKPITSHIELD", *g_57bd5c);
}
