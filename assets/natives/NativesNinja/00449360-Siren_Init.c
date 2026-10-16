#include "00449360-Siren_Init.h"
/* 0x00449360 Siren_Init full linked: callers=1 callees=23 */
int32_t* sub_449360()

{
    int32_t var_2dc = 0;
    int16_t eax_1 = TaskType_Register("Siren", 0x2d8, sub_481340(), 0);
    g_57c214 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_4492a0);
    QTask_TriggerEvent(g_57c214, 1, sub_4494d0);
    QTask_TriggerEvent(g_57c214, 2, sub_449330);
    int32_t eax_3 = sub_4f1a60();
    QTask_RemoveEventCallback(g_57c214, eax_3, sub_449600);
    int32_t eax_4 = sub_4f1a70();
    int32_t var_2e0_1 = eax_4;
    eax_4 = g_57c214;
    QTask_RemoveEventCallback(eax_4, var_2e0_1, sub_449610);
    int32_t eax_5 = sub_4f1210();
    QTask_TriggerEvent(g_57c214, eax_5, sub_449660);
    int32_t eax_6 = sub_4f1220();
    QTask_TriggerEvent(g_57c214, eax_6, sub_449710);
    int32_t eax_7 = sub_4e6610();
    int32_t var_2e0_4 = eax_7;
    eax_7 = g_57c214;
    QTask_RemoveEventCallback(eax_7, var_2e0_4, sub_4497b0);
    g_57c21c = sub_4f1980(sub_481350(), 3);
    int32_t eax_10 = sub_4f0fe0();
    void var_2d8;
    void var_a0;
    sub_4f1a80(g_57c21c, &var_2d8, &var_a0, eax_10, 7, 0);
    int32_t eax_12 = sub_4f0fe0();
    void var_80;
    sub_4f1a80(g_57c21c, &var_2d8, &var_80, eax_12, 7, 0);
    int32_t eax_14 = sub_4f0fc0();
    void var_60;
    return sub_4f1a80(g_57c21c, &var_2d8, &var_60, eax_14, 7, 0);
}
