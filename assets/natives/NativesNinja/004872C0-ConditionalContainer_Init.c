#include "004872C0-ConditionalContainer_Init.h"
/* 0x004872c0 ConditionalContainer_Init full linked: callers=1 callees=31 */
int32_t* sub_4872c0()

{
    int32_t var_118 = 0;
    int16_t eax_1 = TaskType_Register("ConditionalContainer", 0x114, sub_505d40(), 0);
    g_5c8a80 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_4874a0);
    QTask_TriggerEvent(g_5c8a80, 1, sub_4874e0);
    QTask_TriggerEvent(g_5c8a80, 2, sub_487730);
    int32_t eax_3 = sub_4c56f0();
    QTask_RemoveEventCallback(g_5c8a80, eax_3, sub_4e0890);
    int32_t eax_4 = sub_4f1a60();
    int32_t var_11c_1 = eax_4;
    eax_4 = g_5c8a80;
    QTask_RemoveEventCallback(eax_4, var_11c_1, sub_487790);
    int32_t eax_5 = sub_4f1a70();
    QTask_RemoveEventCallback(g_5c8a80, eax_5, sub_4877a0);
    int32_t eax_6 = sub_467d90();
    QTask_RemoveEventCallback(g_5c8a80, eax_6, sub_4877d0);
    QTask_TriggerEvent(g_5c8a80, 3, sub_487860);
    int32_t eax_8 = sub_4f1210();
    QTask_TriggerEvent(g_5c8a80, eax_8, sub_487920);
    int32_t eax_9 = sub_4f1220();
    QTask_TriggerEvent(g_5c8a80, eax_9, sub_487980);
    int32_t eax_10 = sub_4c5800();
    int32_t var_11c_6 = eax_10;
    eax_10 = g_5c8a80;
    QTask_RemoveEventCallback(eax_10, var_11c_6, sub_4879e0);
    int32_t eax_11 = sub_4cea20();
    QTask_RemoveEventCallback(g_5c8a80, eax_11, sub_487b20);
    int32_t eax_12 = sub_4cea10();
    QTask_RemoveEventCallback(g_5c8a80, eax_12, sub_487a70);
    g_5c8a7c = sub_4f1950(3);
    int32_t eax_14 = sub_4f0fc0();
    void var_114;
    void var_f4;
    sub_4f1a80(g_5c8a7c, &var_114, &var_f4, eax_14, 7, 0);
    int32_t eax_15 = sub_4f0fc0();
    void var_a4;
    sub_4f1a80(g_5c8a7c, &var_114, &var_a4, eax_15, 7, 0);
    int32_t eax_16 = sub_4f0fc0();
    void var_54;
    return sub_4f1a80(g_5c8a7c, &var_114, &var_54, eax_16, 7, 0);
}
