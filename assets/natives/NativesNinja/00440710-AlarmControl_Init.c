#include "00440710-AlarmControl_Init.h"
/* 0x00440710 AlarmControl_Init full linked: callers=1 callees=19 */
int32_t* sub_440710()

{
    int32_t var_354 = 0;
    int16_t eax_1 = TaskType_Register("AlarmControl", 0x350, sub_443e80(), 0);
    g_57c164 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_440840);
    QTask_TriggerEvent(g_57c164, 1, sub_4408a0);
    QTask_TriggerEvent(g_57c164, 2, sub_440970);
    int32_t eax_3 = sub_4f1a60();
    QTask_RemoveEventCallback(g_57c164, eax_3, sub_4409e0);
    int32_t eax_4 = sub_4f1a70();
    int32_t var_358_1 = eax_4;
    eax_4 = g_57c164;
    QTask_RemoveEventCallback(eax_4, var_358_1, sub_4409f0);
    int32_t eax_5 = sub_4f1210();
    QTask_TriggerEvent(g_57c164, eax_5, sub_440a40);
    int32_t eax_6 = sub_4f1220();
    QTask_TriggerEvent(g_57c164, eax_6, sub_440b20);
    g_57c168 = sub_4f1980(sub_443e90(), 2);
    int32_t eax_9 = sub_4f0fc0();
    void var_350;
    void var_a4;
    sub_4f1a80(g_57c168, &var_350, &var_a4, eax_9, 7, 0);
    int32_t eax_10 = sub_4f0fc0();
    void var_54;
    return sub_4f1a80(g_57c168, &var_350, &var_54, eax_10, 7, 0);
}
