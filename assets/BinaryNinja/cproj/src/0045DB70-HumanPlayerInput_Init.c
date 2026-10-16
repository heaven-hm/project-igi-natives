#include "gi_platform.h"
#include "0045DB70-HumanPlayerInput_Init.h"
int32_t* HumanPlayerInput_Init()

{
    int32_t v_1e8 = 0;
    int16_t valA1 = TaskType_Register("HumanPlayerInput", 0x1e4, QTask_OpenEvent_2(), 0);
    g_5bdac4 = valA1;
    QTask_RemoveEventCallback(valA1, 0, sub_45dcb0);
    QTask_TriggerEvent(g_5bdac4, 1, HumanPlayerInput_LoadParameters);
    QTask_TriggerEvent(g_5bdac4, 2, HumanPlayerInput_Setup);
    int32_t valA3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_5bdac4, valA3, sub_45df40);
    int32_t valA4 = Script_ParseEnumReal32_8();
    int32_t v_1ec_1 = valA4;
    valA4 = g_5bdac4;
    QTask_RemoveEventCallback(valA4, v_1ec_1, HumanPlayerInput_Process);
    g_5bdac8 = Script_EvaluateCondition_7(4);
    int32_t valA6 = Script_ParseEnumInt32_4();
    char v_1e4;
    char v_164;
    Script_UndefinedParameterTy(g_5bdac8, &v_1e4, &v_164, valA6, 7, 0);
    int32_t valA8 = Script_ParseEnumInt32_4();
    char v_163;
    Script_UndefinedParameterTy(g_5bdac8, &v_1e4, &v_163, valA8, 7, 0);
    int32_t valA10 = Script_SpawnNewTask_4();
    char v_162;
    Script_UndefinedParameterTy(g_5bdac8, &v_1e4, &v_162, valA10, 7, 0);
    int32_t valA12 = Script_CallNativeHandler_3();
    char v_50;
    return Script_UndefinedParameterTy(g_5bdac8, &v_1e4, &v_50, valA12, 7, 0);
}
