// IGI native provenance: SlideBar_Init - 0x0041F340 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0041F340-SlideBar_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SlideBar_Init.h"
int32_t* SlideBar_Init()

{
    int32_t item_254 = 0;
    int16_t data_1 = TaskType_Register("SlideBar", 0x250, Menu_PlayMusic_13(), 0);
    g_53b6bc = data_1;
    QTask_TriggerEvent(data_1, 1, SlideBar_LoadParameters);
    int32_t data_2 = StatusScreen_GetEvent();
    int32_t item_258 = data_2;
    data_2 = g_53b6bc;
    QTask_TriggerEvent(data_2, item_258, SlideBar_Setup);
    QTask_TriggerEvent(g_53b6bc, 2, SlideBar_Process);
    QTask_RemoveEventCallback(g_53b6bc, 0, SlideBar_Update);
    int32_t data_3 = Script_ParseEnumInt32_8();
    int32_t item_258_1 = data_3;
    data_3 = g_53b6bc;
    QTask_RemoveEventCallback(data_3, item_258_1, sub_41ff20);
    int32_t data_4 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_53b6bc, data_4, SlideBar_OnEvent);
    int32_t data_5 = Menu_HandleInput_13();
    QTask_TriggerEvent(g_53b6bc, data_5, SlideBar_Action);
    int32_t data_6 = Menu_RequestScreen_14();
    int32_t item_258_4 = data_6;
    data_6 = g_53b6bc;
    QTask_TriggerEvent(data_6, item_258_4, SlideBar_Cleanup);
    int32_t data_7 = Script_FormatString_5();
    QTask_TriggerEvent(g_53b6bc, data_7, SlideBar_Cleanup_2);
    int32_t data_8 = Script_SpawnNewTask_6();
    QTask_TriggerEvent(g_53b6bc, data_8, sub_420140);
    g_57bbe4 = Script_EvaluateCondition_7(8);
    int32_t data_10 = Script_FormatString_3();
    void item_250;
    void item_1fc;
    Script_UndefinedParameterTy(g_57bbe4, &item_250, &item_1fc, data_10, 7, 0);
    int32_t data_11 = Script_ParseEnumInt32_4();
    void item_19c;
    Script_UndefinedParameterTy(g_57bbe4, &item_250, &item_19c, data_11, 7, 0);
    int32_t data_12 = Script_ParseEnumString_3();
    void item_1a4;
    Script_UndefinedParameterTy(g_57bbe4, &item_250, &item_1a4, data_12, 7, 0);
    int32_t data_13 = Script_CallNativeHandler_3();
    void item_198;
    Script_UndefinedParameterTy(g_57bbe4, &item_250, &item_198, data_13, 7, 0);
    int32_t data_14 = Script_CallNativeHandler_3();
    void item_148;
    Script_UndefinedParameterTy(g_57bbe4, &item_250, &item_148, data_14, 7, 0);
    int32_t data_15 = Script_CallNativeHandler_3();
    void item_f8;
    Script_UndefinedParameterTy(g_57bbe4, &item_250, &item_f8, data_15, 7, 0);
    int32_t data_16 = Script_CallNativeHandler_3();
    void item_a8;
    Script_UndefinedParameterTy(g_57bbe4, &item_250, &item_a8, data_16, 7, 0);
    int32_t data_17 = Script_CallNativeHandler_3();
    void item_58;
    return Script_UndefinedParameterTy(g_57bbe4, &item_250, &item_58, data_17, 7, 0);
}
