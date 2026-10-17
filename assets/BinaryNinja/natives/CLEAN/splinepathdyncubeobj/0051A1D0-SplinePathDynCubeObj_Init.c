// IGI native provenance: SplinePathDynCubeObj_Init - 0x0051A1D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0051A1D0-SplinePathDynCubeObj_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SplinePathDynCubeObj_Init.h"
int32_t SplinePathDynCubeObj_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("SplinePathDynCubeObj", 0x200, g_54875c, 0);
    g_54ed4e = data_1;
    QTask_RemoveEventCallback(data_1, 0, sub_51a240);
    QTask_TriggerEvent(g_54ed4e, 2, AIGraph_LoadParameters);
    int32_t data_2 = Script_ParseEnumInt32_8();
    return QTask_RemoveEventCallback(g_54ed4e, data_2, sub_51a230);
}
