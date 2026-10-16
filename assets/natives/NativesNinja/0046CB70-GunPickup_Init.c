#include "0046CB70-GunPickup_Init.h"
/* 0x0046cb70 GunPickup_Init full linked: callers=1 callees=28 */
int32_t* sub_46cb70()

{
    int32_t var_15c = 0;
    g_5be2e0 = TaskType_Register("GunPickup", 0x158, sub_4e0830(), 0);
    g_53fde0 = QTask_UnableToAllocateEven(0);
    QTask_RemoveEventCallback(g_5be2e0, 0, sub_46cd20);
    QTask_TriggerEvent(g_5be2e0, 1, sub_46cea0);
    QTask_TriggerEvent(g_5be2e0, 2, sub_46d760);
    int32_t eax_3 = sub_4f1a60();
    int32_t var_160 = eax_3;
    eax_3 = g_5be2e0;
    QTask_RemoveEventCallback(eax_3, var_160, sub_46d040);
    int32_t eax_4 = sub_4f1a70();
    QTask_RemoveEventCallback(g_5be2e0, eax_4, sub_46d050);
    int32_t eax_5 = sub_4f1210();
    QTask_TriggerEvent(g_5be2e0, eax_5, sub_46d170);
    int32_t eax_6 = sub_4f1220();
    int32_t var_160_3 = eax_6;
    eax_6 = g_5be2e0;
    QTask_TriggerEvent(eax_6, var_160_3, sub_46d1d0);
    int32_t eax_7 = Level_LoadObjects_4();
    QTask_RemoveEventCallback(g_5be2e0, eax_7, sub_45f920);
    int32_t eax_8 = Level_CheckQTaskID_3();
    QTask_RemoveEventCallback(g_5be2e0, eax_8, sub_45f920);
    int32_t eax_9 = Level_LoadObjects_3();
    int32_t var_160_6 = eax_9;
    eax_9 = g_5be2e0;
    QTask_RemoveEventCallback(eax_9, var_160_6, sub_46d230);
    g_5be2f8 = sub_4f1950(3);
    int32_t eax_11 = sub_4f1010();
    void var_158;
    void var_68;
    sub_4f1a80(g_5be2f8, &var_158, &var_68, eax_11, 7, 0);
    int32_t eax_13 = sub_4f0f70();
    void var_e8;
    sub_4f1a80(g_5be2f8, &var_158, &var_e8, eax_13, 7, 0);
    int32_t eax_15 = sub_4f1e20();
    void var_28;
    return sub_4f1a80(g_5be2f8, &var_158, &var_28, eax_15, 7, 0x56e228);
}
