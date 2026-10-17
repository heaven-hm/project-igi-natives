// IGI native provenance: ScrollListBox_Init - 0x0041B8E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0041B8E0-ScrollListBox_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ScrollListBox_Init.h"
❓  int32_t* ScrollListBox_Init()
// This function has unresolved stack usage. View graph of stack usage to resolve.

{
    Camera_UpdateTransform_5(0x13fc);
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("ScrollListBox", 0x13fc, Menu_PlayMusic_13(), 0);
    g_53b59c = data_1;
    QTask_TriggerEvent(data_1, 1, ScrollListBox_LoadParameters);
    int32_t data_2 = StatusScreen_GetEvent();
    int32_t item_8 = data_2;
    data_2 = g_53b59c;
    QTask_TriggerEvent(data_2, item_8, ScrollListBox_Setup);
    QTask_TriggerEvent(g_53b59c, 2, ScrollListBox_Process);
    QTask_RemoveEventCallback(g_53b59c, 0, sub_41bb10);
    int32_t data_3 = Script_ParseEnumInt32_8();
    int32_t item_8_1 = data_3;
    data_3 = g_53b59c;
    QTask_RemoveEventCallback(data_3, item_8_1, sub_41c300);
    int32_t data_4 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_53b59c, data_4, sub_41bca0);
    int32_t data_5 = Menu_HandleInput_13();
    QTask_TriggerEvent(g_53b59c, data_5, ScrollListBox_Update);
    int32_t data_6 = Menu_RequestScreen_14();
    int32_t item_8_4 = data_6;
    data_6 = g_53b59c;
    QTask_TriggerEvent(data_6, item_8_4, ScrollListBox_OnEvent);
    int32_t data_7 = Script_FormatString_5();
    QTask_TriggerEvent(g_53b59c, data_7, ScrollListBox_Action);
    int32_t data_8 = Script_SpawnNewTask_6();
    QTask_TriggerEvent(g_53b59c, data_8, ScrollListBox_Cleanup);
    g_57bbb4 = Script_EvaluateCondition_7(7);
    int32_t data_10 = Script_FormatString_3();
    void arg_125c;
    Script_UndefinedParameterTy(g_57bbb4, &return_addr, &arg_125c, data_10, 7, 0);
    int32_t data_11 = Script_CallNativeHandler_3();
    void arg_12b0;
    Script_UndefinedParameterTy(g_57bbb4, &return_addr, &arg_12b0, data_11, 7, 0);
    int32_t data_12 = Script_CallNativeHandler_3();
    void arg_1300;
    Script_UndefinedParameterTy(g_57bbb4, &return_addr, &arg_1300, data_12, 7, 0);
    int32_t data_13 = Script_CallNativeHandler_3();
    void arg_1350;
    Script_UndefinedParameterTy(g_57bbb4, &return_addr, &arg_1350, data_13, 7, 0);
    int32_t data_14 = Script_ParseEnumString_3();
    void arg_28;
    Script_UndefinedParameterTy(g_57bbb4, &return_addr, &arg_28, data_14, 7, 0);
    int32_t data_15 = Script_ParseEnumString_3();
    void arg_2c;
    Script_UndefinedParameterTy(g_57bbb4, &return_addr, &arg_2c, data_15, 7, 0);
    int32_t data_16 = Script_CallNativeHandler_3();
    void arg_13a0;
    return Script_UndefinedParameterTy(g_57bbb4, &return_addr, &arg_13a0, data_16, 7, 0);
}
