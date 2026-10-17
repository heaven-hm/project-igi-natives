// Original IGI.EXE function: GuardGenerator_Init (VA 0x00487BE0; static CFG gate PASS, CFG score 1.000).
#include "GuardGenerator_Init.h"
int32_t* GuardGenerator_Init()

{
    int32_t v_84 = 0;
    int16_t valA1 = TaskType_Register("GuardGenerator", 0x80, QTask_OpenEvent_2(), 0);
    g_541094 = valA1;
    QTask_RemoveEventCallback(valA1, 0, GuardGenerator_LoadParameters);
    QTask_TriggerEvent(g_541094, 1, GuardGenerator_Setup);
    QTask_TriggerEvent(g_541094, 2, GuardGenerator_Process);
    int32_t valA3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_541094, valA3, sub_4881f0);
    int32_t valA4 = Script_ParseEnumReal32_8();
    int32_t v_88_1 = valA4;
    valA4 = g_541094;
    QTask_RemoveEventCallback(valA4, v_88_1, GuardGenerator_Update);
    int32_t valA5 = Script_FormatString_5();
    QTask_TriggerEvent(g_541094, valA5, GuardGenerator_OnEvent);
    int32_t valA6 = Script_SpawnNewTask_6();
    QTask_TriggerEvent(g_541094, valA6, GuardGenerator_Action);
    int32_t valA7 = DynObj_LinkDynamicCube_12();
    int32_t v_88_4 = valA7;
    valA7 = g_541094;
    QTask_RemoveEventCallback(valA7, v_88_4, sub_487e20);
    int32_t valA8 = DynObj_UpdateDynTree_12();
    QTask_RemoveEventCallback(g_541094, valA8, sub_487d90);
    int32_t valA9 = DynObj_FindSymbol_6();
    QTask_RemoveEventCallback(g_541094, valA9, sub_4e0890);
    int32_t valA10 = AI_CheckHearing_25();
    int32_t v_88_7 = valA10;
    valA10 = g_541094;
    QTask_RemoveEventCallback(valA10, v_88_7, sub_488560);
    int32_t valA11 = DynObj_CreateMagicObject_6();
    QTask_RemoveEventCallback(g_541094, valA11, sub_4879e0);
    g_5c8a88 = Script_EvaluateCondition_7(2);
    int32_t valA13 = Script_CallNativeHandler_3();
    void v_80;
    void v_60;
    Script_UndefinedParameterTy(g_5c8a88, &v_80, &v_60, valA13, 7, 0);
    int32_t valA14 = Script_ParseEnumString_3();
    void v_8;
    return Script_UndefinedParameterTy(g_5c8a88, &v_80, &v_8, valA14, 7, 0);
}
