// Original IGI.EXE function: Render_SetupLighting_14 (VA 0x004DCDD0; static CFG gate PASS, CFG score 1.000).
#include "Render_SetupLighting_14.h"
int32_t Render_SetupLighting_14(void* a1)

{
    void* ctxB = a1;
    int32_t valA = *(ctxB + 0x60);

    if (valA)
    {
        valA = g_a5e320;
        int32_t tmpD1 = 0;

        if (valA > 0)
        {
            int32_t* objC1 = g_a5e31c;
            int32_t dstD1 = g_a5e318;
            int32_t* valA3;

            while (true)
            {
                int32_t** valA2 = *objC1 * g_a5e328;
                valA3 = valA2 + dstD1;

                if (**(valA2 + dstD1) == ctxB)
                    break;

                int32_t valA4 = g_a5e320;
                tmpD1 += 1;
                objC1 = &objC1[1];

                if (tmpD1 >= valA4)
                    return valA4;
            }

            void* objC2 = valA3[1];
            int32_t dstD2 = *(*(objC2 + 0x144) + *valA3);
            *(objC2 + 0x138) -= 1;
            void* tmpD3 = valA3[1];
            int32_t objC3 = *(tmpD3 + 0x138);

            if (dstD2 != objC3)
            {
                int32_t srcS3 = *(tmpD3 + 0x134);
                int32_t objC6 = *(srcS3 + (objC3 << 2)) * *(tmpD3 + 0x140) + *(tmpD3 + 0x130);
                int32_t ctxB2 = *(srcS3 + (dstD2 << 2));
                int32_t tmpD5 = *(*(tmpD3 + 0x144) + objC6);
                *(srcS3 + (dstD2 << 2)) = *(srcS3 + (tmpD5 << 2));
                *(*(valA3[1] + 0x134) + (tmpD5 << 2)) = ctxB2;
                ctxB = a1;
                *(*(valA3[1] + 0x144) + objC6) = dstD2;
            }

            *valA3 = 0;
            int32_t* srcS6 = g_a5e32c;
            valA = *(srcS6 + valA3);
            int32_t objC8 = g_a5e320 - 1;
            g_a5e320 = objC8;

            if (valA != objC8)
            {
                int32_t tmpD8 = g_a5e31c;
                int32_t objC11 = *(tmpD8 + (objC8 << 2)) * g_a5e328 + g_a5e318;
                int32_t dstD4 = *(tmpD8 + (valA << 2));
                int32_t srcS7 = *(srcS6 + objC11);
                *(tmpD8 + (valA << 2)) = *(tmpD8 + (srcS7 << 2));
                *(g_a5e31c + (srcS7 << 2)) = dstD4;
                *(g_a5e32c + objC11) = valA;
            }

            *(ctxB + 0x60) = 0;
        }
    }

    return valA;
}
