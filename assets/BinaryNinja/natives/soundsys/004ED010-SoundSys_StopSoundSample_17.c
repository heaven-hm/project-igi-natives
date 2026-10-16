#include "SoundSys_StopSoundSample_17.h"
void* SoundSys_StopSoundSample_17(void* a1)

{
    int32_t valA = g_a5ef9c;
    long double fpu7 = 0f;
    int32_t objC2 = valA * 0xb0;
    int32_t ctxB = 0;
    int32_t i_1 = *(objC2 + 0xbc20a4);
    void* tmpD = *(objC2 + 0xbc20a8);
    int32_t srcS1 = valA * 0x28;
    float v_c = 0f;
    float v_4 = 0f;
    float v_8 = 0f;

    if (i_1 > 0)
    {
        int32_t i;

        do
        {
            int32_t valA1 = *(tmpD + 4);

            if (valA1 == 1)
            {
                if (*(*(tmpD + 8) + 0xc28c62) & 0x80)
                    ctxB |= *tmpD;
            }
            else if (valA1 == 2)
            {
                if (*(tmpD + 8) & *(srcS1 + &g_bcaa20))
                    ctxB |= *tmpD;
            }
            else if (valA1 == 3 && *(tmpD + 8) & *g_c28f8c)
                ctxB |= *tmpD;

            tmpD += 0xc;
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
    }

    float valA7 = *(objC2 + 0xbc20ac);

    if (valA7 == 2)
    {
        v_c = *(srcS1 + 0xbcaa0c);
        fpu7 = *(srcS1 + 0xbcaa08);
        v_4 = *(srcS1 + 0xbcaa18);
        v_8 = *(srcS1 + 0xbcaa1c);
    }
    else if (valA7 == 3)
    {
        fpu7 = g_c28f84;
        v_c = g_c28f88;
    }

    if (!(ctxB & 0x10))
    {
        long double x87_r6_7 = *(objC2 + 0xbc20b0);

        if (!(ctxB & 0x20))
        {
            long double f5_1 = 0f;
            x87_r6_7 - f5_1;

            if (!(*(&((x87_r6_7 < f5_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_7, f5_1) ? 1 : 0) << 0xa
                | (x87_r6_7 == f5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
            {
                long double x87_r6_15 = *(objC2 + 0xbc20b0);
                long double f9_1 = 0f;
                x87_r6_15 - f9_1;

                if (!(*(&((x87_r6_15 < f9_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_15, f9_1) ? 1 : 0) << 0xa
                    | (x87_r6_15 == f9_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                {
                    long double x87_r6_17 = *(objC2 + 0xbc20b0) - *(objC2 + 0xbc20e0);
                    *(objC2 + 0xbc20b0) = x87_r6_17;
                    long double f14_1 = 0f;
                    x87_r6_17 - f14_1;

                    if (*(&((x87_r6_17 < f14_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r6_17, f14_1) ? 1 : 0) << 0xa
                            | (x87_r6_17 == f14_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                        *(objC2 + 0xbc20b0) = 0;
                }
            }
            else
            {
                long double x87_r6_14 = *(objC2 + 0xbc20e0) + *(objC2 + 0xbc20b0);
                *(objC2 + 0xbc20b0) = x87_r6_14;
                long double f10_1 = 0f;
                x87_r6_14 - f10_1;

                if (!(*(&((x87_r6_14 < f10_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_14, f10_1) ? 1 : 0) << 0xa
                        | (x87_r6_14 == f10_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                    *(objC2 + 0xbc20b0) = 0;
            }
        }
        else
        {
            long double f6_1 = *(objC2 + 0xbc20c0);
            x87_r6_7 - f6_1;

            if (!(*(&((x87_r6_7 < f6_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_7, f6_1) ? 1 : 0) << 0xa
                | (x87_r6_7 == f6_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
            {
                long double x87_r6_10 = *(objC2 + 0xbc20b0);
                long double f11_1 = *(objC2 + 0xbc20c0);
                x87_r6_10 - f11_1;

                if (!(*(&((x87_r6_10 < f11_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_10, f11_1) ? 1 : 0) << 0xa
                    | (x87_r6_10 == f11_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                {
                    long double x87_r6_12 = *(objC2 + 0xbc20b0) - *(objC2 + 0xbc20d0);
                    *(objC2 + 0xbc20b0) = x87_r6_12;
                    long double f15_1 = *(objC2 + 0xbc20c0);
                    x87_r6_12 - f15_1;

                    if (*(&((x87_r6_12 < f15_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r6_12, f15_1) ? 1 : 0) << 0xa
                            | (x87_r6_12 == f15_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                        *(objC2 + 0xbc20b0) = *(objC2 + 0xbc20c0);
                }
            }
            else
            {
                long double x87_r6_9 = *(objC2 + 0xbc20d0) + *(objC2 + 0xbc20b0);
                *(objC2 + 0xbc20b0) = x87_r6_9;
                long double f12_1 = *(objC2 + 0xbc20c0);
                x87_r6_9 - f12_1;

                if (!(*(&((x87_r6_9 < f12_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_9, f12_1) ? 1 : 0) << 0xa
                        | (x87_r6_9 == f12_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                    *(objC2 + 0xbc20b0) = *(objC2 + 0xbc20c0);
            }
        }
    }
    else
    {
        long double x87_r6_1 = -(*(objC2 + 0xbc20c0));
        long double f4_1 = *(objC2 + 0xbc20b0);
        x87_r6_1 - f4_1;

        if (*(&((x87_r6_1 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, f4_1) ? 1 : 0) << 0xa
            | (x87_r6_1 == f4_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41)
        {
            long double f7_1 = *(objC2 + 0xbc20b0);
            x87_r6_1 - f7_1;

            if (*(&((x87_r6_1 < f7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, f7_1) ? 1 : 0) << 0xa
                | (x87_r6_1 == f7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
            {
                long double x87_r6_6 = *(objC2 + 0xbc20b0) - *(objC2 + 0xbc20d0);
                *(objC2 + 0xbc20b0) = x87_r6_6;
                float v_10_2 = -(*(objC2 + 0xbc20c0));
                long double f13_1 = v_10_2;
                x87_r6_6 - f13_1;

                if (*(&((x87_r6_6 < f13_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_6, f13_1) ? 1 : 0) << 0xa
                        | (x87_r6_6 == f13_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                    *(objC2 + 0xbc20b0) = v_10_2;
            }
        }
        else
        {
            long double x87_r6_4 = *(objC2 + 0xbc20d0) + *(objC2 + 0xbc20b0);
            *(objC2 + 0xbc20b0) = x87_r6_4;
            float v_10_1 = -(*(objC2 + 0xbc20c0));
            long double f8_1 = v_10_1;
            x87_r6_4 - f8_1;

            if (!(*(&((x87_r6_4 < f8_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_4, f8_1) ? 1 : 0) << 0xa
                    | (x87_r6_4 == f8_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                *(objC2 + 0xbc20b0) = v_10_1;
        }
    }

    if (!(ctxB & 0x40))
    {
        long double x87_r6_25 = *(objC2 + 0xbc20b4);

        if (!(ctxB & 0x80))
        {
            long double f17_1 = 0f;
            x87_r6_25 - f17_1;

            if (!(*(&((x87_r6_25 < f17_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_25, f17_1) ? 1 : 0) << 0xa
                | (x87_r6_25 == f17_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
            {
                long double x87_r6_33 = *(objC2 + 0xbc20b4);
                long double f21_1 = 0f;
                x87_r6_33 - f21_1;

                if (!(*(&((x87_r6_33 < f21_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_33, f21_1) ? 1 : 0) << 0xa
                    | (x87_r6_33 == f21_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                {
                    long double x87_r6_35 = *(objC2 + 0xbc20b4) - *(objC2 + 0xbc20e4);
                    *(objC2 + 0xbc20b4) = x87_r6_35;
                    long double f27_1 = 0f;
                    x87_r6_35 - f27_1;

                    if (*(&((x87_r6_35 < f27_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r6_35, f27_1) ? 1 : 0) << 0xa
                            | (x87_r6_35 == f27_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                        *(objC2 + 0xbc20b4) = 0;
                }
            }
            else
            {
                long double x87_r6_32 = *(objC2 + 0xbc20e4) + *(objC2 + 0xbc20b4);
                *(objC2 + 0xbc20b4) = x87_r6_32;
                long double f22_1 = 0f;
                x87_r6_32 - f22_1;

                if (!(*(&((x87_r6_32 < f22_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_32, f22_1) ? 1 : 0) << 0xa
                        | (x87_r6_32 == f22_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                    *(objC2 + 0xbc20b4) = 0;
            }
        }
        else
        {
            long double f18_1 = *(objC2 + 0xbc20c0);
            x87_r6_25 - f18_1;

            if (!(*(&((x87_r6_25 < f18_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_25, f18_1) ? 1 : 0) << 0xa
                | (x87_r6_25 == f18_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
            {
                long double x87_r6_28 = *(objC2 + 0xbc20b4);
                long double f23_1 = *(objC2 + 0xbc20c0);
                x87_r6_28 - f23_1;

                if (!(*(&((x87_r6_28 < f23_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_28, f23_1) ? 1 : 0) << 0xa
                    | (x87_r6_28 == f23_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                {
                    long double x87_r6_30 = *(objC2 + 0xbc20b4) - *(objC2 + 0xbc20d4);
                    *(objC2 + 0xbc20b4) = x87_r6_30;
                    long double f28_1 = *(objC2 + 0xbc20c0);
                    x87_r6_30 - f28_1;

                    if (*(&((x87_r6_30 < f28_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r6_30, f28_1) ? 1 : 0) << 0xa
                            | (x87_r6_30 == f28_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                        *(objC2 + 0xbc20b4) = *(objC2 + 0xbc20c0);
                }
            }
            else
            {
                long double x87_r6_27 = *(objC2 + 0xbc20d4) + *(objC2 + 0xbc20b4);
                *(objC2 + 0xbc20b4) = x87_r6_27;
                long double f24_1 = *(objC2 + 0xbc20c0);
                x87_r6_27 - f24_1;

                if (!(*(&((x87_r6_27 < f24_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_27, f24_1) ? 1 : 0) << 0xa
                        | (x87_r6_27 == f24_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                    *(objC2 + 0xbc20b4) = *(objC2 + 0xbc20c0);
            }
        }
    }
    else
    {
        long double x87_r6_19 = -(*(objC2 + 0xbc20c0));
        long double f16_1 = *(objC2 + 0xbc20b4);
        x87_r6_19 - f16_1;

        if (*(&((x87_r6_19 < f16_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_19, f16_1) ? 1 : 0) << 0xa
            | (x87_r6_19 == f16_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41)
        {
            long double f19_1 = *(objC2 + 0xbc20b4);
            x87_r6_19 - f19_1;

            if (*(&((x87_r6_19 < f19_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_19, f19_1) ? 1 : 0) << 0xa
                | (x87_r6_19 == f19_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
            {
                long double x87_r6_24 = *(objC2 + 0xbc20b4) - *(objC2 + 0xbc20d4);
                *(objC2 + 0xbc20b4) = x87_r6_24;
                float v_10_4 = -(*(objC2 + 0xbc20c0));
                long double f26_1 = v_10_4;
                x87_r6_24 - f26_1;

                if (*(&((x87_r6_24 < f26_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_24, f26_1) ? 1 : 0) << 0xa
                        | (x87_r6_24 == f26_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                    *(objC2 + 0xbc20b4) = v_10_4;
            }
        }
        else
        {
            long double x87_r6_22 = *(objC2 + 0xbc20d4) + *(objC2 + 0xbc20b4);
            *(objC2 + 0xbc20b4) = x87_r6_22;
            float v_10_3 = -(*(objC2 + 0xbc20c0));
            long double f20_1 = v_10_3;
            x87_r6_22 - f20_1;

            if (!(*(&((x87_r6_22 < f20_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_22, f20_1) ? 1 : 0) << 0xa
                    | (x87_r6_22 == f20_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                *(objC2 + 0xbc20b4) = v_10_3;
        }
    }

    float v_10_5 = fpu7 + *(objC2 + 0xbc20b0);
    float v_c_1 = v_c + *(objC2 + 0xbc20b4);
    long double x87_r7_6 = -1f;
    long double f25 = v_10_5;
    x87_r7_6 - f25;

    if (*(&((x87_r7_6 < f25 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, f25) ? 1 : 0) << 0xa
        | (x87_r7_6 == f25 ? 1 : 0) << 0xe) + 1) & 0x41)
    {
        long double x87_r7_7 = 1f;
        long double f29_1 = v_10_5;
        x87_r7_7 - f29_1;

        if (*(&((x87_r7_7 < f29_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_7, f29_1) ? 1 : 0) << 0xa
                | (x87_r7_7 == f29_1 ? 1 : 0) << 0xe) + 1) & 1)
            v_10_5 = 1f;
    }
    else
        v_10_5 = -1f;

    long double x87_r7_8 = -1f;
    long double f30 = v_c_1;
    x87_r7_8 - f30;

    if (*(&((x87_r7_8 < f30 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_8, f30) ? 1 : 0) << 0xa
        | (x87_r7_8 == f30 ? 1 : 0) << 0xe) + 1) & 0x41)
    {
        long double x87_r7_9 = 1f;
        long double f31_1 = v_c_1;
        x87_r7_9 - f31_1;

        if (*(&((x87_r7_9 < f31_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_9, f31_1) ? 1 : 0) << 0xa
                | (x87_r7_9 == f31_1 ? 1 : 0) << 0xe) + 1) & 1)
            v_c_1 = 1f;
    }
    else
        v_c_1 = -1f;

    long double x87_r7_11 = v_4 + *(objC2 + 0xbc20b8);
    float v_8_1 = v_8 + *(objC2 + 0xbc20bc);
    long double x87_r6_38 = 0f;
    x87_r6_38 - x87_r7_11;

    if (*(&((x87_r6_38 < x87_r7_11 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_38, x87_r7_11) ? 1 : 0) << 0xa
        | (x87_r6_38 == x87_r7_11 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r6_39 = 1f;
        x87_r6_39 - x87_r7_11;

        if (*(&((x87_r6_39 < x87_r7_11 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_39, x87_r7_11) ? 1 : 0) << 0xa
                | (x87_r6_39 == x87_r7_11 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
            x87_r7_11 = 1f;
    }
    else
        x87_r7_11 = 0f;

    *(a1 + 4) = v_10_5;
    *(a1 + 0x1c) = ctxB;
    *(a1 + 0xc) = x87_r7_11;
    *(a1 + 8) = v_c_1;
    *(a1 + 0x10) = v_8_1;
    return a1;
}
