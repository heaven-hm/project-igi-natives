#include "004F36C0-Script_FormatString_13.h"
/* 0x004f36c0 Script_FormatString_13 full linked: callers=1 callees=36 */
❓  int32_t sub_4f36c0()
// This function has unresolved stack usage. View graph of stack usage to resolve.

{
    sub_4a54a0(0x20160);
    QTask_RemoveEventCallback(g_54e1d8, 0, sub_4f3a00);
    QTask_TriggerEvent(g_54e1d8, 2, sub_4f3ac0);
    QTask_TriggerEvent(g_54e1d8, 1, sub_4f3b40);
    int32_t eax_1 = sub_4f1a60();
    int32_t var_8 = eax_1;
    eax_1 = g_54e1d8;
    QTask_RemoveEventCallback(eax_1, var_8, sub_4f39f0);
    int32_t eax_2 = sub_4f1a70();
    QTask_RemoveEventCallback(g_54e1d8, eax_2, sub_4f3940);
    int32_t eax_3 = sub_4f4110();
    QTask_RemoveEventCallback(g_54e1d8, eax_3, sub_4f3ca0);
    int32_t eax_4 = sub_4f4120();
    int32_t var_8_3 = eax_4;
    eax_4 = g_54e1d8;
    QTask_RemoveEventCallback(eax_4, var_8_3, sub_4f3d30);
    int32_t eax_5 = sub_4f4130();
    QTask_RemoveEventCallback(g_54e1d8, eax_5, sub_4f3db0);
    int32_t eax_6 = sub_4f1210();
    QTask_TriggerEvent(g_54e1d8, eax_6, sub_4f3ba0);
    int32_t eax_7 = sub_4f1220();
    int32_t var_8_6 = eax_7;
    eax_7 = g_54e1d8;
    QTask_TriggerEvent(eax_7, var_8_6, sub_4f3c20);
    g_a76c3c = sub_4f1950(8);
    int32_t eax_9 = sub_4f1010();
    void arg_20;
    sub_4f1a80(g_a76c3c, &__return_addr, &arg_20, eax_9, 7, 0);
    int32_t eax_11 = sub_4f0f70();
    void arg_38;
    sub_4f1a80(g_a76c3c, &__return_addr, &arg_38, eax_11, 7, 0);
    int32_t eax_13 = sub_4f0fa0();
    void arg_2014c;
    sub_4f1a80(g_a76c3c, &__return_addr, &arg_2014c, eax_13, 7, 0);
    int32_t eax_15 = sub_4f0fc0();
    void arg_200f8;
    sub_4f1a80(g_a76c3c, &__return_addr, &arg_200f8, eax_15, 7, 0);
    int32_t eax_17 = sub_4f1000();
    void arg_200f4;
    sub_4f1a80(g_a76c3c, &__return_addr, &arg_200f4, eax_17, 7, 0);
    int32_t eax_19 = sub_4f0ef0();
    void arg_20158;
    sub_4f1a80(g_a76c3c, &__return_addr, &arg_20158, eax_19, 6, 0);
    int32_t eax_21 = sub_4f0ef0();
    void arg_20159;
    sub_4f1a80(g_a76c3c, &__return_addr, &arg_20159, eax_21, 6, 0);
    int32_t edx_3 = sub_4f1a80(g_a76c3c, &__return_addr, &__return_addr, g_54e1e4, 7, 0);
    edx_3 = g_54e1db;
    int32_t result = QTask_RemoveEventCallback(sub_4c48c0(), edx_3, sub_4d3710);
    g_a76c28 = &g_a76c2c;
    g_a76c30 = &g_a76c28;
    g_a76c2c = 0;
    g_a76c20 = 0x3c;
    g_a76c34 = 0x400;
    return result;
}
