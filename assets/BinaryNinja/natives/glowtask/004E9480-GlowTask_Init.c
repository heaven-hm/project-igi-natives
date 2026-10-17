// Original IGI.EXE function: GlowTask_Init (VA 0x004E9480; static CFG gate PASS, CFG score 1.000).
#include "GlowTask_Init.h"
int32_t GlowTask_Init()

{
    int32_t item_4 = 0;
    g_54da50 = TaskType_Register("GlowTask", 0x20, QTask_OpenEvent_2(), 0);
    int32_t data_2 = StatusScreen_GetEvent();
    int32_t item_8 = data_2;
    data_2 = g_54da50;
    QTask_TriggerEvent(data_2, item_8, j_Terrain_SampleHeightmap_2);
    return QTask_TriggerEvent(g_54da50, 2, AIGraph_LoadParameters);
}
