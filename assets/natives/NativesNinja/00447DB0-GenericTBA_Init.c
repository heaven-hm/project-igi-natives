#include "00447DB0-GenericTBA_Init.h"
/* 0x00447db0 GenericTBA_Init full linked: callers=1 callees=36 */
int32_t* sub_447db0()

{
    g_57c1f0 = 0xa;
    int32_t var_2ac = 0;
    g_57c1f4 = &g_5c8a4c;
    int16_t eax_1 = TaskType_Register("GenericTBA", 0x2a8, sub_481340(), 0);
    g_53c7dc = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_447ff0);
    QTask_TriggerEvent(g_53c7dc, 1, sub_4480b0);
    QTask_TriggerEvent(g_53c7dc, 2, sub_448160);
    int32_t eax_3 = sub_4f1a60();
    QTask_RemoveEventCallback(g_53c7dc, eax_3, sub_4481f0);
    int32_t eax_4 = sub_4f1a70();
    int32_t var_2b0_1 = eax_4;
    eax_4 = g_53c7dc;
    QTask_RemoveEventCallback(eax_4, var_2b0_1, sub_448200);
    int32_t eax_5 = sub_4f1210();
    QTask_TriggerEvent(g_53c7dc, eax_5, sub_4482d0);
    int32_t eax_6 = sub_4f1220();
    QTask_TriggerEvent(g_53c7dc, eax_6, sub_4483f0);
    int32_t eax_7 = Level_InitTextures_2();
    int32_t var_2b0_4 = eax_7;
    eax_7 = g_53c7dc;
    QTask_RemoveEventCallback(eax_7, var_2b0_4, sub_443c80);
    int32_t eax_8 = Level_CheckQTaskID_2();
    QTask_RemoveEventCallback(g_53c7dc, eax_8, sub_51baa0);
    int32_t eax_9 = Level_InitSprites_2();
    QTask_RemoveEventCallback(g_53c7dc, eax_9, sub_4484f0);
    int32_t eax_10 = Level_SetMission_2();
    int32_t var_2b0_7 = eax_10;
    eax_10 = g_53c7dc;
    QTask_RemoveEventCallback(eax_10, var_2b0_7, sub_448510);
    int32_t eax_11 = sub_467d90();
    QTask_RemoveEventCallback(g_53c7dc, eax_11, sub_443dc0);
    g_57c1fc = sub_4f1980(sub_481350(), 5);
    int32_t eax_14 = sub_4f1000();
    void var_2a8;
    void var_70;
    sub_4f1a80(g_57c1fc, &var_2a8, &var_70, eax_14, 7, 0);
    int32_t eax_15 = sub_4f0fc0();
    void var_50;
    sub_4f1a80(g_57c1fc, &var_2a8, &var_50, eax_15, 7, 0);
    int32_t eax_16 = sub_4f0fb0();
    void var_5e;
    sub_4f1a80(g_57c1fc, &var_2a8, &var_5e, eax_16, 7, 0);
    int32_t eax_17 = sub_4f0f50();
    void var_5c;
    sub_4f1a80(g_57c1fc, &var_2a8, &var_5c, eax_17, 7, 0);
    int32_t eax_18 = sub_4f0f00();
    void var_58;
    return sub_4f1a80(g_57c1fc, &var_2a8, &var_58, eax_18, 7, &g_57c1f0);
}
