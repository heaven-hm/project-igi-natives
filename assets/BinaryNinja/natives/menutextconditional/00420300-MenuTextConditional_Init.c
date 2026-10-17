// IGI native provenance: MenuTextConditional_Init - 0x00420300 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00420300-MenuTextConditional_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MenuTextConditional_Init.h"
int32_t* MenuTextConditional_Init()

{
    int32_t item_21c = 0;
    int16_t data_1 = TaskType_Register("MenuTextConditional", 0x218, Menu_PlayMusic_13(), 0);
    g_53b700 = data_1;
    QTask_TriggerEvent(data_1, 1, MenuTextConditional_LoadParameters);
    int32_t data_2 = StatusScreen_GetEvent();
    int32_t item_220 = data_2;
    data_2 = g_53b700;
    QTask_TriggerEvent(data_2, item_220, MenuTextConditional_Setup);
    QTask_TriggerEvent(g_53b700, 2, MenuTextConditional_Process);
    QTask_RemoveEventCallback(g_53b700, 0, sub_420550);
    int32_t data_3 = Script_ParseEnumInt32_8();
    int32_t item_220_1 = data_3;
    data_3 = g_53b700;
    QTask_RemoveEventCallback(data_3, item_220_1, sub_420bb0);
    int32_t data_4 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_53b700, data_4, MenuTextConditional_Update);
    int32_t data_5 = Menu_LeaveMenus_14();
    QTask_TriggerEvent(g_53b700, data_5, MenuText_Update);
    int32_t data_6 = Menu_RequestScreen_15();
    int32_t item_220_4 = data_6;
    data_6 = g_53b700;
    QTask_RemoveEventCallback(data_6, item_220_4, MenuTextConditional_Action);
    g_57bbec = Script_EvaluateCondition_7(7);
    int32_t data_8 = Script_FormatString_3();
    void item_218;
    void item_1c4;
    Script_UndefinedParameterTy(g_57bbec, &item_218, &item_1c4, data_8, 7, 0);
    int32_t data_10 = Script_FormatString_3();
    void item_184;
    Script_UndefinedParameterTy(g_57bbec, &item_218, &item_184, data_10, 7, 0);
    int32_t data_12 = Script_ParseEnumString_3();
    void item_100;
    Script_UndefinedParameterTy(g_57bbec, &item_218, &item_100, data_12, 7, 0);
    int32_t data_14 = Script_CallNativeHandler_3();
    void item_ac;
    Script_UndefinedParameterTy(g_57bbec, &item_218, &item_ac, data_14, 7, 0);
    int32_t data_16 = Script_CallNativeHandler_3();
    void item_5c;
    Script_UndefinedParameterTy(g_57bbec, &item_218, &item_5c, data_16, 7, 0);
    int32_t data_18 = Script_CallNativeHandler_3();
    void item_fc;
    Script_UndefinedParameterTy(g_57bbec, &item_218, &item_fc, data_18, 7, 0);
    int32_t data_20 = Script_FormatString_3();
    void item_144;
    return Script_UndefinedParameterTy(g_57bbec, &item_218, &item_144, data_20, 7, 0);
}
