#include "0052B040-EditHazinglayer_Init.h"
/* 0x0052b040 EditHazinglayer_Init full linked: callers=1 callees=22 */
int32_t* sub_52b040()

{
    int32_t var_8c = 0;
    int16_t eax_1 = TaskType_Register("EditHazinglayer", 0x88, sub_5034d0(), 0);
    g_a84398 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_52afe0);
    QTask_RemoveEventCallback(g_a84398, 7, 0);
    QTask_TriggerEvent(g_a84398, 2, sub_52b1c0);
    int32_t eax_3 = sub_4f1a60();
    QTask_RemoveEventCallback(g_a84398, eax_3, sub_52b2f0);
    int32_t eax_4 = sub_4f1a70();
    int32_t var_90_1 = eax_4;
    eax_4 = g_a84398;
    QTask_RemoveEventCallback(eax_4, var_90_1, sub_52b1d0);
    int32_t eax_5 = sub_4e5360();
    QTask_RemoveEventCallback(g_a84398, eax_5, sub_52bfe0);
    g_a8439c = sub_4f1950(5);
    int32_t eax_7 = sub_4f1010();
    void var_88;
    void var_60;
    sub_4f1a80(g_a8439c, &var_88, &var_60, eax_7, 7, 0);
    int32_t eax_8 = sub_4f0fa0();
    void var_18;
    sub_4f1a80(g_a8439c, &var_88, &var_18, eax_8, 7, 0);
    int32_t eax_9 = sub_4f0f50();
    void var_14;
    sub_4f1a80(g_a8439c, &var_88, &var_14, eax_9, 7, 0);
    int32_t eax_10 = sub_4f0f80();
    void var_10;
    sub_4f1a80(g_a8439c, &var_88, &var_10, eax_10, 7, 0);
    int32_t eax_11 = sub_4f0f80();
    void var_8;
    return sub_4f1a80(g_a8439c, &var_88, &var_8, eax_11, 7, 0);
}
