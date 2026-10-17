// Original IGI.EXE function: ToggleBox_Init (VA 0x0041DC50; static CFG gate PASS, CFG score 1.000).
#include "ToggleBox_Init.h"
int32_t* ToggleBox_Init()

{
    int32_t item_150 = 0;
    int16_t data_1 = TaskType_Register("ToggleBox", 0x14c, Menu_PlayMusic_13(), 0);
    g_53b674 = data_1;
    QTask_TriggerEvent(data_1, 1, ToggleBox_LoadParameters);
    int32_t data_2 = StatusScreen_GetEvent();
    int32_t item_154 = data_2;
    data_2 = g_53b674;
    QTask_TriggerEvent(data_2, item_154, ToggleBox_Setup);
    QTask_TriggerEvent(g_53b674, 2, ToggleBox_Process);
    QTask_RemoveEventCallback(g_53b674, 0, sub_41ddd0);
    int32_t data_3 = Script_ParseEnumInt32_8();
    int32_t item_154_1 = data_3;
    data_3 = g_53b674;
    QTask_RemoveEventCallback(data_3, item_154_1, sub_41e410);
    int32_t data_4 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_53b674, data_4, sub_41df30);
    int32_t data_5 = Menu_HandleInput_13();
    QTask_TriggerEvent(g_53b674, data_5, sub_41e420);
    int32_t data_6 = Menu_RequestScreen_14();
    int32_t item_154_4 = data_6;
    data_6 = g_53b674;
    QTask_TriggerEvent(data_6, item_154_4, ToggleBox_Update);
    int32_t data_7 = Script_FormatString_5();
    QTask_TriggerEvent(g_53b674, data_7, ToggleBox_OnEvent);
    int32_t data_8 = Script_SpawnNewTask_6();
    QTask_TriggerEvent(g_53b674, data_8, ToggleBox_Action);
    g_57bbd0 = Script_EvaluateCondition_7(2);
    int32_t data_10 = Script_CallNativeHandler_3();
    void item_14c;
    void item_a0;
    Script_UndefinedParameterTy(g_57bbd0, &item_14c, &item_a0, data_10, 7, 0);
    int32_t data_11 = Script_CallNativeHandler_3();
    void item_50;
    return Script_UndefinedParameterTy(g_57bbd0, &item_14c, &item_50, data_11, 7, 0);
}
