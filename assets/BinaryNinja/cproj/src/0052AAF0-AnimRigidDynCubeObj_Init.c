#include "gi_platform.h"
#include "0052AAF0-AnimRigidDynCubeObj_Init.h"
int32_t AnimRigidDynCubeObj_Init()

{
    int32_t v_4 = 0;
    int16_t valA1 = TaskType_Register("AnimRigidDynCubeObj", 0x158, DynObj_LookupHashItem_5(), 0);
    g_54f498 = valA1;
    QTask_TriggerEvent(valA1, 1, AIGraph_LoadParameters);
    QTask_RemoveEventCallback(g_54f498, 0, AIGraph_LoadParameters);
    QTask_TriggerEvent(g_54f498, 2, AIGraph_LoadParameters);
    int32_t valA3 = Script_ParseEnumReal32_15();
    QTask_RemoveEventCallback(g_54f498, valA3, AnimRigidDynCubeObj_Update);
    int32_t valA4 = Script_ParseEnumString_15();
    int32_t v_8_1 = valA4;
    valA4 = g_54f498;
    QTask_RemoveEventCallback(valA4, v_8_1, sub_52abd0);
    int32_t valA5 = Script_EvaluateCondition_15();
    QTask_RemoveEventCallback(g_54f498, valA5, sub_52ac00);
    int32_t valA6 = Script_FormatString_15();
    QTask_RemoveEventCallback(g_54f498, valA6, AnimRigidDynCubeObj_OnEvent);
    int32_t valA7 = Script_SpawnNewTask_16();
    int32_t v_8_4 = valA7;
    valA7 = g_54f498;
    return QTask_RemoveEventCallback(valA7, v_8_4, AnimRigidDynCubeObj_Action);
}
