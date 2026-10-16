#include "004223D0-MenuFrame_Init.h"
/* 0x004223d0 MenuFrame_Init full linked: callers=1 callees=30 */
int32_t* MenuFrame_Init()

{
    g_57bc18 = 0;
    g_57bc1c = 0x280;
    int32_t var_b8 = 0;
    int16_t eax_1 = TaskType_Register("MenuFrame", 0xb4, Menu_PlayMusic_13(), 0);
    g_53b838 = eax_1;
    QTask_TriggerEvent(eax_1, 1, MenuFrame_LoadParameters);
    int32_t eax_2 = sub_4e7530();
    int32_t var_bc = eax_2;
    eax_2 = g_53b838;
    QTask_TriggerEvent(eax_2, var_bc, MenuFrame_Setup);
    QTask_TriggerEvent(g_53b838, 2, sub_4d3710);
    QTask_RemoveEventCallback(g_53b838, 0, MenuFrame_Update);
    int32_t eax_3 = sub_4f1a60();
    int32_t var_bc_1 = eax_3;
    eax_3 = g_53b838;
    QTask_RemoveEventCallback(eax_3, var_bc_1, sub_422b00);
    int32_t eax_4 = sub_4f1a70();
    QTask_RemoveEventCallback(g_53b838, eax_4, MenuFrame_OnEvent);
    g_57bc10 = sub_4f1950(9);
    int32_t eax_6 = sub_4f0fe0();
    void var_b4;
    void var_60;
    sub_4f1a80(g_57bc10, &var_b4, &var_60, eax_6, 7, 0);
    int32_t eax_7 = sub_4f0fa0();
    void var_94;
    sub_4f1a80(g_57bc10, &var_b4, &var_94, eax_7, 7, &g_57bc18);
    int32_t eax_8 = sub_4f0fa0();
    void var_90;
    sub_4f1a80(g_57bc10, &var_b4, &var_90, eax_8, 7, &g_57bc18);
    int32_t eax_9 = sub_4f0fa0();
    void var_8c;
    sub_4f1a80(g_57bc10, &var_b4, &var_8c, eax_9, 7, &g_57bc18);
    int32_t eax_10 = sub_4f0fa0();
    void var_88;
    sub_4f1a80(g_57bc10, &var_b4, &var_88, eax_10, 7, &g_57bc18);
    int32_t eax_11 = sub_4f0fa0();
    void var_7c;
    sub_4f1a80(g_57bc10, &var_b4, &var_7c, eax_11, 7, 0);
    int32_t eax_12 = sub_4f0fb0();
    void var_84;
    sub_4f1a80(g_57bc10, &var_b4, &var_84, eax_12, 7, 0);
    int32_t eax_13 = sub_4f0fb0();
    void var_80;
    sub_4f1a80(g_57bc10, &var_b4, &var_80, eax_13, 7, 0);
    int32_t eax_14 = sub_4f1000();
    void var_68;
    return sub_4f1a80(g_57bc10, &var_b4, &var_68, eax_14, 7, 0);
}
