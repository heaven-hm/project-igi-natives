#include "gi_platform.h"
#include "00421750-MenuScreen_Init.h"
int32_t* MenuScreen_Init()

{
    int32_t v_1a8 = 0;
    int16_t valA1 = TaskType_Register("MenuScreen", 0x1a4, Menu_PlayMusic_13(), 0);
    g_53b800 = valA1;
    QTask_TriggerEvent(valA1, 1, MenuScreen_LoadParameters);
    int32_t valA2 = StatusScreen_GetEvent();
    int32_t v_1ac = valA2;
    valA2 = g_53b800;
    QTask_TriggerEvent(valA2, v_1ac, sub_421c20);
    QTask_RemoveEventCallback(g_53b800, 0, sub_4219b0);
    QTask_TriggerEvent(g_53b800, 2, MenuScreen_Setup);
    int32_t valA3 = Script_ParseEnumInt32_8();
    int32_t v_1ac_1 = valA3;
    valA3 = g_53b800;
    QTask_RemoveEventCallback(valA3, v_1ac_1, sub_422180);
    int32_t valA4 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_53b800, valA4, MenuScreen_Process);
    int32_t valA5 = Script_FormatString_5();
    QTask_TriggerEvent(g_53b800, valA5, MenuScreen_Update);
    int32_t valA6 = Script_SpawnNewTask_6();
    int32_t v_1ac_4 = valA6;
    valA6 = g_53b800;
    QTask_TriggerEvent(valA6, v_1ac_4, MenuScreen_OnEvent);
    int32_t valA7 = Menu_HandleInput_13();
    QTask_TriggerEvent(g_53b800, valA7, MenuScreen_Action);
    int32_t valA8 = Menu_RequestScreen_14();
    QTask_TriggerEvent(g_53b800, valA8, MenuScreen_Cleanup);
    g_57bc04 = Script_EvaluateCondition_7(8);
    int32_t valA10 = Script_FormatString_3();
    char v_1a4;
    char v_150;
    Script_UndefinedParameterTy(g_57bc04, &v_1a4, &v_150, valA10, 7, 0);
    int32_t valA11 = Script_ParseEnumString_3();
    char v_108;
    Script_UndefinedParameterTy(g_57bc04, &v_1a4, &v_108, valA11, 7, 0);
    int32_t valA12 = Script_ParseEnumString_3();
    char v_100;
    Script_UndefinedParameterTy(g_57bc04, &v_1a4, &v_100, valA12, 7, 0);
    int32_t valA13 = Script_ParseEnumString_3();
    char v_104;
    Script_UndefinedParameterTy(g_57bc04, &v_1a4, &v_104, valA13, 7, 0);
    int32_t valA14 = Script_ParseEnumString_3();
    char v_fc;
    Script_UndefinedParameterTy(g_57bc04, &v_1a4, &v_fc, valA14, 7, 0);
    int32_t valA15 = Script_CallNativeHandler_3();
    char v_f8;
    Script_UndefinedParameterTy(g_57bc04, &v_1a4, &v_f8, valA15, 7, 0);
    int32_t valA16 = Script_CallNativeHandler_3();
    char v_a8;
    Script_UndefinedParameterTy(g_57bc04, &v_1a4, &v_a8, valA16, 7, 0);
    int32_t valA17 = Script_CallNativeHandler_3();
    char v_58;
    return Script_UndefinedParameterTy(g_57bc04, &v_1a4, &v_58, valA17, 7, 0);
}
