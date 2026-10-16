#include "005207A0-Origo_Init.h"
/* 0x005207a0 Origo_Init full linked: callers=1 callees=22 */
int32_t* sub_5207a0()

{
    int32_t var_134 = 0;
    int16_t eax_1 = TaskType_Register("Origo", 0x130, sub_4c48c0(), 0);
    g_a83854 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_520730);
    QTask_RemoveEventCallback(g_a83854, 4, sub_4c1780);
    QTask_RemoveEventCallback(g_a83854, 7, sub_520910);
    QTask_TriggerEvent(g_a83854, 2, sub_5209e0);
    int32_t eax_3 = sub_4f1a60();
    int32_t var_138 = eax_3;
    eax_3 = g_a83854;
    QTask_RemoveEventCallback(eax_3, var_138, sub_520a00);
    int32_t eax_4 = sub_4f1a70();
    QTask_RemoveEventCallback(g_a83854, eax_4, sub_520a10);
    QTask_RemoveEventCallback(g_a83854, 0xa, 0);
    QTask_RemoveEventCallback(g_a83854, 0xb, 0);
    int32_t eax_6 = sub_4d14d0();
    QTask_RemoveEventCallback(g_a83854, eax_6, 0);
    QTask_RemoveEventCallback(g_a83854, 9, 0);
    QTask_RemoveEventCallback(g_a83854, 8, 0);
    QTask_RemoveEventCallback(g_a83854, 0xc, 0);
    int32_t eax_8 = sub_4e5360();
    QTask_RemoveEventCallback(g_a83854, eax_8, sub_52bfe0);
    g_a83850 = sub_4f1950(1);
    int32_t eax_10 = sub_4f1010();
    void var_130;
    void var_38;
    return sub_4f1a80(g_a83850, &var_130, &var_38, eax_10, 7, 0);
}
