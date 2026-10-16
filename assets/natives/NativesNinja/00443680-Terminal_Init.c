#include "00443680-Terminal_Init.h"
/* 0x00443680 Terminal_Init full linked: callers=1 callees=29 */
int32_t* sub_443680()

{
    int32_t var_2a4 = 0;
    int16_t eax_1 = TaskType_Register("Terminal", 0x2a0, sub_481340(), 0);
    g_53c680 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_443840);
    QTask_TriggerEvent(g_53c680, 1, sub_4438e0);
    QTask_TriggerEvent(g_53c680, 2, sub_443990);
    int32_t eax_3 = sub_4f1a60();
    QTask_RemoveEventCallback(g_53c680, eax_3, sub_443a00);
    int32_t eax_4 = sub_4f1a70();
    int32_t var_2a8_1 = eax_4;
    eax_4 = g_53c680;
    QTask_RemoveEventCallback(eax_4, var_2a8_1, sub_443a10);
    int32_t eax_5 = sub_4f1210();
    QTask_TriggerEvent(g_53c680, eax_5, sub_443a60);
    int32_t eax_6 = sub_4f1220();
    QTask_TriggerEvent(g_53c680, eax_6, sub_443b80);
    int32_t eax_7 = Level_InitTextures_2();
    int32_t var_2a8_4 = eax_7;
    eax_7 = g_53c680;
    QTask_RemoveEventCallback(eax_7, var_2a8_4, sub_443c80);
    int32_t eax_8 = Level_CheckQTaskID_2();
    QTask_RemoveEventCallback(g_53c680, eax_8, sub_443d70);
    int32_t eax_9 = Level_InitSprites_2();
    QTask_RemoveEventCallback(g_53c680, eax_9, sub_443d80);
    int32_t eax_10 = Level_SetMission_2();
    int32_t var_2a8_7 = eax_10;
    eax_10 = g_53c680;
    QTask_RemoveEventCallback(eax_10, var_2a8_7, sub_443da0);
    int32_t eax_11 = sub_467d90();
    QTask_RemoveEventCallback(g_53c680, eax_11, sub_443dc0);
    g_57c1a0 = sub_4f1980(sub_481350(), 2);
    int32_t eax_14 = sub_4f0fc0();
    void var_2a0;
    void var_50;
    sub_4f1a80(g_57c1a0, &var_2a0, &var_50, eax_14, 7, 0);
    int32_t eax_15 = sub_4f0f50();
    void var_54;
    return sub_4f1a80(g_57c1a0, &var_2a0, &var_54, eax_15, 7, 0);
}
