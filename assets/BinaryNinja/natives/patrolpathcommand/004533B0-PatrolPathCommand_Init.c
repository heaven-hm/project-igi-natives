// IGI native provenance: PatrolPathCommand_Init - 0x004533B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004533B0-PatrolPathCommand_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PatrolPathCommand_Init.h"
int32_t* PatrolPathCommand_Init()

{
    int32_t item_2c = 0;
    int16_t data_1 = TaskType_Register("PatrolPathCommand", 0x28, QTask_OpenEvent_2(), 0);
    g_53dfcc = data_1;
    QTask_RemoveEventCallback(data_1, 0, sub_453470);
    int32_t data_2 = Script_ParseEnumInt32_8();
    int32_t item_30 = data_2;
    data_2 = g_53dfcc;
    QTask_RemoveEventCallback(data_2, item_30, sub_453480);
    int32_t data_3 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_53dfcc, data_3, sub_453490);
    g_5bda68 = Script_EvaluateCondition_7(2);
    int32_t data_5 = Script_ParseEnumString_3();
    void item_28;
    void item_8;
    Script_UndefinedParameterTy(g_5bda68, &item_28, &item_8, data_5, 7, 0);
    int32_t data_6 = Script_ParseEnumString_3();
    void item_4;
    return Script_UndefinedParameterTy(g_5bda68, &item_28, &item_4, data_6, 7, 0);
}
