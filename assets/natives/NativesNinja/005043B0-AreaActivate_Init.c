#include "005043B0-AreaActivate_Init.h"
/* 0x005043b0 AreaActivate_Init full linked: callers=1 callees=23 */
int32_t* sub_5043b0()

{
    int32_t var_bc = 0;
    g_54e69c = TaskType_Register("AreaActivate", 0xb8, sub_5034d0(), 0);
    g_54e69e = QTask_UnableToAllocateEven(0);
    QTask_RemoveEventCallback(g_54e69c, 0, sub_5049d0);
    QTask_TriggerEvent(g_54e69c, 2, sub_504970);
    int32_t eax_3 = sub_4f1a70();
    QTask_RemoveEventCallback(g_54e69c, eax_3, sub_5045f0);
    int32_t eax_4 = sub_4f1a60();
    int32_t var_c0_1 = eax_4;
    eax_4 = g_54e69c;
    QTask_RemoveEventCallback(eax_4, var_c0_1, sub_504890);
    QTask_TriggerEvent(g_54e69c, 1, sub_5048a0);
    int32_t eax_5 = sub_4f1210();
    QTask_TriggerEvent(g_54e69c, eax_5, sub_504530);
    int32_t eax_6 = sub_4f1220();
    int32_t var_c0_3 = eax_6;
    eax_6 = g_54e69c;
    QTask_TriggerEvent(eax_6, var_c0_3, sub_504590);
    g_a7a7b4 = sub_4f1950(4);
    int32_t eax_8 = sub_4f1010();
    void var_b8;
    void var_68;
    sub_4f1a80(g_a7a7b4, &var_b8, &var_68, eax_8, 7, 0);
    int32_t eax_10 = sub_4f0f70();
    void var_50;
    sub_4f1a80(g_a7a7b4, &var_b8, &var_50, eax_10, 7, 0);
    int32_t eax_12 = sub_4f0f60();
    void var_1c;
    sub_4f1a80(g_a7a7b4, &var_b8, &var_1c, eax_12, 7, 0);
    int32_t eax_14 = sub_4f0fc0();
    void var_8;
    return sub_4f1a80(g_a7a7b4, &var_b8, &var_8, eax_14, 7, 0);
}
