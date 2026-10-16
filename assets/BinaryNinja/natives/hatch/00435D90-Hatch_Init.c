#include "Hatch_Init.h"
void* Hatch_Init()

{
    int32_t v_4 = 0;
    int16_t valA1 = TaskType_Register("Hatch", 0x140, MagicObj_GetTypeId(), 0);
    g_57bd6c = valA1;
    QTask_RemoveEventCallback(valA1, 0, sub_435c50);
    QTask_TriggerEvent(g_57bd6c, 1, sub_435e50);
    QTask_TriggerEvent(g_57bd6c, 2, sub_51b940);
    int32_t valA3 = MagicObj_GetEventId();
    QTask_RemoveEventCallback(g_57bd6c, valA3, Hatch_LoadParameters);
    int32_t valA4 = DynObj_RemoveSymbol_5();
    int32_t v_8_1 = valA4;
    valA4 = g_57bd6c;
    QTask_RemoveEventCallback(valA4, v_8_1, sub_436090);
    int32_t valA5 = DynObj_RegisterSymbol_6();
    QTask_RemoveEventCallback(g_57bd6c, valA5, sub_427d70);
    return TaskType_Set("TASKTYPE_HATCH", *g_57bd6c);
}
