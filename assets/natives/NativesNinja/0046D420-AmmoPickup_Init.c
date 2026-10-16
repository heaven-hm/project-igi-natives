#include "0046D420-AmmoPickup_Init.h"
/* 0x0046d420 AmmoPickup_Init full linked: callers=1 callees=30 */
int32_t* sub_46d420()

{
    int32_t var_13c = 0;
    g_5be300 = TaskType_Register("AmmoPickup", 0x138, sub_4e0830(), 0);
    g_53fe28 = QTask_UnableToAllocateEven(0);
    QTask_RemoveEventCallback(g_5be300, 0, sub_46d5f0);
    QTask_TriggerEvent(g_5be300, 1, sub_46d740);
    QTask_TriggerEvent(g_5be300, 2, sub_46d760);
    int32_t eax_3 = sub_4f1a60();
    int32_t var_140 = eax_3;
    eax_3 = g_5be300;
    QTask_RemoveEventCallback(eax_3, var_140, sub_46d7c0);
    int32_t eax_4 = sub_4f1a70();
    QTask_RemoveEventCallback(g_5be300, eax_4, sub_46d7d0);
    int32_t eax_5 = sub_4f1210();
    QTask_TriggerEvent(g_5be300, eax_5, sub_46d8d0);
    int32_t eax_6 = sub_4f1220();
    int32_t var_140_3 = eax_6;
    eax_6 = g_5be300;
    QTask_TriggerEvent(eax_6, var_140_3, sub_46d930);
    int32_t eax_7 = Level_LoadObjects_4();
    QTask_RemoveEventCallback(g_5be300, eax_7, sub_45f920);
    int32_t eax_8 = Level_CheckQTaskID_3();
    QTask_RemoveEventCallback(g_5be300, eax_8, sub_45f920);
    int32_t eax_9 = Level_LoadObjects_3();
    int32_t var_140_6 = eax_9;
    eax_9 = g_5be300;
    QTask_RemoveEventCallback(eax_9, var_140_6, sub_46d990);
    g_5be304 = sub_4f1950(4);
    int32_t eax_11 = sub_4f1010();
    void var_138;
    void var_48;
    sub_4f1a80(g_5be304, &var_138, &var_48, eax_11, 7, 0);
    int32_t eax_13 = sub_4f0f70();
    void var_c8;
    sub_4f1a80(g_5be304, &var_138, &var_c8, eax_13, 7, 0);
    int32_t eax_15 = sub_4f1e20();
    void var_28;
    sub_4f1a80(g_5be304, &var_138, &var_28, eax_15, 7, 0x5c10f0);
    int32_t eax_17 = sub_4f0fb0();
    void var_8;
    return sub_4f1a80(g_5be304, &var_138, &var_8, eax_17, 7, 0);
}
