#include "gi_platform.h"
#include "004E82C0-TerraDrawTask_Init.h"
int32_t TerraDrawTask_Init()

{
    int32_t v_4 = 0;
    g_54d9a0 = TaskType_Register("TerraDrawTask", 0x24, QTask_OpenEvent_2(), 0);
    int32_t valA2 = StatusScreen_GetEvent();
    int32_t v_8 = valA2;
    valA2 = g_54d9a0;
    QTask_TriggerEvent(valA2, v_8, sub_4e8310);
    return QTask_TriggerEvent(g_54d9a0, 2, AIGraph_LoadParameters);
}
