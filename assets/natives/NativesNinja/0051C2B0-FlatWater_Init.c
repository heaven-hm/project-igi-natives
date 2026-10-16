#include "0051C2B0-FlatWater_Init.h"
/* 0x0051c2b0 FlatWater_Init full linked: callers=1 callees=41 */
int32_t* sub_51c2b0()

{
    int32_t var_300 = 0;
    g_ba2020 = TaskType_Register("FlatWater", 0x90, QTask_OpenEvent_2(), 0);
    int32_t var_300_1 = 0;
    g_ba2018 = TaskType_Register("FlatWaterLayer", 0x26c, QTask_OpenEvent_2(), 0);
    QTask_RemoveEventCallback(g_ba2020, 0, sub_51d840);
    QTask_TriggerEvent(g_ba2020, 2, sub_51d8b0);
    QTask_RemoveEventCallback(g_ba2020, 4, sub_51c5b0);
    QTask_TriggerEvent(g_ba2020, 1, sub_488700);
    int32_t eax_5 = sub_4f1a60();
    QTask_RemoveEventCallback(g_ba2020, eax_5, sub_51d8e0);
    int32_t eax_6 = sub_4f1a70();
    QTask_RemoveEventCallback(g_ba2020, eax_6, sub_51d8f0);
    QTask_RemoveEventCallback(g_ba2018, 0, sub_51db80);
    QTask_TriggerEvent(g_ba2018, 2, sub_51ec30);
    int32_t eax_8 = sub_4f1a60();
    QTask_RemoveEventCallback(g_ba2018, eax_8, sub_51dda0);
    int32_t eax_9 = sub_4f1a70();
    int32_t var_304_3 = eax_9;
    eax_9 = g_ba2018;
    QTask_RemoveEventCallback(eax_9, var_304_3, sub_51dbf0);
    QTask_TriggerEvent(g_ba2018, 1, sub_51da90);
    g_ba201c = sub_4f1950(4);
    int32_t eax_11 = sub_4f0f50();
    void var_2fc;
    void var_280;
    sub_4f1a80(g_ba201c, &var_2fc, &var_280, eax_11, 7, 0x54ee68);
    int32_t eax_12 = sub_4f0f80();
    void var_28c;
    sub_4f1a80(g_ba201c, &var_2fc, &var_28c, eax_12, 7, 0);
    int32_t eax_13 = sub_4f0f50();
    void var_284;
    sub_4f1a80(g_ba201c, &var_2fc, &var_284, eax_13, 7, 0);
    int32_t eax_14 = sub_4f0f40();
    void var_27c;
    sub_4f1a80(g_ba201c, &var_2fc, &var_27c, eax_14, 7, 0);
    g_ba2024 = sub_4f1950(6);
    int32_t eax_16 = sub_4f0ff0();
    void var_26c;
    void var_124;
    sub_4f1a80(g_ba2024, &var_26c, &var_124, eax_16, 7, 0);
    int32_t eax_17 = sub_4f0f50();
    void var_24;
    sub_4f1a80(g_ba2024, &var_26c, &var_24, eax_17, 7, 0);
    int32_t eax_18 = sub_4f0f50();
    void var_20;
    sub_4f1a80(g_ba2024, &var_26c, &var_20, eax_18, 7, 0x54ee70);
    int32_t eax_19 = sub_4f0f50();
    void var_1c;
    sub_4f1a80(g_ba2024, &var_26c, &var_1c, eax_19, 7, 0x54ee70);
    int32_t eax_20 = sub_4f0f50();
    void var_10;
    sub_4f1a80(g_ba2024, &var_26c, &var_10, eax_20, 7, 0x54ee68);
    int32_t eax_21 = sub_4f0f40();
    void var_c;
    return sub_4f1a80(g_ba2024, &var_26c, &var_c, eax_21, 7, 0);
}
