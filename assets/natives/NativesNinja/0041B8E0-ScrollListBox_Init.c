#include "0041B8E0-ScrollListBox_Init.h"
/* 0x0041b8e0 ScrollListBox_Init full linked: callers=1 callees=35 */
❓  int32_t* ScrollListBox_Init()
// This function has unresolved stack usage. View graph of stack usage to resolve.

{
    sub_4a54a0(0x13fc);
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("ScrollListBox", 0x13fc, Menu_PlayMusic_13(), 0);
    g_53b59c = eax_1;
    QTask_TriggerEvent(eax_1, 1, ScrollListBox_LoadParameters);
    int32_t eax_2 = sub_4e7530();
    int32_t var_8 = eax_2;
    eax_2 = g_53b59c;
    QTask_TriggerEvent(eax_2, var_8, ScrollListBox_Setup);
    QTask_TriggerEvent(g_53b59c, 2, ScrollListBox_Process);
    QTask_RemoveEventCallback(g_53b59c, 0, sub_41bb10);
    int32_t eax_3 = sub_4f1a60();
    int32_t var_8_1 = eax_3;
    eax_3 = g_53b59c;
    QTask_RemoveEventCallback(eax_3, var_8_1, sub_41c300);
    int32_t eax_4 = sub_4f1a70();
    QTask_RemoveEventCallback(g_53b59c, eax_4, sub_41bca0);
    int32_t eax_5 = Menu_HandleInput_13();
    QTask_TriggerEvent(g_53b59c, eax_5, ScrollListBox_Update);
    int32_t eax_6 = Menu_RequestScreen_14();
    int32_t var_8_4 = eax_6;
    eax_6 = g_53b59c;
    QTask_TriggerEvent(eax_6, var_8_4, ScrollListBox_OnEvent);
    int32_t eax_7 = sub_4f1210();
    QTask_TriggerEvent(g_53b59c, eax_7, ScrollListBox_Action);
    int32_t eax_8 = sub_4f1220();
    QTask_TriggerEvent(g_53b59c, eax_8, ScrollListBox_Cleanup);
    g_57bbb4 = sub_4f1950(7);
    int32_t eax_10 = sub_4f0fe0();
    void arg_125c;
    sub_4f1a80(g_57bbb4, &__return_addr, &arg_125c, eax_10, 7, 0);
    int32_t eax_11 = sub_4f0fc0();
    void arg_12b0;
    sub_4f1a80(g_57bbb4, &__return_addr, &arg_12b0, eax_11, 7, 0);
    int32_t eax_12 = sub_4f0fc0();
    void arg_1300;
    sub_4f1a80(g_57bbb4, &__return_addr, &arg_1300, eax_12, 7, 0);
    int32_t eax_13 = sub_4f0fc0();
    void arg_1350;
    sub_4f1a80(g_57bbb4, &__return_addr, &arg_1350, eax_13, 7, 0);
    int32_t eax_14 = sub_4f0fa0();
    void arg_28;
    sub_4f1a80(g_57bbb4, &__return_addr, &arg_28, eax_14, 7, 0);
    int32_t eax_15 = sub_4f0fa0();
    void arg_2c;
    sub_4f1a80(g_57bbb4, &__return_addr, &arg_2c, eax_15, 7, 0);
    int32_t eax_16 = sub_4f0fc0();
    void arg_13a0;
    return sub_4f1a80(g_57bbb4, &__return_addr, &arg_13a0, eax_16, 7, 0);
}
