#include "0041DC50-ToggleBox_Init.h"
/* 0x0041dc50 ToggleBox_Init full linked: callers=1 callees=24 */
int32_t* ToggleBox_Init()

{
    int32_t var_150 = 0;
    int16_t eax_1 = TaskType_Register("ToggleBox", 0x14c, Menu_PlayMusic_13(), 0);
    g_53b674 = eax_1;
    QTask_TriggerEvent(eax_1, 1, ToggleBox_LoadParameters);
    int32_t eax_2 = sub_4e7530();
    int32_t var_154 = eax_2;
    eax_2 = g_53b674;
    QTask_TriggerEvent(eax_2, var_154, ToggleBox_Setup);
    QTask_TriggerEvent(g_53b674, 2, ToggleBox_Process);
    QTask_RemoveEventCallback(g_53b674, 0, sub_41ddd0);
    int32_t eax_3 = sub_4f1a60();
    int32_t var_154_1 = eax_3;
    eax_3 = g_53b674;
    QTask_RemoveEventCallback(eax_3, var_154_1, sub_41e410);
    int32_t eax_4 = sub_4f1a70();
    QTask_RemoveEventCallback(g_53b674, eax_4, sub_41df30);
    int32_t eax_5 = Menu_HandleInput_13();
    QTask_TriggerEvent(g_53b674, eax_5, sub_41e420);
    int32_t eax_6 = Menu_RequestScreen_14();
    int32_t var_154_4 = eax_6;
    eax_6 = g_53b674;
    QTask_TriggerEvent(eax_6, var_154_4, ToggleBox_Update);
    int32_t eax_7 = sub_4f1210();
    QTask_TriggerEvent(g_53b674, eax_7, ToggleBox_OnEvent);
    int32_t eax_8 = sub_4f1220();
    QTask_TriggerEvent(g_53b674, eax_8, ToggleBox_Action);
    g_57bbd0 = sub_4f1950(2);
    int32_t eax_10 = sub_4f0fc0();
    void var_14c;
    void var_a0;
    sub_4f1a80(g_57bbd0, &var_14c, &var_a0, eax_10, 7, 0);
    int32_t eax_11 = sub_4f0fc0();
    void var_50;
    return sub_4f1a80(g_57bbd0, &var_14c, &var_50, eax_11, 7, 0);
}
