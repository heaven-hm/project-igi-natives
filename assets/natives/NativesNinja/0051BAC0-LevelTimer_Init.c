#include "0051BAC0-LevelTimer_Init.h"
/* 0x0051bac0 LevelTimer_Init full linked: callers=1 callees=25 */
void* sub_51bac0()

{
    int32_t var_114 = 0;
    int16_t eax_1 = TaskType_Register("LevelTimer", 0x110, sub_5034d0(), 0);
    g_a83774 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_51bc60);
    QTask_TriggerEvent(g_a83774, 1, sub_51be10);
    QTask_TriggerEvent(g_a83774, 2, sub_51bdb0);
    int32_t eax_3 = sub_4f1a60();
    QTask_RemoveEventCallback(g_a83774, eax_3, sub_51be00);
    int32_t eax_4 = sub_4f1a70();
    int32_t var_118_1 = eax_4;
    eax_4 = g_a83774;
    QTask_RemoveEventCallback(eax_4, var_118_1, sub_51bee0);
    int32_t eax_5 = sub_4f1210();
    QTask_TriggerEvent(g_a83774, eax_5, sub_51bcc0);
    int32_t eax_6 = sub_4f1220();
    QTask_TriggerEvent(g_a83774, eax_6, sub_51bd40);
    g_a83778 = sub_4f1950(5);
    int32_t eax_8 = sub_4f1010();
    void var_110;
    void var_f0;
    sub_4f1a80(g_a83778, &var_110, &var_f0, eax_8, 7, 0);
    int32_t eax_9 = sub_4f0f70();
    void var_d8;
    sub_4f1a80(g_a83778, &var_110, &var_d8, eax_9, 7, 0);
    int32_t eax_10 = sub_4f0fc0();
    void var_a4;
    sub_4f1a80(g_a83778, &var_110, &var_a4, eax_10, 7, 0);
    int32_t eax_11 = sub_4f0fc0();
    void var_54;
    sub_4f1a80(g_a83778, &var_110, &var_54, eax_11, 7, 0);
    int32_t eax_12 = sub_4f1000();
    void var_b0;
    sub_4f1a80(g_a83778, &var_110, &var_b0, eax_12, 7, 0);
    return TaskType_Set("TASKTYPE_LEVELTIMER", *g_a83774);
}
