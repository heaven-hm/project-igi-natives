#include "0052C0C0-DiscardTerrain_Init.h"
/* 0x0052c0c0 DiscardTerrain_Init full linked: callers=1 callees=28 */
int32_t* sub_52c0c0()

{
    int32_t var_15c = 0;
    int16_t eax_1 = TaskType_Register("DiscardTerrain", 0x158, sub_5034d0(), 0);
    g_a8454c = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_52c000);
    QTask_RemoveEventCallback(g_a8454c, 4, j_sub_4f1160);
    QTask_RemoveEventCallback(g_a8454c, 0xf, sub_52c0b0);
    QTask_RemoveEventCallback(g_a8454c, 7, sub_52c510);
    QTask_TriggerEvent(g_a8454c, 2, sub_426860);
    int32_t eax_4 = sub_4f1a60();
    QTask_RemoveEventCallback(g_a8454c, eax_4, sub_52c500);
    int32_t eax_5 = sub_4f1a70();
    QTask_RemoveEventCallback(g_a8454c, eax_5, sub_52c290);
    int32_t eax_6 = sub_4e5360();
    int32_t var_160_2 = eax_6;
    eax_6 = g_a8454c;
    QTask_RemoveEventCallback(eax_6, var_160_2, sub_52bfe0);
    QTask_RemoveEventCallback(g_a8454c, 0xb, sub_52bf00);
    int32_t eax_7 = sub_4cea20();
    QTask_RemoveEventCallback(g_a8454c, eax_7, sub_52c580);
    int32_t eax_8 = sub_4cea10();
    int32_t var_160_4 = eax_8;
    eax_8 = g_a8454c;
    QTask_RemoveEventCallback(eax_8, var_160_4, sub_52c5a0);
    int32_t eax_9 = sub_4d14d0();
    QTask_RemoveEventCallback(g_a8454c, eax_9, 0);
    QTask_RemoveEventCallback(g_a8454c, 9, 0);
    QTask_RemoveEventCallback(g_a8454c, 8, 0);
    QTask_RemoveEventCallback(g_a8454c, 0xa, 0);
    g_a84550 = sub_4f1950(2);
    int32_t eax_12 = sub_4f1010();
    void var_158;
    void var_68;
    sub_4f1a80(g_a84550, &var_158, &var_68, eax_12, 7, 0);
    int32_t eax_13 = sub_4f0fa0();
    void var_8;
    return sub_4f1a80(g_a84550, &var_158, &var_8, eax_13, 7, 0);
}
