// IGI native provenance: TagItem_Init - 0x004FE7C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004FE7C0-TagItem_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "TagItem_Init.h"
int32_t* TagItem_Init()

{
    g_a7a4f4 = QTask_UnableToAllocateEvent(0);
    int32_t item_4 = 0;
    int16_t data_2 = TaskType_Register("TagItem", 0x124, QTask_OpenEvent_2(), 0);
    g_a7a4fc = data_2;
    QTask_RemoveEventCallback(data_2, 0, AIGraph_LoadParameters);
    QTask_TriggerEvent(g_a7a4fc, 1, AIGraph_LoadParameters);
    QTask_TriggerEvent(g_a7a4fc, 2, AIGraph_LoadParameters);
    int32_t data_4 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_a7a4fc, data_4, sub_4fea60);
    g_a7a4ec = Script_EvaluateCondition_7(1);
    int32_t data_6 = Script_SpawnNewTask_4();
    Script_UndefinedParameterTy(g_a7a4ec, 0, 0x20, data_6, 7, 0);
    int32_t item_1c = 0;
    int16_t data_8 = TaskType_Register("TagItemInt32", 0x128, g_a7a4fc, 0);
    g_a7a4f6 = data_8;
    QTask_RemoveEventCallback(data_8, 0, sub_4feaa0);
    int32_t data_9 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_a7a4f6, data_9, sub_4feae0);
    g_a7a4f8 = Script_FormatString_7(g_a7a4ec, 2);
    int32_t data_12 = Script_ParseEnumString_3();
    Script_UndefinedParameterTy(g_a7a4f8, 0, 0x124, data_12, 7, 0);
    int32_t item_1c_1 = 0;
    int16_t data_13 = TaskType_Register("TagItemReal32", 0x128, g_a7a4fc, 0);
    g_a7a4e0 = data_13;
    QTask_RemoveEventCallback(data_13, 0, sub_4feaf0);
    int32_t data_14 = Script_ParseEnumInt32_8();
    int32_t item_8_2 = data_14;
    data_14 = g_a7a4e0;
    QTask_RemoveEventCallback(data_14, item_8_2, sub_4feb10);
    g_a7a4f0 = Script_FormatString_7(g_a7a4ec, 2);
    int32_t data_16 = Script_EvaluateCondition_2();
    Script_UndefinedParameterTy(g_a7a4f0, 0, 0x124, data_16, 7, 0);
    int32_t item_1c_2 = 0;
    int16_t data_18 = TaskType_Register("TagItemString16", 0x134, g_a7a4fc, 0);
    g_a7a4fe = data_18;
    QTask_RemoveEventCallback(data_18, 0, sub_4feb20);
    int32_t data_19 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_a7a4fe, data_19, sub_4feb40);
    g_a7a4e4 = Script_FormatString_7(g_a7a4ec, 2);
    int32_t data_21 = Script_EvaluateCondition_3();
    Script_UndefinedParameterTy(g_a7a4e4, 0, 0x124, data_21, 7, 0);
    int32_t item_1c_3 = 0;
    int16_t data_23 = TaskType_Register("TagItemString256", 0x224, g_a7a4fc, 0);
    g_a7a4e8 = data_23;
    QTask_RemoveEventCallback(data_23, 0, sub_4feb50);
    int32_t data_24 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_a7a4e8, data_24, sub_4feb70);
    g_a7a500 = Script_FormatString_7(g_a7a4ec, 2);
    int32_t data_27 = Script_SpawnNewTask_4();
    return Script_UndefinedParameterTy(g_a7a500, 0, 0x124, data_27, 7, 0);
}
