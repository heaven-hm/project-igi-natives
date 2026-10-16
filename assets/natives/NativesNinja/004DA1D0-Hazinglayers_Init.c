#include "004DA1D0-Hazinglayers_Init.h"
/* 0x004da1d0 Hazinglayers_Init full linked: callers=1 callees=5 */
int32_t sub_4da1d0()

{
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("Hazinglayers", 0x90, g_548638, 0);
    g_a5e304 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0x11, sub_4da240);
    QTask_RemoveEventCallback(g_a5e304, 0x12, sub_4da2a0);
    QTask_RemoveEventCallback(g_a5e304, 4, sub_4da270);
    return QTask_RemoveEventCallback(g_a5e304, 5, sub_4da2c0);
}
