// Original IGI.EXE function: Render_DrawLightmapMesh_13 (VA 0x004DAA00; static CFG gate PASS, CFG score 1.000).
#include "Render_DrawLightmapMesh_13.h"
int32_t Render_DrawLightmapMesh_13()

{
    int32_t result = g_b03f90;
    int32_t entity_val = g_b03df0;

    if (result == entity_val)
        g_b03df0 = entity_val - 1;

    g_b03f90 -= 1;
    return result;
}
