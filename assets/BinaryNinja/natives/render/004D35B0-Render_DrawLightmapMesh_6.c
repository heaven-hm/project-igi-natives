#include "Render_DrawLightmapMesh_6.h"
int32_t* Render_DrawLightmapMesh_6()

{
    int32_t objC2 = g_a54668;
    int32_t* result = *(g_a54664 + (objC2 << 2)) * g_a54670 + g_a54660;
    *(g_a54674 + result) = objC2;
    g_a54668 += 1;
    *result = 0;
    result[7] = 0xffffffff;
    result[9] = 0xffffffff;
    return result;
}
