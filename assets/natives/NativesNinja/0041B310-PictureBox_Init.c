#include "0041B310-PictureBox_Init.h"
/* 0x0041b310 PictureBox_Init full linked: callers=1 callees=24 */
int32_t* PictureBox_Init()

{
    int32_t var_a00 = 0;
    int16_t eax_1 = TaskType_Register("PictureBox", 0x9fc, Menu_PlayMusic_13(), 0);
    g_53b58c = eax_1;
    QTask_TriggerEvent(eax_1, 1, PictureBox_LoadParameters);
    int32_t eax_2 = sub_4e7530();
    int32_t var_a04 = eax_2;
    eax_2 = g_53b58c;
    QTask_TriggerEvent(eax_2, var_a04, PictureBox_Setup);
    QTask_TriggerEvent(g_53b58c, 2, PictureBox_Process);
    QTask_RemoveEventCallback(g_53b58c, 0, sub_41b490);
    int32_t eax_3 = sub_4f1a60();
    int32_t var_a04_1 = eax_3;
    eax_3 = g_53b58c;
    QTask_RemoveEventCallback(eax_3, var_a04_1, sub_41b830);
    int32_t eax_4 = sub_4f1a70();
    QTask_RemoveEventCallback(g_53b58c, eax_4, PictureBox_Update);
    int32_t eax_5 = Menu_HandleInput_13();
    QTask_TriggerEvent(g_53b58c, eax_5, PictureBox_OnEvent);
    int32_t eax_6 = Menu_RequestScreen_14();
    int32_t var_a04_4 = eax_6;
    eax_6 = g_53b58c;
    QTask_TriggerEvent(eax_6, var_a04_4, sub_41a120);
    g_57bba8 = sub_4f1950(4);
    int32_t eax_8 = sub_4f0fa0();
    void var_9fc;
    void var_9d4;
    sub_4f1a80(g_57bba8, &var_9fc, &var_9d4, eax_8, 7, 0);
    int32_t eax_10 = sub_4f0fa0();
    void var_9d0;
    sub_4f1a80(g_57bba8, &var_9fc, &var_9d0, eax_10, 7, 0);
    int32_t eax_12 = sub_4f0fc0();
    void var_a0;
    sub_4f1a80(g_57bba8, &var_9fc, &var_a0, eax_12, 7, 0);
    int32_t eax_14 = sub_4f0fc0();
    void var_50;
    return sub_4f1a80(g_57bba8, &var_9fc, &var_50, eax_14, 7, 0);
}
