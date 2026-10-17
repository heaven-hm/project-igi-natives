// IGI native provenance: Fence_Init - 0x0043F900 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0043F900-Fence_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Fence_Init.h"
void* Fence_Init()

{
    int32_t item_17c = 0;
    int16_t data_1 = TaskType_Register("Fence", 0x178, DynObj_LookupHashItem_5(), 0);
    g_57c154 = data_1;
    QTask_RemoveEventCallback(data_1, 0, Fence_LoadParameters);
    QTask_TriggerEvent(g_57c154, 1, Fence_Setup);
    QTask_TriggerEvent(g_57c154, 2, Fence_Process);
    int32_t data_3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_57c154, data_3, sub_43fe90);
    int32_t data_4 = Script_ParseEnumReal32_8();
    int32_t item_180_1 = data_4;
    data_4 = g_57c154;
    QTask_RemoveEventCallback(data_4, item_180_1, Fence_Update);
    int32_t data_5 = Level_LoadLevel_2();
    QTask_RemoveEventCallback(g_57c154, data_5, sub_43ff70);
    int32_t data_6 = Level_InitTextures_2();
    QTask_RemoveEventCallback(g_57c154, data_6, Fence_OnEvent);
    int32_t data_7 = Level_CheckQTaskID_2();
    int32_t item_180_4 = data_7;
    data_7 = g_57c154;
    QTask_RemoveEventCallback(data_7, item_180_4, sub_4ef8b0);
    int32_t data_8 = Level_InitSprites_2();
    QTask_RemoveEventCallback(g_57c154, data_8, AIGraph_LoadParameters);
    int32_t data_9 = Level_SetMission_2();
    QTask_RemoveEventCallback(g_57c154, data_9, sub_440230);
    g_57c150 = Script_EvaluateCondition_7(4);
    int32_t data_11 = Script_ParseEnumReal32_4();
    void item_178;
    void item_88;
    Script_UndefinedParameterTy(g_57c150, &item_178, &item_88, data_11, 7, 0);
    int32_t data_12 = Script_ParseEnumString_2();
    void item_70;
    Script_UndefinedParameterTy(g_57c150, &item_178, &item_70, data_12, 7, 0);
    int32_t data_13 = Script_EvaluateCondition_3();
    void item_6c;
    Script_UndefinedParameterTy(g_57c150, &item_178, &item_6c, data_13, 7, 0);
    int32_t data_14 = Script_CallNativeHandler_3();
    void item_58;
    Script_UndefinedParameterTy(g_57c150, &item_178, &item_58, data_14, 7, 0);
    return TaskType_Set("TASKTYPE_FENCE", *g_57c154);
}
