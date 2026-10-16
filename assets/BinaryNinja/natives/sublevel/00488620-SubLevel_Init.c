#include "SubLevel_Init.h"
int32_t* SubLevel_Init()

{
    int32_t v_124 = 0;
    int16_t valA1 = TaskType_Register("SubLevel", 0x120, QTask_OpenEvent_2(), 0);
    g_5c8a90 = valA1;
    QTask_RemoveEventCallback(valA1, 0, sub_4886f0);
    QTask_TriggerEvent(g_5c8a90, 1, sub_488700);
    int32_t valA3 = DynObj_FindSymbol_6();
    QTask_RemoveEventCallback(g_5c8a90, valA3, sub_4e0890);
    int32_t valA4 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_5c8a90, valA4, sub_488770);
    int32_t valA5 = Script_ParseEnumReal32_8();
    int32_t v_128_2 = valA5;
    valA5 = g_5c8a90;
    QTask_RemoveEventCallback(valA5, v_128_2, SubLevel_LoadParameters);
    g_5c8a94 = Script_EvaluateCondition_7(1);
    int32_t valA7 = Script_SpawnNewTask_4();
    void v_120;
    void v_100;
    return Script_UndefinedParameterTy(g_5c8a94, &v_120, &v_100, valA7, 7, 0);
}
