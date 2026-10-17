// IGI native provenance: ScreenGrab_Init - 0x004EE410 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004EE410-ScreenGrab_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ScreenGrab_Init.h"
int32_t* ScreenGrab_Init()

{
    int32_t item_2c = 0;
    int16_t data_1 = TaskType_Register("ScreenGrab", 0x28, QTask_OpenEvent_2(), 0);
    g_54dcb8 = data_1;
    QTask_RemoveEventCallback(data_1, 0, sub_4ee530);
    QTask_TriggerEvent(g_54dcb8, 1, sub_4ee540);
    int32_t data_3 = StatusScreen_GetEvent();
    QTask_TriggerEvent(g_54dcb8, data_3, sub_4ee5e0);
    QTask_TriggerEvent(g_54dcb8, 2, AIGraph_LoadParameters);
    int32_t data_4 = Script_ParseEnumReal32_8();
    int32_t item_30_1 = data_4;
    data_4 = g_54dcb8;
    QTask_RemoveEventCallback(data_4, item_30_1, ScreenGrab_Setup);
    int32_t data_5 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_54dcb8, data_5, sub_4ee680);
    g_a70c60 = Script_EvaluateCondition_7(2);
    int32_t data_7 = Script_CallNativeHandler_3();
    void item_28;
    void item_8;
    Script_UndefinedParameterTy(g_a70c60, &item_28, &item_8, data_7, 7, 0);
    int32_t data_8 = Script_ParseEnumInt32_4();
    void item_4;
    int32_t* result = Script_UndefinedParameterTy(g_a70c60, &item_28, &item_4, data_8, 7, 0);
    g_a70c64 = 0;
    g_a70c5b = 0;
    g_a70c5a = 0;
    return result;
}
