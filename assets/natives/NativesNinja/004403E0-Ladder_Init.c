#include "004403E0-Ladder_Init.h"
/* 0x004403e0 Ladder_Init full linked: callers=1 callees=15 */
void* sub_4403e0()

{
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("Ladder", 0x140, MagicObj_GetTypeId(), 0);
    g_57c15c = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_440280);
    QTask_TriggerEvent(g_57c15c, 2, sub_4403c0);
    int32_t eax_3 = sub_4f1a70();
    QTask_RemoveEventCallback(g_57c15c, eax_3, sub_4d3710);
    int32_t eax_4 = Level_InitTextures_2();
    QTask_RemoveEventCallback(g_57c15c, eax_4, sub_4404c0);
    int32_t eax_5 = Level_CheckQTaskID_2();
    int32_t var_8_2 = eax_5;
    eax_5 = g_57c15c;
    QTask_RemoveEventCallback(eax_5, var_8_2, sub_4406c0);
    int32_t eax_6 = Level_InitSprites_2();
    QTask_RemoveEventCallback(g_57c15c, eax_6, sub_4d3710);
    int32_t eax_7 = Level_SetMission_2();
    QTask_RemoveEventCallback(g_57c15c, eax_7, sub_4406d0);
    return TaskType_Set("TASKTYPE_LADDER", *g_57c15c);
}
