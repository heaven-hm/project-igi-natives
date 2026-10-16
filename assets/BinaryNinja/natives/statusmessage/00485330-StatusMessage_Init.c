#include "StatusMessage_Init.h"
int32_t* StatusMessage_Init()

{
    int32_t v_1e4 = 0;
    int16_t valA1 = TaskType_Register("StatusMessage", 0x1e0, EditorRigidObj_OnEvent(), 0);
    g_status_word = valA1;
    QTask_RemoveEventCallback(valA1, 0, sub_485570);
    QTask_TriggerEvent(g_status_word, 1, StatusMessage_LoadParameters);
    QTask_TriggerEvent(g_status_word, 2, StatusMessage_Setup);
    int32_t valA3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_status_word, valA3, sub_485740);
    int32_t valA4 = Script_ParseEnumReal32_8();
    int32_t v_1e8_1 = valA4;
    valA4 = g_status_word;
    QTask_RemoveEventCallback(valA4, v_1e8_1, StatusMessage_Enqueue);
    int32_t valA5 = Script_FormatString_5();
    QTask_TriggerEvent(g_status_word, valA5, StatusMessage_Update_2);
    int32_t valA6 = Script_SpawnNewTask_6();
    QTask_TriggerEvent(g_status_word, valA6, StatusMessage_OnEvent_2);
    g_5c8a34 = 0x42c80000;
    g_5c8a30 = 0;
    g_5c8a38 = Script_EvaluateCondition_7(9);
    int32_t valA8 = Script_ParseEnumReal32_4();
    void v_1e0;
    void v_1c0;
    Script_UndefinedParameterTy(g_5c8a38, &v_1e0, &v_1c0, valA8, 7, 0);
    int32_t valA9 = Script_SpawnNewTask_3();
    void v_1a8;
    Script_UndefinedParameterTy(g_5c8a38, &v_1e0, &v_1a8, valA9, 7, 0);
    int32_t valA10 = Script_CallNativeHandler_3();
    void v_180;
    Script_UndefinedParameterTy(g_5c8a38, &v_1e0, &v_180, valA10, 7, 0);
    int32_t valA11 = Script_CallNativeHandler_3();
    void v_130;
    Script_UndefinedParameterTy(g_5c8a38, &v_1e0, &v_130, valA11, 7, 0);
    int32_t valA12 = Script_SpawnNewTask_4();
    void v_12c;
    Script_UndefinedParameterTy(g_5c8a38, &v_1e0, &v_12c, valA12, 7, 0);
    int32_t valA13 = Script_EvaluateCondition_3();
    void v_2c;
    Script_UndefinedParameterTy(g_5c8a38, &v_1e0, &v_2c, valA13, 7, 0);
    int32_t valA14 = Script_ParseEnumInt32_4();
    void v_1c;
    Script_UndefinedParameterTy(g_5c8a38, &v_1e0, &v_1c, valA14, 7, 0);
    int32_t valA15 = Script_ParseEnumInt32_4();
    void v_1a;
    Script_UndefinedParameterTy(g_5c8a38, &v_1e0, &v_1a, valA15, 7, 0);
    int32_t valA16 = Script_EvaluateCondition_2();
    void v_8;
    return Script_UndefinedParameterTy(g_5c8a38, &v_1e0, &v_8, valA16, 7, &g_5c8a30);
}
