// Original IGI.EXE function: TextBox_Init (VA 0x0041AAF0; static CFG gate PASS, CFG score 1.000).
#include "TextBox_Init.h"
❓  int32_t* TextBox_Init()
// This function has unresolved stack usage. View graph of stack usage to resolve.

{
    Camera_UpdateTransform_5(0x2244);
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("TextBox", 0x2244, Menu_PlayMusic_13(), 0);
    g_53b580 = data_1;
    QTask_TriggerEvent(data_1, 1, TextBox_LoadParameters);
    int32_t data_2 = StatusScreen_GetEvent();
    int32_t item_8 = data_2;
    data_2 = g_53b580;
    QTask_TriggerEvent(data_2, item_8, TextBox_Setup);
    QTask_TriggerEvent(g_53b580, 2, TextBox_Process);
    int32_t data_3 = Menu_HandleInput_13();
    QTask_TriggerEvent(g_53b580, data_3, TextBox_Update);
    int32_t data_4 = Menu_RequestScreen_14();
    int32_t item_8_2 = data_4;
    data_4 = g_53b580;
    QTask_TriggerEvent(data_4, item_8_2, sub_41a120);
    QTask_RemoveEventCallback(g_53b580, 0, sub_41aca0);
    int32_t data_5 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_53b580, data_5, sub_41b160);
    int32_t data_6 = Script_ParseEnumReal32_8();
    int32_t item_8_4 = data_6;
    data_6 = g_53b580;
    QTask_RemoveEventCallback(data_6, item_8_4, TextBox_OnEvent);
    g_57bb98 = Script_EvaluateCondition_7(5);
    int32_t data_8 = Script_FormatString_3();
    void arg_54;
    Script_UndefinedParameterTy(g_57bb98, &return_addr, &arg_54, data_8, 7, 0);
    int32_t data_10 = Script_ParseEnumString_3();
    void arg_28;
    Script_UndefinedParameterTy(g_57bb98, &return_addr, &arg_28, data_10, 7, 0);
    int32_t data_12 = Script_ParseEnumString_3();
    void arg_2c;
    Script_UndefinedParameterTy(g_57bb98, &return_addr, &arg_2c, data_12, 7, 0);
    int32_t data_14 = Script_CallNativeHandler_3();
    void arg_21a4;
    Script_UndefinedParameterTy(g_57bb98, &return_addr, &arg_21a4, data_14, 7, 0);
    int32_t data_16 = Script_CallNativeHandler_3();
    void arg_21f4;
    return Script_UndefinedParameterTy(g_57bb98, &return_addr, &arg_21f4, data_16, 7, 0);
}
