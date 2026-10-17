// Original IGI.EXE function: Terrain_ConnectGraphNode_2 (VA 0x00512940; static CFG gate PASS, CFG score 1.000).
#include "Terrain_ConnectGraphNode_2.h"
int32_t Terrain_ConnectGraphNode_2(int32_t a1)

{
    void* flagP = nullptr;
    int32_t ctxB = 0;
    int32_t valA3;

    if (g_bcab38)
    {
        int32_t valA7 = g_b015a8;
        int32_t v_34_1 = 0x20;
        int32_t v_38_1 = 0x20;
        int32_t srcS4 = *(g_b015a4 + (valA7 << 2)) * g_b015b0 + g_b015a0;
        *(g_b015b4 + srcS4) = valA7;
        g_b015a8 += 1;
        int32_t dstD5 = a1;
        int32_t v_3c_1 = *(dstD5 + 0x14) - 16f;
        int32_t v_40_1 = *(dstD5 + 0x10) - 16f;
        int32_t v_44_1 = srcS4;
        a1 = 0xfffffff0;
        long double x87_r7_5 = 0f;
        long double x87_r6_1 = 0f;
        long double x87_r5_1 = 0f;
        bool cond_2_1;

        do
        {
            int32_t i = 0xfffffff0;
            int32_t i_1 = 0xfffffff0;

            do
            {
                if (*(flagP + 0xa7dc64) && *(srcS4 + (ctxB << 1)) == *(*(dstD5 + 0x24) + (ctxB << 1)))
                {
                    x87_r7_5 = x87_r7_5 + 1f;
                    x87_r6_1 = x87_r6_1 + i_1;
                    x87_r5_1 = x87_r5_1 + a1;
                }

                ctxB += 1;
                flagP += 1;
                i += 1;
                i_1 = i;
            } while (i < 0x10);

            cond_2_1 = a1 + 1 < 0x10;
            a1 += 1;
        } while (cond_2_1);
        long double f1_1 = 0f;
        x87_r7_5 - f1_1;

        if (!(*(&((x87_r7_5 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, f1_1) ? 1 : 0) << 0xa
            | (x87_r7_5 == f1_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
        {
            *(dstD5 + 0x10) = x87_r6_1 / x87_r7_5 + *(dstD5 + 0x10);
            *(dstD5 + 0x14) = x87_r5_1 / x87_r7_5 + *(dstD5 + 0x14);
        }

        long double x87_r7_7 = x87_r7_5 * 0.0009765625f;
        int32_t* objC8 = *(dstD5 + 0xc);
        float v_c = x87_r7_7 * *(dstD5 + 0x18);
        float v_8_1 = x87_r7_7 * *(dstD5 + 0x1c);
        float v_4_1 = x87_r7_7 * *(dstD5 + 0x20);
        Terrain_SampleHeightmap_8(objC8, dstD5 + 0x10, &v_c);
        int32_t* ctxB2 = g_b015b4;
        int32_t valA14 = g_b015a8 - 1;
        int32_t srcS5 = *(ctxB2 + srcS4);
        g_b015a8 = valA14;

        if (srcS5 != valA14)
        {
            int32_t objC9 = g_b015a4;
            int32_t valA17 = *(objC9 + (valA14 << 2)) * g_b015b0 + g_b015a0;
            int32_t tmpD5 = *(objC9 + (srcS5 << 2));
            int32_t ctxB3 = *(ctxB2 + valA17);
            *(objC9 + (srcS5 << 2)) = *(objC9 + (ctxB3 << 2));
            *(g_b015a4 + (ctxB3 << 2)) = tmpD5;
            *(g_b015b4 + valA17) = srcS5;
            valA14 = g_b015a8;
            ctxB2 = g_b015b4;
        }

        valA3 = valA14 - 1;
        int32_t objC12 = *(*(dstD5 + 0x24) + ctxB2);
        g_b015a8 = valA3;

        if (objC12 != valA3)
        {
            int32_t tmpD7 = g_b015a4;
            valA3 = *(tmpD7 + (valA3 << 2)) * g_b015b0 + g_b015a0;
            int32_t srcS7 = *(tmpD7 + (objC12 << 2));
            int32_t ctxB4 = *(ctxB2 + valA3);
            *(tmpD7 + (objC12 << 2)) = *(tmpD7 + (ctxB4 << 2));
            *(g_b015a4 + (ctxB4 << 2)) = srcS7;
            *(g_b015b4 + valA3) = objC12;
        }
    }
    else
    {
        int32_t* srcS = g_b015b4;
        valA3 = g_b015a8 - 1;
        int32_t tmpD = *(*(a1 + 0x24) + srcS);
        g_b015a8 = valA3;

        if (tmpD != valA3)
        {
            int32_t objC1 = g_b015a4;
            int32_t valA6 = *(objC1 + (valA3 << 2)) * g_b015b0 + g_b015a0;
            int32_t dstD2 = *(objC1 + (tmpD << 2));
            int32_t srcS1 = *(srcS + valA6);
            *(objC1 + (tmpD << 2)) = *(objC1 + (srcS1 << 2));
            *(g_b015a4 + (srcS1 << 2)) = dstD2;
            *(g_b015b4 + valA6) = tmpD;
            return valA6;
        }
    }

    return valA3;
}
