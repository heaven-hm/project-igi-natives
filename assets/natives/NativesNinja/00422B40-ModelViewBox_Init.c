#include "00422B40-ModelViewBox_Init.h"
/* 0x00422b40 ModelViewBox_Init full linked: callers=1 callees=20 */
int32_t* ModelViewBox_Init()

{
    int32_t var_cc = 0;
    int16_t eax_1 = TaskType_Register("ModelViewBox", 0xc8, Menu_PlayMusic_13(), 0);
    g_53b854 = eax_1;
    QTask_TriggerEvent(eax_1, 1, sub_422f10);
    int32_t eax_2 = sub_4e7530();
    int32_t var_d0 = eax_2;
    eax_2 = g_53b854;
    QTask_TriggerEvent(eax_2, var_d0, ModelViewBox_LoadParameters);
    QTask_TriggerEvent(g_53b854, 2, ModelViewBox_Setup);
    QTask_RemoveEventCallback(g_53b854, 0, ModelViewBox_Process);
    int32_t eax_3 = sub_4f1a60();
    int32_t var_d0_1 = eax_3;
    eax_3 = g_53b854;
    QTask_RemoveEventCallback(eax_3, var_d0_1, sub_422fb0);
    int32_t eax_4 = sub_4f1a70();
    QTask_RemoveEventCallback(g_53b854, eax_4, ModelViewBox_Update);
    int32_t eax_5 = sub_4f1210();
    QTask_TriggerEvent(g_53b854, eax_5, sub_422fc0);
    int32_t eax_6 = sub_4f1220();
    int32_t var_d0_4 = eax_6;
    eax_6 = g_53b854;
    QTask_TriggerEvent(eax_6, var_d0_4, ModelViewBox_OnEvent);
    g_57bc30 = 0;
    g_57bc34 = 0x280;
    g_57bc28 = sub_4f1950(2);
    int32_t eax_8 = sub_4f0fa0();
    void var_c8;
    void var_a0;
    sub_4f1a80(g_57bc28, &var_c8, &var_a0, eax_8, 7, &g_57bc30);
    int32_t eax_10 = sub_4f0fa0();
    void var_9c;
    return sub_4f1a80(g_57bc28, &var_c8, &var_9c, eax_10, 7, &g_57bc30);
}
