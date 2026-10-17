// IGI native provenance: Terrain_RenderWaterSurface_8 - 0x00518260 - CFG score 53.0% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00518260-Terrain_RenderWaterSurface_8.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Terrain_RenderWaterSurface_8.h"
int32_t Terrain_RenderWaterSurface_8()

{
    Sys_FreeMemory_2(&g_b015a0, 0x1000, 0xa, 0);
    Sys_FreeMemory_2(0xa800d0, 0x24, 0xa, 4);
    /* tailcall */
    return Terrain_Glowreadbufferprimit();
}
