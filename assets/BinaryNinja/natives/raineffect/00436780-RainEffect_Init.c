// Original IGI.EXE function: RainEffect_Init (VA 0x00436780; static CFG gate PASS, CFG score 1.000).
#include "RainEffect_Init.h"
char* RainEffect_Init()

{
    g_57bd98 = 0x40a00000;
    g_57bd9c = 0x43160000;
    g_57bd90 = 0;
    int32_t item_8c = 0;
    g_57bd94 = 0x3f800000;
    int16_t data_1 = TaskType_Register("RainEffect", 0x88, QTask_OpenEvent_2(), 0);
    g_57bd84 = data_1;
    QTask_RemoveEventCallback(data_1, 0, sub_436950);
    QTask_TriggerEvent(g_57bd84, 2, sub_4369e0);
    int32_t data_3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_57bd84, data_3, sub_436a40);
    int32_t data_4 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_57bd84, data_4, RainEffect_LoadParameters);
    QTask_TriggerEvent(g_57bd84, 1, RainEffect_Setup);
    int32_t data_6 = Script_FormatString_5();
    QTask_TriggerEvent(g_57bd84, data_6, AIGraph_LoadParameters);
    int32_t data_7 = Script_SpawnNewTask_6();
    QTask_TriggerEvent(g_57bd84, data_7, AIGraph_LoadParameters);
    g_57bd88 = Script_EvaluateCondition_7(5);
    int32_t data_9 = Script_ParseEnumInt32_4();
    void item_88;
    void item_64;
    Script_UndefinedParameterTy(g_57bd88, &item_88, &item_64, data_9, 7, 0);
    int32_t data_10 = Script_EvaluateCondition_2();
    void item_60;
    Script_UndefinedParameterTy(g_57bd88, &item_88, &item_60, data_10, 7, &g_57bd98);
    int32_t data_11 = Script_EvaluateCondition_2();
    void item_5c;
    Script_UndefinedParameterTy(g_57bd88, &item_88, &item_5c, data_11, 7, &g_57bd98);
    int32_t data_12 = Script_CallNativeHandler_3();
    void item_50;
    Script_UndefinedParameterTy(g_57bd88, &item_88, &item_50, data_12, 7, 0);
    int32_t data_13 = Script_EvaluateCondition_2();
    void item_58;
    Script_UndefinedParameterTy(g_57bd88, &item_88, &item_58, data_13, 7, &g_57bd90);
    char* result = Level_LoadLevel_5("snow.tex");
    g_57bd80 = result;
    return result;
}
