#include "0043F900-Fence_Init.h"
/* 0x0043f900 Fence_Init full linked: callers=1 callees=29 */
void* sub_43f900()

{
    int32_t var_17c = 0;
    int16_t eax_1 = TaskType_Register("Fence", 0x178, sub_4c48c0(), 0);
    g_57c154 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_43fae0);
    QTask_TriggerEvent(g_57c154, 1, sub_43fc30);
    QTask_TriggerEvent(g_57c154, 2, sub_43fe50);
    int32_t eax_3 = sub_4f1a60();
    QTask_RemoveEventCallback(g_57c154, eax_3, sub_43fe90);
    int32_t eax_4 = sub_4f1a70();
    int32_t var_180_1 = eax_4;
    eax_4 = g_57c154;
    QTask_RemoveEventCallback(eax_4, var_180_1, sub_43fea0);
    int32_t eax_5 = Level_LoadLevel_2();
    QTask_RemoveEventCallback(g_57c154, eax_5, sub_43ff70);
    int32_t eax_6 = Level_InitTextures_2();
    QTask_RemoveEventCallback(g_57c154, eax_6, sub_4400c0);
    int32_t eax_7 = Level_CheckQTaskID_2();
    int32_t var_180_4 = eax_7;
    eax_7 = g_57c154;
    QTask_RemoveEventCallback(eax_7, var_180_4, sub_4ef8b0);
    int32_t eax_8 = Level_InitSprites_2();
    QTask_RemoveEventCallback(g_57c154, eax_8, sub_4d3710);
    int32_t eax_9 = Level_SetMission_2();
    QTask_RemoveEventCallback(g_57c154, eax_9, sub_440230);
    g_57c150 = sub_4f1950(4);
    int32_t eax_11 = sub_4f1010();
    void var_178;
    void var_88;
    sub_4f1a80(g_57c150, &var_178, &var_88, eax_11, 7, 0);
    int32_t eax_12 = sub_4f0f20();
    void var_70;
    sub_4f1a80(g_57c150, &var_178, &var_70, eax_12, 7, 0);
    int32_t eax_13 = sub_4f0fd0();
    void var_6c;
    sub_4f1a80(g_57c150, &var_178, &var_6c, eax_13, 7, 0);
    int32_t eax_14 = sub_4f0fc0();
    void var_58;
    sub_4f1a80(g_57c150, &var_178, &var_58, eax_14, 7, 0);
    return TaskType_Set("TASKTYPE_FENCE", *g_57c154);
}
