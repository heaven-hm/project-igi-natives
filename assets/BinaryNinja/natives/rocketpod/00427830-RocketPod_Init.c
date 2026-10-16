#include "RocketPod_Init.h"
void* RocketPod_Init()

{
    int32_t v_4 = 0;
    int16_t valA1 = TaskType_Register("RocketPod", 0x140, MagicObj_GetTypeId(), 0);
    g_53bb3c = valA1;
    QTask_RemoveEventCallback(valA1, 0, RocketPod_LoadParameters);
    QTask_TriggerEvent(g_53bb3c, 1, RocketPod_Setup);
    QTask_TriggerEvent(g_53bb3c, 2, sub_426860);
    int32_t valA3 = MagicObj_GetEventId();
    QTask_RemoveEventCallback(g_53bb3c, valA3, HeliWheel_Process);
    int32_t valA4 = Level_LoadLevel_3();
    int32_t v_8_1 = valA4;
    valA4 = g_53bb3c;
    QTask_RemoveEventCallback(valA4, v_8_1, sub_42d9b0);
    int32_t valA5 = Level_InitTextures_3();
    QTask_RemoveEventCallback(g_53bb3c, valA5, 0);
    int32_t valA6 = DynObj_RemoveSymbol_5();
    QTask_RemoveEventCallback(g_53bb3c, valA6, sub_427d40);
    int32_t valA7 = DynObj_RegisterSymbol_6();
    int32_t v_8_4 = valA7;
    valA7 = g_53bb3c;
    QTask_RemoveEventCallback(valA7, v_8_4, sub_427d70);
    int32_t valA8 = FX_TrailUpdate_12();
    QTask_RemoveEventCallback(g_53bb3c, valA8, sub_426d30);
    return TaskType_Set("TASKTYPE_ROCKETPOD", *g_53bb3c);
}
