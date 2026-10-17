// Original IGI.EXE function: HeliWheel_Init (VA 0x00426D90; static CFG gate PASS, CFG score 1.000).
#include "HeliWheel_Init.h"
void* HeliWheel_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("HeliWheel", 0x140, MagicObj_GetTypeId(), 0);
    g_57bc7c = data_1;
    QTask_RemoveEventCallback(data_1, 0, HeliWheel_LoadParameters);
    QTask_TriggerEvent(g_57bc7c, 1, AIGraph_LoadParameters);
    QTask_TriggerEvent(g_57bc7c, 2, sub_426860);
    int32_t data_3 = MagicObj_GetEventId();
    QTask_RemoveEventCallback(g_57bc7c, data_3, HeliWheel_Process);
    int32_t data_4 = Level_LoadLevel_3();
    int32_t item_8_1 = data_4;
    data_4 = g_57bc7c;
    QTask_RemoveEventCallback(data_4, item_8_1, AIGraph_LoadParameters);
    int32_t data_5 = Level_InitTextures_3();
    QTask_RemoveEventCallback(g_57bc7c, data_5, AIGraph_LoadParameters);
    int32_t data_6 = DynObj_RemoveSymbol_5();
    QTask_RemoveEventCallback(g_57bc7c, data_6, sub_427240);
    int32_t data_7 = DynObj_RegisterSymbol_6();
    int32_t item_8_4 = data_7;
    data_7 = g_57bc7c;
    QTask_RemoveEventCallback(data_7, item_8_4, sub_427f80);
    return TaskType_Set("TASKTYPE_HELIWHEEL", *g_57bc7c);
}
