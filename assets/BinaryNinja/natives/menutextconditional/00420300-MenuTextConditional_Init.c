// Original IGI.EXE function: MenuTextConditional_Init (VA 0x00420300; static CFG gate PASS, CFG score 1.000).
#include "MenuTextConditional_Init.h"
int32_t* MenuTextConditional_Init()

{
    int32_t v_21c = 0;
    int16_t valA1 = TaskType_Register("MenuTextConditional", 0x218, Menu_PlayMusic_13(), 0);
    g_53b700 = valA1;
    QTask_TriggerEvent(valA1, 1, MenuTextConditional_LoadParameters);
    int32_t valA2 = StatusScreen_GetEvent();
    int32_t v_220 = valA2;
    valA2 = g_53b700;
    QTask_TriggerEvent(valA2, v_220, MenuTextConditional_Setup);
    QTask_TriggerEvent(g_53b700, 2, MenuTextConditional_Process);
    QTask_RemoveEventCallback(g_53b700, 0, sub_420550);
    int32_t valA3 = Script_ParseEnumInt32_8();
    int32_t v_220_1 = valA3;
    valA3 = g_53b700;
    QTask_RemoveEventCallback(valA3, v_220_1, sub_420bb0);
    int32_t valA4 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_53b700, valA4, MenuTextConditional_Update);
    int32_t valA5 = Menu_LeaveMenus_14();
    QTask_TriggerEvent(g_53b700, valA5, MenuText_Update);
    int32_t valA6 = Menu_RequestScreen_15();
    int32_t v_220_4 = valA6;
    valA6 = g_53b700;
    QTask_RemoveEventCallback(valA6, v_220_4, MenuTextConditional_Action);
    g_57bbec = Script_EvaluateCondition_7(7);
    int32_t valA8 = Script_FormatString_3();
    void v_218;
    void v_1c4;
    Script_UndefinedParameterTy(g_57bbec, &v_218, &v_1c4, valA8, 7, 0);
    int32_t valA10 = Script_FormatString_3();
    void v_184;
    Script_UndefinedParameterTy(g_57bbec, &v_218, &v_184, valA10, 7, 0);
    int32_t valA12 = Script_ParseEnumString_3();
    void v_100;
    Script_UndefinedParameterTy(g_57bbec, &v_218, &v_100, valA12, 7, 0);
    int32_t valA14 = Script_CallNativeHandler_3();
    void v_ac;
    Script_UndefinedParameterTy(g_57bbec, &v_218, &v_ac, valA14, 7, 0);
    int32_t valA16 = Script_CallNativeHandler_3();
    void v_5c;
    Script_UndefinedParameterTy(g_57bbec, &v_218, &v_5c, valA16, 7, 0);
    int32_t valA18 = Script_CallNativeHandler_3();
    void v_fc;
    Script_UndefinedParameterTy(g_57bbec, &v_218, &v_fc, valA18, 7, 0);
    int32_t valA20 = Script_FormatString_3();
    void v_144;
    return Script_UndefinedParameterTy(g_57bbec, &v_218, &v_144, valA20, 7, 0);
}
