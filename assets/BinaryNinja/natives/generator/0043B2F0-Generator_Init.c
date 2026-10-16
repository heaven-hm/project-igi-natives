#include "Generator_Init.h"
int32_t* Generator_Init()

{
    int32_t v_2c4 = 0;
    int16_t valA1 = TaskType_Register("Generator", 0x2c0, FX_TrailUpdate(), 0);
    g_53c2fc = valA1;
    QTask_RemoveEventCallback(valA1, 0, sub_43b490);
    QTask_TriggerEvent(g_53c2fc, 1, Generator_LoadParameters);
    QTask_TriggerEvent(g_53c2fc, 2, sub_43b650);
    int32_t valA3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_53c2fc, valA3, sub_43b680);
    int32_t valA4 = Script_ParseEnumReal32_8();
    int32_t v_2c8_1 = valA4;
    valA4 = g_53c2fc;
    QTask_RemoveEventCallback(valA4, v_2c8_1, sub_43b690);
    int32_t valA5 = Script_FormatString_5();
    QTask_TriggerEvent(g_53c2fc, valA5, Generator_Setup);
    int32_t valA6 = Script_SpawnNewTask_6();
    QTask_TriggerEvent(g_53c2fc, valA6, Generator_Process);
    g_57bf3c = Script_FormatString_7(FX_ExplosionSpawn_2(), 5);
    int32_t valA9 = Script_EvaluateCondition_3();
    void v_2c0;
    void v_30;
    Script_UndefinedParameterTy(g_57bf3c, &v_2c0, &v_30, valA9, 7, 0);
    int32_t valA10 = Script_EvaluateCondition_3();
    void v_20;
    Script_UndefinedParameterTy(g_57bf3c, &v_2c0, &v_20, valA10, 7, 0);
    int32_t valA11 = Script_CallNativeHandler_3();
    void v_80;
    Script_UndefinedParameterTy(g_57bf3c, &v_2c0, &v_80, valA11, 7, 0);
    int32_t valA12 = Script_ParseEnumInt32_4();
    void v_c;
    Script_UndefinedParameterTy(g_57bf3c, &v_2c0, &v_c, valA12, 7, 0);
    int32_t valA13 = Script_EvaluateCondition_2();
    void v_10;
    return Script_UndefinedParameterTy(g_57bf3c, &v_2c0, &v_10, valA13, 7, 0);
}
