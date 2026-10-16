#include "gi_platform.h"
#include "0041F340-SlideBar_Init.h"
int32_t* SlideBar_Init()

{
    int32_t v_254 = 0;
    int16_t valA1 = TaskType_Register("SlideBar", 0x250, Menu_PlayMusic_13(), 0);
    g_53b6bc = valA1;
    QTask_TriggerEvent(valA1, 1, SlideBar_LoadParameters);
    int32_t valA2 = StatusScreen_GetEvent();
    int32_t v_258 = valA2;
    valA2 = g_53b6bc;
    QTask_TriggerEvent(valA2, v_258, SlideBar_Setup);
    QTask_TriggerEvent(g_53b6bc, 2, SlideBar_Process);
    QTask_RemoveEventCallback(g_53b6bc, 0, SlideBar_Update);
    int32_t valA3 = Script_ParseEnumInt32_8();
    int32_t v_258_1 = valA3;
    valA3 = g_53b6bc;
    QTask_RemoveEventCallback(valA3, v_258_1, sub_41ff20);
    int32_t valA4 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_53b6bc, valA4, SlideBar_OnEvent);
    int32_t valA5 = Menu_HandleInput_13();
    QTask_TriggerEvent(g_53b6bc, valA5, SlideBar_Action);
    int32_t valA6 = Menu_RequestScreen_14();
    int32_t v_258_4 = valA6;
    valA6 = g_53b6bc;
    QTask_TriggerEvent(valA6, v_258_4, SlideBar_Cleanup);
    int32_t valA7 = Script_FormatString_5();
    QTask_TriggerEvent(g_53b6bc, valA7, SlideBar_Cleanup_2);
    int32_t valA8 = Script_SpawnNewTask_6();
    QTask_TriggerEvent(g_53b6bc, valA8, sub_420140);
    g_57bbe4 = Script_EvaluateCondition_7(8);
    int32_t valA10 = Script_FormatString_3();
    char v_250;
    char v_1fc;
    Script_UndefinedParameterTy(g_57bbe4, &v_250, &v_1fc, valA10, 7, 0);
    int32_t valA11 = Script_ParseEnumInt32_4();
    char v_19c;
    Script_UndefinedParameterTy(g_57bbe4, &v_250, &v_19c, valA11, 7, 0);
    int32_t valA12 = Script_ParseEnumString_3();
    char v_1a4;
    Script_UndefinedParameterTy(g_57bbe4, &v_250, &v_1a4, valA12, 7, 0);
    int32_t valA13 = Script_CallNativeHandler_3();
    char v_198;
    Script_UndefinedParameterTy(g_57bbe4, &v_250, &v_198, valA13, 7, 0);
    int32_t valA14 = Script_CallNativeHandler_3();
    char v_148;
    Script_UndefinedParameterTy(g_57bbe4, &v_250, &v_148, valA14, 7, 0);
    int32_t valA15 = Script_CallNativeHandler_3();
    char v_f8;
    Script_UndefinedParameterTy(g_57bbe4, &v_250, &v_f8, valA15, 7, 0);
    int32_t valA16 = Script_CallNativeHandler_3();
    char v_a8;
    Script_UndefinedParameterTy(g_57bbe4, &v_250, &v_a8, valA16, 7, 0);
    int32_t valA17 = Script_CallNativeHandler_3();
    char v_58;
    return Script_UndefinedParameterTy(g_57bbe4, &v_250, &v_58, valA17, 7, 0);
}
