// IGI native provenance: Mine_Init - 0x00475AC0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00475AC0-Mine_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Mine_Init.h"
void* Mine_Init()

{
    int32_t item_254 = 0;
    int16_t data_1 = TaskType_Register("Mine", 0x250, FX_TrailUpdate(), 0);
    g_5be3a0 = data_1;
    QTask_RemoveEventCallback(data_1, 0, Mine_LoadParameters);
    QTask_TriggerEvent(g_5be3a0, 1, sub_475cc0);
    QTask_TriggerEvent(g_5be3a0, 2, Mine_Setup);
    int32_t data_3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_5be3a0, data_3, sub_475d80);
    int32_t data_4 = Script_ParseEnumReal32_8();
    int32_t item_258_1 = data_4;
    data_4 = g_5be3a0;
    QTask_RemoveEventCallback(data_4, item_258_1, Mine_Process);
    int32_t data_5 = Level_LoadLevel_2();
    QTask_RemoveEventCallback(g_5be3a0, data_5, Mine_Update);
    int32_t data_6 = AI_CheckHearing_25();
    QTask_RemoveEventCallback(g_5be3a0, data_6, Mine_OnEvent);
    g_5be3a8 = Mem_Alloc8(0x40);
    g_5be39c = Script_FormatString_7(FX_ExplosionSpawn_2(), 2);
    int32_t data_10 = Script_EvaluateCondition_2();
    void item_250;
    void item_c;
    Script_UndefinedParameterTy(g_5be39c, &item_250, &item_c, data_10, 7, 0);
    int32_t data_11 = Script_EvaluateCondition_2();
    void item_10;
    Script_UndefinedParameterTy(g_5be39c, &item_250, &item_10, data_11, 7, 0);
    return TaskType_Set("TASKTYPE_MINE", *g_5be3a0);
}
