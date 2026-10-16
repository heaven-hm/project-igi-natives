#include "00421750-MenuScreen_Init.h"
/* 0x00421750 MenuScreen_Init full linked: callers=1 callees=36 */
int32_t* MenuScreen_Init()

{
    int32_t var_1a8 = 0;
    int16_t eax_1 = TaskType_Register("MenuScreen", 0x1a4, Menu_PlayMusic_13(), 0);
    g_53b800 = eax_1;
    QTask_TriggerEvent(eax_1, 1, MenuScreen_LoadParameters);
    int32_t eax_2 = sub_4e7530();
    int32_t var_1ac = eax_2;
    eax_2 = g_53b800;
    QTask_TriggerEvent(eax_2, var_1ac, sub_421c20);
    QTask_RemoveEventCallback(g_53b800, 0, sub_4219b0);
    QTask_TriggerEvent(g_53b800, 2, MenuScreen_Setup);
    int32_t eax_3 = sub_4f1a60();
    int32_t var_1ac_1 = eax_3;
    eax_3 = g_53b800;
    QTask_RemoveEventCallback(eax_3, var_1ac_1, sub_422180);
    int32_t eax_4 = sub_4f1a70();
    QTask_RemoveEventCallback(g_53b800, eax_4, MenuScreen_Process);
    int32_t eax_5 = sub_4f1210();
    QTask_TriggerEvent(g_53b800, eax_5, MenuScreen_Update);
    int32_t eax_6 = sub_4f1220();
    int32_t var_1ac_4 = eax_6;
    eax_6 = g_53b800;
    QTask_TriggerEvent(eax_6, var_1ac_4, MenuScreen_OnEvent);
    int32_t eax_7 = Menu_HandleInput_13();
    QTask_TriggerEvent(g_53b800, eax_7, MenuScreen_Action);
    int32_t eax_8 = Menu_RequestScreen_14();
    QTask_TriggerEvent(g_53b800, eax_8, MenuScreen_Cleanup);
    g_57bc04 = sub_4f1950(8);
    int32_t eax_10 = sub_4f0fe0();
    void var_1a4;
    void var_150;
    sub_4f1a80(g_57bc04, &var_1a4, &var_150, eax_10, 7, 0);
    int32_t eax_11 = sub_4f0fa0();
    void var_108;
    sub_4f1a80(g_57bc04, &var_1a4, &var_108, eax_11, 7, 0);
    int32_t eax_12 = sub_4f0fa0();
    void var_100;
    sub_4f1a80(g_57bc04, &var_1a4, &var_100, eax_12, 7, 0);
    int32_t eax_13 = sub_4f0fa0();
    void var_104;
    sub_4f1a80(g_57bc04, &var_1a4, &var_104, eax_13, 7, 0);
    int32_t eax_14 = sub_4f0fa0();
    void var_fc;
    sub_4f1a80(g_57bc04, &var_1a4, &var_fc, eax_14, 7, 0);
    int32_t eax_15 = sub_4f0fc0();
    void var_f8;
    sub_4f1a80(g_57bc04, &var_1a4, &var_f8, eax_15, 7, 0);
    int32_t eax_16 = sub_4f0fc0();
    void var_a8;
    sub_4f1a80(g_57bc04, &var_1a4, &var_a8, eax_16, 7, 0);
    int32_t eax_17 = sub_4f0fc0();
    void var_58;
    return sub_4f1a80(g_57bc04, &var_1a4, &var_58, eax_17, 7, 0);
}
