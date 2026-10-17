// IGI native provenance: SubLevel_Init - 0x00488620 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00488620-SubLevel_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SubLevel_Init.h"
int32_t* SubLevel_Init()

{
    int32_t item_124 = 0;
    int16_t data_1 = TaskType_Register("SubLevel", 0x120, QTask_OpenEvent_2(), 0);
    g_5c8a90 = data_1;
    QTask_RemoveEventCallback(data_1, 0, sub_4886f0);
    QTask_TriggerEvent(g_5c8a90, 1, sub_488700);
    int32_t data_3 = DynObj_FindSymbol_6();
    QTask_RemoveEventCallback(g_5c8a90, data_3, sub_4e0890);
    int32_t data_4 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_5c8a90, data_4, sub_488770);
    int32_t data_5 = Script_ParseEnumReal32_8();
    int32_t item_128_2 = data_5;
    data_5 = g_5c8a90;
    QTask_RemoveEventCallback(data_5, item_128_2, SubLevel_LoadParameters);
    g_5c8a94 = Script_EvaluateCondition_7(1);
    int32_t data_7 = Script_SpawnNewTask_4();
    void item_120;
    void item_100;
    return Script_UndefinedParameterTy(g_5c8a94, &item_120, &item_100, data_7, 7, 0);
}
