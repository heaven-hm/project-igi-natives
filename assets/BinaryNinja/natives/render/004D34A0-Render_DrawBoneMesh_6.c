// Original IGI.EXE function: Render_DrawBoneMesh_6 (VA 0x004D34A0; static CFG gate PASS, CFG score 1.000).
#include "Render_DrawBoneMesh_6.h"
int32_t Render_DrawBoneMesh_6(void* a1)

{
    if (!*(a1 + 0x10))
    {
        if (*Render_SetupLighting_6(a1, 0) != 0xffffffff)
            Render_BoneobjDeleteblendno(a1, 0);

        if (*Render_SetupLighting_6(a1, 1) != 0xffffffff)
            Render_BoneobjDeleteblendno(a1, 1);
    }
    else
    {
        Render_ComputeNormals_6(a1);
        Render_BoneobjDeleteblendno(a1, 0);
        Render_BoneobjDeleteblendno(a1, 1);
    }

    int32_t* dstD = g_a54674;
    int32_t result = g_a54668 - 1;
    int32_t objC3 = *(dstD + a1);
    g_a54668 = result;

    if (objC3 != result)
    {
        int32_t tmpD1 = g_a54664;
        result = *(tmpD1 + (result << 2)) * g_a54670 + g_a54660;
        int32_t srcS2 = *(dstD + result);
        int32_t dstD1 = *(tmpD1 + (objC3 << 2));
        *(tmpD1 + (objC3 << 2)) = *(tmpD1 + (srcS2 << 2));
        *(g_a54664 + (srcS2 << 2)) = dstD1;
        *(g_a54674 + result) = objC3;
    }

    return result;
}
