#include "004ED010-SoundSys_StopSoundSample_17.h"
/* 0x004ed010 SoundSys_StopSoundSample_17 full linked: callers=0 callees=0 */
void* sub_4ed010(void* a1)

{
    int32_t eax = g_a5ef9c;
    long double x87_r7 = 0f;
    int32_t ecx_2 = eax * 0xb0;
    int32_t ebx = 0;
    int32_t i_1 = *(ecx_2 + 0xbc20a4);
    void* edx = *(ecx_2 + 0xbc20a8);
    int32_t esi_1 = eax * 0x28;
    float var_c = 0f;
    float var_4 = 0f;
    float var_8 = 0f;

    if (i_1 > 0)
    {
        int32_t i;

        do
        {
            int32_t eax_1 = *(edx + 4);

            if (eax_1 == 1)
            {
                if (*(*(edx + 8) + 0xc28c62) & 0x80)
                    ebx |= *edx;
            }
            else if (eax_1 == 2)
            {
                if (*(edx + 8) & *(esi_1 + &g_bcaa20))
                    ebx |= *edx;
            }
            else if (eax_1 == 3 && *(edx + 8) & *g_c28f8c)
                ebx |= *edx;

            edx += 0xc;
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
    }

    float eax_7 = *(ecx_2 + 0xbc20ac);

    if (eax_7 == 2)
    {
        var_c = *(esi_1 + 0xbcaa0c);
        x87_r7 = *(esi_1 + 0xbcaa08);
        var_4 = *(esi_1 + 0xbcaa18);
        var_8 = *(esi_1 + 0xbcaa1c);
    }
    else if (eax_7 == 3)
    {
        x87_r7 = g_c28f84;
        var_c = g_c28f88;
    }

    if (!(ebx & 0x10))
    {
        long double x87_r6_7 = *(ecx_2 + 0xbc20b0);

        if (!(ebx & 0x20))
        {
            long double temp5_1 = 0f;
            x87_r6_7 - temp5_1;

            if (!(*(&((x87_r6_7 < temp5_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_7, temp5_1) ? 1 : 0) << 0xa
                | (x87_r6_7 == temp5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
            {
                long double x87_r6_15 = *(ecx_2 + 0xbc20b0);
                long double temp9_1 = 0f;
                x87_r6_15 - temp9_1;

                if (!(*(&((x87_r6_15 < temp9_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_15, temp9_1) ? 1 : 0) << 0xa
                    | (x87_r6_15 == temp9_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                {
                    long double x87_r6_17 = *(ecx_2 + 0xbc20b0) - *(ecx_2 + 0xbc20e0);
                    *(ecx_2 + 0xbc20b0) = x87_r6_17;
                    long double temp14_1 = 0f;
                    x87_r6_17 - temp14_1;

                    if (*(&((x87_r6_17 < temp14_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r6_17, temp14_1) ? 1 : 0) << 0xa
                            | (x87_r6_17 == temp14_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                        *(ecx_2 + 0xbc20b0) = 0;
                }
            }
            else
            {
                long double x87_r6_14 = *(ecx_2 + 0xbc20e0) + *(ecx_2 + 0xbc20b0);
                *(ecx_2 + 0xbc20b0) = x87_r6_14;
                long double temp10_1 = 0f;
                x87_r6_14 - temp10_1;

                if (!(*(&((x87_r6_14 < temp10_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_14, temp10_1) ? 1 : 0) << 0xa
                        | (x87_r6_14 == temp10_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                    *(ecx_2 + 0xbc20b0) = 0;
            }
        }
        else
        {
            long double temp6_1 = *(ecx_2 + 0xbc20c0);
            x87_r6_7 - temp6_1;

            if (!(*(&((x87_r6_7 < temp6_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_7, temp6_1) ? 1 : 0) << 0xa
                | (x87_r6_7 == temp6_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
            {
                long double x87_r6_10 = *(ecx_2 + 0xbc20b0);
                long double temp11_1 = *(ecx_2 + 0xbc20c0);
                x87_r6_10 - temp11_1;

                if (!(*(&((x87_r6_10 < temp11_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_10, temp11_1) ? 1 : 0) << 0xa
                    | (x87_r6_10 == temp11_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                {
                    long double x87_r6_12 = *(ecx_2 + 0xbc20b0) - *(ecx_2 + 0xbc20d0);
                    *(ecx_2 + 0xbc20b0) = x87_r6_12;
                    long double temp15_1 = *(ecx_2 + 0xbc20c0);
                    x87_r6_12 - temp15_1;

                    if (*(&((x87_r6_12 < temp15_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r6_12, temp15_1) ? 1 : 0) << 0xa
                            | (x87_r6_12 == temp15_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                        *(ecx_2 + 0xbc20b0) = *(ecx_2 + 0xbc20c0);
                }
            }
            else
            {
                long double x87_r6_9 = *(ecx_2 + 0xbc20d0) + *(ecx_2 + 0xbc20b0);
                *(ecx_2 + 0xbc20b0) = x87_r6_9;
                long double temp12_1 = *(ecx_2 + 0xbc20c0);
                x87_r6_9 - temp12_1;

                if (!(*(&((x87_r6_9 < temp12_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_9, temp12_1) ? 1 : 0) << 0xa
                        | (x87_r6_9 == temp12_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                    *(ecx_2 + 0xbc20b0) = *(ecx_2 + 0xbc20c0);
            }
        }
    }
    else
    {
        long double x87_r6_1 = -(*(ecx_2 + 0xbc20c0));
        long double temp4_1 = *(ecx_2 + 0xbc20b0);
        x87_r6_1 - temp4_1;

        if (*(&((x87_r6_1 < temp4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, temp4_1) ? 1 : 0) << 0xa
            | (x87_r6_1 == temp4_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41)
        {
            long double temp7_1 = *(ecx_2 + 0xbc20b0);
            x87_r6_1 - temp7_1;

            if (*(&((x87_r6_1 < temp7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, temp7_1) ? 1 : 0) << 0xa
                | (x87_r6_1 == temp7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
            {
                long double x87_r6_6 = *(ecx_2 + 0xbc20b0) - *(ecx_2 + 0xbc20d0);
                *(ecx_2 + 0xbc20b0) = x87_r6_6;
                float var_10_2 = -(*(ecx_2 + 0xbc20c0));
                long double temp13_1 = var_10_2;
                x87_r6_6 - temp13_1;

                if (*(&((x87_r6_6 < temp13_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_6, temp13_1) ? 1 : 0) << 0xa
                        | (x87_r6_6 == temp13_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                    *(ecx_2 + 0xbc20b0) = var_10_2;
            }
        }
        else
        {
            long double x87_r6_4 = *(ecx_2 + 0xbc20d0) + *(ecx_2 + 0xbc20b0);
            *(ecx_2 + 0xbc20b0) = x87_r6_4;
            float var_10_1 = -(*(ecx_2 + 0xbc20c0));
            long double temp8_1 = var_10_1;
            x87_r6_4 - temp8_1;

            if (!(*(&((x87_r6_4 < temp8_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_4, temp8_1) ? 1 : 0) << 0xa
                    | (x87_r6_4 == temp8_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                *(ecx_2 + 0xbc20b0) = var_10_1;
        }
    }

    if (!(ebx & 0x40))
    {
        long double x87_r6_25 = *(ecx_2 + 0xbc20b4);

        if (!(ebx & 0x80))
        {
            long double temp17_1 = 0f;
            x87_r6_25 - temp17_1;

            if (!(*(&((x87_r6_25 < temp17_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_25, temp17_1) ? 1 : 0) << 0xa
                | (x87_r6_25 == temp17_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
            {
                long double x87_r6_33 = *(ecx_2 + 0xbc20b4);
                long double temp21_1 = 0f;
                x87_r6_33 - temp21_1;

                if (!(*(&((x87_r6_33 < temp21_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_33, temp21_1) ? 1 : 0) << 0xa
                    | (x87_r6_33 == temp21_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                {
                    long double x87_r6_35 = *(ecx_2 + 0xbc20b4) - *(ecx_2 + 0xbc20e4);
                    *(ecx_2 + 0xbc20b4) = x87_r6_35;
                    long double temp27_1 = 0f;
                    x87_r6_35 - temp27_1;

                    if (*(&((x87_r6_35 < temp27_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r6_35, temp27_1) ? 1 : 0) << 0xa
                            | (x87_r6_35 == temp27_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                        *(ecx_2 + 0xbc20b4) = 0;
                }
            }
            else
            {
                long double x87_r6_32 = *(ecx_2 + 0xbc20e4) + *(ecx_2 + 0xbc20b4);
                *(ecx_2 + 0xbc20b4) = x87_r6_32;
                long double temp22_1 = 0f;
                x87_r6_32 - temp22_1;

                if (!(*(&((x87_r6_32 < temp22_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_32, temp22_1) ? 1 : 0) << 0xa
                        | (x87_r6_32 == temp22_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                    *(ecx_2 + 0xbc20b4) = 0;
            }
        }
        else
        {
            long double temp18_1 = *(ecx_2 + 0xbc20c0);
            x87_r6_25 - temp18_1;

            if (!(*(&((x87_r6_25 < temp18_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_25, temp18_1) ? 1 : 0) << 0xa
                | (x87_r6_25 == temp18_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
            {
                long double x87_r6_28 = *(ecx_2 + 0xbc20b4);
                long double temp23_1 = *(ecx_2 + 0xbc20c0);
                x87_r6_28 - temp23_1;

                if (!(*(&((x87_r6_28 < temp23_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_28, temp23_1) ? 1 : 0) << 0xa
                    | (x87_r6_28 == temp23_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                {
                    long double x87_r6_30 = *(ecx_2 + 0xbc20b4) - *(ecx_2 + 0xbc20d4);
                    *(ecx_2 + 0xbc20b4) = x87_r6_30;
                    long double temp28_1 = *(ecx_2 + 0xbc20c0);
                    x87_r6_30 - temp28_1;

                    if (*(&((x87_r6_30 < temp28_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r6_30, temp28_1) ? 1 : 0) << 0xa
                            | (x87_r6_30 == temp28_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                        *(ecx_2 + 0xbc20b4) = *(ecx_2 + 0xbc20c0);
                }
            }
            else
            {
                long double x87_r6_27 = *(ecx_2 + 0xbc20d4) + *(ecx_2 + 0xbc20b4);
                *(ecx_2 + 0xbc20b4) = x87_r6_27;
                long double temp24_1 = *(ecx_2 + 0xbc20c0);
                x87_r6_27 - temp24_1;

                if (!(*(&((x87_r6_27 < temp24_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_27, temp24_1) ? 1 : 0) << 0xa
                        | (x87_r6_27 == temp24_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                    *(ecx_2 + 0xbc20b4) = *(ecx_2 + 0xbc20c0);
            }
        }
    }
    else
    {
        long double x87_r6_19 = -(*(ecx_2 + 0xbc20c0));
        long double temp16_1 = *(ecx_2 + 0xbc20b4);
        x87_r6_19 - temp16_1;

        if (*(&((x87_r6_19 < temp16_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_19, temp16_1) ? 1 : 0) << 0xa
            | (x87_r6_19 == temp16_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41)
        {
            long double temp19_1 = *(ecx_2 + 0xbc20b4);
            x87_r6_19 - temp19_1;

            if (*(&((x87_r6_19 < temp19_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_19, temp19_1) ? 1 : 0) << 0xa
                | (x87_r6_19 == temp19_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
            {
                long double x87_r6_24 = *(ecx_2 + 0xbc20b4) - *(ecx_2 + 0xbc20d4);
                *(ecx_2 + 0xbc20b4) = x87_r6_24;
                float var_10_4 = -(*(ecx_2 + 0xbc20c0));
                long double temp26_1 = var_10_4;
                x87_r6_24 - temp26_1;

                if (*(&((x87_r6_24 < temp26_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_24, temp26_1) ? 1 : 0) << 0xa
                        | (x87_r6_24 == temp26_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                    *(ecx_2 + 0xbc20b4) = var_10_4;
            }
        }
        else
        {
            long double x87_r6_22 = *(ecx_2 + 0xbc20d4) + *(ecx_2 + 0xbc20b4);
            *(ecx_2 + 0xbc20b4) = x87_r6_22;
            float var_10_3 = -(*(ecx_2 + 0xbc20c0));
            long double temp20_1 = var_10_3;
            x87_r6_22 - temp20_1;

            if (!(*(&((x87_r6_22 < temp20_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_22, temp20_1) ? 1 : 0) << 0xa
                    | (x87_r6_22 == temp20_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                *(ecx_2 + 0xbc20b4) = var_10_3;
        }
    }

    float var_10_5 = x87_r7 + *(ecx_2 + 0xbc20b0);
    float var_c_1 = var_c + *(ecx_2 + 0xbc20b4);
    long double x87_r7_6 = -1f;
    long double temp25 = var_10_5;
    x87_r7_6 - temp25;

    if (*(&((x87_r7_6 < temp25 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, temp25) ? 1 : 0) << 0xa
        | (x87_r7_6 == temp25 ? 1 : 0) << 0xe) + 1) & 0x41)
    {
        long double x87_r7_7 = 1f;
        long double temp29_1 = var_10_5;
        x87_r7_7 - temp29_1;

        if (*(&((x87_r7_7 < temp29_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_7, temp29_1) ? 1 : 0) << 0xa
                | (x87_r7_7 == temp29_1 ? 1 : 0) << 0xe) + 1) & 1)
            var_10_5 = 1f;
    }
    else
        var_10_5 = -1f;

    long double x87_r7_8 = -1f;
    long double temp30 = var_c_1;
    x87_r7_8 - temp30;

    if (*(&((x87_r7_8 < temp30 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_8, temp30) ? 1 : 0) << 0xa
        | (x87_r7_8 == temp30 ? 1 : 0) << 0xe) + 1) & 0x41)
    {
        long double x87_r7_9 = 1f;
        long double temp31_1 = var_c_1;
        x87_r7_9 - temp31_1;

        if (*(&((x87_r7_9 < temp31_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_9, temp31_1) ? 1 : 0) << 0xa
                | (x87_r7_9 == temp31_1 ? 1 : 0) << 0xe) + 1) & 1)
            var_c_1 = 1f;
    }
    else
        var_c_1 = -1f;

    long double x87_r7_11 = var_4 + *(ecx_2 + 0xbc20b8);
    float var_8_1 = var_8 + *(ecx_2 + 0xbc20bc);
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

    *(a1 + 4) = var_10_5;
    *(a1 + 0x1c) = ebx;
    *(a1 + 0xc) = x87_r7_11;
    *(a1 + 8) = var_c_1;
    *(a1 + 0x10) = var_8_1;
    return a1;
}
