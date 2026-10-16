#include "00487BE0-GuardGenerator_Init.h"
/* 0x00487be0 GuardGenerator_Init full linked: callers=1 callees=28 */
int32_t* sub_487be0()

{
    int32_t var_84 = 0;
    int16_t eax_1 = TaskType_Register("GuardGenerator", 0x80, QTask_OpenEvent_2(), 0);
    g_541094 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_487eb0);
    QTask_TriggerEvent(g_541094, 1, sub_487ee0);
    QTask_TriggerEvent(g_541094, 2, sub_4880f0);
    int32_t eax_3 = sub_4f1a60();
    QTask_RemoveEventCallback(g_541094, eax_3, sub_4881f0);
    int32_t eax_4 = sub_4f1a70();
    int32_t var_88_1 = eax_4;
    eax_4 = g_541094;
    QTask_RemoveEventCallback(eax_4, var_88_1, sub_488200);
    int32_t eax_5 = sub_4f1210();
    QTask_TriggerEvent(g_541094, eax_5, sub_488430);
    int32_t eax_6 = sub_4f1220();
    QTask_TriggerEvent(g_541094, eax_6, sub_4884d0);
    int32_t eax_7 = sub_4cea20();
    int32_t var_88_4 = eax_7;
    eax_7 = g_541094;
    QTask_RemoveEventCallback(eax_7, var_88_4, sub_487e20);
    int32_t eax_8 = sub_4cea10();
    QTask_RemoveEventCallback(g_541094, eax_8, sub_487d90);
    int32_t eax_9 = sub_4c56f0();
    QTask_RemoveEventCallback(g_541094, eax_9, sub_4e0890);
    int32_t eax_10 = sub_467d90();
    int32_t var_88_7 = eax_10;
    eax_10 = g_541094;
    QTask_RemoveEventCallback(eax_10, var_88_7, sub_488560);
    int32_t eax_11 = sub_4c5800();
    QTask_RemoveEventCallback(g_541094, eax_11, sub_4879e0);
    g_5c8a88 = sub_4f1950(2);
    int32_t eax_13 = sub_4f0fc0();
    void var_80;
    void var_60;
    sub_4f1a80(g_5c8a88, &var_80, &var_60, eax_13, 7, 0);
    int32_t eax_14 = sub_4f0fa0();
    void var_8;
    return sub_4f1a80(g_5c8a88, &var_80, &var_8, eax_14, 7, 0);
}
