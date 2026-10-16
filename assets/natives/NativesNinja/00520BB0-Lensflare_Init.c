#include "00520BB0-Lensflare_Init.h"
/* 0x00520bb0 Lensflare_Init full linked: callers=1 callees=37 */
int32_t sub_520bb0()

{
    int32_t var_e0 = 0;
    g_a83894 = TaskType_Register("Lensflare", 0x98, QTask_OpenEvent_2(), 0);
    int32_t var_e0_1 = 0;
    g_a83968 = TaskType_Register("LensflareItem", 0x40, QTask_OpenEvent_2(), 0);
    QTask_RemoveEventCallback(g_a83894, 0, sub_520ec0);
    QTask_TriggerEvent(g_a83894, 2, sub_520f20);
    int32_t eax_4 = sub_4f1a60();
    QTask_RemoveEventCallback(g_a83894, eax_4, sub_520f40);
    int32_t eax_5 = sub_4f1a70();
    int32_t var_e4_1 = eax_5;
    eax_5 = g_a83894;
    QTask_RemoveEventCallback(eax_5, var_e4_1, sub_520f50);
    QTask_RemoveEventCallback(g_a83894, 4, sub_4d3710);
    QTask_RemoveEventCallback(g_a83968, 0, sub_520e40);
    QTask_TriggerEvent(g_a83968, 2, sub_4d3710);
    int32_t eax_7 = sub_4f1a60();
    QTask_RemoveEventCallback(g_a83968, eax_7, sub_520e70);
    int32_t eax_8 = sub_4f1a70();
    QTask_RemoveEventCallback(g_a83968, eax_8, sub_520e80);
    g_a8389c = sub_4f1950(3);
    g_a83970 = sub_4f1950(4);
    g_a83898 = sub_4f19c0("RangeReal32", sub_4f0f50());
    int32_t eax_13 = sub_4f0f60();
    void var_98;
    void var_2c;
    sub_4f1a80(g_a8389c, &var_98, &var_2c, eax_13, 7, 0);
    int32_t eax_14 = sub_4f0f40();
    void var_20;
    sub_4f1a80(g_a8389c, &var_98, &var_20, eax_14, 7, 0);
    int32_t eax_15 = sub_4f0fa0();
    void var_14;
    sub_4f1a80(g_a8389c, &var_98, &var_14, eax_15, 7, 0);
    int32_t eax_16 = sub_4f0f40();
    void var_d8;
    void var_ac;
    sub_4f1a80(g_a83970, &var_d8, &var_ac, eax_16, 7, 0);
    void var_b0;
    sub_4f1a80(g_a83970, &var_d8, &var_b0, g_a83898, 7, 0);
    int32_t eax_19 = sub_4f0f50();
    void var_b4;
    sub_4f1a80(g_a83970, &var_d8, &var_b4, eax_19, 7, 0);
    int32_t eax_21 = sub_4f0fa0();
    void var_9c;
    sub_4f1a80(g_a83970, &var_d8, &var_9c, eax_21, 7, 0);
    sub_4b4720(0xa83888);
    __builtin_memset(&g_ba1e20, 0, 0x28);

    for (int32_t* i = &g_a838b0; i < &g_a83978; i = &i[5])
    {
        i[-2] = 0xffffffff;
        *i = 0;
    }

    __builtin_memset(0xa83860, 0, 0x28);
    return 0;
}
