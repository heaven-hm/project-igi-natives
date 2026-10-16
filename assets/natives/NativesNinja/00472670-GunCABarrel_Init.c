#include "00472670-GunCABarrel_Init.h"
/* 0x00472670 GunCABarrel_Init full linked: callers=1 callees=24 */
void* sub_472670()

{
    int32_t var_4_1 = 0;
    int16_t eax_1 = TaskType_Register("GunCABarrel", 0x138, MagicObj_GetTypeId(), 0);
    g_5402fe = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_4727f0);
    QTask_TriggerEvent(g_5402fe, 1, sub_4d3710);
    QTask_TriggerEvent(g_5402fe, 2, sub_4d3710);
    int32_t eax_3 = sub_4c56f0();
    QTask_RemoveEventCallback(g_5402fe, eax_3, sub_472880);
    int32_t eax_4 = sub_460c10();
    int32_t var_8_1 = eax_4;
    eax_4 = g_5402fe;
    QTask_RemoveEventCallback(eax_4, var_8_1, sub_472930);
    int32_t eax_5 = Level_StartMission_2();
    QTask_RemoveEventCallback(g_5402fe, eax_5, sub_45e3d0);
    int32_t var_4 = 0;
    int16_t eax_7 = TaskType_Register("GunCAClip", 0x138, MagicObj_GetTypeId(), 0);
    g_5402fc = eax_7;
    QTask_RemoveEventCallback(eax_7, 0, sub_4727f0);
    QTask_TriggerEvent(g_5402fc, 1, sub_4d3710);
    QTask_TriggerEvent(g_5402fc, 2, sub_4d3710);
    int32_t eax_9 = sub_4c56f0();
    QTask_RemoveEventCallback(g_5402fc, eax_9, sub_477b10);
    int32_t eax_10 = sub_460c10();
    QTask_RemoveEventCallback(g_5402fc, eax_10, sub_4d3710);
    int32_t eax_11 = Level_StartMission_2();
    int32_t var_8_5 = eax_11;
    eax_11 = g_5402fc;
    QTask_RemoveEventCallback(eax_11, var_8_5, sub_45e3d0);
    TaskType_Set("TASKTYPE_CACLIP", *g_5402fc);
    int32_t edx_3 = 0;
    edx_3 = g_5402fe;
    return TaskType_Set("TASKTYPE_CABARREL", edx_3);
}
