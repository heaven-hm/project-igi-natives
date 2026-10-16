#include "gi_platform.h"
#include "00419760-BackgroundFX_Init.h"
int32_t BackgroundFX_Init()

{
    int32_t v_4 = 0;
    int16_t valA1 = TaskType_Register("BackgroundFX", 0x24, QTask_OpenEvent_2(), 0);
    g_539af0 = valA1;
    QTask_TriggerEvent(valA1, 1, sub_419800);
    int32_t valA2 = StatusScreen_GetEvent();
    int32_t v_8 = valA2;
    valA2 = g_539af0;
    QTask_TriggerEvent(valA2, v_8, BackgroundFX_LoadParameters);
    QTask_TriggerEvent(g_539af0, 2, AIGraph_LoadParameters);
    QTask_RemoveEventCallback(g_539af0, 0, sub_4197f0);
    int32_t valA3 = Script_ParseEnumReal32_8();
    int32_t v_8_1 = valA3;
    valA3 = g_539af0;
    return QTask_RemoveEventCallback(valA3, v_8_1, AIGraph_LoadParameters);
}
