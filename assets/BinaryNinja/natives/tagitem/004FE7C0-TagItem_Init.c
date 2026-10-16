#include "TagItem_Init.h"
int32_t* TagItem_Init()

{
    g_a7a4f4 = QTask_UnableToAllocateEvent(0);
    int32_t v_4 = 0;
    int16_t valA2 = TaskType_Register("TagItem", 0x124, QTask_OpenEvent_2(), 0);
    g_a7a4fc = valA2;
    QTask_RemoveEventCallback(valA2, 0, AIGraph_LoadParameters);
    QTask_TriggerEvent(g_a7a4fc, 1, AIGraph_LoadParameters);
    QTask_TriggerEvent(g_a7a4fc, 2, AIGraph_LoadParameters);
    int32_t valA4 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_a7a4fc, valA4, sub_4fea60);
    g_a7a4ec = Script_EvaluateCondition_7(1);
    int32_t valA6 = Script_SpawnNewTask_4();
    Script_UndefinedParameterTy(g_a7a4ec, 0, 0x20, valA6, 7, 0);
    int32_t v_1c = 0;
    int16_t valA8 = TaskType_Register("TagItemInt32", 0x128, g_a7a4fc, 0);
    g_a7a4f6 = valA8;
    QTask_RemoveEventCallback(valA8, 0, sub_4feaa0);
    int32_t valA9 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_a7a4f6, valA9, sub_4feae0);
    g_a7a4f8 = Script_FormatString_7(g_a7a4ec, 2);
    int32_t valA12 = Script_ParseEnumString_3();
    Script_UndefinedParameterTy(g_a7a4f8, 0, 0x124, valA12, 7, 0);
    int32_t v_1c_1 = 0;
    int16_t valA13 = TaskType_Register("TagItemReal32", 0x128, g_a7a4fc, 0);
    g_a7a4e0 = valA13;
    QTask_RemoveEventCallback(valA13, 0, sub_4feaf0);
    int32_t valA14 = Script_ParseEnumInt32_8();
    int32_t v_8_2 = valA14;
    valA14 = g_a7a4e0;
    QTask_RemoveEventCallback(valA14, v_8_2, sub_4feb10);
    g_a7a4f0 = Script_FormatString_7(g_a7a4ec, 2);
    int32_t valA16 = Script_EvaluateCondition_2();
    Script_UndefinedParameterTy(g_a7a4f0, 0, 0x124, valA16, 7, 0);
    int32_t v_1c_2 = 0;
    int16_t valA18 = TaskType_Register("TagItemString16", 0x134, g_a7a4fc, 0);
    g_a7a4fe = valA18;
    QTask_RemoveEventCallback(valA18, 0, sub_4feb20);
    int32_t valA19 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_a7a4fe, valA19, sub_4feb40);
    g_a7a4e4 = Script_FormatString_7(g_a7a4ec, 2);
    int32_t valA21 = Script_EvaluateCondition_3();
    Script_UndefinedParameterTy(g_a7a4e4, 0, 0x124, valA21, 7, 0);
    int32_t v_1c_3 = 0;
    int16_t valA23 = TaskType_Register("TagItemString256", 0x224, g_a7a4fc, 0);
    g_a7a4e8 = valA23;
    QTask_RemoveEventCallback(valA23, 0, sub_4feb50);
    int32_t valA24 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_a7a4e8, valA24, sub_4feb70);
    g_a7a500 = Script_FormatString_7(g_a7a4ec, 2);
    int32_t valA27 = Script_SpawnNewTask_4();
    return Script_UndefinedParameterTy(g_a7a500, 0, 0x124, valA27, 7, 0);
}
