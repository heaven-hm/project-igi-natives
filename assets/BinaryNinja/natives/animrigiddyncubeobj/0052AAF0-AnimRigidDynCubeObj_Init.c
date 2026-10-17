// IGI native provenance: AnimRigidDynCubeObj_Init - 0x0052AAF0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0052AAF0-AnimRigidDynCubeObj_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AnimRigidDynCubeObj_Init.h"
int32_t AnimRigidDynCubeObj_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("AnimRigidDynCubeObj", 0x158, DynObj_LookupHashItem_5(), 0);
    g_54f498 = data_1;
    QTask_TriggerEvent(data_1, 1, AIGraph_LoadParameters);
    QTask_RemoveEventCallback(g_54f498, 0, AIGraph_LoadParameters);
    QTask_TriggerEvent(g_54f498, 2, AIGraph_LoadParameters);
    int32_t data_3 = Script_ParseEnumReal32_15();
    QTask_RemoveEventCallback(g_54f498, data_3, AnimRigidDynCubeObj_Update);
    int32_t data_4 = Script_ParseEnumString_15();
    int32_t item_8_1 = data_4;
    data_4 = g_54f498;
    QTask_RemoveEventCallback(data_4, item_8_1, sub_52abd0);
    int32_t data_5 = Script_EvaluateCondition_15();
    QTask_RemoveEventCallback(g_54f498, data_5, sub_52ac00);
    int32_t data_6 = Script_FormatString_15();
    QTask_RemoveEventCallback(g_54f498, data_6, AnimRigidDynCubeObj_OnEvent);
    int32_t data_7 = Script_SpawnNewTask_16();
    int32_t item_8_4 = data_7;
    data_7 = g_54f498;
    return QTask_RemoveEventCallback(data_7, item_8_4, AnimRigidDynCubeObj_Action);
}
