#include "0052C6B0-SkyTask_Init.h"
/* 0x0052c6b0 SkyTask_Init full linked: callers=1 callees=14 */
int32_t* sub_52c6b0()

{
    int32_t var_7c = 0;
    int16_t eax_1 = TaskType_Register("SkyTask", 0x78, QTask_OpenEvent_2(), 0);
    g_54f6e4 = eax_1;
    QTask_RemoveEventCallback(eax_1, 4, sub_52c7a0);
    QTask_RemoveEventCallback(g_54f6e4, 0, sub_52c7c0);
    QTask_TriggerEvent(g_54f6e4, 2, sub_520f20);
    int32_t eax_3 = sub_4f1a70();
    QTask_RemoveEventCallback(g_54f6e4, eax_3, sub_4d3710);
    int32_t eax_4 = sub_4f1a60();
    int32_t var_80_1 = eax_4;
    eax_4 = g_54f6e4;
    QTask_RemoveEventCallback(eax_4, var_80_1, sub_52c790);
    g_a84558 = sub_4f1950(2);
    int32_t eax_6 = sub_4f0f50();
    void var_78;
    void var_8;
    sub_4f1a80(g_a84558, &var_78, &var_8, eax_6, 7, 0);
    int32_t eax_8 = sub_4f0f20();
    void var_c;
    return sub_4f1a80(g_a84558, &var_78, &var_c, eax_8, 7, 0);
}
