#include "0043EFF0-Wire_Init.h"
/* 0x0043eff0 Wire_Init full linked: callers=1 callees=33 */
int32_t* Wire_Init()

{
    int32_t var_13c = 0;
    int16_t eax_1 = TaskType_Register("Wire", 0x138, sub_4c48c0(), 0);
    g_57c144 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, Wire_LoadParameters);
    QTask_TriggerEvent(g_57c144, 1, sub_43f340);
    QTask_TriggerEvent(g_57c144, 2, Wire_Setup);
    int32_t eax_3 = sub_4f1a60();
    QTask_RemoveEventCallback(g_57c144, eax_3, sub_43f3c0);
    int32_t eax_4 = sub_4f1a70();
    int32_t var_140_1 = eax_4;
    eax_4 = g_57c144;
    QTask_RemoveEventCallback(eax_4, var_140_1, Wire_Process);
    int32_t eax_5 = Level_InitTextures_2();
    QTask_RemoveEventCallback(g_57c144, eax_5, sub_43f560);
    int32_t eax_6 = Level_CheckQTaskID_2();
    QTask_RemoveEventCallback(g_57c144, eax_6, sub_43f6c0);
    int32_t eax_7 = Level_InitSprites_2();
    int32_t var_140_4 = eax_7;
    eax_7 = g_57c144;
    QTask_RemoveEventCallback(eax_7, var_140_4, sub_43f6d0);
    int32_t eax_8 = Level_SetMission_2();
    QTask_RemoveEventCallback(g_57c144, eax_8, sub_43f6e0);
    int32_t eax_9 = Level_LoadObjects_4();
    QTask_RemoveEventCallback(g_57c144, eax_9, sub_45e3d0);
    int32_t eax_10 = sub_4f1210();
    int32_t var_140_7 = eax_10;
    eax_10 = g_57c144;
    QTask_TriggerEvent(eax_10, var_140_7, sub_43f700);
    int32_t eax_11 = sub_4f1220();
    QTask_TriggerEvent(g_57c144, eax_11, sub_43f780);
    QTask_RemoveEventCallback(g_57c144, 8, 0);
    int32_t eax_12 = sub_47e6f0();
    int32_t var_140_9 = eax_12;
    eax_12 = g_57c144;
    QTask_RemoveEventCallback(eax_12, var_140_9, 0);
    g_57c148 = sub_4f1950(3);
    int32_t eax_14 = sub_4f1010();
    void var_138;
    void var_48;
    sub_4f1a80(g_57c148, &var_138, &var_48, eax_14, 7, 0);
    int32_t eax_16 = sub_4f1010();
    void var_30;
    sub_4f1a80(g_57c148, &var_138, &var_30, eax_16, 7, 0);
    int32_t eax_18 = sub_4f0fd0();
    void var_18;
    return sub_4f1a80(g_57c148, &var_138, &var_18, eax_18, 7, 0);
}
