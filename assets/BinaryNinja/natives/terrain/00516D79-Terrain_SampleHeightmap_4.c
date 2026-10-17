// Original IGI.EXE function: Terrain_SampleHeightmap_4 (VA 0x00516D79; static CFG gate PASS, CFG score 1.000).
#include "Terrain_SampleHeightmap_4.h"
uint32_t Terrain_SampleHeightmap_4(char* a1, int32_t a2, uint32_t a3, int32_t* a4)

{
    int32_t objC;
    int32_t v_8 = objC;
    uint32_t dstD1 = a2 * a3;
    uint32_t v_8_1 = dstD1;
    uint32_t ctxB = dstD1;

    if (!dstD1)
        return 0;

    int32_t* srcS1 = a4;

    if (!(srcS1[3] & 0x10c))
        a4 = 0x1000;
    else
        a4 = srcS1[6];

    uint32_t valA12;

    while (true)
    {
        int32_t objC2 = srcS1[3] & 0x108;
        uint32_t valA3;

        if (objC2)
            valA3 = srcS1[1];

        if (objC2 && valA3)
        {
            uint32_t dstD2 = ctxB;

            if (ctxB >= valA3)
                dstD2 = valA3;

            Camera_ResetMatrix_20(*srcS1, a1, dstD2);
            srcS1[1] -= dstD2;
            *srcS1 += dstD2;
            ctxB -= dstD2;
            a1 = &a1[dstD2];
            dstD1 = v_8_1;
        }
        else if (ctxB < a4)
        {
            int32_t v_1c_3 = *a1;

            if (Camera_ApplyHandiCam_11(srcS1) == 0xffffffff)
            {
                valA12 = dstD1;
                break;
            }

            a1 = &a1[1];
            int32_t* valA11 = srcS1[6];
            ctxB -= 1;
            a4 = valA11;

            if (valA11 <= 0)
                a4 = 1;
        }
        else
        {
            bool cond_3_1;

            if (objC2)
                cond_3_1 = Camera_ApplyHandiCam_9(srcS1);

            if (objC2 && cond_3_1)
            {
                valA12 = dstD1;
                break;
            }

            uint32_t dstD4;

            dstD4 = !a4 ? ctxB : ctxB - COMBINE(0, ctxB) % a4;

            int32_t valA7 = Camera_ApplyHandiCam_23(srcS1[4], a1, dstD4);

            if (valA7 != 0xffffffff)
            {
                a1 = &a1[valA7];
                ctxB -= valA7;
            }

            if (valA7 == 0xffffffff || valA7 < dstD4)
            {
                srcS1[3] |= 0x20;
                valA12 = v_8_1;
                break;
            }

            dstD1 = v_8_1;
        }

        if (!ctxB)
            return a3;
    }

    return COMBINE(0, valA12 - ctxB) / a2;
}
