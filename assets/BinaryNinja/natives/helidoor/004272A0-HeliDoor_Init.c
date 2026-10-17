// Original IGI.EXE function: HeliDoor_Init (VA 0x004272A0; static CFG gate PASS, CFG score 1.000).
#include "HeliDoor_Init.h"
void* HeliDoor_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("HeliDoor", 0x148, MagicObj_GetTypeId(), 0);
    g_53bb18 = data_1;
    QTask_RemoveEventCallback(data_1, 0, CarDoor_LoadParameters);
    QTask_TriggerEvent(g_53bb18, 1, sub_4273b0);
    QTask_TriggerEvent(g_53bb18, 2, sub_426860);
    int32_t data_3 = MagicObj_GetEventId();
    QTask_RemoveEventCallback(g_53bb18, data_3, HeliDoor_Setup);
    int32_t data_4 = Level_LoadLevel_3();
    int32_t item_8_1 = data_4;
    data_4 = g_53bb18;
    QTask_RemoveEventCallback(data_4, item_8_1, sub_42d9b0);
    int32_t data_5 = Level_InitTextures_3();
    QTask_RemoveEventCallback(g_53bb18, data_5, 0);
    int32_t data_6 = DynObj_RemoveSymbol_5();
    QTask_RemoveEventCallback(g_53bb18, data_6, sub_4277c0);
    int32_t data_7 = DynObj_RegisterSymbol_6();
    int32_t item_8_4 = data_7;
    data_7 = g_53bb18;
    QTask_RemoveEventCallback(data_7, item_8_4, sub_51baa0);
    int32_t data_8 = FX_TrailUpdate_12();
    QTask_RemoveEventCallback(g_53bb18, data_8, sub_426d30);
    return TaskType_Set("TASKTYPE_HELIDOOR", *g_53bb18);
}
