#include "gi_platform.h"
#include "0041DC50-ToggleBox_Init.h"
int32_t* ToggleBox_Init()

{
    int32_t v_150 = 0;
    int16_t valA1 = TaskType_Register("ToggleBox", 0x14c, Menu_PlayMusic_13(), 0);
    g_53b674 = valA1;
    QTask_TriggerEvent(valA1, 1, ToggleBox_LoadParameters);
    int32_t valA2 = StatusScreen_GetEvent();
    int32_t v_154 = valA2;
    valA2 = g_53b674;
    QTask_TriggerEvent(valA2, v_154, ToggleBox_Setup);
    QTask_TriggerEvent(g_53b674, 2, ToggleBox_Process);
    QTask_RemoveEventCallback(g_53b674, 0, sub_41ddd0);
    int32_t valA3 = Script_ParseEnumInt32_8();
    int32_t v_154_1 = valA3;
    valA3 = g_53b674;
    QTask_RemoveEventCallback(valA3, v_154_1, sub_41e410);
    int32_t valA4 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_53b674, valA4, sub_41df30);
    int32_t valA5 = Menu_HandleInput_13();
    QTask_TriggerEvent(g_53b674, valA5, sub_41e420);
    int32_t valA6 = Menu_RequestScreen_14();
    int32_t v_154_4 = valA6;
    valA6 = g_53b674;
    QTask_TriggerEvent(valA6, v_154_4, ToggleBox_Update);
    int32_t valA7 = Script_FormatString_5();
    QTask_TriggerEvent(g_53b674, valA7, ToggleBox_OnEvent);
    int32_t valA8 = Script_SpawnNewTask_6();
    QTask_TriggerEvent(g_53b674, valA8, ToggleBox_Action);
    g_57bbd0 = Script_EvaluateCondition_7(2);
    int32_t valA10 = Script_CallNativeHandler_3();
    char v_14c;
    char v_a0;
    Script_UndefinedParameterTy(g_57bbd0, &v_14c, &v_a0, valA10, 7, 0);
    int32_t valA11 = Script_CallNativeHandler_3();
    char v_50;
    return Script_UndefinedParameterTy(g_57bbd0, &v_14c, &v_50, valA11, 7, 0);
}
