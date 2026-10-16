#include "Render_ClipMesh_8.h"
int32_t Render_ClipMesh_8(void* a1)

{
    int32_t* objC = *(a1 + 0x30);

    if (objC)
    {
        int32_t valA3 = *objC * 0x28;
        int32_t srcS1 = *(*(valA3 + &g_a5390c) + objC);
        *(valA3 + 0xa53900) -= 1;
        int32_t valA7 = **(a1 + 0x30) * 0x28;
        int32_t objC1 = *(valA7 + 0xa53900);

        if (srcS1 != objC1)
        {
            int32_t tmpD2 = *(valA7 + &g_a538fc);
            int32_t objC4 = *(tmpD2 + (objC1 << 2)) * *(valA7 + 0xa53908) + *(valA7 + 0xa538f8);
            int32_t ctxB2 = *(tmpD2 + (srcS1 << 2));
            int32_t valA9 = *(*(valA7 + &g_a5390c) + objC4);
            *(tmpD2 + (srcS1 << 2)) = *(tmpD2 + (valA9 << 2));
            *(*(**(a1 + 0x30) * 0x28 + &g_a538fc) + (valA9 << 2)) = ctxB2;
            *(*(**(a1 + 0x30) * 0x28 + &g_a5390c) + objC4) = srcS1;
        }
    }

    int32_t* tmpD8 = g_a54634;
    int32_t result = g_a54628 - 1;
    int32_t dstD1 = *(tmpD8 + a1);
    g_a54628 = result;

    if (dstD1 != result)
    {
        int32_t objC5 = g_a54624;
        result = *(objC5 + (result << 2)) * g_a54630 + g_a54620;
        int32_t srcS3 = *(objC5 + (dstD1 << 2));
        int32_t tmpD9 = *(tmpD8 + result);
        *(objC5 + (dstD1 << 2)) = *(objC5 + (tmpD9 << 2));
        *(g_a54624 + (tmpD9 << 2)) = srcS3;
        *(g_a54634 + result) = dstD1;
    }

    return result;
}
