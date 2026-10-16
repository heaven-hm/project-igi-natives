#include "004D6FC0-Render_DrawLightmapMesh_11.h"
/* 0x004d6fc0 Render_DrawLightmapMesh_11 full linked: callers=2 callees=0 */
int32_t* sub_4d6fc0(int32_t* a1, int32_t* a2, int32_t* a3, int32_t a4, int32_t a5)

{
    void* edx_1 = *(*(*a3 * 0x28 + &g_a538f4) + (a4 << 2));

    if (a1)
    {
        int32_t* esi_3 = *(*(edx_1 + 8) + 4) + a5 * 0x28;
        *a1 = *esi_3;
        a1[1] = esi_3[1];
        a1[2] = esi_3[2];
    }

    if (a2)
        *a2 = *(*(*(edx_1 + 8) + 4) + a5 * 0x28 + 0xc);

    return a2;
}
