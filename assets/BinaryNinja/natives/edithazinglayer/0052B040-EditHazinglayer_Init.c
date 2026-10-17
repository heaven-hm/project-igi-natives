// IGI native provenance: EditHazinglayer_Init - 0x0052B040 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0052B040-EditHazinglayer_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "EditHazinglayer_Init.h"
int32_t* EditHazinglayer_Init()

{
    int32_t item_8c = 0;
    int16_t data_1 = TaskType_Register("EditHazinglayer", 0x88, EditorRigidObj_OnEvent(), 0);
    g_a84398 = data_1;
    QTask_RemoveEventCallback(data_1, 0, sub_52afe0);
    QTask_RemoveEventCallback(g_a84398, 7, 0);
    QTask_TriggerEvent(g_a84398, 2, sub_52b1c0);
    int32_t data_3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_a84398, data_3, sub_52b2f0);
    int32_t data_4 = Script_ParseEnumReal32_8();
    int32_t item_90_1 = data_4;
    data_4 = g_a84398;
    QTask_RemoveEventCallback(data_4, item_90_1, EditHazinglayer_LoadParameters);
    int32_t data_5 = SoundSys_AttachLipsync_2();
    QTask_RemoveEventCallback(g_a84398, data_5, sub_52bfe0);
    g_a8439c = Script_EvaluateCondition_7(5);
    int32_t data_7 = Script_ParseEnumReal32_4();
    void item_88;
    void item_60;
    Script_UndefinedParameterTy(g_a8439c, &item_88, &item_60, data_7, 7, 0);
    int32_t data_8 = Script_ParseEnumString_3();
    void item_18;
    Script_UndefinedParameterTy(g_a8439c, &item_88, &item_18, data_8, 7, 0);
    int32_t data_9 = Script_EvaluateCondition_2();
    void item_14;
    Script_UndefinedParameterTy(g_a8439c, &item_88, &item_14, data_9, 7, 0);
    int32_t data_10 = Script_ParseEnumInt32_3();
    void item_10;
    Script_UndefinedParameterTy(g_a8439c, &item_88, &item_10, data_10, 7, 0);
    int32_t data_11 = Script_ParseEnumInt32_3();
    void item_8;
    return Script_UndefinedParameterTy(g_a8439c, &item_88, &item_8, data_11, 7, 0);
}
