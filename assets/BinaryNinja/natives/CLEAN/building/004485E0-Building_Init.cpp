// IGI native provenance: Building_Init - 0x004485E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004485E0-Building_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Building_Init.h"
void* Building_Init()

{
    int32_t item_1f4 = 0;
    int16_t data_1 = TaskType_Register("Building", 0x1f0, Render_ComputeNormals_15(), 0);
    g_57c200 = data_1;
    QTask_RemoveEventCallback(data_1, 0, Building_LoadParameters);
    QTask_TriggerEvent(g_57c200, 2, Building_Setup);
    int32_t data_3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_57c200, data_3, sub_448880);
    int32_t data_4 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_57c200, data_4, Building_Process);
    int32_t data_5 = Level_CheckQTaskID_3();
    int32_t item_1f8_2 = data_5;
    data_5 = g_57c200;
    QTask_RemoveEventCallback(data_5, item_1f8_2, sub_416ab0);
    int32_t data_6 = AI_CheckHearing_25();
    QTask_RemoveEventCallback(g_57c200, data_6, sub_443dc0);
    int32_t data_7 = DynObj_LinkDynamicCube_12();
    QTask_RemoveEventCallback(g_57c200, data_7, Building_Update);
    int32_t data_8 = DynObj_UpdateDynTree_12();
    int32_t item_1f8_5 = data_8;
    data_8 = g_57c200;
    QTask_RemoveEventCallback(data_8, item_1f8_5, Building_OnEvent);
    g_57c204 = Script_EvaluateCondition_7(3);
    int32_t data_10 = Script_ParseEnumReal32_4();
    void item_1f0;
    void item_18;
    Script_UndefinedParameterTy(g_57c204, &item_1f0, &item_18, data_10, 7, 0);
    int32_t data_12 = Script_SpawnNewTask_3();
    void item_50;
    Script_UndefinedParameterTy(g_57c204, &item_1f0, &item_50, data_12, 7, 0);
    int32_t data_14 = Script_EvaluateCondition_3();
    void item_28;
    Script_UndefinedParameterTy(g_57c204, &item_1f0, &item_28, data_14, 7, 0);
    return TaskType_Set("TASKTYPE_BUILDING", *g_57c200);
}
