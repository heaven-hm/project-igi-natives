// Original IGI.EXE function: Hazinglayers_Init (VA 0x004DA1D0; static CFG gate PASS, CFG score 1.000).
#include "Hazinglayers_Init.h"
int32_t Hazinglayers_Init()

{
    int32_t v_4 = 0;
    int16_t valA1 = TaskType_Register("Hazinglayers", 0x90, g_548638, 0);
    g_a5e304 = valA1;
    QTask_RemoveEventCallback(valA1, 0x11, sub_4da240);
    QTask_RemoveEventCallback(g_a5e304, 0x12, sub_4da2a0);
    QTask_RemoveEventCallback(g_a5e304, 4, sub_4da270);
    return QTask_RemoveEventCallback(g_a5e304, 5, sub_4da2c0);
}
