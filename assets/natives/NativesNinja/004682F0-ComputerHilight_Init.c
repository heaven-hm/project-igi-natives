#include "004682F0-ComputerHilight_Init.h"
/* 0x004682f0 ComputerHilight_Init full linked: callers=1 callees=29 */
int32_t* sub_4682f0()

{
    g_5bdc90 = 0x13;
    int32_t var_4e4 = 0;
    g_5bdc94 = &g_5be260;
    int16_t eax_1 = TaskType_Register("ComputerHilight", 0x4e0, sub_5034d0(), 0);
    g_53f6d0 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_4684f0);
    QTask_TriggerEvent(g_53f6d0, 2, sub_468570);
    int32_t eax_3 = sub_4f1a60();
    QTask_RemoveEventCallback(g_53f6d0, eax_3, sub_4685b0);
    int32_t eax_4 = sub_4f1a70();
    QTask_RemoveEventCallback(g_53f6d0, eax_4, sub_4685c0);
    int32_t eax_5 = sub_467d90();
    int32_t var_4e8_2 = eax_5;
    eax_5 = g_53f6d0;
    QTask_RemoveEventCallback(eax_5, var_4e8_2, sub_4687a0);
    g_5bdc84 = sub_4f1950(8);
    int32_t eax_7 = sub_4f1010();
    void var_4e0;
    void var_4c0;
    sub_4f1a80(g_5bdc84, &var_4e0, &var_4c0, eax_7, 7, 0);
    int32_t eax_9 = sub_4f0fc0();
    void var_4a8;
    sub_4f1a80(g_5bdc84, &var_4e0, &var_4a8, eax_9, 7, 0);
    int32_t eax_11 = sub_4f0ff0();
    void var_454;
    sub_4f1a80(g_5bdc84, &var_4e0, &var_454, eax_11, 7, 0);
    int32_t eax_13 = sub_4f0f00();
    void var_458;
    sub_4f1a80(g_5bdc84, &var_4e0, &var_458, eax_13, 7, &g_5bdc90);
    int32_t eax_15 = sub_4f0fe0();
    void var_24c;
    sub_4f1a80(g_5bdc84, &var_4e0, &var_24c, eax_15, 7, 0);
    int32_t eax_17 = sub_4f0fe0();
    void var_228;
    sub_4f1a80(g_5bdc84, &var_4e0, &var_228, eax_17, 7, 0);
    int32_t eax_19 = sub_4f0ff0();
    void var_204;
    sub_4f1a80(g_5bdc84, &var_4e0, &var_204, eax_19, 7, 0);
    int32_t eax_21 = sub_4f0ff0();
    void var_104;
    sub_4f1a80(g_5bdc84, &var_4e0, &var_104, eax_21, 7, 0);
    int32_t* result = sub_4c1800(0x20);
    g_5bdc80 = result;
    return result;
}
