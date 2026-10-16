#include "gi_platform.h"
#include "0041E690-ListBox_Init.h"
int32_t* ListBox_Init()

{
    int32_t v_d3c = 0;
    int16_t valA1 = TaskType_Register("ListBox", 0xd38, Menu_PlayMusic_13(), 0);
    g_53b694 = valA1;
    QTask_TriggerEvent(valA1, 1, ListBox_LoadParameters);
    int32_t valA2 = StatusScreen_GetEvent();
    int32_t v_d40 = valA2;
    valA2 = g_53b694;
    QTask_TriggerEvent(valA2, v_d40, ListBox_Setup);
    QTask_TriggerEvent(g_53b694, 2, ListBox_Process);
    QTask_RemoveEventCallback(g_53b694, 0, sub_41e8c0);
    int32_t valA3 = Script_ParseEnumInt32_8();
    int32_t v_d40_1 = valA3;
    valA3 = g_53b694;
    QTask_RemoveEventCallback(valA3, v_d40_1, sub_41f020);
    int32_t valA4 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_53b694, valA4, ListBox_Update);
    int32_t valA5 = Menu_HandleInput_13();
    QTask_TriggerEvent(g_53b694, valA5, ListBox_OnEvent);
    int32_t valA6 = Menu_RequestScreen_14();
    int32_t v_d40_4 = valA6;
    valA6 = g_53b694;
    QTask_TriggerEvent(valA6, v_d40_4, ListBox_Action);
    int32_t valA7 = Script_FormatString_5();
    QTask_TriggerEvent(g_53b694, valA7, ListBox_Cleanup);
    int32_t valA8 = Script_SpawnNewTask_6();
    QTask_TriggerEvent(g_53b694, valA8, ListBox_Cleanup_2);
    g_57bbdc = Script_EvaluateCondition_7(7);
    int32_t valA10 = Script_FormatString_3();
    char v_d38;
    char v_ce4;
    Script_UndefinedParameterTy(g_57bbdc, &v_d38, &v_ce4, valA10, 7, 0);
    int32_t valA11 = Script_FormatString_3();
    char v_ca4;
    Script_UndefinedParameterTy(g_57bbdc, &v_d38, &v_ca4, valA11, 7, 0);
    int32_t valA12 = Script_ParseEnumString_3();
    char v_14c;
    Script_UndefinedParameterTy(g_57bbdc, &v_d38, &v_14c, valA12, 7, 0);
    int32_t valA13 = Script_CallNativeHandler_3();
    char v_140;
    Script_UndefinedParameterTy(g_57bbdc, &v_d38, &v_140, valA13, 7, 0);
    int32_t valA14 = Script_CallNativeHandler_3();
    char v_f0;
    Script_UndefinedParameterTy(g_57bbdc, &v_d38, &v_f0, valA14, 7, 0);
    int32_t valA15 = Script_CallNativeHandler_3();
    char v_a0;
    Script_UndefinedParameterTy(g_57bbdc, &v_d38, &v_a0, valA15, 7, 0);
    int32_t valA16 = Script_CallNativeHandler_3();
    char v_50;
    return Script_UndefinedParameterTy(g_57bbdc, &v_d38, &v_50, valA16, 7, 0);
}
