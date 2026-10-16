#include "0041AAF0-TextBox_Init.h"
/* 0x0041aaf0 TextBox_Init full linked: callers=1 callees=27 */
❓  int32_t* TextBox_Init()
// This function has unresolved stack usage. View graph of stack usage to resolve.

{
    sub_4a54a0(0x2244);
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("TextBox", 0x2244, Menu_PlayMusic_13(), 0);
    g_53b580 = eax_1;
    QTask_TriggerEvent(eax_1, 1, TextBox_LoadParameters);
    int32_t eax_2 = sub_4e7530();
    int32_t var_8 = eax_2;
    eax_2 = g_53b580;
    QTask_TriggerEvent(eax_2, var_8, TextBox_Setup);
    QTask_TriggerEvent(g_53b580, 2, TextBox_Process);
    int32_t eax_3 = Menu_HandleInput_13();
    QTask_TriggerEvent(g_53b580, eax_3, TextBox_Update);
    int32_t eax_4 = Menu_RequestScreen_14();
    int32_t var_8_2 = eax_4;
    eax_4 = g_53b580;
    QTask_TriggerEvent(eax_4, var_8_2, sub_41a120);
    QTask_RemoveEventCallback(g_53b580, 0, sub_41aca0);
    int32_t eax_5 = sub_4f1a60();
    QTask_RemoveEventCallback(g_53b580, eax_5, sub_41b160);
    int32_t eax_6 = sub_4f1a70();
    int32_t var_8_4 = eax_6;
    eax_6 = g_53b580;
    QTask_RemoveEventCallback(eax_6, var_8_4, TextBox_OnEvent);
    g_57bb98 = sub_4f1950(5);
    int32_t eax_8 = sub_4f0fe0();
    void arg_54;
    sub_4f1a80(g_57bb98, &__return_addr, &arg_54, eax_8, 7, 0);
    int32_t eax_10 = sub_4f0fa0();
    void arg_28;
    sub_4f1a80(g_57bb98, &__return_addr, &arg_28, eax_10, 7, 0);
    int32_t eax_12 = sub_4f0fa0();
    void arg_2c;
    sub_4f1a80(g_57bb98, &__return_addr, &arg_2c, eax_12, 7, 0);
    int32_t eax_14 = sub_4f0fc0();
    void arg_21a4;
    sub_4f1a80(g_57bb98, &__return_addr, &arg_21a4, eax_14, 7, 0);
    int32_t eax_16 = sub_4f0fc0();
    void arg_21f4;
    return sub_4f1a80(g_57bb98, &__return_addr, &arg_21f4, eax_16, 7, 0);
}
