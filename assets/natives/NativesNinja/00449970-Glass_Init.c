#include "00449970-Glass_Init.h"
/* 0x00449970 Glass_Init full linked: callers=1 callees=18 */
void* sub_449970()

{
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("Glass", 0x148, MagicObj_GetTypeId(), 0);
    g_57c220 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_4497f0);
    QTask_TriggerEvent(g_57c220, 1, sub_449a80);
    QTask_TriggerEvent(g_57c220, 2, sub_449950);
    int32_t eax_3 = sub_4c56d0();
    QTask_RemoveEventCallback(g_57c220, eax_3, sub_4d3710);
    int32_t eax_4 = sub_4c56e0();
    int32_t var_8_1 = eax_4;
    eax_4 = g_57c220;
    QTask_RemoveEventCallback(eax_4, var_8_1, sub_427d70);
    int32_t eax_5 = Level_LoadLevel_3();
    QTask_RemoveEventCallback(g_57c220, eax_5, sub_449b00);
    int32_t eax_6 = Level_InitTextures_3();
    QTask_RemoveEventCallback(g_57c220, eax_6, sub_449ba0);
    int32_t eax_7 = sub_4fc860();
    int32_t var_8_4 = eax_7;
    eax_7 = g_57c220;
    QTask_RemoveEventCallback(eax_7, var_8_4, sub_449cb0);
    int32_t eax_8 = sub_489610();
    QTask_RemoveEventCallback(g_57c220, eax_8, sub_45f920);
    return TaskType_Set("TASKTYPE_GLASS", *g_57c220);
}
