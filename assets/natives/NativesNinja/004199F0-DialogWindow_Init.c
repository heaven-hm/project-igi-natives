#include "004199F0-DialogWindow_Init.h"
/* 0x004199f0 DialogWindow_Init full linked: callers=1 callees=30 */
int32_t* DialogWindow_Init()

{
    g_57bb80 = 0;
    g_57bb84 = 0x280;
    int32_t var_60 = 0;
    int16_t eax_1 = TaskType_Register("DialogWindow", 0x5c, Menu_PlayMusic_13(), 0);
    g_539c28 = eax_1;
    QTask_TriggerEvent(eax_1, 1, sub_419c90);
    int32_t eax_2 = sub_4e7530();
    int32_t var_64 = eax_2;
    eax_2 = g_539c28;
    QTask_TriggerEvent(eax_2, var_64, DialogWindow_LoadParameters);
    QTask_TriggerEvent(g_539c28, 2, sub_419c20);
    QTask_RemoveEventCallback(g_539c28, 0, sub_419be0);
    int32_t eax_3 = sub_4f1a60();
    int32_t var_64_1 = eax_3;
    eax_3 = g_539c28;
    QTask_RemoveEventCallback(eax_3, var_64_1, sub_41a110);
    int32_t eax_4 = sub_4f1a70();
    QTask_RemoveEventCallback(g_539c28, eax_4, sub_419c50);
    int32_t eax_5 = Menu_HandleInput_13();
    QTask_TriggerEvent(g_539c28, eax_5, sub_424300);
    int32_t eax_6 = Menu_RequestScreen_14();
    int32_t var_64_4 = eax_6;
    eax_6 = g_539c28;
    QTask_TriggerEvent(eax_6, var_64_4, sub_41a120);
    int32_t eax_7 = sub_4f1210();
    QTask_TriggerEvent(g_539c28, eax_7, sub_4d3710);
    int32_t eax_8 = sub_4f1220();
    QTask_TriggerEvent(g_539c28, eax_8, sub_4d3710);
    g_57bb88 = sub_4f1950(5);
    int32_t eax_10 = sub_4f0fa0();
    void var_5c;
    void var_3c;
    sub_4f1a80(g_57bb88, &var_5c, &var_3c, eax_10, 7, &g_57bb80);
    int32_t eax_11 = sub_4f0fa0();
    void var_38;
    sub_4f1a80(g_57bb88, &var_5c, &var_38, eax_11, 7, &g_57bb80);
    int32_t eax_12 = sub_4f0fa0();
    void var_34;
    sub_4f1a80(g_57bb88, &var_5c, &var_34, eax_12, 7, &g_57bb80);
    int32_t eax_13 = sub_4f0fa0();
    void var_30;
    sub_4f1a80(g_57bb88, &var_5c, &var_30, eax_13, 7, &g_57bb80);
    int32_t eax_14 = sub_4f1000();
    void var_3;
    return sub_4f1a80(g_57bb88, &var_5c, &var_3, eax_14, 7, &g_57bb80);
}
