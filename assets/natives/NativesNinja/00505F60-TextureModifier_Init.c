#include "00505F60-TextureModifier_Init.h"
/* 0x00505f60 TextureModifier_Init full linked: callers=1 callees=41 */
int32_t* sub_505f60()

{
    sub_4b4720(0xa7acf8);
    sub_4b47e0(0xa7acf8, 0x19111911);
    int32_t var_100 = 0;
    int16_t eax_1 = TaskType_Register("TextureModifier", 0xf0, g_54875c, 0);
    g_a7a8f0 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0xd, sub_505f20);
    QTask_RemoveEventCallback(g_a7a8f0, 0, sub_505d50);
    QTask_RemoveEventCallback(g_a7a8f0, 0x10, sub_505ed0);
    QTask_TriggerEvent(g_a7a8f0, 2, sub_506240);
    int32_t eax_3 = sub_4f1a60();
    QTask_RemoveEventCallback(g_a7a8f0, eax_3, sub_506290);
    int32_t eax_4 = sub_4f1a70();
    QTask_RemoveEventCallback(g_a7a8f0, eax_4, sub_5062a0);
    QTask_RemoveEventCallback(g_a7a8f0, 0xa, 0);
    QTask_RemoveEventCallback(g_a7a8f0, 0xb, 0);
    int32_t eax_6 = sub_4d14d0();
    QTask_RemoveEventCallback(g_a7a8f0, eax_6, 0);
    QTask_RemoveEventCallback(g_a7a8f0, 0xc, 0);
    QTask_RemoveEventCallback(g_a7a8f0, 0xf, sub_505e40);
    int32_t eax_8 = sub_4e5360();
    QTask_RemoveEventCallback(g_a7a8f0, eax_8, sub_4f64e0);
    QTask_RemoveEventCallback(g_a7a8f0, 8, 0);
    QTask_RemoveEventCallback(g_a7a8f0, 4, 0);
    QTask_RemoveEventCallback(g_a7a8f0, 5, 0);
    g_a7a8ec = sub_4f1950(9);
    int32_t eax_11 = sub_4f1010();
    void var_f0;
    void var_80;
    sub_4f1a80(g_a7a8ec, &var_f0, &var_80, eax_11, 7, 0);
    int32_t eax_12 = sub_4f0fa0();
    void var_38;
    sub_4f1a80(g_a7a8ec, &var_f0, &var_38, eax_12, 7, 0);
    int32_t eax_13 = sub_4f0fa0();
    void var_2c;
    sub_4f1a80(g_a7a8ec, &var_f0, &var_2c, eax_13, 7, 0);
    int32_t eax_14 = sub_4f0fa0();
    void var_34;
    sub_4f1a80(g_a7a8ec, &var_f0, &var_34, eax_14, 7, 0);
    int32_t eax_15 = sub_4f0fa0();
    void var_18;
    sub_4f1a80(g_a7a8ec, &var_f0, &var_18, eax_15, 7, 0);
    int32_t eax_16 = sub_4f1000();
    void var_20;
    sub_4f1a80(g_a7a8ec, &var_f0, &var_20, eax_16, 7, 0);
    int32_t eax_17 = sub_4f0ef0();
    void var_1f;
    sub_4f1a80(g_a7a8ec, &var_f0, &var_1f, eax_17, 6, 0);
    int32_t eax_18 = sub_4f0ef0();
    void var_10;
    sub_4f1a80(g_a7a8ec, &var_f0, &var_10, eax_18, 6, 0);
    int32_t eax_19 = sub_4f1000();
    void var_1b;
    int32_t* result = sub_4f1a80(g_a7a8ec, &var_f0, &var_1b, eax_19, 6, 0);
    g_b97df8 = 0;
    return result;
}
