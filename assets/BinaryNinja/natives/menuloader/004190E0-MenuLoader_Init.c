// IGI native provenance: MenuLoader_Init - 0x004190E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004190E0-MenuLoader_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MenuLoader_Init.h"
int32_t* MenuLoader_Init()

{
    int32_t item_128 = 0;
    int16_t data_1 = TaskType_Register("MenuLoader", 0x124, QTask_OpenEvent_2(), 0);
    g_539adc = data_1;
    QTask_RemoveEventCallback(data_1, 0, sub_4191f0);
    QTask_TriggerEvent(g_539adc, 2, AIGraph_LoadParameters);
    int32_t data_3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_539adc, data_3, sub_4192a0);
    int32_t data_4 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_539adc, data_4, MenuLoader_Setup);
    QTask_TriggerEvent(g_539adc, 1, AIGraph_LoadParameters);
    g_57baf4 = Script_EvaluateCondition_7(3);
    int32_t data_7 = Script_SpawnNewTask_4();
    void item_124;
    void item_104;
    Script_UndefinedParameterTy(g_57baf4, &item_124, &item_104, data_7, 7, 0);
    int32_t data_9 = Script_SpawnNewTask_2();
    void item_4;
    Script_UndefinedParameterTy(g_57baf4, &item_124, &item_4, data_9, 6, 0);
    int32_t data_11 = Script_SpawnNewTask_2();
    void item_3;
    return Script_UndefinedParameterTy(g_57baf4, &item_124, &item_3, data_11, 6, 0);
}
