// Original IGI.EXE function: Physics_Offscreenbuffersprit (VA 0x0050F070; static CFG gate PASS, CFG score 1.000).
#include "Physics_Offscreenbuffersprit.h"
int32_t Physics_Offscreenbuffersprit(void* a1)

{
    int32_t valA4 = g_bcaaa8;

    if (valA4)
    {
        int32_t tmpD1 = *(a1 + 0x10);
        int32_t valA = *(a1 + 0x12);
        long double x87_r7_1 = tmpD1;
        int32_t v_88_1 = x87_r7_1 * *(a1 + 0x44);
        long double x87_r6_3 = valA;
        int32_t v_88_2 = x87_r6_3 * *(a1 + 0x48);
        int32_t valA2 = x87_r7_1 * *(a1 + 0x64) - v_88_1;
        valA4 = x87_r6_3 * *(a1 + 0x68) - v_88_2;
        int32_t dstD2 = *(a1 + 0x50);
        int32_t v_88_6 = *(a1 + 0x4c);
        int32_t v_88_7 = g_bcaac0;
        int32_t* v_74_1 = g_bcaaa8 + ((g_bcaaa0 * dstD2 + v_88_6) << 2);
        int32_t v_88_8 = g_bcaac4;
        int32_t ctxB6 = g_bcaac8 + v_88_7;
        int64_t v_88_10 = g_bcaacc;
        int32_t ctxB8 = v_88_10 + v_88_8;

        if (v_88_6 < ctxB6 && dstD2 < ctxB8 && v_88_6 + valA2 >= v_88_7
            && dstD2 + valA4 >= v_88_8)
        {
            int32_t v_78_2;

            if (*(a1 + 0x58) == 0x3f800000 && *(a1 + 0x5c) == 0x3f800000)
                v_78_2 = 1;

            if (*(a1 + 0x58) != 0x3f800000 || *(a1 + 0x5c) != 0x3f800000
                    || *(a1 + 0x60) != 0x3f800000)
                v_78_2 = 0;

            if (!*(a1 + 0x40))
            {
                int32_t tmpD7 = *(a1 + 0x16);

                if (tmpD7 == 2)
                {
                    int32_t ctxB16 = *(a1 + 0x18) + ((*(a1 + 0x14) * v_88_2) & 0xfffffffe);
                    int32_t v_70_3 = ctxB16;

                    if (valA4 > 0)
                    {
                        int32_t v_7c_4 = dstD2;
                        int32_t v_80_6 = valA4;
                        bool cond_5_1;

                        do
                        {
                            if (dstD2 >= v_88_8 && dstD2 < ctxB8 && valA2 > 0)
                            {
                                int32_t tmpD34 = v_88_1;
                                int32_t srcS6 = v_88_6;
                                int32_t* dstD11 = v_74_1;
                                int32_t v_6c_3 = valA2;
                                int16_t* ctxB17 = ctxB16 + (tmpD34 << 1);
                                bool cond_7_1;

                                do
                                {
                                    if (srcS6 >= v_88_7 && srcS6 < ctxB6)
                                    {
                                        tmpD34 = *ctxB17;

                                        if (*(&tmpD34 + 1) & 0x80)
                                        {
                                            int32_t valA46;

                                            if (!v_78_2)
                                            {
                                                valA46 = (((tmpD34 >> 5 & 0x1f) * *(a1 + 0x5c))
                                                    | ((tmpD34 >> 0xa & 0x1f) * *(a1 + 0x58))
                                                    << 8) << 8;
                                                tmpD34 = (tmpD34 & 0x1f) * *(a1 + 0x60);
                                            }
                                            else
                                            {
                                                int32_t tmpD35 = tmpD34 & 0xffff;
                                                valA46 = ((tmpD35 & 0x7c00) << 3 | (tmpD35 & 0x3e0))
                                                    << 3;
                                                tmpD34 = tmpD35 & 0x1f;
                                            }

                                            *dstD11 = (valA46 | tmpD34) << 3;
                                        }
                                    }

                                    ctxB17 = &ctxB17[1];
                                    srcS6 += 1;
                                    dstD11 = &dstD11[1];
                                    cond_7_1 = v_6c_3 != 1;
                                    v_6c_3 -= 1;
                                } while (cond_7_1);
                                dstD2 = v_7c_4;
                                ctxB16 = v_70_3;
                            }

                            v_74_1 = &v_74_1[g_bcaaa0];
                            dstD2 += 1;
                            valA4 = v_80_6 - 1;
                            cond_5_1 = v_80_6 != 1;
                            ctxB16 += *(a1 + 0x14) & 0xfffffffe;
                            v_7c_4 = dstD2;
                            v_70_3 = ctxB16;
                            v_80_6 = valA4;
                        } while (cond_5_1);
                    }
                }
                else if (tmpD7 == 3)
                {
                    int32_t v_78_3 = *(a1 + 0x18) + ((*(a1 + 0x14) * v_88_2) & 0xfffffffc);

                    if (valA4 > 0)
                    {
                        int32_t v_70_2 = dstD2;
                        int32_t v_7c_3 = valA4;
                        int32_t valA39;
                        bool cond_6_1;

                        do
                        {
                            if (dstD2 >= v_88_8 && dstD2 < ctxB8 && valA2 > 0)
                            {
                                int32_t ctxB15 = v_88_6;
                                int32_t* srcS4 = v_74_1;
                                int32_t* flagP19 = v_78_3 + (v_88_1 << 2);
                                int32_t v_6c_2 = valA2;
                                bool cond_8_1;

                                do
                                {
                                    if (ctxB15 >= v_88_7 && ctxB15 < ctxB6)
                                    {
                                        int32_t tmpD15 = *flagP19;
                                        int32_t v_2c_1 = 0;
                                        long double x87_r7_18 = (tmpD15 >> 0x18) * 0.00392156886f;
                                        long double f6_1 = 0f;
                                        x87_r7_18 - f6_1;

                                        if (!(*(&((x87_r7_18 < f6_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_18, f6_1) ? 1 : 0) << 0xa
                                            | (x87_r7_18 == f6_1 ? 1 : 0) << 0xe | 0x3800) + 1)
                                            & 0x40))
                                        {
                                            int32_t v_4_1 = 0;
                                            int32_t v_1c_1 = 0;
                                            long double x87_r6_6 = 1f - x87_r7_18;
                                            int32_t v_c_1 = 0;
                                            int32_t valA28 = *srcS4;
                                            int32_t v_24_1 = 0;
                                            int32_t v_14_1 = 0;
                                            float v_40_1 = (tmpD15 >> 0x10) * *(a1 + 0x58)
                                                * x87_r7_18 * 0.00392156886f;
                                            v_88_10 = valA28 & 0xff;
                                            *(&v_88_10 + 4) = 0;
                                            float v_38_1 = (tmpD15 >> 8) * *(a1 + 0x5c)
                                                * x87_r7_18 * 0.00392156886f;
                                            float v_5c_1 = (tmpD15 & 0xff) * *(a1 + 0x60)
                                                * x87_r7_18 * 0.00392156886f;
                                            long double x87_r6_9 =
                                                (valA28 >> 0x10) * x87_r6_6 * 0.00392156886f
                                                + v_40_1;
                                            long double x87_r5_22 = 0f;
                                            x87_r5_22 - x87_r6_9;

                                            if (*(&((x87_r5_22 < x87_r6_9 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r5_22, x87_r6_9) ? 1 : 0) << 0xa
                                                | (x87_r5_22 == x87_r6_9 ? 1 : 0) << 0xe | 0x3000) + 1)
                                                & 0x41)
                                            {
                                                long double x87_r5_23 = 1f;
                                                x87_r5_23 - x87_r6_9;

                                                if (*(&((x87_r5_23 < x87_r6_9 ? 1 : 0) << 8
                                                        | (FCMP_UO(x87_r5_23, x87_r6_9) ? 1 : 0)
                                                        << 0xa | (x87_r5_23 == x87_r6_9 ? 1 : 0) << 0xe
                                                        | 0x3000) + 1) & 1)
                                                    x87_r6_9 = 1f;
                                            }
                                            else
                                                x87_r6_9 = 0f;

                                            v_40_1 = x87_r6_9 * 255f;
                                            long double x87_r6_14 =
                                                (valA28 >> 8) * x87_r6_6 * 0.00392156886f
                                                + v_38_1;
                                            long double x87_r5_24 = 0f;
                                            x87_r5_24 - x87_r6_14;

                                            if (*(&((x87_r5_24 < x87_r6_14 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r5_24, x87_r6_14) ? 1 : 0) << 0xa
                                                | (x87_r5_24 == x87_r6_14 ? 1 : 0) << 0xe | 0x3000)
                                                + 1) & 0x41)
                                            {
                                                long double x87_r5_25 = 1f;
                                                x87_r5_25 - x87_r6_14;

                                                if (*(&((x87_r5_25 < x87_r6_14 ? 1 : 0) << 8
                                                        | (FCMP_UO(x87_r5_25, x87_r6_14) ? 1 : 0)
                                                        << 0xa | (x87_r5_25 == x87_r6_14 ? 1 : 0) << 0xe
                                                        | 0x3000) + 1) & 1)
                                                    x87_r6_14 = 1f;
                                            }
                                            else
                                                x87_r6_14 = 0f;

                                            v_38_1 = x87_r6_14 * 255f;
                                            long double x87_r7_20 =
                                                v_88_10 * x87_r6_6 * 0.00392156886f + v_5c_1;
                                            long double x87_r6_18 = 0f;
                                            x87_r6_18 - x87_r7_20;

                                            if (*(&((x87_r6_18 < x87_r7_20 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r6_18, x87_r7_20) ? 1 : 0) << 0xa
                                                | (x87_r6_18 == x87_r7_20 ? 1 : 0) << 0xe | 0x3800)
                                                + 1) & 0x41)
                                            {
                                                long double x87_r6_19 = 1f;
                                                x87_r6_19 - x87_r7_20;

                                                if (*(&((x87_r6_19 < x87_r7_20 ? 1 : 0) << 8
                                                        | (FCMP_UO(x87_r6_19, x87_r7_20) ? 1 : 0)
                                                        << 0xa | (x87_r6_19 == x87_r7_20 ? 1 : 0) << 0xe
                                                        | 0x3800) + 1) & 1)
                                                    x87_r7_20 = 1f;
                                            }
                                            else
                                                x87_r7_20 = 0f;

                                            v_5c_1 = x87_r7_20 * 255f;
                                            *srcS4 = (v_40_1 << 8 | v_38_1) << 8 | v_5c_1;
                                        }
                                    }

                                    ctxB15 += 1;
                                    flagP19 = &flagP19[1];
                                    srcS4 = &srcS4[1];
                                    cond_8_1 = v_6c_2 != 1;
                                    v_6c_2 -= 1;
                                } while (cond_8_1);
                                dstD2 = v_70_2;
                            }

                            v_74_1 = &v_74_1[g_bcaaa0];
                            dstD2 += 1;
                            v_70_2 = dstD2;
                            v_78_3 += *(a1 + 0x14) & 0xfffffffc;
                            valA39 = v_7c_3 - 1;
                            cond_6_1 = v_7c_3 != 1;
                            v_7c_3 = valA39;
                        } while (cond_6_1);
                        return valA39;
                    }
                }
                else
                {
                    Error_Show("
                        OffscreenBufferSprite_RenderSprite() : Texture type not supported.");

                    while (true)
                        /* nop */
                }
            }
            else
            {
                int32_t valA5 = *(a1 + 0x38);
                char* srcS2 = *(a1 + 0x18);
                valA4 = valA;
                char* v_70_1 = srcS2;
                int32_t v_6c_1 = 0;

                if (valA4 > 0)
                {
                    int32_t valA6 = dstD2;
                    int32_t v_7c_2 = valA6;
                    bool cond_4_1;

                    do
                    {
                        if (valA6 >= v_88_8 && valA6 < ctxB8)
                        {
                            int32_t dstD3 = 0;

                            if (tmpD1 > 0)
                            {
                                int32_t* ctxB12 = v_74_1;
                                void* flagP13 = v_88_6 - srcS2;
                                void* v_60_2 = flagP13;

                                do
                                {
                                    void* valA7 = srcS2 + flagP13;

                                    if (valA7 >= v_88_7 && valA7 < ctxB6)
                                    {
                                        int32_t valA9;

                                        if (!v_78_2)
                                        {
                                            int32_t tmpD4 = valA5;
                                            int32_t valA10 = 0;
                                            valA10 = *srcS2;
                                            tmpD4 = *(tmpD4 + (valA10 << 1));
                                            int32_t valA16 = (((tmpD4 >> 5 & 0x3f) * *(a1 + 0x5c))
                                                | ((tmpD4 >> 0xb) * *(a1 + 0x58)) << 9) << 7;
                                            valA9 =
                                                (valA16 | ((tmpD4 & 0x1f) * *(a1 + 0x60))) << 3;
                                        }
                                        else
                                        {
                                            int32_t tmpD3 = 0;
                                            tmpD3 = *srcS2;
                                            valA9 = 0;
                                            valA9 = *(valA5 + (tmpD3 << 1));
                                        }

                                        flagP13 = v_60_2;
                                        *ctxB12 = valA9;
                                    }

                                    tmpD1 = *(a1 + 0x10);
                                    dstD3 += 1;
                                    srcS2 = &srcS2[1];
                                    ctxB12 = &ctxB12[1];
                                } while (dstD3 < tmpD1);

                                srcS2 = v_70_1;
                                valA6 = v_7c_2;
                            }
                        }

                        v_74_1 = &v_74_1[g_bcaaa0];
                        srcS2 = &srcS2[*(a1 + 0x14)];
                        valA6 += 1;
                        cond_4_1 = v_6c_1 + 1 < *(a1 + 0x12);
                        v_70_1 = srcS2;
                        v_6c_1 += 1;
                        v_7c_2 = valA6;
                    } while (cond_4_1);
                    return valA6;
                }
            }
        }
    }

    return valA4;
}
