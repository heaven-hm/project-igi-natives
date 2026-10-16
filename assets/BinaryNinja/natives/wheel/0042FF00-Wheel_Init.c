#include "Wheel_Init.h"
void* Wheel_Init()

{
    int32_t v_4 = 0;
    int16_t valA1 = TaskType_Register("Wheel", 0x158, MagicObj_GetTypeId(), 0);
    g_57bd30 = valA1;
    QTask_RemoveEventCallback(valA1, 0, Wheel_LoadParameters);
    QTask_TriggerEvent(g_57bd30, 1, Wheel_Tick);
    QTask_TriggerEvent(g_57bd30, 2, Wheel_Process);
    int32_t valA3 = MagicObj_GetEventId();
    QTask_RemoveEventCallback(g_57bd30, valA3, Wheel_Update);
    int32_t valA4 = Level_LoadLevel_3();
    int32_t v_8_1 = valA4;
    valA4 = g_57bd30;
    QTask_RemoveEventCallback(valA4, v_8_1, AIGraph_LoadParameters);
    int32_t valA5 = Level_InitTextures_3();
    QTask_RemoveEventCallback(g_57bd30, valA5, AIGraph_LoadParameters);
    int32_t valA6 = SoundSys_SetFrequency_18();
    QTask_RemoveEventCallback(g_57bd30, valA6, PhysicsObj_Setup);
    int32_t valA7 = FX_TrailUpdate_12();
    int32_t v_8_4 = valA7;
    valA7 = g_57bd30;
    QTask_RemoveEventCallback(valA7, v_8_4, sub_426d30);
    return TaskType_Set("TASKTYPE_WHEEL", *g_57bd30);
}
