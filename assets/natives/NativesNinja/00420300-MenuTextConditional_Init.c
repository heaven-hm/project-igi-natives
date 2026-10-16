#include "00420300-MenuTextConditional_Init.h"
/* 0x00420300 MenuTextConditional_Init full linked: callers=1 callees=30 */
int32_t* MenuTextConditional_Init()

{
    int32_t var_21c = 0;
    int16_t eax_1 = TaskType_Register("MenuTextConditional", 0x218, Menu_PlayMusic_13(), 0);
    g_53b700 = eax_1;
    QTask_TriggerEvent(eax_1, 1, MenuTextConditional_LoadParameters);
    int32_t eax_2 = sub_4e7530();
    int32_t var_220 = eax_2;
    eax_2 = g_53b700;
    QTask_TriggerEvent(eax_2, var_220, MenuTextConditional_Setup);
    QTask_TriggerEvent(g_53b700, 2, MenuTextConditional_Process);
    QTask_RemoveEventCallback(g_53b700, 0, sub_420550);
    int32_t eax_3 = sub_4f1a60();
    int32_t var_220_1 = eax_3;
    eax_3 = g_53b700;
    QTask_RemoveEventCallback(eax_3, var_220_1, sub_420bb0);
    int32_t eax_4 = sub_4f1a70();
    QTask_RemoveEventCallback(g_53b700, eax_4, MenuTextConditional_Update);
    int32_t eax_5 = Menu_LeaveMenus_14();
    QTask_TriggerEvent(g_53b700, eax_5, MenuText_Update);
    int32_t eax_6 = Menu_RequestScreen_15();
    int32_t var_220_4 = eax_6;
    eax_6 = g_53b700;
    QTask_RemoveEventCallback(eax_6, var_220_4, MenuTextConditional_Action);
    g_57bbec = sub_4f1950(7);
    int32_t eax_8 = sub_4f0fe0();
    void var_218;
    void var_1c4;
    sub_4f1a80(g_57bbec, &var_218, &var_1c4, eax_8, 7, 0);
    int32_t eax_10 = sub_4f0fe0();
    void var_184;
    sub_4f1a80(g_57bbec, &var_218, &var_184, eax_10, 7, 0);
    int32_t eax_12 = sub_4f0fa0();
    void var_100;
    sub_4f1a80(g_57bbec, &var_218, &var_100, eax_12, 7, 0);
    int32_t eax_14 = sub_4f0fc0();
    void var_ac;
    sub_4f1a80(g_57bbec, &var_218, &var_ac, eax_14, 7, 0);
    int32_t eax_16 = sub_4f0fc0();
    void var_5c;
    sub_4f1a80(g_57bbec, &var_218, &var_5c, eax_16, 7, 0);
    int32_t eax_18 = sub_4f0fc0();
    void var_fc;
    sub_4f1a80(g_57bbec, &var_218, &var_fc, eax_18, 7, 0);
    int32_t eax_20 = sub_4f0fe0();
    void var_144;
    return sub_4f1a80(g_57bbec, &var_218, &var_144, eax_20, 7, 0);
}
