#include "LevelScript_Init.h"
int32_t* LevelScript_Init()

{
    int32_t v_2c = 0;
    g_54f6f0 = TaskType_Register("LevelScript", 0x28, QTask_OpenEvent_2(), 0);
    g_54f6f2 = QTask_UnableToAllocateEvent(QTask_OpenEvent_2());
    QTask_RemoveEventCallback(g_54f6f0, 0, sub_52c8f0);
    QTask_TriggerEvent(g_54f6f0, 1, LevelScript_LoadParameters);
    int32_t valA4 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_54f6f0, valA4, AIGraph_LoadParameters);
    int32_t valA5 = Script_ParseEnumInt32_8();
    int32_t v_30_1 = valA5;
    valA5 = g_54f6f0;
    QTask_RemoveEventCallback(valA5, v_30_1, sub_52c8e0);
    g_a84564 = Script_EvaluateCondition_7(2);
    int32_t valA7 = Script_ParseEnumString_3();
    void v_28;
    void v_8;
    return Script_UndefinedParameterTy(g_a84564, &v_28, &v_8, valA7, 7, 0);
}
