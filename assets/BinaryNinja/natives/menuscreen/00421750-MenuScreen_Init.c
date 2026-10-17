// Original IGI.EXE function: MenuScreen_Init (VA 0x00421750; static CFG gate PASS, CFG score 1.000).
#include "MenuScreen_Init.h"
int32_t* MenuScreen_Init()

{
    int32_t item_1a8 = 0;
    int16_t data_1 = TaskType_Register("MenuScreen", 0x1a4, Menu_PlayMusic_13(), 0);
    g_53b800 = data_1;
    QTask_TriggerEvent(data_1, 1, MenuScreen_LoadParameters);
    int32_t data_2 = StatusScreen_GetEvent();
    int32_t item_1ac = data_2;
    data_2 = g_53b800;
    QTask_TriggerEvent(data_2, item_1ac, sub_421c20);
    QTask_RemoveEventCallback(g_53b800, 0, sub_4219b0);
    QTask_TriggerEvent(g_53b800, 2, MenuScreen_Setup);
    int32_t data_3 = Script_ParseEnumInt32_8();
    int32_t item_1ac_1 = data_3;
    data_3 = g_53b800;
    QTask_RemoveEventCallback(data_3, item_1ac_1, sub_422180);
    int32_t data_4 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_53b800, data_4, MenuScreen_Process);
    int32_t data_5 = Script_FormatString_5();
    QTask_TriggerEvent(g_53b800, data_5, MenuScreen_Update);
    int32_t data_6 = Script_SpawnNewTask_6();
    int32_t item_1ac_4 = data_6;
    data_6 = g_53b800;
    QTask_TriggerEvent(data_6, item_1ac_4, MenuScreen_OnEvent);
    int32_t data_7 = Menu_HandleInput_13();
    QTask_TriggerEvent(g_53b800, data_7, MenuScreen_Action);
    int32_t data_8 = Menu_RequestScreen_14();
    QTask_TriggerEvent(g_53b800, data_8, MenuScreen_Cleanup);
    g_57bc04 = Script_EvaluateCondition_7(8);
    int32_t data_10 = Script_FormatString_3();
    void item_1a4;
    void item_150;
    Script_UndefinedParameterTy(g_57bc04, &item_1a4, &item_150, data_10, 7, 0);
    int32_t data_11 = Script_ParseEnumString_3();
    void item_108;
    Script_UndefinedParameterTy(g_57bc04, &item_1a4, &item_108, data_11, 7, 0);
    int32_t data_12 = Script_ParseEnumString_3();
    void item_100;
    Script_UndefinedParameterTy(g_57bc04, &item_1a4, &item_100, data_12, 7, 0);
    int32_t data_13 = Script_ParseEnumString_3();
    void item_104;
    Script_UndefinedParameterTy(g_57bc04, &item_1a4, &item_104, data_13, 7, 0);
    int32_t data_14 = Script_ParseEnumString_3();
    void item_fc;
    Script_UndefinedParameterTy(g_57bc04, &item_1a4, &item_fc, data_14, 7, 0);
    int32_t data_15 = Script_CallNativeHandler_3();
    void item_f8;
    Script_UndefinedParameterTy(g_57bc04, &item_1a4, &item_f8, data_15, 7, 0);
    int32_t data_16 = Script_CallNativeHandler_3();
    void item_a8;
    Script_UndefinedParameterTy(g_57bc04, &item_1a4, &item_a8, data_16, 7, 0);
    int32_t data_17 = Script_CallNativeHandler_3();
    void item_58;
    return Script_UndefinedParameterTy(g_57bc04, &item_1a4, &item_58, data_17, 7, 0);
}
