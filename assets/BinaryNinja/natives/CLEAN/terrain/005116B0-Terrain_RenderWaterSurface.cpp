// IGI native provenance: Terrain_RenderWaterSurface - 0x005116B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 005116B0-Terrain_RenderWaterSurface.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Terrain_RenderWaterSurface.h"
void* Terrain_RenderWaterSurface(void* context)

{
    g_a7da40 = *(context + 0xdbc);
    return context;
}
