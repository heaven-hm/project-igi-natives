#include "gi_platform.h"
#include "004E9480-GlowTask_Init.h"
int32_t GlowTask_Init()

{
    int32_t v_4 = 0;
    g_54da50 = TaskType_Register("GlowTask", 0x20, QTask_OpenEvent_2(), 0);
    int32_t valA2 = StatusScreen_GetEvent();
    int32_t v_8 = valA2;
    valA2 = g_54da50;
    QTask_TriggerEvent(valA2, v_8, j_Terrain_SampleHeightmap_2);
    return QTask_TriggerEvent(g_54da50, 2, AIGraph_LoadParameters);
}
