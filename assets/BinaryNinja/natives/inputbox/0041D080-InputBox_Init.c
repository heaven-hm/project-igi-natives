// Original IGI.EXE function: InputBox_Init (VA 0x0041D080; static CFG gate PASS, CFG score 1.000).
#include "InputBox_Init.h"
int32_t* InputBox_Init()

{
    int32_t item_1ac = 0;
    int16_t data_1 = TaskType_Register("InputBox", 0x1a8, Menu_PlayMusic_13(), 0);
    g_53b640 = data_1;
    QTask_TriggerEvent(data_1, 1, sub_41d450);
    int32_t data_2 = StatusScreen_GetEvent();
    int32_t item_1b0 = data_2;
    data_2 = g_53b640;
    QTask_TriggerEvent(data_2, item_1b0, InputBox_LoadParameters);
    QTask_TriggerEvent(g_53b640, 2, InputBox_Setup);
    QTask_RemoveEventCallback(g_53b640, 0, sub_41d290);
    int32_t data_3 = Script_ParseEnumInt32_8();
    int32_t item_1b0_1 = data_3;
    data_3 = g_53b640;
    QTask_RemoveEventCallback(data_3, item_1b0_1, sub_41d9d0);
    int32_t data_4 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_53b640, data_4, InputBox_Process);
    int32_t data_5 = Menu_HandleInput_13();
    QTask_TriggerEvent(g_53b640, data_5, InputBox_Update);
    int32_t data_6 = Menu_RequestScreen_14();
    int32_t item_1b0_4 = data_6;
    data_6 = g_53b640;
    QTask_TriggerEvent(data_6, item_1b0_4, InputBox_OnEvent);
    int32_t data_7 = Script_FormatString_5();
    QTask_TriggerEvent(g_53b640, data_7, InputBox_Action);
    int32_t data_8 = Script_SpawnNewTask_6();
    QTask_TriggerEvent(g_53b640, data_8, InputBox_Cleanup);
    g_57bbc4 = Script_EvaluateCondition_7(6);
    int32_t data_10 = Script_ParseEnumString_3();
    void item_1a8;
    void item_180;
    Script_UndefinedParameterTy(g_57bbc4, &item_1a8, &item_180, data_10, 7, 0);
    int32_t data_11 = Script_ParseEnumString_3();
    void item_4;
    Script_UndefinedParameterTy(g_57bbc4, &item_1a8, &item_4, data_11, 7, 0);
    int32_t data_12 = Script_CallNativeHandler_3();
    void item_104;
    Script_UndefinedParameterTy(g_57bbc4, &item_1a8, &item_104, data_12, 7, 0);
    int32_t data_13 = Script_CallNativeHandler_3();
    void item_b4;
    Script_UndefinedParameterTy(g_57bbc4, &item_1a8, &item_b4, data_13, 7, 0);
    int32_t data_14 = Script_CallNativeHandler_3();
    void item_64;
    Script_UndefinedParameterTy(g_57bbc4, &item_1a8, &item_64, data_14, 7, 0);
    int32_t data_15 = Script_ParseEnumInt32_4();
    void item_12;
    return Script_UndefinedParameterTy(g_57bbc4, &item_1a8, &item_12, data_15, 7, 0);
}
