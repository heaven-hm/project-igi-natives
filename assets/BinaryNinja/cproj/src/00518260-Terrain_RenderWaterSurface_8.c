#include "gi_platform.h"
#include "00518260-Terrain_RenderWaterSurface_8.h"
int32_t Terrain_RenderWaterSurface_8()

{
    Sys_FreeMemory_2(&g_b015a0, 0x1000, 0xa, 0);
    Sys_FreeMemory_2(0xa800d0, 0x24, 0xa, 4);
    /* tailcall */
    return Terrain_Glowreadbufferprimit();
}
