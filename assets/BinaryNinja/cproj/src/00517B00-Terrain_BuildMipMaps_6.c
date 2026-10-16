#include "gi_platform.h"
#include "00517B00-Terrain_BuildMipMaps_6.h"
int32_t Terrain_BuildMipMaps_6(int32_t a1, int32_t* a2, int32_t* a3, int32_t a4)

{
    int32_t* objC = a3;
    int32_t result = a4 >> 1;
    int32_t ctxB1 = objC >> 1;
    int32_t v_8 = ctxB1;

    if (result > 0)
    {
        int32_t tmpD1 = a1;
        int32_t srcS1 = objC << 3;
        a3 = a2;
        int32_t v_4_1 = srcS1;
        int32_t* dstD2 = &a2[objC];
        a1 = result;
        a2 = dstD2;
        bool cond_1_1;

        do
        {
            int32_t* valA1 = a3;
            int32_t objC1 = tmpD1 + (ctxB1 << 2);
            a4 = tmpD1;
            int32_t v_c_1 = objC1;

            if (tmpD1 < objC1)
            {
                while (true)
                {
                    int32_t objC2 = *valA1;
                    int32_t tmpD2 = valA1[1];
                    int32_t srcS2 = *dstD2;
                    int32_t valA4 = dstD2[1];
                    int32_t dstD11 = (((srcS2 & 0xff00) + (tmpD2 & 0xff00) + (objC2 & 0xff00)
                        + (valA4 & 0xff00) + 2) & 0x3fc00) | (((valA4 & 0xff0000) + (srcS2 & 0xff0000)
                        + (tmpD2 & 0xff0000) + (objC2 & 0xff0000) + 2) & 0x3fc0000);
                    objC1 = v_c_1;
                    int32_t dstD14 = (dstD11 | (valA4 + srcS2 + tmpD2 + objC2 + 2)) >> 2 | (((
                        valA4 >> 2 & 0x3fc00000) + (srcS2 >> 2 & 0x3fc00000) + (tmpD2 >> 2 & 0x3fc00000)
                        + (objC2 >> 2 & 0x3fc00000) + 0x800000) & 0xff000000);
                    *a4 = dstD14;
                    bool cond_3_1 = a4 + 4 < objC1;
                    a4 += 4;

                    if (!cond_3_1)
                        break;

                    valA1 = &valA1[2];
                    dstD2 = &dstD2[2];
                }

                ctxB1 = v_8;
                srcS1 = v_4_1;
            }

            tmpD1 = objC1;
            a3 += srcS1;
            dstD2 = a2 + srcS1;
            result = a1 - 1;
            cond_1_1 = a1 != 1;
            a2 = dstD2;
            a1 = result;
        } while (cond_1_1);
    }

    return result;
}
