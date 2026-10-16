#include "00440C20-SCameraControl_Init.h"
/* 0x00440c20 SCameraControl_Init full linked: callers=1 callees=17 */
int32_t* sub_440c20()

{
    int32_t var_2fc = 0;
    int16_t eax_1 = TaskType_Register("SCameraControl", 0x2f8, sub_443e80(), 0);
    g_57c174 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_440d30);
    QTask_TriggerEvent(g_57c174, 1, sub_440d70);
    QTask_TriggerEvent(g_57c174, 2, sub_440de0);
    int32_t eax_3 = sub_4f1a60();
    QTask_RemoveEventCallback(g_57c174, eax_3, sub_440e40);
    int32_t eax_4 = sub_4f1a70();
    int32_t var_300_1 = eax_4;
    eax_4 = g_57c174;
    QTask_RemoveEventCallback(eax_4, var_300_1, sub_440e50);
    int32_t eax_5 = sub_4f1210();
    QTask_TriggerEvent(g_57c174, eax_5, sub_440ea0);
    int32_t eax_6 = sub_4f1220();
    QTask_TriggerEvent(g_57c174, eax_6, sub_440f30);
    g_57c170 = sub_4f1980(sub_443e90(), 1);
    int32_t eax_9 = sub_4f0fc0();
    void var_2f8;
    void var_54;
    return sub_4f1a80(g_57c170, &var_2f8, &var_54, eax_9, 7, 0);
}
