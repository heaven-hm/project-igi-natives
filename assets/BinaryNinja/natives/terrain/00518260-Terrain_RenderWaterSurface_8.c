// Original IGI.EXE function: Terrain_RenderWaterSurface_8 (VA 0x00518260; static CFG gate FAIL, CFG score 0.530).
#include "Terrain_RenderWaterSurface_8.h"
int32_t Terrain_RenderWaterSurface_8()

{
    Sys_FreeMemory_2(&g_b015a0, 0x1000, 0xa, 0);
    Sys_FreeMemory_2(0xa800d0, 0x24, 0xa, 4);
    /* tailcall */
    return Terrain_Glowreadbufferprimit();
}
