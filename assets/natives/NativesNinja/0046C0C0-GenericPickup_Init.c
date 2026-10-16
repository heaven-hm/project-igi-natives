#include "0046C0C0-GenericPickup_Init.h"
/* 0x0046c0c0 GenericPickup_Init full linked: callers=1 callees=32 */
int32_t* sub_46c0c0()

{
    int32_t var_124 = 0;
    int16_t eax_1 = TaskType_Register("GenericPickup", 0x120, sub_4e0830(), 0);
    g_5be2d0 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_46c2b0);
    QTask_TriggerEvent(g_5be2d0, 1, sub_46c3c0);
    QTask_TriggerEvent(g_5be2d0, 2, sub_46c410);
    int32_t eax_3 = sub_4f1a60();
    QTask_RemoveEventCallback(g_5be2d0, eax_3, sub_46c480);
    int32_t eax_4 = sub_4f1a70();
    int32_t var_128_1 = eax_4;
    eax_4 = g_5be2d0;
    QTask_RemoveEventCallback(eax_4, var_128_1, sub_46c490);
    int32_t eax_5 = sub_4f1210();
    QTask_TriggerEvent(g_5be2d0, eax_5, sub_46c570);
    int32_t eax_6 = sub_4f1220();
    QTask_TriggerEvent(g_5be2d0, eax_6, sub_46c5d0);
    int32_t eax_7 = Level_LoadObjects_4();
    int32_t var_128_4 = eax_7;
    eax_7 = g_5be2d0;
    QTask_RemoveEventCallback(eax_7, var_128_4, sub_45f920);
    int32_t eax_8 = Level_CheckQTaskID_3();
    QTask_RemoveEventCallback(g_5be2d0, eax_8, sub_45f920);
    int32_t eax_9 = Level_LoadObjects_3();
    QTask_RemoveEventCallback(g_5be2d0, eax_9, sub_46c630);
    int32_t eax_10 = sub_467d90();
    int32_t var_128_7 = eax_10;
    eax_10 = g_5be2d0;
    QTask_RemoveEventCallback(eax_10, var_128_7, sub_443dc0);
    int32_t eax_11 = sub_4cea20();
    QTask_RemoveEventCallback(g_5be2d0, eax_11, sub_46c8a0);
    int32_t eax_12 = sub_4cea10();
    QTask_RemoveEventCallback(g_5be2d0, eax_12, sub_46c750);
    g_5be2d4 = sub_4f1950(3);
    int32_t eax_14 = sub_4f1010();
    void var_120;
    void var_30;
    sub_4f1a80(g_5be2d4, &var_120, &var_30, eax_14, 7, 0);
    int32_t eax_15 = sub_4f0f70();
    void var_b0;
    sub_4f1a80(g_5be2d4, &var_120, &var_b0, eax_15, 7, 0);
    int32_t eax_16 = sub_4f0fd0();
    void var_18;
    return sub_4f1a80(g_5be2d4, &var_120, &var_18, eax_16, 7, 0);
}
