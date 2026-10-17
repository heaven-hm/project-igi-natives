// IGI native provenance: ListBox_Init - 0x0041E690 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0041E690-ListBox_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ListBox_Init.h"
int32_t* ListBox_Init()

{
    int32_t item_d3c = 0;
    int16_t data_1 = TaskType_Register("ListBox", 0xd38, Menu_PlayMusic_13(), 0);
    g_53b694 = data_1;
    QTask_TriggerEvent(data_1, 1, ListBox_LoadParameters);
    int32_t data_2 = StatusScreen_GetEvent();
    int32_t item_d40 = data_2;
    data_2 = g_53b694;
    QTask_TriggerEvent(data_2, item_d40, ListBox_Setup);
    QTask_TriggerEvent(g_53b694, 2, ListBox_Process);
    QTask_RemoveEventCallback(g_53b694, 0, sub_41e8c0);
    int32_t data_3 = Script_ParseEnumInt32_8();
    int32_t item_d40_1 = data_3;
    data_3 = g_53b694;
    QTask_RemoveEventCallback(data_3, item_d40_1, sub_41f020);
    int32_t data_4 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_53b694, data_4, ListBox_Update);
    int32_t data_5 = Menu_HandleInput_13();
    QTask_TriggerEvent(g_53b694, data_5, ListBox_OnEvent);
    int32_t data_6 = Menu_RequestScreen_14();
    int32_t item_d40_4 = data_6;
    data_6 = g_53b694;
    QTask_TriggerEvent(data_6, item_d40_4, ListBox_Action);
    int32_t data_7 = Script_FormatString_5();
    QTask_TriggerEvent(g_53b694, data_7, ListBox_Cleanup);
    int32_t data_8 = Script_SpawnNewTask_6();
    QTask_TriggerEvent(g_53b694, data_8, ListBox_Cleanup_2);
    g_57bbdc = Script_EvaluateCondition_7(7);
    int32_t data_10 = Script_FormatString_3();
    void item_d38;
    void item_ce4;
    Script_UndefinedParameterTy(g_57bbdc, &item_d38, &item_ce4, data_10, 7, 0);
    int32_t data_11 = Script_FormatString_3();
    void item_ca4;
    Script_UndefinedParameterTy(g_57bbdc, &item_d38, &item_ca4, data_11, 7, 0);
    int32_t data_12 = Script_ParseEnumString_3();
    void item_14c;
    Script_UndefinedParameterTy(g_57bbdc, &item_d38, &item_14c, data_12, 7, 0);
    int32_t data_13 = Script_CallNativeHandler_3();
    void item_140;
    Script_UndefinedParameterTy(g_57bbdc, &item_d38, &item_140, data_13, 7, 0);
    int32_t data_14 = Script_CallNativeHandler_3();
    void item_f0;
    Script_UndefinedParameterTy(g_57bbdc, &item_d38, &item_f0, data_14, 7, 0);
    int32_t data_15 = Script_CallNativeHandler_3();
    void item_a0;
    Script_UndefinedParameterTy(g_57bbdc, &item_d38, &item_a0, data_15, 7, 0);
    int32_t data_16 = Script_CallNativeHandler_3();
    void item_50;
    return Script_UndefinedParameterTy(g_57bbdc, &item_d38, &item_50, data_16, 7, 0);
}
