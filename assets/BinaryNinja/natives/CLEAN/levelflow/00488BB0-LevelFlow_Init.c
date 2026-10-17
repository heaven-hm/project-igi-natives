// IGI native provenance: LevelFlow_Init - 0x00488BB0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00488BB0-LevelFlow_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "LevelFlow_Init.h"
void* LevelFlow_Init()

{
    g_5c8ab4 = DynObj_MtpNlodvirmodelD("306_01_1");
    int32_t item_12c = 0;
    int16_t data_2 = TaskType_Register("LevelFlow", 0x128, EditorRigidObj_OnEvent(), 0);
    g_5c8ab8 = data_2;
    QTask_RemoveEventCallback(data_2, 0, sub_488ed0);
    QTask_TriggerEvent(g_5c8ab8, 1, LevelFlow_LoadParameters);
    QTask_TriggerEvent(g_5c8ab8, 2, sub_489200);
    int32_t data_4 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_5c8ab8, data_4, sub_489280);
    int32_t data_5 = Script_ParseEnumReal32_8();
    int32_t item_130_1 = data_5;
    data_5 = g_5c8ab8;
    QTask_RemoveEventCallback(data_5, item_130_1, LevelFlow_Setup);
    int32_t data_6 = Script_FormatString_5();
    QTask_TriggerEvent(g_5c8ab8, data_6, LevelFlow_Process);
    int32_t data_7 = Script_SpawnNewTask_6();
    QTask_TriggerEvent(g_5c8ab8, data_7, LevelFlow_Update);
    QTask_RemoveEventCallback(g_5c8ab8, 7, 0);
    g_5c8aa4 = Script_EvaluateCondition_7(7);
    int32_t data_10 = Script_ParseEnumReal32_4();
    void item_128;
    void item_108;
    Script_UndefinedParameterTy(g_5c8aa4, &item_128, &item_108, data_10, 7, 0);
    int32_t data_12 = Script_SpawnNewTask_3();
    void item_f0;
    Script_UndefinedParameterTy(g_5c8aa4, &item_128, &item_f0, data_12, 7, 0);
    Script_EvaluateCondition_9();
    int32_t data_14 = Script_EvaluateCondition_2();
    void item_bc;
    Script_UndefinedParameterTy(g_5c8aa4, &item_128, &item_bc, data_14, 7, &g_a76be8);
    int32_t data_16 = Script_CallNativeHandler_3();
    void item_ac;
    Script_UndefinedParameterTy(g_5c8aa4, &item_128, &item_ac, data_16, 7, 0);
    int32_t data_18 = Script_CallNativeHandler_3();
    void item_5c;
    Script_UndefinedParameterTy(g_5c8aa4, &item_128, &item_5c, data_18, 7, 0);
    int32_t data_20 = Script_ParseEnumInt32_4();
    void item_b8;
    Script_UndefinedParameterTy(g_5c8aa4, &item_128, &item_b8, data_20, 7, 0);
    int32_t data_22 = Script_EvaluateCondition_2();
    void item_b4;
    Script_UndefinedParameterTy(g_5c8aa4, &item_128, &item_b4, data_22, 7, 0);
    TaskType_Set("TASKTYPE_LEVELFLOW", *g_5c8ab8);
    Game_DefineOptions("LevelFlow_GetBreakCutSceneKey", LevelFlow_GetBreakCutSceneKey, 0, 0);
    Game_DefineOptions("LevelFlow_LevelFailed", LevelFlow_LevelFailed, 0, 0);
    return Game_DefineOptions("LevelFlow_IsCountryUSA", LevelFlow_IsCountryUSA, 0, 0);
}
