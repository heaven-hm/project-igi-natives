// Original IGI.EXE function: RocketPod_Init (VA 0x00427830; static CFG gate PASS, CFG score 1.000).
#include "RocketPod_Init.h"
void* RocketPod_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("RocketPod", 0x140, MagicObj_GetTypeId(), 0);
    g_53bb3c = data_1;
    QTask_RemoveEventCallback(data_1, 0, RocketPod_LoadParameters);
    QTask_TriggerEvent(g_53bb3c, 1, RocketPod_Setup);
    QTask_TriggerEvent(g_53bb3c, 2, sub_426860);
    int32_t data_3 = MagicObj_GetEventId();
    QTask_RemoveEventCallback(g_53bb3c, data_3, HeliWheel_Process);
    int32_t data_4 = Level_LoadLevel_3();
    int32_t item_8_1 = data_4;
    data_4 = g_53bb3c;
    QTask_RemoveEventCallback(data_4, item_8_1, sub_42d9b0);
    int32_t data_5 = Level_InitTextures_3();
    QTask_RemoveEventCallback(g_53bb3c, data_5, 0);
    int32_t data_6 = DynObj_RemoveSymbol_5();
    QTask_RemoveEventCallback(g_53bb3c, data_6, sub_427d40);
    int32_t data_7 = DynObj_RegisterSymbol_6();
    int32_t item_8_4 = data_7;
    data_7 = g_53bb3c;
    QTask_RemoveEventCallback(data_7, item_8_4, sub_427d70);
    int32_t data_8 = FX_TrailUpdate_12();
    QTask_RemoveEventCallback(g_53bb3c, data_8, sub_426d30);
    return TaskType_Set("TASKTYPE_ROCKETPOD", *g_53bb3c);
}
