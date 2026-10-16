#include "0046E370-AIStationaryGunHolder_Init.h"
/* 0x0046e370 AIStationaryGunHolder_Init full linked: callers=1 callees=34 */
❓  int32_t* sub_46e370()
// This function has unresolved stack usage. View graph of stack usage to resolve.

{
    sub_4a54a0(0x26a0);
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("AIStationaryGunHolder", 0x26a0, sub_4c48c0(), 0);
    g_5be318 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_46e210);
    QTask_TriggerEvent(g_5be318, 1, sub_46e5b0);
    QTask_TriggerEvent(g_5be318, 2, sub_46e7a0);
    int32_t eax_3 = sub_4f1a70();
    QTask_RemoveEventCallback(g_5be318, eax_3, sub_46e7f0);
    int32_t eax_4 = sub_4f1a60();
    int32_t var_8_1 = eax_4;
    eax_4 = g_5be318;
    QTask_RemoveEventCallback(eax_4, var_8_1, sub_46e9d0);
    int32_t eax_5 = sub_489630();
    QTask_RemoveEventCallback(g_5be318, eax_5, sub_46e9e0);
    int32_t eax_6 = sub_489610();
    QTask_RemoveEventCallback(g_5be318, eax_6, sub_42fc50);
    int32_t eax_7 = sub_467d90();
    int32_t var_8_4 = eax_7;
    eax_7 = g_5be318;
    QTask_RemoveEventCallback(eax_7, var_8_4, sub_46e9f0);
    g_5be320 = 0;
    g_5be324 = 0x42c80000;
    g_5be328 = sub_4f1950(8);
    int32_t eax_9 = sub_4f1010();
    void arg_2598;
    sub_4f1a80(g_5be328, &__return_addr, &arg_2598, eax_9, 7, 0);
    int32_t eax_11 = sub_4f0f70();
    void arg_25b0;
    sub_4f1a80(g_5be328, &__return_addr, &arg_25b0, eax_11, 7, 0);
    int32_t eax_13 = sub_4f0fd0();
    void arg_25d8;
    sub_4f1a80(g_5be328, &__return_addr, &arg_25d8, eax_13, 7, 0);
    int32_t eax_15 = sub_4f0f30();
    void arg_25e8;
    sub_4f1a80(g_5be328, &__return_addr, &arg_25e8, eax_15, 7, 0);
    int32_t eax_17 = sub_4f0f30();
    void arg_25ec;
    sub_4f1a80(g_5be328, &__return_addr, &arg_25ec, eax_17, 7, 0);
    int32_t eax_19 = sub_4f0f50();
    void arg_25f0;
    sub_4f1a80(g_5be328, &__return_addr, &arg_25f0, eax_19, 7, &g_5be320);
    int32_t eax_21 = sub_4f0fc0();
    void arg_25f4;
    sub_4f1a80(g_5be328, &__return_addr, &arg_25f4, eax_21, 7, 0);
    int32_t eax_23 = sub_4f0fc0();
    void arg_2644;
    sub_4f1a80(g_5be328, &__return_addr, &arg_2644, eax_23, 7, 0);
    int32_t* result = sub_4c1800(0x10);
    g_5be330 = result;
    return result;
}
