#include "Rudder_Init.h"
void* Rudder_Init()

{
    int32_t v_4 = 0;
    int16_t valA1 = TaskType_Register("Rudder", 0x140, MagicObj_GetTypeId(), 0);
    g_57bd74 = valA1;
    QTask_RemoveEventCallback(valA1, 0, Rudder_LoadParameters);
    QTask_TriggerEvent(g_57bd74, 1, sub_488700);
    QTask_TriggerEvent(g_57bd74, 2, sub_51b940);
    int32_t valA3 = MagicObj_GetEventId();
    QTask_RemoveEventCallback(g_57bd74, valA3, Rudder_Setup);
    int32_t valA4 = DynObj_RemoveSymbol_5();
    int32_t v_8_1 = valA4;
    valA4 = g_57bd74;
    QTask_RemoveEventCallback(valA4, v_8_1, sub_436740);
    int32_t valA5 = DynObj_RegisterSymbol_6();
    QTask_RemoveEventCallback(g_57bd74, valA5, sub_427f80);
    TaskType_Set("TASKTYPE_RUDDER", *g_57bd74);
    TaskType_Set("RUDDER_TAILERON_LEFT", 1);
    TaskType_Set("RUDDER_TAILERON_RIGHT", 2);
    TaskType_Set("RUDDER_AILERON", 0);
    return TaskType_Set("RUDDER_GAMMA", 3);
}
