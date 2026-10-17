// Original IGI.EXE function: Terrain_UpdateWaterWaves_7 (VA 0x00517F00; static CFG gate PASS, CFG score 1.000).
#include "Terrain_UpdateWaterWaves_7.h"
int32_t* Terrain_UpdateWaterWaves_7(int32_t* a1, int32_t a2, int32_t* a3, int32_t a4, int32_t a5, int32_t a6, int32_t* a7)

{
    int32_t valA;
    int32_t tmpD;
    int32_t dstD;

    if (!a7)
    {
        tmpD = a5;
        dstD = 0;
        valA = 0;
        a5 = tmpD;
        a6 = a6;
    }
    else
    {
        tmpD = a5;
        dstD = *a7;
        int32_t ctxB1 = a7[2];
        valA = a7[1];
        a5 = ctxB1;
        int32_t srcS2 = tmpD - dstD;

        if (ctxB1 >= srcS2)
            a5 = srcS2;

        int32_t objC = a7[3];
        int32_t ctxB3 = a6 - valA;

        a6 = objC < ctxB3 ? objC : ctxB3;
    }

    int32_t ctxB4 = 0;
    int32_t* result = ((valA * tmpD + dstD) << 4) + a4;

    if (a3 > 0)
    {
        int32_t* srcS4 = a1;
        int32_t* result_1 = result;
        a7 = result_1;

        do
        {
            int32_t tmpD2 = 0;

            if (a2 > 0)
            {
                int32_t* valA4 = srcS4;

                do
                {
                    int32_t objC2;

                    if (tmpD2 >= a5 || ctxB4 >= a6)
                        objC2 = 0;
                    else
                        objC2 = *(result_1 - srcS4 + valA4);

                    *valA4 = objC2;
                    tmpD2 += 1;
                    valA4 = &valA4[1];
                } while (tmpD2 < a2);
            }

            ctxB4 += 1;
            srcS4 = &srcS4[a2];
            result = a3;
            result_1 = &a7[tmpD];
            a7 = result_1;
        } while (ctxB4 < result);
    }

    return result;
}
