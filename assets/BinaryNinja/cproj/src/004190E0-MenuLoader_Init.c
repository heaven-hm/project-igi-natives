#include "gi_platform.h"
#include "004190E0-MenuLoader_Init.h"
int32_t* MenuLoader_Init()

{
    int32_t v_128 = 0;
    int16_t valA1 = TaskType_Register("MenuLoader", 0x124, QTask_OpenEvent_2(), 0);
    g_539adc = valA1;
    QTask_RemoveEventCallback(valA1, 0, sub_4191f0);
    QTask_TriggerEvent(g_539adc, 2, AIGraph_LoadParameters);
    int32_t valA3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_539adc, valA3, sub_4192a0);
    int32_t valA4 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_539adc, valA4, MenuLoader_Setup);
    QTask_TriggerEvent(g_539adc, 1, AIGraph_LoadParameters);
    g_57baf4 = Script_EvaluateCondition_7(3);
    int32_t valA7 = Script_SpawnNewTask_4();
    char v_124;
    char v_104;
    Script_UndefinedParameterTy(g_57baf4, &v_124, &v_104, valA7, 7, 0);
    int32_t valA9 = Script_SpawnNewTask_2();
    char v_4;
    Script_UndefinedParameterTy(g_57baf4, &v_124, &v_4, valA9, 6, 0);
    int32_t valA11 = Script_SpawnNewTask_2();
    char v_3;
    return Script_UndefinedParameterTy(g_57baf4, &v_124, &v_3, valA11, 6, 0);
}
