#include "00443ED0-Cabinet_Init.h"
/* 0x00443ed0 Cabinet_Init full linked: callers=1 callees=40 */
void* sub_443ed0()

{
    int32_t var_13c = 0;
    int16_t eax_1 = TaskType_Register("Cabinet", 0x138, sub_4e0830(), 0);
    g_57c1ac = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_444420);
    QTask_TriggerEvent(g_57c1ac, 1, sub_444590);
    QTask_TriggerEvent(g_57c1ac, 2, sub_444660);
    int32_t eax_3 = sub_4f1a60();
    QTask_RemoveEventCallback(g_57c1ac, eax_3, sub_4446d0);
    int32_t eax_4 = sub_4f1a70();
    int32_t var_140_1 = eax_4;
    eax_4 = g_57c1ac;
    QTask_RemoveEventCallback(eax_4, var_140_1, sub_4446e0);
    int32_t eax_5 = Level_InitTextures_2();
    QTask_RemoveEventCallback(g_57c1ac, eax_5, sub_444860);
    int32_t eax_6 = Level_CheckQTaskID_2();
    QTask_RemoveEventCallback(g_57c1ac, eax_6, sub_427d70);
    int32_t eax_7 = Level_InitSprites_2();
    int32_t var_140_4 = eax_7;
    eax_7 = g_57c1ac;
    QTask_RemoveEventCallback(eax_7, var_140_4, sub_444940);
    int32_t eax_8 = Level_SetMission_2();
    QTask_RemoveEventCallback(g_57c1ac, eax_8, sub_4449a0);
    int32_t eax_9 = Level_LoadLevel_3();
    QTask_RemoveEventCallback(g_57c1ac, eax_9, sub_4d3710);
    int32_t eax_10 = sub_4f1210();
    int32_t var_140_7 = eax_10;
    eax_10 = g_57c1ac;
    QTask_TriggerEvent(eax_10, var_140_7, sub_4449c0);
    int32_t eax_11 = sub_4f1220();
    QTask_TriggerEvent(g_57c1ac, eax_11, sub_444a70);
    int32_t eax_12 = sub_467d90();
    QTask_RemoveEventCallback(g_57c1ac, eax_12, sub_443dc0);
    g_57c1a8 = sub_4f1950(4);
    int32_t eax_14 = sub_4f1010();
    void var_138;
    void var_48;
    sub_4f1a80(g_57c1a8, &var_138, &var_48, eax_14, 7, 0);
    int32_t eax_15 = sub_4f0f20();
    void var_30;
    sub_4f1a80(g_57c1a8, &var_138, &var_30, eax_15, 7, 0);
    int32_t eax_16 = sub_4f0fd0();
    void var_2c;
    sub_4f1a80(g_57c1a8, &var_138, &var_2c, eax_16, 7, 0);
    int32_t eax_17 = sub_4f0f50();
    void var_c;
    sub_4f1a80(g_57c1a8, &var_138, &var_c, eax_17, 7, 0);
    int32_t var_13c_1 = 0;
    int16_t eax_19 = TaskType_Register("Drawer", 0x160, MagicObj_GetTypeId(), 0);
    g_57c1a4 = eax_19;
    QTask_RemoveEventCallback(eax_19, 0, sub_444150);
    QTask_TriggerEvent(g_57c1a4, 1, sub_444260);
    QTask_TriggerEvent(g_57c1a4, 2, sub_426860);
    return TaskType_Set("TASKTYPE_DRAWER", *g_57c1a4);
}
