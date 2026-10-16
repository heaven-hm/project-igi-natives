#include "ConditionalContainer_Init.h"
int32_t* ConditionalContainer_Init()

{
    int32_t v_118 = 0;
    int16_t valA1 = TaskType_Register("ConditionalContainer", 0x114, Container_OnEvent(), 0);
    g_5c8a80 = valA1;
    QTask_RemoveEventCallback(valA1, 0, ConditionalContainer_LoadParameters);
    QTask_TriggerEvent(g_5c8a80, 1, ConditionalContainer_Tick);
    QTask_TriggerEvent(g_5c8a80, 2, ConditionalContainer_Process);
    int32_t valA3 = DynObj_FindSymbol_6();
    QTask_RemoveEventCallback(g_5c8a80, valA3, sub_4e0890);
    int32_t valA4 = Script_ParseEnumInt32_8();
    int32_t v_11c_1 = valA4;
    valA4 = g_5c8a80;
    QTask_RemoveEventCallback(valA4, v_11c_1, sub_487790);
    int32_t valA5 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_5c8a80, valA5, ConditionalContainer_Update);
    int32_t valA6 = AI_CheckHearing_25();
    QTask_RemoveEventCallback(g_5c8a80, valA6, sub_4877d0);
    QTask_TriggerEvent(g_5c8a80, 3, ConditionalContainer_OnEvent);
    int32_t valA8 = Script_FormatString_5();
    QTask_TriggerEvent(g_5c8a80, valA8, ConditionalContainer_Action);
    int32_t valA9 = Script_SpawnNewTask_6();
    QTask_TriggerEvent(g_5c8a80, valA9, ConditionalContainer_Cleanup);
    int32_t valA10 = DynObj_CreateMagicObject_6();
    int32_t v_11c_6 = valA10;
    valA10 = g_5c8a80;
    QTask_RemoveEventCallback(valA10, v_11c_6, sub_4879e0);
    int32_t valA11 = DynObj_LinkDynamicCube_12();
    QTask_RemoveEventCallback(g_5c8a80, valA11, ConditionalContainer_Cleanup_3);
    int32_t valA12 = DynObj_UpdateDynTree_12();
    QTask_RemoveEventCallback(g_5c8a80, valA12, ConditionalContainer_Cleanup_2);
    g_5c8a7c = Script_EvaluateCondition_7(3);
    int32_t valA14 = Script_CallNativeHandler_3();
    void v_114;
    void v_f4;
    Script_UndefinedParameterTy(g_5c8a7c, &v_114, &v_f4, valA14, 7, 0);
    int32_t valA15 = Script_CallNativeHandler_3();
    void v_a4;
    Script_UndefinedParameterTy(g_5c8a7c, &v_114, &v_a4, valA15, 7, 0);
    int32_t valA16 = Script_CallNativeHandler_3();
    void v_54;
    return Script_UndefinedParameterTy(g_5c8a7c, &v_114, &v_54, valA16, 7, 0);
}
