// IGI native provenance: Render_DrawLightmapMesh_6 - 0x004D35B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D35B0-Render_DrawLightmapMesh_6.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_DrawLightmapMesh_6.h"
int32_t* Render_DrawLightmapMesh_6()

{
    int32_t entity_2 = g_a54668;
    int32_t* result = *(g_a54664 + (entity_2 << 2)) * g_a54670 + g_a54660;
    *(g_a54674 + result) = entity_2;
    g_a54668 += 1;
    *result = 0;
    result[7] = 0xffffffff;
    result[9] = 0xffffffff;
    return result;
}
