// Original IGI.EXE function: Wheel_Init (VA 0x0042FF00; static CFG gate PASS, CFG score 1.000).
#include "Wheel_Init.h"
void* Wheel_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("Wheel", 0x158, MagicObj_GetTypeId(), 0);
    g_57bd30 = data_1;
    QTask_RemoveEventCallback(data_1, 0, Wheel_LoadParameters);
    QTask_TriggerEvent(g_57bd30, 1, Wheel_Tick);
    QTask_TriggerEvent(g_57bd30, 2, Wheel_Process);
    int32_t data_3 = MagicObj_GetEventId();
    QTask_RemoveEventCallback(g_57bd30, data_3, Wheel_Update);
    int32_t data_4 = Level_LoadLevel_3();
    int32_t item_8_1 = data_4;
    data_4 = g_57bd30;
    QTask_RemoveEventCallback(data_4, item_8_1, AIGraph_LoadParameters);
    int32_t data_5 = Level_InitTextures_3();
    QTask_RemoveEventCallback(g_57bd30, data_5, AIGraph_LoadParameters);
    int32_t data_6 = SoundSys_SetFrequency_18();
    QTask_RemoveEventCallback(g_57bd30, data_6, PhysicsObj_Setup);
    int32_t data_7 = FX_TrailUpdate_12();
    int32_t item_8_4 = data_7;
    data_7 = g_57bd30;
    QTask_RemoveEventCallback(data_7, item_8_4, sub_426d30);
    return TaskType_Set("TASKTYPE_WHEEL", *g_57bd30);
}
