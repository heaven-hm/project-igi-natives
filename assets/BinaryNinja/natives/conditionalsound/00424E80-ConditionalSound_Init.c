// IGI native provenance: ConditionalSound_Init - 0x00424E80 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00424E80-ConditionalSound_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ConditionalSound_Init.h"
int32_t* ConditionalSound_Init()

{
    int32_t item_12c = 0;
    int16_t data_1 = TaskType_Register("ConditionalSound", 0x128, QTask_OpenEvent_2(), 0);
    g_57bc68 = data_1;
    QTask_RemoveEventCallback(data_1, 0, ConditionalSound_LoadParameters);
    QTask_TriggerEvent(g_57bc68, 1, ConditionalSound_Tick);
    QTask_TriggerEvent(g_57bc68, 2, ConditionalSound_Process);
    int32_t data_3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_57bc68, data_3, sub_425390);
    int32_t data_4 = Script_ParseEnumReal32_8();
    int32_t item_130_1 = data_4;
    data_4 = g_57bc68;
    QTask_RemoveEventCallback(data_4, item_130_1, sub_4253a0);
    int32_t data_5 = Script_FormatString_5();
    QTask_TriggerEvent(g_57bc68, data_5, ConditionalSound_Update);
    int32_t data_6 = Script_SpawnNewTask_6();
    QTask_TriggerEvent(g_57bc68, data_6, ConditionalSound_OnEvent);
    int32_t data_7 = DynObj_LinkDynamicCube_12();
    int32_t item_130_4 = data_7;
    data_7 = g_57bc68;
    QTask_RemoveEventCallback(data_7, item_130_4, ConditionalSound_Action);
    g_57bc6c = Script_EvaluateCondition_7(6);
    int32_t data_9 = Script_CallNativeHandler_3();
    void item_128;
    void item_108;
    Script_UndefinedParameterTy(g_57bc6c, &item_128, &item_108, data_9, 7, 0);
    int32_t data_11 = Script_FormatString_3();
    void item_b8;
    Script_UndefinedParameterTy(g_57bc6c, &item_128, &item_b8, data_11, 7, 0);
    int32_t data_13 = Script_ParseEnumReal32_4();
    void item_98;
    Script_UndefinedParameterTy(g_57bc6c, &item_128, &item_98, data_13, 7, 0);
    int32_t data_15 = Script_ParseEnumInt32_4();
    void item_80;
    Script_UndefinedParameterTy(g_57bc6c, &item_128, &item_80, data_15, 7, 0);
    int32_t data_17 = Script_ParseEnumInt32_4();
    void item_7f;
    Script_UndefinedParameterTy(g_57bc6c, &item_128, &item_7f, data_17, 7, 0);
    int32_t data_19 = Script_ParseEnumInt32_4();
    void item_75;
    return Script_UndefinedParameterTy(g_57bc6c, &item_128, &item_75, data_19, 7, 0);
}
