#include "004D35B0-Render_DrawLightmapMesh_6.h"
/* 0x004d35b0 Render_DrawLightmapMesh_6 full linked: callers=7 callees=0 */
int32_t* sub_4d35b0()

{
    int32_t ecx_2 = g_a54668;
    int32_t* result = *(g_a54664 + (ecx_2 << 2)) * g_a54670 + g_a54660;
    *(g_a54674 + result) = ecx_2;
    g_a54668 += 1;
    *result = 0;
    result[7] = 0xffffffff;
    result[9] = 0xffffffff;
    return result;
}
