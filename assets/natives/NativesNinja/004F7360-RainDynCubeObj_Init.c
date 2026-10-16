#include "004F7360-RainDynCubeObj_Init.h"
/* 0x004f7360 RainDynCubeObj_Init full linked: callers=1 callees=40 */
❓  int32_t sub_4f7360()
// This function has unresolved stack usage. View graph of stack usage to resolve.

{
    sub_4a54a0(0x4290);
    int32_t var_8 = 0;
    int16_t eax_1 = TaskType_Register("RainDynCubeObj", 0x4290, g_54875c, 0);
    g_54e2cc = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_4f6c00);
    QTask_TriggerEvent(g_54e2cc, 1, sub_4f7170);
    QTask_TriggerEvent(g_54e2cc, 2, sub_4f72e0);
    QTask_RemoveEventCallback(g_54e2cc, 4, sub_4f77c0);
    int32_t eax_3 = sub_4f1a70();
    QTask_RemoveEventCallback(g_54e2cc, eax_3, sub_4f7f00);
    int32_t eax_4 = sub_4f1a60();
    QTask_RemoveEventCallback(g_54e2cc, eax_4, sub_4f7620);
    QTask_RemoveEventCallback(g_54e2cc, 7, sub_4f71f0);
    g_a76ccc = sub_4f1950(0xf);
    int32_t eax_7 = sub_4f1010();
    void arg_2c20;
    sub_4f1a80(g_a76ccc, &__return_addr, &arg_2c20, eax_7, 7, 0);
    int32_t eax_9 = sub_4f0f80();
    void arg_2c38;
    sub_4f1a80(g_a76ccc, &__return_addr, &arg_2c38, eax_9, 7, 0);
    int32_t eax_11 = sub_4f0f80();
    void arg_2c40;
    sub_4f1a80(g_a76ccc, &__return_addr, &arg_2c40, eax_11, 7, 0);
    int32_t eax_13 = sub_4f0f50();
    void arg_2c98;
    sub_4f1a80(g_a76ccc, &__return_addr, &arg_2c98, eax_13, 7, 0);
    int32_t eax_15 = sub_4f0f50();
    void arg_2c9c;
    sub_4f1a80(g_a76ccc, &__return_addr, &arg_2c9c, eax_15, 7, 0);
    int32_t eax_17 = sub_4f0f50();
    void arg_2ca0;
    sub_4f1a80(g_a76ccc, &__return_addr, &arg_2ca0, eax_17, 7, 0);
    int32_t eax_19 = sub_4f0f50();
    void arg_2c6c;
    sub_4f1a80(g_a76ccc, &__return_addr, &arg_2c6c, eax_19, 7, 0);
    int32_t eax_21 = sub_4f0f50();
    void arg_2c70;
    sub_4f1a80(g_a76ccc, &__return_addr, &arg_2c70, eax_21, 7, 0);
    int32_t eax_23 = sub_4f0f50();
    void arg_2ca4;
    sub_4f1a80(g_a76ccc, &__return_addr, &arg_2ca4, eax_23, 7, 0);
    int32_t eax_25 = sub_4f1000();
    void arg_2cb4;
    sub_4f1a80(g_a76ccc, &__return_addr, &arg_2cb4, eax_25, 7, 0);
    int32_t eax_27 = sub_4f0fc0();
    void arg_2cb8;
    sub_4f1a80(g_a76ccc, &__return_addr, &arg_2cb8, eax_27, 7, 0);
    int32_t eax_29 = sub_4978d0("Line");
    g_a76c8c = eax_29;
    sub_4978f0(eax_29, sub_4f7630);
    sub_4b4720(0xa76c90);
    sub_4b47e0(0xa76c90, Timer_Now());
    __builtin_memset(&g_a76ca4, 0, 0x20);
    g_a76c9c = 0;
    return 0;
}
