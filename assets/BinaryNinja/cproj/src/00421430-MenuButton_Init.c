#include "gi_platform.h"
#include "00421430-MenuButton_Init.h"
int32_t* MenuButton_Init()

{
    int32_t v_9c = 0;
    int16_t valA1 = TaskType_Register("MenuButton", 0x98, Menu_PlayMusic_13(), 0);
    g_53b7f0 = valA1;
    QTask_TriggerEvent(valA1, 1, sub_4215d0);
    int32_t valA2 = StatusScreen_GetEvent();
    int32_t v_a0 = valA2;
    valA2 = g_53b7f0;
    QTask_TriggerEvent(valA2, v_a0, MenuButton_LoadParameters);
    QTask_TriggerEvent(g_53b7f0, 2, AIGraph_LoadParameters);
    QTask_RemoveEventCallback(g_53b7f0, 0, sub_421510);
    int32_t valA3 = Script_ParseEnumInt32_8();
    int32_t v_a0_1 = valA3;
    valA3 = g_53b7f0;
    QTask_RemoveEventCallback(valA3, v_a0_1, sub_4216f0);
    int32_t valA4 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_53b7f0, valA4, MenuButton_Process);
    g_57bbfc = Script_EvaluateCondition_7(1);
    int32_t valA6 = Script_FormatString_3();
    char v_98;
    char v_44;
    return Script_UndefinedParameterTy(g_57bbfc, &v_98, &v_44, valA6, 7, 0);
}
