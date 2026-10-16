#include "0041E690-ListBox_Init.h"
/* 0x0041e690 ListBox_Init full linked: callers=1 callees=34 */
int32_t* ListBox_Init()

{
    int32_t var_d3c = 0;
    int16_t eax_1 = TaskType_Register("ListBox", 0xd38, Menu_PlayMusic_13(), 0);
    g_53b694 = eax_1;
    QTask_TriggerEvent(eax_1, 1, ListBox_LoadParameters);
    int32_t eax_2 = sub_4e7530();
    int32_t var_d40 = eax_2;
    eax_2 = g_53b694;
    QTask_TriggerEvent(eax_2, var_d40, ListBox_Setup);
    QTask_TriggerEvent(g_53b694, 2, ListBox_Process);
    QTask_RemoveEventCallback(g_53b694, 0, sub_41e8c0);
    int32_t eax_3 = sub_4f1a60();
    int32_t var_d40_1 = eax_3;
    eax_3 = g_53b694;
    QTask_RemoveEventCallback(eax_3, var_d40_1, sub_41f020);
    int32_t eax_4 = sub_4f1a70();
    QTask_RemoveEventCallback(g_53b694, eax_4, ListBox_Update);
    int32_t eax_5 = Menu_HandleInput_13();
    QTask_TriggerEvent(g_53b694, eax_5, ListBox_OnEvent);
    int32_t eax_6 = Menu_RequestScreen_14();
    int32_t var_d40_4 = eax_6;
    eax_6 = g_53b694;
    QTask_TriggerEvent(eax_6, var_d40_4, ListBox_Action);
    int32_t eax_7 = sub_4f1210();
    QTask_TriggerEvent(g_53b694, eax_7, ListBox_Cleanup);
    int32_t eax_8 = sub_4f1220();
    QTask_TriggerEvent(g_53b694, eax_8, ListBox_Cleanup_2);
    g_57bbdc = sub_4f1950(7);
    int32_t eax_10 = sub_4f0fe0();
    void var_d38;
    void var_ce4;
    sub_4f1a80(g_57bbdc, &var_d38, &var_ce4, eax_10, 7, 0);
    int32_t eax_11 = sub_4f0fe0();
    void var_ca4;
    sub_4f1a80(g_57bbdc, &var_d38, &var_ca4, eax_11, 7, 0);
    int32_t eax_12 = sub_4f0fa0();
    void var_14c;
    sub_4f1a80(g_57bbdc, &var_d38, &var_14c, eax_12, 7, 0);
    int32_t eax_13 = sub_4f0fc0();
    void var_140;
    sub_4f1a80(g_57bbdc, &var_d38, &var_140, eax_13, 7, 0);
    int32_t eax_14 = sub_4f0fc0();
    void var_f0;
    sub_4f1a80(g_57bbdc, &var_d38, &var_f0, eax_14, 7, 0);
    int32_t eax_15 = sub_4f0fc0();
    void var_a0;
    sub_4f1a80(g_57bbdc, &var_d38, &var_a0, eax_15, 7, 0);
    int32_t eax_16 = sub_4f0fc0();
    void var_50;
    return sub_4f1a80(g_57bbdc, &var_d38, &var_50, eax_16, 7, 0);
}
