#include "RainEffect_Init.h"
char* RainEffect_Init()

{
    g_57bd98 = 0x40a00000;
    g_57bd9c = 0x43160000;
    g_57bd90 = 0;
    int32_t v_8c = 0;
    g_57bd94 = 0x3f800000;
    int16_t valA1 = TaskType_Register("RainEffect", 0x88, QTask_OpenEvent_2(), 0);
    g_57bd84 = valA1;
    QTask_RemoveEventCallback(valA1, 0, sub_436950);
    QTask_TriggerEvent(g_57bd84, 2, sub_4369e0);
    int32_t valA3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_57bd84, valA3, sub_436a40);
    int32_t valA4 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_57bd84, valA4, RainEffect_LoadParameters);
    QTask_TriggerEvent(g_57bd84, 1, RainEffect_Setup);
    int32_t valA6 = Script_FormatString_5();
    QTask_TriggerEvent(g_57bd84, valA6, AIGraph_LoadParameters);
    int32_t valA7 = Script_SpawnNewTask_6();
    QTask_TriggerEvent(g_57bd84, valA7, AIGraph_LoadParameters);
    g_57bd88 = Script_EvaluateCondition_7(5);
    int32_t valA9 = Script_ParseEnumInt32_4();
    void v_88;
    void v_64;
    Script_UndefinedParameterTy(g_57bd88, &v_88, &v_64, valA9, 7, 0);
    int32_t valA10 = Script_EvaluateCondition_2();
    void v_60;
    Script_UndefinedParameterTy(g_57bd88, &v_88, &v_60, valA10, 7, &g_57bd98);
    int32_t valA11 = Script_EvaluateCondition_2();
    void v_5c;
    Script_UndefinedParameterTy(g_57bd88, &v_88, &v_5c, valA11, 7, &g_57bd98);
    int32_t valA12 = Script_CallNativeHandler_3();
    void v_50;
    Script_UndefinedParameterTy(g_57bd88, &v_88, &v_50, valA12, 7, 0);
    int32_t valA13 = Script_EvaluateCondition_2();
    void v_58;
    Script_UndefinedParameterTy(g_57bd88, &v_88, &v_58, valA13, 7, &g_57bd90);
    char* result = Level_LoadLevel_5("snow.tex");
    g_57bd80 = result;
    return result;
}
