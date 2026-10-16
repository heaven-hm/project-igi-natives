#include "gi_platform.h"
#include "0041B8E0-ScrollListBox_Init.h"
  int32_t* ScrollListBox_Init()
// This function has unresolved stack usage. View graph of stack usage to resolve.

{
    Camera_UpdateTransform_5(0x13fc);
    int32_t v_4 = 0;
    int16_t valA1 = TaskType_Register("ScrollListBox", 0x13fc, Menu_PlayMusic_13(), 0);
    g_53b59c = valA1;
    QTask_TriggerEvent(valA1, 1, ScrollListBox_LoadParameters);
    int32_t valA2 = StatusScreen_GetEvent();
    int32_t v_8 = valA2;
    valA2 = g_53b59c;
    QTask_TriggerEvent(valA2, v_8, ScrollListBox_Setup);
    QTask_TriggerEvent(g_53b59c, 2, ScrollListBox_Process);
    QTask_RemoveEventCallback(g_53b59c, 0, sub_41bb10);
    int32_t valA3 = Script_ParseEnumInt32_8();
    int32_t v_8_1 = valA3;
    valA3 = g_53b59c;
    QTask_RemoveEventCallback(valA3, v_8_1, sub_41c300);
    int32_t valA4 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_53b59c, valA4, sub_41bca0);
    int32_t valA5 = Menu_HandleInput_13();
    QTask_TriggerEvent(g_53b59c, valA5, ScrollListBox_Update);
    int32_t valA6 = Menu_RequestScreen_14();
    int32_t v_8_4 = valA6;
    valA6 = g_53b59c;
    QTask_TriggerEvent(valA6, v_8_4, ScrollListBox_OnEvent);
    int32_t valA7 = Script_FormatString_5();
    QTask_TriggerEvent(g_53b59c, valA7, ScrollListBox_Action);
    int32_t valA8 = Script_SpawnNewTask_6();
    QTask_TriggerEvent(g_53b59c, valA8, ScrollListBox_Cleanup);
    g_57bbb4 = Script_EvaluateCondition_7(7);
    int32_t valA10 = Script_FormatString_3();
    char arg_125c;
    Script_UndefinedParameterTy(g_57bbb4, &__return_addr, &arg_125c, valA10, 7, 0);
    int32_t valA11 = Script_CallNativeHandler_3();
    char arg_12b0;
    Script_UndefinedParameterTy(g_57bbb4, &__return_addr, &arg_12b0, valA11, 7, 0);
    int32_t valA12 = Script_CallNativeHandler_3();
    char arg_1300;
    Script_UndefinedParameterTy(g_57bbb4, &__return_addr, &arg_1300, valA12, 7, 0);
    int32_t valA13 = Script_CallNativeHandler_3();
    char arg_1350;
    Script_UndefinedParameterTy(g_57bbb4, &__return_addr, &arg_1350, valA13, 7, 0);
    int32_t valA14 = Script_ParseEnumString_3();
    char arg_28;
    Script_UndefinedParameterTy(g_57bbb4, &__return_addr, &arg_28, valA14, 7, 0);
    int32_t valA15 = Script_ParseEnumString_3();
    char arg_2c;
    Script_UndefinedParameterTy(g_57bbb4, &__return_addr, &arg_2c, valA15, 7, 0);
    int32_t valA16 = Script_CallNativeHandler_3();
    char arg_13a0;
    return Script_UndefinedParameterTy(g_57bbb4, &__return_addr, &arg_13a0, valA16, 7, 0);
}
