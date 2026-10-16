#include "gi_platform.h"
#include "00425C80-CarAI_Init.h"
int32_t* CarAI_Init()

{
    int32_t v_88 = 0;
    int16_t valA1 = TaskType_Register("CarAI", 0x84, QTask_OpenEvent_2(), 0);
    g_53ba50 = valA1;
    QTask_RemoveEventCallback(valA1, 0, sub_425d90);
    QTask_TriggerEvent(g_53ba50, 1, CarAI_Run);
    QTask_TriggerEvent(g_53ba50, 2, AIGraph_LoadParameters);
    int32_t valA3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_53ba50, valA3, sub_426590);
    int32_t valA4 = Script_ParseEnumReal32_8();
    int32_t v_8c_1 = valA4;
    valA4 = g_53ba50;
    QTask_RemoveEventCallback(valA4, v_8c_1, CarAI_Process);
    g_57bc74 = Script_EvaluateCondition_7(3);
    int32_t valA6 = Script_ParseEnumString_3();
    char v_84;
    char v_5c;
    Script_UndefinedParameterTy(g_57bc74, &v_84, &v_5c, valA6, 7, 0);
    int32_t valA8 = Script_ParseEnumString_3();
    char v_64;
    Script_UndefinedParameterTy(g_57bc74, &v_84, &v_64, valA8, 7, 0);
    int32_t valA10 = Script_ParseEnumString_3();
    char v_60;
    return Script_UndefinedParameterTy(g_57bc74, &v_84, &v_60, valA10, 7, 0);
}
