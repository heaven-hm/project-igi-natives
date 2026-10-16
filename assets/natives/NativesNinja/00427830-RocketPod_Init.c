#include "00427830-RocketPod_Init.h"
/* 0x00427830 RocketPod_Init full linked: callers=1 callees=18 */
void* RocketPod_Init()

{
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("RocketPod", 0x140, MagicObj_GetTypeId(), 0);
    g_53bb3c = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, RocketPod_LoadParameters);
    QTask_TriggerEvent(g_53bb3c, 1, RocketPod_Setup);
    QTask_TriggerEvent(g_53bb3c, 2, sub_426860);
    int32_t eax_3 = MagicObj_GetEventId();
    QTask_RemoveEventCallback(g_53bb3c, eax_3, HeliWheel_Process);
    int32_t eax_4 = Level_LoadLevel_3();
    int32_t var_8_1 = eax_4;
    eax_4 = g_53bb3c;
    QTask_RemoveEventCallback(eax_4, var_8_1, sub_42d9b0);
    int32_t eax_5 = Level_InitTextures_3();
    QTask_RemoveEventCallback(g_53bb3c, eax_5, 0);
    int32_t eax_6 = sub_4c56d0();
    QTask_RemoveEventCallback(g_53bb3c, eax_6, sub_427d40);
    int32_t eax_7 = sub_4c56e0();
    int32_t var_8_4 = eax_7;
    eax_7 = g_53bb3c;
    QTask_RemoveEventCallback(eax_7, var_8_4, sub_427d70);
    int32_t eax_8 = sub_489610();
    QTask_RemoveEventCallback(g_53bb3c, eax_8, sub_426d30);
    return TaskType_Set("TASKTYPE_ROCKETPOD", *g_53bb3c);
}
