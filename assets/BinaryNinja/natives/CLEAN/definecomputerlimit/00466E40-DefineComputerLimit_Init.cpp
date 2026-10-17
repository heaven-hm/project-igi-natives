// IGI native provenance: DefineComputerLimit_Init - 0x00466E40 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00466E40-DefineComputerLimit_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DefineComputerLimit_Init.h"
int32_t* DefineComputerLimit_Init()

{
    int32_t item_44 = 0;
    int16_t data_1 = TaskType_Register("DefineComputerLimit", 0x40, DynObj_LookupHashItem_5(), 0);
    g_5bdc60 = data_1;
    QTask_RemoveEventCallback(data_1, 0, sub_466f10);
    QTask_TriggerEvent(g_5bdc60, 2, sub_466f20);
    int32_t data_3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_5bdc60, data_3, sub_466f30);
    int32_t data_4 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_5bdc60, data_4, AIGraph_LoadParameters);
    g_5bdc5c = Script_EvaluateCondition_7(2);
    int32_t data_6 = Script_ParseEnumReal32_4();
    void item_40;
    void item_20;
    Script_UndefinedParameterTy(g_5bdc5c, &item_40, &item_20, data_6, 7, 0);
    int32_t data_7 = Script_EvaluateCondition_2();
    void item_8;
    return Script_UndefinedParameterTy(g_5bdc5c, &item_40, &item_8, data_7, 7, 0);
}
