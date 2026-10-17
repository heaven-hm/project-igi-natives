// Original IGI.EXE function: MenuFrame_Init (VA 0x004223D0; static CFG gate PASS, CFG score 1.000).
#include "MenuFrame_Init.h"
int32_t* MenuFrame_Init()

{
    g_57bc18 = 0;
    g_57bc1c = 0x280;
    int32_t v_b8 = 0;
    int16_t valA1 = TaskType_Register("MenuFrame", 0xb4, Menu_PlayMusic_13(), 0);
    g_53b838 = valA1;
    QTask_TriggerEvent(valA1, 1, MenuFrame_LoadParameters);
    int32_t valA2 = StatusScreen_GetEvent();
    int32_t v_bc = valA2;
    valA2 = g_53b838;
    QTask_TriggerEvent(valA2, v_bc, MenuFrame_Setup);
    QTask_TriggerEvent(g_53b838, 2, AIGraph_LoadParameters);
    QTask_RemoveEventCallback(g_53b838, 0, MenuFrame_Update);
    int32_t valA3 = Script_ParseEnumInt32_8();
    int32_t v_bc_1 = valA3;
    valA3 = g_53b838;
    QTask_RemoveEventCallback(valA3, v_bc_1, sub_422b00);
    int32_t valA4 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_53b838, valA4, MenuFrame_OnEvent);
    g_57bc10 = Script_EvaluateCondition_7(9);
    int32_t valA6 = Script_FormatString_3();
    void v_b4;
    void v_60;
    Script_UndefinedParameterTy(g_57bc10, &v_b4, &v_60, valA6, 7, 0);
    int32_t valA7 = Script_ParseEnumString_3();
    void v_94;
    Script_UndefinedParameterTy(g_57bc10, &v_b4, &v_94, valA7, 7, &g_57bc18);
    int32_t valA8 = Script_ParseEnumString_3();
    void v_90;
    Script_UndefinedParameterTy(g_57bc10, &v_b4, &v_90, valA8, 7, &g_57bc18);
    int32_t valA9 = Script_ParseEnumString_3();
    void v_8c;
    Script_UndefinedParameterTy(g_57bc10, &v_b4, &v_8c, valA9, 7, &g_57bc18);
    int32_t valA10 = Script_ParseEnumString_3();
    void v_88;
    Script_UndefinedParameterTy(g_57bc10, &v_b4, &v_88, valA10, 7, &g_57bc18);
    int32_t valA11 = Script_ParseEnumString_3();
    void v_7c;
    Script_UndefinedParameterTy(g_57bc10, &v_b4, &v_7c, valA11, 7, 0);
    int32_t valA12 = Script_ExecuteLevelScript_3();
    void v_84;
    Script_UndefinedParameterTy(g_57bc10, &v_b4, &v_84, valA12, 7, 0);
    int32_t valA13 = Script_ExecuteLevelScript_3();
    void v_80;
    Script_UndefinedParameterTy(g_57bc10, &v_b4, &v_80, valA13, 7, 0);
    int32_t valA14 = Script_ParseEnumInt32_4();
    void v_68;
    return Script_UndefinedParameterTy(g_57bc10, &v_b4, &v_68, valA14, 7, 0);
}
