// IGI native provenance: Generator_Init - 0x0043B2F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0043B2F0-Generator_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Generator_Init.h"
int32_t* Generator_Init()

{
    int32_t item_2c4 = 0;
    int16_t data_1 = TaskType_Register("Generator", 0x2c0, FX_TrailUpdate(), 0);
    g_53c2fc = data_1;
    QTask_RemoveEventCallback(data_1, 0, sub_43b490);
    QTask_TriggerEvent(g_53c2fc, 1, Generator_LoadParameters);
    QTask_TriggerEvent(g_53c2fc, 2, sub_43b650);
    int32_t data_3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_53c2fc, data_3, sub_43b680);
    int32_t data_4 = Script_ParseEnumReal32_8();
    int32_t item_2c8_1 = data_4;
    data_4 = g_53c2fc;
    QTask_RemoveEventCallback(data_4, item_2c8_1, sub_43b690);
    int32_t data_5 = Script_FormatString_5();
    QTask_TriggerEvent(g_53c2fc, data_5, Generator_Setup);
    int32_t data_6 = Script_SpawnNewTask_6();
    QTask_TriggerEvent(g_53c2fc, data_6, Generator_Process);
    g_57bf3c = Script_FormatString_7(FX_ExplosionSpawn_2(), 5);
    int32_t data_9 = Script_EvaluateCondition_3();
    void item_2c0;
    void item_30;
    Script_UndefinedParameterTy(g_57bf3c, &item_2c0, &item_30, data_9, 7, 0);
    int32_t data_10 = Script_EvaluateCondition_3();
    void item_20;
    Script_UndefinedParameterTy(g_57bf3c, &item_2c0, &item_20, data_10, 7, 0);
    int32_t data_11 = Script_CallNativeHandler_3();
    void item_80;
    Script_UndefinedParameterTy(g_57bf3c, &item_2c0, &item_80, data_11, 7, 0);
    int32_t data_12 = Script_ParseEnumInt32_4();
    void item_c;
    Script_UndefinedParameterTy(g_57bf3c, &item_2c0, &item_c, data_12, 7, 0);
    int32_t data_13 = Script_EvaluateCondition_2();
    void item_10;
    return Script_UndefinedParameterTy(g_57bf3c, &item_2c0, &item_10, data_13, 7, 0);
}
