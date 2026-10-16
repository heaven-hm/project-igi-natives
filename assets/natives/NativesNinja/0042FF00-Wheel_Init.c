#include "0042FF00-Wheel_Init.h"
/* 0x0042ff00 Wheel_Init full linked: callers=1 callees=16 */
void* Wheel_Init()

{
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("Wheel", 0x158, MagicObj_GetTypeId(), 0);
    g_57bd30 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, Wheel_LoadParameters);
    QTask_TriggerEvent(g_57bd30, 1, Wheel_Tick);
    QTask_TriggerEvent(g_57bd30, 2, Wheel_Process);
    int32_t eax_3 = MagicObj_GetEventId();
    QTask_RemoveEventCallback(g_57bd30, eax_3, Wheel_Update);
    int32_t eax_4 = Level_LoadLevel_3();
    int32_t var_8_1 = eax_4;
    eax_4 = g_57bd30;
    QTask_RemoveEventCallback(eax_4, var_8_1, sub_4d3710);
    int32_t eax_5 = Level_InitTextures_3();
    QTask_RemoveEventCallback(g_57bd30, eax_5, sub_4d3710);
    int32_t eax_6 = sub_4ee100();
    QTask_RemoveEventCallback(g_57bd30, eax_6, PhysicsObj_Setup);
    int32_t eax_7 = sub_489610();
    int32_t var_8_4 = eax_7;
    eax_7 = g_57bd30;
    QTask_RemoveEventCallback(eax_7, var_8_4, sub_426d30);
    return TaskType_Set("TASKTYPE_WHEEL", *g_57bd30);
}
