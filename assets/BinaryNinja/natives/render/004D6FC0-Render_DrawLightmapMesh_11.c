// Original IGI.EXE function: Render_DrawLightmapMesh_11 (VA 0x004D6FC0; static CFG gate PASS, CFG score 1.000).
#include "Render_DrawLightmapMesh_11.h"
int32_t* Render_DrawLightmapMesh_11(int32_t* a1, int32_t* a2, int32_t* a3, int32_t a4, int32_t a5)

{
    void* tmpD1 = *(*(*a3 * 0x28 + &g_a538f4) + (a4 << 2));

    if (a1)
    {
        int32_t* srcS3 = *(*(tmpD1 + 8) + 4) + a5 * 0x28;
        *a1 = *srcS3;
        a1[1] = srcS3[1];
        a1[2] = srcS3[2];
    }

    if (a2)
        *a2 = *(*(*(tmpD1 + 8) + 4) + a5 * 0x28 + 0xc);

    return a2;
}
