#include "0041D080-InputBox_Init.h"
/* 0x0041d080 InputBox_Init full linked: callers=1 callees=32 */
int32_t* InputBox_Init()

{
    int32_t var_1ac = 0;
    int16_t eax_1 = TaskType_Register("InputBox", 0x1a8, Menu_PlayMusic_13(), 0);
    g_53b640 = eax_1;
    QTask_TriggerEvent(eax_1, 1, sub_41d450);
    int32_t eax_2 = sub_4e7530();
    int32_t var_1b0 = eax_2;
    eax_2 = g_53b640;
    QTask_TriggerEvent(eax_2, var_1b0, InputBox_LoadParameters);
    QTask_TriggerEvent(g_53b640, 2, InputBox_Setup);
    QTask_RemoveEventCallback(g_53b640, 0, sub_41d290);
    int32_t eax_3 = sub_4f1a60();
    int32_t var_1b0_1 = eax_3;
    eax_3 = g_53b640;
    QTask_RemoveEventCallback(eax_3, var_1b0_1, sub_41d9d0);
    int32_t eax_4 = sub_4f1a70();
    QTask_RemoveEventCallback(g_53b640, eax_4, InputBox_Process);
    int32_t eax_5 = Menu_HandleInput_13();
    QTask_TriggerEvent(g_53b640, eax_5, InputBox_Update);
    int32_t eax_6 = Menu_RequestScreen_14();
    int32_t var_1b0_4 = eax_6;
    eax_6 = g_53b640;
    QTask_TriggerEvent(eax_6, var_1b0_4, InputBox_OnEvent);
    int32_t eax_7 = sub_4f1210();
    QTask_TriggerEvent(g_53b640, eax_7, InputBox_Action);
    int32_t eax_8 = sub_4f1220();
    QTask_TriggerEvent(g_53b640, eax_8, InputBox_Cleanup);
    g_57bbc4 = sub_4f1950(6);
    int32_t eax_10 = sub_4f0fa0();
    void var_1a8;
    void var_180;
    sub_4f1a80(g_57bbc4, &var_1a8, &var_180, eax_10, 7, 0);
    int32_t eax_11 = sub_4f0fa0();
    void var_4;
    sub_4f1a80(g_57bbc4, &var_1a8, &var_4, eax_11, 7, 0);
    int32_t eax_12 = sub_4f0fc0();
    void var_104;
    sub_4f1a80(g_57bbc4, &var_1a8, &var_104, eax_12, 7, 0);
    int32_t eax_13 = sub_4f0fc0();
    void var_b4;
    sub_4f1a80(g_57bbc4, &var_1a8, &var_b4, eax_13, 7, 0);
    int32_t eax_14 = sub_4f0fc0();
    void var_64;
    sub_4f1a80(g_57bbc4, &var_1a8, &var_64, eax_14, 7, 0);
    int32_t eax_15 = sub_4f1000();
    void var_12;
    return sub_4f1a80(g_57bbc4, &var_1a8, &var_12, eax_15, 7, 0);
}
