#include "00426D90-HeliWheel_Init.h"
/* 0x00426d90 HeliWheel_Init full linked: callers=1 callees=16 */
void* HeliWheel_Init()

{
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("HeliWheel", 0x140, MagicObj_GetTypeId(), 0);
    g_57bc7c = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, HeliWheel_LoadParameters);
    QTask_TriggerEvent(g_57bc7c, 1, sub_4d3710);
    QTask_TriggerEvent(g_57bc7c, 2, sub_426860);
    int32_t eax_3 = MagicObj_GetEventId();
    QTask_RemoveEventCallback(g_57bc7c, eax_3, HeliWheel_Process);
    int32_t eax_4 = Level_LoadLevel_3();
    int32_t var_8_1 = eax_4;
    eax_4 = g_57bc7c;
    QTask_RemoveEventCallback(eax_4, var_8_1, sub_4d3710);
    int32_t eax_5 = Level_InitTextures_3();
    QTask_RemoveEventCallback(g_57bc7c, eax_5, sub_4d3710);
    int32_t eax_6 = sub_4c56d0();
    QTask_RemoveEventCallback(g_57bc7c, eax_6, sub_427240);
    int32_t eax_7 = sub_4c56e0();
    int32_t var_8_4 = eax_7;
    eax_7 = g_57bc7c;
    QTask_RemoveEventCallback(eax_7, var_8_4, sub_427f80);
    return TaskType_Set("TASKTYPE_HELIWHEEL", *g_57bc7c);
}
