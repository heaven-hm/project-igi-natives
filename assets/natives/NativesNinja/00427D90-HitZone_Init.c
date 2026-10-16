#include "00427D90-HitZone_Init.h"
/* 0x00427d90 HitZone_Init full linked: callers=1 callees=29 */
void* HitZone_Init()

{
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("HitZone", 0x148, MagicObj_GetTypeId(), 0);
    g_53bb6c = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_427f30);
    QTask_TriggerEvent(g_53bb6c, 1, sub_4d3710);
    QTask_TriggerEvent(g_53bb6c, 2, sub_4d3710);
    int32_t eax_3 = MagicObj_GetEventId();
    QTask_RemoveEventCallback(g_53bb6c, eax_3, sub_4d3710);
    int32_t eax_4 = Level_LoadLevel_3();
    int32_t var_8_1 = eax_4;
    eax_4 = g_53bb6c;
    QTask_RemoveEventCallback(eax_4, var_8_1, 0);
    int32_t eax_5 = Level_InitTextures_3();
    QTask_RemoveEventCallback(g_53bb6c, eax_5, 0);
    int32_t eax_6 = sub_4c56d0();
    QTask_RemoveEventCallback(g_53bb6c, eax_6, sub_427f50);
    int32_t eax_7 = sub_4c56e0();
    int32_t var_8_4 = eax_7;
    eax_7 = g_53bb6c;
    QTask_RemoveEventCallback(eax_7, var_8_4, sub_427f80);
    int32_t eax_8 = sub_4f4860();
    QTask_RemoveEventCallback(g_53bb6c, eax_8, sub_427f90);
    int32_t eax_9 = sub_4d14d0();
    QTask_RemoveEventCallback(g_53bb6c, eax_9, 0);
    QTask_RemoveEventCallback(g_53bb6c, 9, 0);
    QTask_RemoveEventCallback(g_53bb6c, 0xc, sub_45f920);
    int32_t eax_11 = sub_4cea20();
    QTask_RemoveEventCallback(g_53bb6c, eax_11, 0);
    int32_t eax_12 = sub_4cea10();
    int32_t var_8_8 = eax_12;
    eax_12 = g_53bb6c;
    QTask_RemoveEventCallback(eax_12, var_8_8, 0);
    int32_t eax_13 = sub_4c56f0();
    QTask_RemoveEventCallback(g_53bb6c, eax_13, 0);
    QTask_RemoveEventCallback(g_53bb6c, 4, 0);
    return TaskType_Set("TASKTYPE_HITZONE", *g_53bb6c);
}
