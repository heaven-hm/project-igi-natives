#include "004DAA00-Render_DrawLightmapMesh_13.h"
/* 0x004daa00 Render_DrawLightmapMesh_13 full linked: callers=1 callees=0 */
int32_t sub_4daa00()

{
    int32_t result = g_b03f90;
    int32_t ecx = g_b03df0;

    if (result == ecx)
        g_b03df0 = ecx - 1;

    g_b03f90 -= 1;
    return result;
}
