#include "gi_platform.h"
#include "0041AAF0-TextBox_Init.h"
  int32_t* TextBox_Init()
// This function has unresolved stack usage. View graph of stack usage to resolve.

{
    Camera_UpdateTransform_5(0x2244);
    int32_t v_4 = 0;
    int16_t valA1 = TaskType_Register("TextBox", 0x2244, Menu_PlayMusic_13(), 0);
    g_53b580 = valA1;
    QTask_TriggerEvent(valA1, 1, TextBox_LoadParameters);
    int32_t valA2 = StatusScreen_GetEvent();
    int32_t v_8 = valA2;
    valA2 = g_53b580;
    QTask_TriggerEvent(valA2, v_8, TextBox_Setup);
    QTask_TriggerEvent(g_53b580, 2, TextBox_Process);
    int32_t valA3 = Menu_HandleInput_13();
    QTask_TriggerEvent(g_53b580, valA3, TextBox_Update);
    int32_t valA4 = Menu_RequestScreen_14();
    int32_t v_8_2 = valA4;
    valA4 = g_53b580;
    QTask_TriggerEvent(valA4, v_8_2, sub_41a120);
    QTask_RemoveEventCallback(g_53b580, 0, sub_41aca0);
    int32_t valA5 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_53b580, valA5, sub_41b160);
    int32_t valA6 = Script_ParseEnumReal32_8();
    int32_t v_8_4 = valA6;
    valA6 = g_53b580;
    QTask_RemoveEventCallback(valA6, v_8_4, TextBox_OnEvent);
    g_57bb98 = Script_EvaluateCondition_7(5);
    int32_t valA8 = Script_FormatString_3();
    char arg_54;
    Script_UndefinedParameterTy(g_57bb98, &__return_addr, &arg_54, valA8, 7, 0);
    int32_t valA10 = Script_ParseEnumString_3();
    char arg_28;
    Script_UndefinedParameterTy(g_57bb98, &__return_addr, &arg_28, valA10, 7, 0);
    int32_t valA12 = Script_ParseEnumString_3();
    char arg_2c;
    Script_UndefinedParameterTy(g_57bb98, &__return_addr, &arg_2c, valA12, 7, 0);
    int32_t valA14 = Script_CallNativeHandler_3();
    char arg_21a4;
    Script_UndefinedParameterTy(g_57bb98, &__return_addr, &arg_21a4, valA14, 7, 0);
    int32_t valA16 = Script_CallNativeHandler_3();
    char arg_21f4;
    return Script_UndefinedParameterTy(g_57bb98, &__return_addr, &arg_21f4, valA16, 7, 0);
}
