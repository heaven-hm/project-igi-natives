#include "00488800-EditVariable_Init.h"
/* 0x00488800 EditVariable_Init full linked: callers=1 callees=23 */
int32_t* sub_488800()

{
    int32_t var_e4 = 0;
    int16_t eax_1 = TaskType_Register("EditVariable", 0xe0, sub_5034d0(), 0);
    g_5410d0 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_488980);
    QTask_TriggerEvent(g_5410d0, 1, sub_4889b0);
    QTask_TriggerEvent(g_5410d0, 2, sub_488a30);
    QTask_TriggerEvent(g_5410d0, 3, sub_4d3710);
    int32_t eax_3 = sub_4f1a60();
    int32_t var_e8 = eax_3;
    eax_3 = g_5410d0;
    QTask_RemoveEventCallback(eax_3, var_e8, sub_488a90);
    int32_t eax_4 = sub_4f1a70();
    QTask_RemoveEventCallback(g_5410d0, eax_4, sub_488aa0);
    int32_t eax_5 = sub_4f1210();
    QTask_TriggerEvent(g_5410d0, eax_5, sub_488ad0);
    int32_t eax_6 = sub_4f1220();
    int32_t var_e8_3 = eax_6;
    eax_6 = g_5410d0;
    QTask_TriggerEvent(eax_6, var_e8_3, sub_488b30);
    g_5c8a9c = sub_4f1950(4);
    int32_t eax_8 = sub_4f1010();
    void var_e0;
    void var_c0;
    sub_4f1a80(g_5c8a9c, &var_e0, &var_c0, eax_8, 7, 0);
    int32_t eax_10 = sub_4f0fa0();
    void var_8;
    sub_4f1a80(g_5c8a9c, &var_e0, &var_8, eax_10, 7, 0);
    int32_t eax_12 = sub_4f0fc0();
    void var_a8;
    sub_4f1a80(g_5c8a9c, &var_e0, &var_a8, eax_12, 7, 0);
    int32_t eax_14 = sub_4f0fc0();
    void var_58;
    return sub_4f1a80(g_5c8a9c, &var_e0, &var_58, eax_14, 7, 0);
}
