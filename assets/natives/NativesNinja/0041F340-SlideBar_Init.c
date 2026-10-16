#include "0041F340-SlideBar_Init.h"
/* 0x0041f340 SlideBar_Init full linked: callers=1 callees=36 */
int32_t* SlideBar_Init()

{
    int32_t var_254 = 0;
    int16_t eax_1 = TaskType_Register("SlideBar", 0x250, Menu_PlayMusic_13(), 0);
    g_53b6bc = eax_1;
    QTask_TriggerEvent(eax_1, 1, SlideBar_LoadParameters);
    int32_t eax_2 = sub_4e7530();
    int32_t var_258 = eax_2;
    eax_2 = g_53b6bc;
    QTask_TriggerEvent(eax_2, var_258, SlideBar_Setup);
    QTask_TriggerEvent(g_53b6bc, 2, SlideBar_Process);
    QTask_RemoveEventCallback(g_53b6bc, 0, SlideBar_Update);
    int32_t eax_3 = sub_4f1a60();
    int32_t var_258_1 = eax_3;
    eax_3 = g_53b6bc;
    QTask_RemoveEventCallback(eax_3, var_258_1, sub_41ff20);
    int32_t eax_4 = sub_4f1a70();
    QTask_RemoveEventCallback(g_53b6bc, eax_4, SlideBar_OnEvent);
    int32_t eax_5 = Menu_HandleInput_13();
    QTask_TriggerEvent(g_53b6bc, eax_5, SlideBar_Action);
    int32_t eax_6 = Menu_RequestScreen_14();
    int32_t var_258_4 = eax_6;
    eax_6 = g_53b6bc;
    QTask_TriggerEvent(eax_6, var_258_4, SlideBar_Cleanup);
    int32_t eax_7 = sub_4f1210();
    QTask_TriggerEvent(g_53b6bc, eax_7, SlideBar_Cleanup_2);
    int32_t eax_8 = sub_4f1220();
    QTask_TriggerEvent(g_53b6bc, eax_8, sub_420140);
    g_57bbe4 = sub_4f1950(8);
    int32_t eax_10 = sub_4f0fe0();
    void var_250;
    void var_1fc;
    sub_4f1a80(g_57bbe4, &var_250, &var_1fc, eax_10, 7, 0);
    int32_t eax_11 = sub_4f1000();
    void var_19c;
    sub_4f1a80(g_57bbe4, &var_250, &var_19c, eax_11, 7, 0);
    int32_t eax_12 = sub_4f0fa0();
    void var_1a4;
    sub_4f1a80(g_57bbe4, &var_250, &var_1a4, eax_12, 7, 0);
    int32_t eax_13 = sub_4f0fc0();
    void var_198;
    sub_4f1a80(g_57bbe4, &var_250, &var_198, eax_13, 7, 0);
    int32_t eax_14 = sub_4f0fc0();
    void var_148;
    sub_4f1a80(g_57bbe4, &var_250, &var_148, eax_14, 7, 0);
    int32_t eax_15 = sub_4f0fc0();
    void var_f8;
    sub_4f1a80(g_57bbe4, &var_250, &var_f8, eax_15, 7, 0);
    int32_t eax_16 = sub_4f0fc0();
    void var_a8;
    sub_4f1a80(g_57bbe4, &var_250, &var_a8, eax_16, 7, 0);
    int32_t eax_17 = sub_4f0fc0();
    void var_58;
    return sub_4f1a80(g_57bbe4, &var_250, &var_58, eax_17, 7, 0);
}
