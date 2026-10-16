#include "0041A1E0-TypeWriterBox_Init.h"
/* 0x0041a1e0 TypeWriterBox_Init full linked: callers=1 callees=26 */
int32_t* TypeWriterBox_Init()

{
    int32_t var_8c = 0;
    int16_t eax_1 = TaskType_Register("TypeWriterBox", 0x88, Menu_PlayMusic_13(), 0);
    g_539c40 = eax_1;
    QTask_TriggerEvent(eax_1, 1, sub_41a600);
    int32_t eax_2 = sub_4e7530();
    int32_t var_90 = eax_2;
    eax_2 = g_539c40;
    QTask_TriggerEvent(eax_2, var_90, TypeWriterBox_LoadParameters);
    QTask_TriggerEvent(g_539c40, 2, TypeWriterBox_Setup);
    QTask_RemoveEventCallback(g_539c40, 0, sub_41a370);
    int32_t eax_3 = sub_4f1a60();
    int32_t var_90_1 = eax_3;
    eax_3 = g_539c40;
    QTask_RemoveEventCallback(eax_3, var_90_1, sub_41a9e0);
    int32_t eax_4 = sub_4f1a70();
    QTask_RemoveEventCallback(g_539c40, eax_4, TypeWriterBox_Process);
    int32_t eax_5 = Menu_HandleInput_13();
    QTask_TriggerEvent(g_539c40, eax_5, TypeWriterBox_Update);
    int32_t eax_6 = Menu_RequestScreen_14();
    int32_t var_90_4 = eax_6;
    eax_6 = g_539c40;
    QTask_TriggerEvent(eax_6, var_90_4, sub_41a120);
    int32_t eax_7 = sub_4f1210();
    QTask_TriggerEvent(g_539c40, eax_7, sub_41aa80);
    int32_t eax_8 = sub_4f1220();
    QTask_TriggerEvent(g_539c40, eax_8, sub_41aaa0);
    int32_t eax_9 = Menu_LeaveMenus_14();
    int32_t var_90_7 = eax_9;
    eax_9 = g_539c40;
    QTask_TriggerEvent(eax_9, var_90_7, sub_41a410);
    g_57bb90 = sub_4f1950(2);
    int32_t eax_11 = sub_4f0fa0();
    void var_88;
    void var_60;
    sub_4f1a80(g_57bb90, &var_88, &var_60, eax_11, 7, 0);
    int32_t eax_13 = sub_4f0fa0();
    void var_5c;
    return sub_4f1a80(g_57bb90, &var_88, &var_5c, eax_13, 7, 0);
}
