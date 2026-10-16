#include "0052B3B0-CubeModifier_Init.h"
/* 0x0052b3b0 CubeModifier_Init full linked: callers=1 callees=17 */
int32_t* sub_52b3b0()

{
    int32_t var_180 = 0;
    __builtin_memset(&g_a843ac, 0, 0x190);
    int16_t eax_1 = TaskType_Register("CubeModifier", 0x178, sub_5034d0(), 0);
    g_a843a8 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_52b320);
    QTask_RemoveEventCallback(g_a843a8, 7, sub_52b630);
    QTask_TriggerEvent(g_a843a8, 2, sub_52b4d0);
    int32_t eax_3 = sub_4f1a60();
    QTask_RemoveEventCallback(g_a843a8, eax_3, sub_52b620);
    int32_t eax_4 = sub_4f1a70();
    int32_t var_184_1 = eax_4;
    eax_4 = g_a843a8;
    QTask_RemoveEventCallback(eax_4, var_184_1, sub_52b510);
    g_a843a4 = sub_4f1950(3);
    int32_t eax_6 = sub_4f1010();
    void var_178;
    void var_150;
    sub_4f1a80(g_a843a4, &var_178, &var_150, eax_6, 7, 0);
    int32_t eax_8 = sub_4f0fa0();
    void var_108;
    sub_4f1a80(g_a843a4, &var_178, &var_108, eax_8, 7, 0);
    int32_t eax_10 = sub_4f0ff0();
    void var_104;
    return sub_4f1a80(g_a843a4, &var_178, &var_104, eax_10, 7, 0);
}
