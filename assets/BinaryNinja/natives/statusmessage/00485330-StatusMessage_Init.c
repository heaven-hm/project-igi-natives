// IGI native provenance: StatusMessage_Init - 0x00485330 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00485330-StatusMessage_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "StatusMessage_Init.h"
int32_t* StatusMessage_Init()

{
    int32_t item_1e4 = 0;
    int16_t data_1 = TaskType_Register("StatusMessage", 0x1e0, EditorRigidObj_OnEvent(), 0);
    g_status_word = data_1;
    QTask_RemoveEventCallback(data_1, 0, sub_485570);
    QTask_TriggerEvent(g_status_word, 1, StatusMessage_LoadParameters);
    QTask_TriggerEvent(g_status_word, 2, StatusMessage_Setup);
    int32_t data_3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_status_word, data_3, sub_485740);
    int32_t data_4 = Script_ParseEnumReal32_8();
    int32_t item_1e8_1 = data_4;
    data_4 = g_status_word;
    QTask_RemoveEventCallback(data_4, item_1e8_1, StatusMessage_Enqueue);
    int32_t data_5 = Script_FormatString_5();
    QTask_TriggerEvent(g_status_word, data_5, StatusMessage_Update_2);
    int32_t data_6 = Script_SpawnNewTask_6();
    QTask_TriggerEvent(g_status_word, data_6, StatusMessage_OnEvent_2);
    g_5c8a34 = 0x42c80000;
    g_5c8a30 = 0;
    g_5c8a38 = Script_EvaluateCondition_7(9);
    int32_t data_8 = Script_ParseEnumReal32_4();
    void item_1e0;
    void item_1c0;
    Script_UndefinedParameterTy(g_5c8a38, &item_1e0, &item_1c0, data_8, 7, 0);
    int32_t data_9 = Script_SpawnNewTask_3();
    void item_1a8;
    Script_UndefinedParameterTy(g_5c8a38, &item_1e0, &item_1a8, data_9, 7, 0);
    int32_t data_10 = Script_CallNativeHandler_3();
    void item_180;
    Script_UndefinedParameterTy(g_5c8a38, &item_1e0, &item_180, data_10, 7, 0);
    int32_t data_11 = Script_CallNativeHandler_3();
    void item_130;
    Script_UndefinedParameterTy(g_5c8a38, &item_1e0, &item_130, data_11, 7, 0);
    int32_t data_12 = Script_SpawnNewTask_4();
    void item_12c;
    Script_UndefinedParameterTy(g_5c8a38, &item_1e0, &item_12c, data_12, 7, 0);
    int32_t data_13 = Script_EvaluateCondition_3();
    void item_2c;
    Script_UndefinedParameterTy(g_5c8a38, &item_1e0, &item_2c, data_13, 7, 0);
    int32_t data_14 = Script_ParseEnumInt32_4();
    void item_1c;
    Script_UndefinedParameterTy(g_5c8a38, &item_1e0, &item_1c, data_14, 7, 0);
    int32_t data_15 = Script_ParseEnumInt32_4();
    void item_1a;
    Script_UndefinedParameterTy(g_5c8a38, &item_1e0, &item_1a, data_15, 7, 0);
    int32_t data_16 = Script_EvaluateCondition_2();
    void item_8;
    return Script_UndefinedParameterTy(g_5c8a38, &item_1e0, &item_8, data_16, 7, &g_5c8a30);
}
