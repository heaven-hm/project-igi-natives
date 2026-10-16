#include "00473ED0-StationaryGun_Init.h"
/* 0x00473ed0 StationaryGun_Init full linked: callers=1 callees=41 */
int32_t* sub_473ed0()

{
    int32_t var_224 = 0;
    int16_t eax_1 = TaskType_Register("StationaryGun", 0x220, sub_4c48c0(), 0);
    g_5be388 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_473d30);
    QTask_TriggerEvent(g_5be388, 1, sub_474190);
    QTask_TriggerEvent(g_5be388, 2, sub_474960);
    int32_t eax_3 = sub_4f1a70();
    QTask_RemoveEventCallback(g_5be388, eax_3, sub_474980);
    int32_t eax_4 = Level_InitTextures_2();
    int32_t var_228_1 = eax_4;
    eax_4 = g_5be388;
    QTask_RemoveEventCallback(eax_4, var_228_1, sub_474e30);
    int32_t eax_5 = Level_CheckQTaskID_2();
    QTask_RemoveEventCallback(g_5be388, eax_5, sub_474ed0);
    int32_t eax_6 = Level_InitSprites_2();
    QTask_RemoveEventCallback(g_5be388, eax_6, sub_474ee0);
    int32_t eax_7 = Level_SetMission_2();
    int32_t var_228_4 = eax_7;
    eax_7 = g_5be388;
    QTask_RemoveEventCallback(eax_7, var_228_4, sub_474f10);
    int32_t eax_8 = Level_SetMission_3();
    QTask_RemoveEventCallback(g_5be388, eax_8, sub_474f30);
    int32_t eax_9 = sub_4f1a60();
    QTask_RemoveEventCallback(g_5be388, eax_9, sub_474f50);
    int32_t eax_10 = sub_4c5800();
    int32_t var_228_7 = eax_10;
    eax_10 = g_5be388;
    QTask_RemoveEventCallback(eax_10, var_228_7, sub_474f60);
    QTask_RemoveEventCallback(g_5be388, 6, sub_4d3710);
    int32_t eax_11 = sub_489610();
    QTask_RemoveEventCallback(g_5be388, eax_11, sub_4752b0);
    g_5be380 = 0;
    g_5be384 = 0x186a0;
    g_5be38c = sub_4f1950(8);
    int32_t eax_13 = sub_4f1010();
    void var_220;
    void var_130;
    sub_4f1a80(g_5be38c, &var_220, &var_130, eax_13, 7, 0);
    int32_t eax_14 = sub_4f0f70();
    void var_118;
    sub_4f1a80(g_5be38c, &var_220, &var_118, eax_14, 7, 0);
    int32_t eax_15 = sub_4f0fd0();
    void var_70;
    sub_4f1a80(g_5be38c, &var_220, &var_70, eax_15, 7, 0);
    int32_t eax_16 = sub_4f0fe0();
    void var_60;
    sub_4f1a80(g_5be38c, &var_220, &var_60, eax_16, 7, 0);
    int32_t eax_17 = sub_4f0f30();
    void var_40;
    sub_4f1a80(g_5be38c, &var_220, &var_40, eax_17, 7, 0);
    int32_t eax_18 = sub_4f0f30();
    void var_3c;
    sub_4f1a80(g_5be38c, &var_220, &var_3c, eax_18, 7, 0);
    int32_t eax_19 = sub_4f0f30();
    void var_38;
    sub_4f1a80(g_5be38c, &var_220, &var_38, eax_19, 7, 0);
    int32_t eax_20 = sub_4f0fa0();
    void var_34;
    return sub_4f1a80(g_5be38c, &var_220, &var_34, eax_20, 7, &g_5be380);
}
