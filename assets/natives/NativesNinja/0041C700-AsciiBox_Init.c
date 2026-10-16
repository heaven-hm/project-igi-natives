#include "0041C700-AsciiBox_Init.h"
/* 0x0041c700 AsciiBox_Init full linked: callers=1 callees=30 */
int32_t* AsciiBox_Init()

{
    int32_t var_fc = 0;
    int16_t eax_1 = TaskType_Register("AsciiBox", 0xf8, Menu_PlayMusic_13(), 0);
    g_53b5f4 = eax_1;
    QTask_TriggerEvent(eax_1, 1, AsciiBox_LoadParameters);
    int32_t eax_2 = sub_4e7530();
    int32_t var_100 = eax_2;
    eax_2 = g_53b5f4;
    QTask_TriggerEvent(eax_2, var_100, AsciiBox_Setup);
    QTask_TriggerEvent(g_53b5f4, 2, AsciiBox_Process);
    QTask_RemoveEventCallback(g_53b5f4, 0, sub_41c8d0);
    int32_t eax_3 = sub_4f1a60();
    int32_t var_100_1 = eax_3;
    eax_3 = g_53b5f4;
    QTask_RemoveEventCallback(eax_3, var_100_1, sub_41d000);
    int32_t eax_4 = sub_4f1a70();
    QTask_RemoveEventCallback(g_53b5f4, eax_4, sub_41cc40);
    int32_t eax_5 = Menu_HandleInput_13();
    QTask_TriggerEvent(g_53b5f4, eax_5, sub_424300);
    int32_t eax_6 = Menu_RequestScreen_14();
    int32_t var_100_4 = eax_6;
    eax_6 = g_53b5f4;
    QTask_TriggerEvent(eax_6, var_100_4, sub_41a120);
    int32_t eax_7 = sub_4f1210();
    QTask_TriggerEvent(g_53b5f4, eax_7, sub_41d010);
    int32_t eax_8 = sub_4f1220();
    QTask_TriggerEvent(g_53b5f4, eax_8, sub_41d030);
    int32_t eax_9 = Menu_LeaveMenus_14();
    int32_t var_100_7 = eax_9;
    eax_9 = g_53b5f4;
    QTask_TriggerEvent(eax_9, var_100_7, AsciiBox_Update);
    g_57bbbc = sub_4f1950(4);
    int32_t eax_11 = sub_4f0fe0();
    void var_f8;
    void var_a4;
    sub_4f1a80(g_57bbbc, &var_f8, &var_a4, eax_11, 7, 0);
    int32_t eax_13 = sub_4f0fe0();
    void var_64;
    sub_4f1a80(g_57bbbc, &var_f8, &var_64, eax_13, 7, 0);
    int32_t eax_15 = sub_4f0fa0();
    void var_d0;
    sub_4f1a80(g_57bbbc, &var_f8, &var_d0, eax_15, 7, 0);
    int32_t eax_17 = sub_4f0fa0();
    void var_cc;
    return sub_4f1a80(g_57bbbc, &var_f8, &var_cc, eax_17, 7, 0);
}
