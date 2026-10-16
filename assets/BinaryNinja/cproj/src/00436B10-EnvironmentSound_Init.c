#include "gi_platform.h"
#include "00436B10-EnvironmentSound_Init.h"
int32_t* EnvironmentSound_Init()

{
    int32_t v_60 = 0;
    int16_t valA1 = TaskType_Register("EnvironmentSound", 0x5c, QTask_OpenEvent_2(), 0);
    g_57bdb0 = valA1;
    QTask_RemoveEventCallback(valA1, 0, sub_436c60);
    QTask_TriggerEvent(g_57bdb0, 1, EnvironmentSound_LoadParameters);
    QTask_TriggerEvent(g_57bdb0, 2, AIGraph_LoadParameters);
    int32_t valA3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_57bdb0, valA3, sub_4374c0);
    int32_t valA4 = Script_ParseEnumReal32_8();
    int32_t v_64_1 = valA4;
    valA4 = g_57bdb0;
    QTask_RemoveEventCallback(valA4, v_64_1, sub_4374d0);
    g_57bda8 = Script_EvaluateCondition_7(5);
    int32_t valA6 = Script_ParseEnumInt32_4();
    char v_5c;
    char v_3c;
    Script_UndefinedParameterTy(g_57bda8, &v_5c, &v_3c, valA6, 7, 0);
    int32_t valA8 = Script_ParseEnumInt32_4();
    char v_3b;
    Script_UndefinedParameterTy(g_57bda8, &v_5c, &v_3b, valA8, 7, 0);
    int32_t valA10 = Script_ParseEnumInt32_4();
    char v_3a;
    Script_UndefinedParameterTy(g_57bda8, &v_5c, &v_3a, valA10, 7, 0);
    int32_t valA12 = Script_ParseEnumInt32_4();
    char v_39;
    Script_UndefinedParameterTy(g_57bda8, &v_5c, &v_39, valA12, 7, 0);
    int32_t valA14 = Script_EvaluateCondition_3();
    char v_38;
    return Script_UndefinedParameterTy(g_57bda8, &v_5c, &v_38, valA14, 7, 0);
}
