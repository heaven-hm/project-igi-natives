#include "gi_platform.h"
#include "00531EF0-Sprite3D_Init.h"
int32_t Sprite3D_Init()

{
    int32_t v_4 = 0;
    int16_t valA1 = TaskType_Register("Sprite3D", 0x88, g_54875c, 0);
    g_c28f98 = valA1;
    QTask_RemoveEventCallback(valA1, 4, Sprite3D_LoadParameters);
    return Sys_FreeMemory_2(0xc28fa0, 0x88, 0x64, 4);
}
