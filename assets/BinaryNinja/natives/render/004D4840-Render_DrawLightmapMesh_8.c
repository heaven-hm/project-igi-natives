// Original IGI.EXE function: Render_DrawLightmapMesh_8 (VA 0x004D4840; static CFG gate PASS, CFG score 1.000).
#include "Render_DrawLightmapMesh_8.h"
int32_t Render_DrawLightmapMesh_8(int32_t* a1, int32_t* a2, float a3)

{
    float tmpD4 = a3;
    int32_t* valA1 = *(*(tmpD4 + 0xc) + 8);
    int32_t dstD = *valA1;
    int32_t* srcS = valA1[1];
    int32_t* valA2;
    int32_t* objC1;

    if (dstD != 1)
    {
        float valA3 = *(tmpD4 + 0x2c);
        int32_t objC2 = 0;

        if (dstD > 0)
        {
            int32_t* ctxB1 = &srcS[3];

            do
            {
                a3 = *ctxB1;
                long double x87_r7_1 = a3;
                long double f2_1 = valA3;
                x87_r7_1 - f2_1;

                if (!(*(&((x87_r7_1 < f2_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_1, f2_1) ? 1 : 0) << 0xa
                        | (x87_r7_1 == f2_1 ? 1 : 0) << 0xe) + 1) & 1))
                    break;

                objC2 += 1;
                ctxB1 = &ctxB1[0xa];
            } while (objC2 < dstD);
        }

        long double x87_r7_2 = valA3;
        long double f1_1 = a3;
        x87_r7_2 - f1_1;
        float v_4c_1;
        float v_48_1;
        float v_44_1;

        if (*(&((x87_r7_2 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, f1_1) ? 1 : 0) << 0xa
            | (x87_r7_2 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40)
        {
            int32_t objC3 = objC2 * 5;
            void* valA7 = &srcS[objC3 * 2];
            v_4c_1 = srcS[objC3 * 2];
            v_48_1 = *(valA7 + 4);
            v_44_1 = *(valA7 + 8);
        }
        else if (objC2 != dstD)
        {
            long double x87_r7_3 = a3;
            int32_t* valA12 = &srcS[objC2 * 0xa];
            long double x87_r7_8;

            if (!g_a54678)
            {
                long double x87_r7_10 = (x87_r7_3 - valA3) / (a3 - valA12[-7]);
                v_4c_1 = (valA12[-0xa] - *valA12) * x87_r7_10 + *valA12;
                v_48_1 = (valA12[-9] - valA12[1]) * x87_r7_10 + valA12[1];
                x87_r7_8 = x87_r7_10 * (valA12[-8] - valA12[2]) + valA12[2];
            }
            else
            {
                long double x87_r7_4 = x87_r7_3 - valA12[-7];
                long double x87_r6_4 = 1f - (a3 - valA3) / x87_r7_4;
                long double x87_r5_2 = x87_r6_4 * x87_r6_4;
                a3 = x87_r5_2;
                long double x87_r5_3 = x87_r5_2 * x87_r6_4;
                float v_50_2 = x87_r5_3;
                long double x87_r5_5 = x87_r5_3 + x87_r5_3 - a3 * 3f;
                float v_10_1 = x87_r5_5 + 1f;
                float v_c_1 = -(x87_r5_5);
                long double x87_r5_7 = a3;
                float v_8_1 = x87_r6_4 - (x87_r5_7 + x87_r5_7) + v_50_2;
                float v_4_1 = a3 - v_50_2;
                long double x87_r6_22 = *valA12 * v_c_1 + valA12[7] * x87_r7_4 * v_4_1
                    + valA12[-0xa] * v_10_1 + valA12[-6] * x87_r7_4 * v_8_1;
                v_4c_1 = x87_r6_22;
                v_48_1 = valA12[1] * v_c_1 + valA12[-9] * v_10_1
                    + valA12[8] * x87_r7_4 * v_4_1 + valA12[-5] * x87_r7_4 * v_8_1;
                x87_r7_8 = valA12[2] * v_c_1 + valA12[-8] * v_10_1
                    + x87_r7_4 * valA12[9] * v_4_1 + valA12[-4] * x87_r7_4 * v_8_1;
            }

            v_44_1 = x87_r7_8;
        }
        else
        {
            int32_t objC6 = dstD * 5;
            v_4c_1 = srcS[objC6 * 2 - 0xa];
            v_48_1 = srcS[objC6 * 2 - 9];
            v_44_1 = srcS[objC6 * 2 - 8];
        }

        valA2 = tmpD4 + 0x10;
        objC1 = tmpD4 + 0x1c;
        *objC1 = v_4c_1 - *(tmpD4 + 0x10);
        *(tmpD4 + 0x20) = v_48_1 - *(tmpD4 + 0x14);
        *(tmpD4 + 0x24) = v_44_1 - *(tmpD4 + 0x18);
        *valA2 = v_4c_1;
        valA2[1] = v_48_1;
        valA2[2] = v_44_1;
    }
    else
    {
        valA2 = tmpD4 + 0x10;
        *valA2 = *srcS;
        valA2[1] = srcS[1];
        int32_t srcS1 = srcS[2];
        *(tmpD4 + 0x1c) = 0;
        *(tmpD4 + 0x20) = 0;
        valA2[2] = srcS1;
        objC1 = tmpD4 + 0x1c;
        *(tmpD4 + 0x24) = 0;
    }

    if (a1)
    {
        *a1 = *valA2;
        a1[1] = valA2[1];
        a1[2] = valA2[2];
    }

    if (a2)
    {
        *a2 = *objC1;
        a2[1] = objC1[1];
        a2[2] = objC1[2];
    }

    return 1;
}
