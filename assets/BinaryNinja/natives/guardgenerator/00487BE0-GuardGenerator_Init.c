// IGI native provenance: GuardGenerator_Init - 0x00487BE0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00487BE0-GuardGenerator_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "GuardGenerator_Init.h"
int32_t* GuardGenerator_Init()

{
    int32_t item_84 = 0;
    int16_t data_1 = TaskType_Register("GuardGenerator", 0x80, QTask_OpenEvent_2(), 0);
    g_541094 = data_1;
    QTask_RemoveEventCallback(data_1, 0, GuardGenerator_LoadParameters);
    QTask_TriggerEvent(g_541094, 1, GuardGenerator_Setup);
    QTask_TriggerEvent(g_541094, 2, GuardGenerator_Process);
    int32_t data_3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_541094, data_3, sub_4881f0);
    int32_t data_4 = Script_ParseEnumReal32_8();
    int32_t item_88_1 = data_4;
    data_4 = g_541094;
    QTask_RemoveEventCallback(data_4, item_88_1, GuardGenerator_Update);
    int32_t data_5 = Script_FormatString_5();
    QTask_TriggerEvent(g_541094, data_5, GuardGenerator_OnEvent);
    int32_t data_6 = Script_SpawnNewTask_6();
    QTask_TriggerEvent(g_541094, data_6, GuardGenerator_Action);
    int32_t data_7 = DynObj_LinkDynamicCube_12();
    int32_t item_88_4 = data_7;
    data_7 = g_541094;
    QTask_RemoveEventCallback(data_7, item_88_4, sub_487e20);
    int32_t data_8 = DynObj_UpdateDynTree_12();
    QTask_RemoveEventCallback(g_541094, data_8, sub_487d90);
    int32_t data_9 = DynObj_FindSymbol_6();
    QTask_RemoveEventCallback(g_541094, data_9, sub_4e0890);
    int32_t data_10 = AI_CheckHearing_25();
    int32_t item_88_7 = data_10;
    data_10 = g_541094;
    QTask_RemoveEventCallback(data_10, item_88_7, sub_488560);
    int32_t data_11 = DynObj_CreateMagicObject_6();
    QTask_RemoveEventCallback(g_541094, data_11, sub_4879e0);
    g_5c8a88 = Script_EvaluateCondition_7(2);
    int32_t data_13 = Script_CallNativeHandler_3();
    void item_80;
    void item_60;
    Script_UndefinedParameterTy(g_5c8a88, &item_80, &item_60, data_13, 7, 0);
    int32_t data_14 = Script_ParseEnumString_3();
    void item_8;
    return Script_UndefinedParameterTy(g_5c8a88, &item_80, &item_8, data_14, 7, 0);
}
