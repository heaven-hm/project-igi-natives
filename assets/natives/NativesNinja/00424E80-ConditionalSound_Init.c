#include "00424E80-ConditionalSound_Init.h"
/* 0x00424e80 ConditionalSound_Init full linked: callers=1 callees=28 */
int32_t* ConditionalSound_Init()

{
    int32_t var_12c = 0;
    int16_t eax_1 = TaskType_Register("ConditionalSound", 0x128, QTask_OpenEvent_2(), 0);
    g_57bc68 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, ConditionalSound_LoadParameters);
    QTask_TriggerEvent(g_57bc68, 1, ConditionalSound_Tick);
    QTask_TriggerEvent(g_57bc68, 2, ConditionalSound_Process);
    int32_t eax_3 = sub_4f1a60();
    QTask_RemoveEventCallback(g_57bc68, eax_3, sub_425390);
    int32_t eax_4 = sub_4f1a70();
    int32_t var_130_1 = eax_4;
    eax_4 = g_57bc68;
    QTask_RemoveEventCallback(eax_4, var_130_1, sub_4253a0);
    int32_t eax_5 = sub_4f1210();
    QTask_TriggerEvent(g_57bc68, eax_5, ConditionalSound_Update);
    int32_t eax_6 = sub_4f1220();
    QTask_TriggerEvent(g_57bc68, eax_6, ConditionalSound_OnEvent);
    int32_t eax_7 = sub_4cea20();
    int32_t var_130_4 = eax_7;
    eax_7 = g_57bc68;
    QTask_RemoveEventCallback(eax_7, var_130_4, ConditionalSound_Action);
    g_57bc6c = sub_4f1950(6);
    int32_t eax_9 = sub_4f0fc0();
    void var_128;
    void var_108;
    sub_4f1a80(g_57bc6c, &var_128, &var_108, eax_9, 7, 0);
    int32_t eax_11 = sub_4f0fe0();
    void var_b8;
    sub_4f1a80(g_57bc6c, &var_128, &var_b8, eax_11, 7, 0);
    int32_t eax_13 = sub_4f1010();
    void var_98;
    sub_4f1a80(g_57bc6c, &var_128, &var_98, eax_13, 7, 0);
    int32_t eax_15 = sub_4f1000();
    void var_80;
    sub_4f1a80(g_57bc6c, &var_128, &var_80, eax_15, 7, 0);
    int32_t eax_17 = sub_4f1000();
    void var_7f;
    sub_4f1a80(g_57bc6c, &var_128, &var_7f, eax_17, 7, 0);
    int32_t eax_19 = sub_4f1000();
    void var_75;
    return sub_4f1a80(g_57bc6c, &var_128, &var_75, eax_19, 7, 0);
}
