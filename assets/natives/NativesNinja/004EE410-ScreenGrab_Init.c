#include "004EE410-ScreenGrab_Init.h"
/* 0x004ee410 ScreenGrab_Init full linked: callers=1 callees=16 */
int32_t* sub_4ee410()

{
    int32_t var_2c = 0;
    int16_t eax_1 = TaskType_Register("ScreenGrab", 0x28, QTask_OpenEvent_2(), 0);
    g_54dcb8 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_4ee530);
    QTask_TriggerEvent(g_54dcb8, 1, sub_4ee540);
    int32_t eax_3 = sub_4e7530();
    QTask_TriggerEvent(g_54dcb8, eax_3, sub_4ee5e0);
    QTask_TriggerEvent(g_54dcb8, 2, sub_4d3710);
    int32_t eax_4 = sub_4f1a70();
    int32_t var_30_1 = eax_4;
    eax_4 = g_54dcb8;
    QTask_RemoveEventCallback(eax_4, var_30_1, sub_4ee600);
    int32_t eax_5 = sub_4f1a60();
    QTask_RemoveEventCallback(g_54dcb8, eax_5, sub_4ee680);
    g_a70c60 = sub_4f1950(2);
    int32_t eax_7 = sub_4f0fc0();
    void var_28;
    void var_8;
    sub_4f1a80(g_a70c60, &var_28, &var_8, eax_7, 7, 0);
    int32_t eax_8 = sub_4f1000();
    void var_4;
    int32_t* result = sub_4f1a80(g_a70c60, &var_28, &var_4, eax_8, 7, 0);
    g_a70c64 = 0;
    g_a70c5b = 0;
    g_a70c5a = 0;
    return result;
}
