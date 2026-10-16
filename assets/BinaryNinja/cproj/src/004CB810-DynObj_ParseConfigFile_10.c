#include "gi_platform.h"
#include "004CB810-DynObj_ParseConfigFile_10.h"
int32_t DynObj_ParseConfigFile_10(float a1, double* a2)

{
    double* srcS;

    if (g_b97d20)
        srcS = a2;
    else
    {
        DynObj_ParseConfigFile_6();
        srcS = a2;
        DynObj_ParseConfigFile_11(a1, 0xd, 0, srcS, 0x20000000);
    }

    int32_t v_10 = 0;
    int32_t valA1 = g_b97df8 - 1;
    int32_t v_14 = valA1;

    if (valA1 >= 0)
    {
        int32_t* v_18_1 = (valA1 << 2) + &g_b97da0;

        while (true)
        {
            int32_t tmpD2 = *v_18_1;
            char flagP1 = *(tmpD2 * 0x30 + 0xba508c);
            int32_t dstD1 = *(tmpD2 * 0x30 + 0xba50a8);
            long double x87_r7_3 = (*srcS - *(tmpD2 * 0x30 + 0xba5098)) * *(tmpD2 * 0x30 + 0xba5090);
            a1 = (srcS[1] - *(tmpD2 * 0x30 + 0xba50a0)) * *(tmpD2 * 0x30 + 0xba5090);
            int32_t v_8_1 = x87_r7_3;
            uint32_t srcS1 = a1;
            long double x87_r7_4 = x87_r7_3 - v_8_1;
            uint32_t dstD2 = dstD1 + (srcS1 << (flagP1 & 0x1f));
            long double x87_r6_7 = a1 - srcS1;
            a1 = *((v_8_1 >> 3) + dstD2) >> (v_8_1 & 7) & 1;
            int32_t dstD4 = (v_8_1 + 1) >> 3;
            long double x87_r5_1 = a1;
            char objC2 = (v_8_1 + 1) & 7;
            a1 = objC2;
            int32_t srcS4 = ((srcS1 + 1) << (flagP1 & 0x1f)) + dstD1;
            uint32_t v_8_2 = *(dstD4 + srcS4) >> (a1 & 0x1f) & 1;
            a1 = *((v_8_1 >> 3) + srcS4) >> (v_8_1 & 7) & 1;
            long double x87_r5_2 =
                x87_r5_1 + ((*(dstD4 + dstD2) >> (objC2 & 0x1f) & 1) - x87_r5_1) * x87_r7_4;
            long double x87_r4_10 =
                ((v_8_2 - a1) * x87_r7_4 + a1 - x87_r5_2) * x87_r6_7 + x87_r5_2;
            long double f0_1 = 0.300000012.0f;
            x87_r4_10 - f0_1;
            bool c1;

            if (!(*(&((x87_r4_10 < f0_1 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9
                | (FCMP_UO(x87_r4_10, f0_1) ? 1 : 0) << 0xa
                | (x87_r4_10 == f0_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
            {
                int32_t objC6 = 0;
                objC6 = *(tmpD2 * 0x30 + 0xba5080);
                v_10 = objC6;
                break;
            }

            bool cond_4_1 = v_14 - 1 >= 0;
            v_14 -= 1;
            v_18_1 -= 4;

            if (!cond_4_1)
                break;

            srcS = a2;
        }
    }

    if (!g_b97d20)
        DynObj_ParseConfigFile_6();

    int32_t result = 0;
    result = *(v_10 * 0x384 + &g_c28fe0);
    return result;
}
