// Original IGI.EXE function: ConditionalContainer_Init (VA 0x004872C0; static CFG gate PASS, CFG score 1.000).
#include "ConditionalContainer_Init.h"
int32_t* ConditionalContainer_Init()

{
    int32_t item_118 = 0;
    int16_t data_1 = TaskType_Register("ConditionalContainer", 0x114, Container_OnEvent(), 0);
    g_5c8a80 = data_1;
    QTask_RemoveEventCallback(data_1, 0, ConditionalContainer_LoadParameters);
    QTask_TriggerEvent(g_5c8a80, 1, ConditionalContainer_Tick);
    QTask_TriggerEvent(g_5c8a80, 2, ConditionalContainer_Process);
    int32_t data_3 = DynObj_FindSymbol_6();
    QTask_RemoveEventCallback(g_5c8a80, data_3, sub_4e0890);
    int32_t data_4 = Script_ParseEnumInt32_8();
    int32_t item_11c_1 = data_4;
    data_4 = g_5c8a80;
    QTask_RemoveEventCallback(data_4, item_11c_1, sub_487790);
    int32_t data_5 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_5c8a80, data_5, ConditionalContainer_Update);
    int32_t data_6 = AI_CheckHearing_25();
    QTask_RemoveEventCallback(g_5c8a80, data_6, sub_4877d0);
    QTask_TriggerEvent(g_5c8a80, 3, ConditionalContainer_OnEvent);
    int32_t data_8 = Script_FormatString_5();
    QTask_TriggerEvent(g_5c8a80, data_8, ConditionalContainer_Action);
    int32_t data_9 = Script_SpawnNewTask_6();
    QTask_TriggerEvent(g_5c8a80, data_9, ConditionalContainer_Cleanup);
    int32_t data_10 = DynObj_CreateMagicObject_6();
    int32_t item_11c_6 = data_10;
    data_10 = g_5c8a80;
    QTask_RemoveEventCallback(data_10, item_11c_6, sub_4879e0);
    int32_t data_11 = DynObj_LinkDynamicCube_12();
    QTask_RemoveEventCallback(g_5c8a80, data_11, ConditionalContainer_Cleanup_3);
    int32_t data_12 = DynObj_UpdateDynTree_12();
    QTask_RemoveEventCallback(g_5c8a80, data_12, ConditionalContainer_Cleanup_2);
    g_5c8a7c = Script_EvaluateCondition_7(3);
    int32_t data_14 = Script_CallNativeHandler_3();
    void item_114;
    void item_f4;
    Script_UndefinedParameterTy(g_5c8a7c, &item_114, &item_f4, data_14, 7, 0);
    int32_t data_15 = Script_CallNativeHandler_3();
    void item_a4;
    Script_UndefinedParameterTy(g_5c8a7c, &item_114, &item_a4, data_15, 7, 0);
    int32_t data_16 = Script_CallNativeHandler_3();
    void item_54;
    return Script_UndefinedParameterTy(g_5c8a7c, &item_114, &item_54, data_16, 7, 0);
}
