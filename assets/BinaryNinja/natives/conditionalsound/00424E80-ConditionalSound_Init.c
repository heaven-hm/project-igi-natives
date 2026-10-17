// Original IGI.EXE function: ConditionalSound_Init (VA 0x00424E80; static CFG gate PASS, CFG score 1.000).
#include "ConditionalSound_Init.h"
int32_t* ConditionalSound_Init()

{
    int32_t v_12c = 0;
    int16_t valA1 = TaskType_Register("ConditionalSound", 0x128, QTask_OpenEvent_2(), 0);
    g_57bc68 = valA1;
    QTask_RemoveEventCallback(valA1, 0, ConditionalSound_LoadParameters);
    QTask_TriggerEvent(g_57bc68, 1, ConditionalSound_Tick);
    QTask_TriggerEvent(g_57bc68, 2, ConditionalSound_Process);
    int32_t valA3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_57bc68, valA3, sub_425390);
    int32_t valA4 = Script_ParseEnumReal32_8();
    int32_t v_130_1 = valA4;
    valA4 = g_57bc68;
    QTask_RemoveEventCallback(valA4, v_130_1, sub_4253a0);
    int32_t valA5 = Script_FormatString_5();
    QTask_TriggerEvent(g_57bc68, valA5, ConditionalSound_Update);
    int32_t valA6 = Script_SpawnNewTask_6();
    QTask_TriggerEvent(g_57bc68, valA6, ConditionalSound_OnEvent);
    int32_t valA7 = DynObj_LinkDynamicCube_12();
    int32_t v_130_4 = valA7;
    valA7 = g_57bc68;
    QTask_RemoveEventCallback(valA7, v_130_4, ConditionalSound_Action);
    g_57bc6c = Script_EvaluateCondition_7(6);
    int32_t valA9 = Script_CallNativeHandler_3();
    void v_128;
    void v_108;
    Script_UndefinedParameterTy(g_57bc6c, &v_128, &v_108, valA9, 7, 0);
    int32_t valA11 = Script_FormatString_3();
    void v_b8;
    Script_UndefinedParameterTy(g_57bc6c, &v_128, &v_b8, valA11, 7, 0);
    int32_t valA13 = Script_ParseEnumReal32_4();
    void v_98;
    Script_UndefinedParameterTy(g_57bc6c, &v_128, &v_98, valA13, 7, 0);
    int32_t valA15 = Script_ParseEnumInt32_4();
    void v_80;
    Script_UndefinedParameterTy(g_57bc6c, &v_128, &v_80, valA15, 7, 0);
    int32_t valA17 = Script_ParseEnumInt32_4();
    void v_7f;
    Script_UndefinedParameterTy(g_57bc6c, &v_128, &v_7f, valA17, 7, 0);
    int32_t valA19 = Script_ParseEnumInt32_4();
    void v_75;
    return Script_UndefinedParameterTy(g_57bc6c, &v_128, &v_75, valA19, 7, 0);
}
