// IGI native provenance: HumanPlayer_ExecutePipeline_40DFC0 - 0x0040DFC0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0040DFC0-HumanPlayer_ExecutePipeline_40DFC0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_ExecutePipeline_40DFC0.h"

float HumanPlayer_ExecutePipeline_40DFC0(float arg1) __location("result_val")

{
    float edx_1 = arg1;
    long double x87_r7 = *(edx_1 + 0x1b8);
    long double temp0 = 0f;
    x87_r7 - temp0;
    void* context_val = *(edx_1 + 0x4ec);
    float human_gen_5_1;
    human_gen_5_1 = (x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe;

    if (!(*(&human_gen_5_1 + 1) & 0x40))
    {
        long double x87_r7_1 = *(edx_1 + 0x118);
        long double temp2_1 = 0f;
        x87_r7_1 - temp2_1;
        human_gen_5_1 = (x87_r7_1 < temp2_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_1, temp2_1) ? 1 : 0) << 0xa | (x87_r7_1 == temp2_1 ? 1 : 0) << 0xe;

        if (*(&human_gen_5_1 + 1) & 0x40)
            *(context_val + 0x1a8) = g_human_gen_5 / g_human_gen_7;

        long double x87_r7_5 = -(g_human_gen_5);
        long double temp5_1 = *(context_val + 0x19c);
        x87_r7_5 - temp5_1;
        human_gen_5_1 = (x87_r7_5 < temp5_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_5, temp5_1) ? 1 : 0) << 0xa | (x87_r7_5 == temp5_1 ? 1 : 0) << 0xe
            | 0x3800;

        if (*(&human_gen_5_1 + 1) & 0x41)
        {
            long double temp8_1 = *(context_val + 0x19c);
            x87_r7_5 - temp8_1;
            human_gen_5_1 = (x87_r7_5 < temp8_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_5, temp8_1) ? 1 : 0) << 0xa
                | (x87_r7_5 == temp8_1 ? 1 : 0) << 0xe;

            if (*(&human_gen_5_1 + 1) & 1)
            {
                long double x87_r7_10 = *(context_val + 0x19c) - *(context_val + 0x1a8);
                *(context_val + 0x19c) = x87_r7_10;
                arg1 = -(g_human_gen_5);
                long double temp15_1 = arg1;
                x87_r7_10 - temp15_1;
                human_gen_5_1 = (x87_r7_10 < temp15_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_10, temp15_1) ? 1 : 0) << 0xa
                    | (x87_r7_10 == temp15_1 ? 1 : 0) << 0xe;

                if (*(&human_gen_5_1 + 1) & 1)
                {
                    human_gen_5_1 = arg1;
                    *(context_val + 0x19c) = human_gen_5_1;
                }
            }
        }
        else
        {
            long double x87_r7_8 = *(context_val + 0x1a8) + *(context_val + 0x19c);
            *(context_val + 0x19c) = x87_r7_8;
            arg1 = -(g_human_gen_5);
            long double temp9_1 = arg1;
            x87_r7_8 - temp9_1;
            human_gen_5_1 = (x87_r7_8 < temp9_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_8, temp9_1) ? 1 : 0) << 0xa
                | (x87_r7_8 == temp9_1 ? 1 : 0) << 0xe;

            if (!(*(&human_gen_5_1 + 1) & 0x41))
            {
                human_gen_5_1 = arg1;
                *(context_val + 0x19c) = human_gen_5_1;
            }
        }
    }

    long double x87_r7_11 = *(edx_1 + 0x1bc);
    long double temp1 = 0f;
    x87_r7_11 - temp1;
    human_gen_5_1 = (x87_r7_11 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_11, temp1) ? 1 : 0) << 0xa
        | (x87_r7_11 == temp1 ? 1 : 0) << 0xe;

    if (!(*(&human_gen_5_1 + 1) & 0x40))
    {
        long double x87_r7_12 = *(edx_1 + 0x11c);
        long double temp4_1 = 0f;
        x87_r7_12 - temp4_1;
        human_gen_5_1 = (x87_r7_12 < temp4_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_12, temp4_1) ? 1 : 0) << 0xa | (x87_r7_12 == temp4_1 ? 1 : 0) << 0xe;

        if (*(&human_gen_5_1 + 1) & 0x40)
            *(context_val + 0x1a8) = g_human_gen_5 / g_human_gen_7;

        long double x87_r7_15 = *(context_val + 0x19c);
        long double temp7_1 = g_human_gen_5;
        x87_r7_15 - temp7_1;
        human_gen_5_1 = (x87_r7_15 < temp7_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_15, temp7_1) ? 1 : 0) << 0xa | (x87_r7_15 == temp7_1 ? 1 : 0) << 0xe;

        if (!(*(&human_gen_5_1 + 1) & 1))
        {
            long double x87_r7_18 = *(context_val + 0x19c);
            long double temp13_1 = g_human_gen_5;
            x87_r7_18 - temp13_1;
            human_gen_5_1 = (x87_r7_18 < temp13_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_18, temp13_1) ? 1 : 0) << 0xa
                | (x87_r7_18 == temp13_1 ? 1 : 0) << 0xe;

            if (!(*(&human_gen_5_1 + 1) & 0x41))
            {
                long double x87_r7_20 = *(context_val + 0x19c) - *(context_val + 0x1a8);
                *(context_val + 0x19c) = x87_r7_20;
                long double temp17_1 = g_human_gen_5;
                x87_r7_20 - temp17_1;
                human_gen_5_1 = (x87_r7_20 < temp17_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_20, temp17_1) ? 1 : 0) << 0xa
                    | (x87_r7_20 == temp17_1 ? 1 : 0) << 0xe;

                if (*(&human_gen_5_1 + 1) & 1)
                {
                    human_gen_5_1 = g_human_gen_5;
                    *(context_val + 0x19c) = human_gen_5_1;
                }
            }
        }
        else
        {
            long double x87_r7_17 = *(context_val + 0x1a8) + *(context_val + 0x19c);
            *(context_val + 0x19c) = x87_r7_17;
            long double temp14_1 = g_human_gen_5;
            x87_r7_17 - temp14_1;
            human_gen_5_1 = (x87_r7_17 < temp14_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_17, temp14_1) ? 1 : 0) << 0xa
                | (x87_r7_17 == temp14_1 ? 1 : 0) << 0xe;

            if (!(*(&human_gen_5_1 + 1) & 0x41))
            {
                human_gen_5_1 = g_human_gen_5;
                *(context_val + 0x19c) = human_gen_5_1;
            }
        }
    }

    long double x87_r7_21 = *(edx_1 + 0x1b8);
    long double temp3 = 0f;
    x87_r7_21 - temp3;
    human_gen_5_1 = (x87_r7_21 < temp3 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_21, temp3) ? 1 : 0) << 0xa
        | (x87_r7_21 == temp3 ? 1 : 0) << 0xe;

    if (*(&human_gen_5_1 + 1) & 0x40)
    {
        long double x87_r7_22 = *(edx_1 + 0x1bc);
        long double temp6_1 = 0f;
        x87_r7_22 - temp6_1;
        human_gen_5_1 = (x87_r7_22 < temp6_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_22, temp6_1) ? 1 : 0) << 0xa | (x87_r7_22 == temp6_1 ? 1 : 0) << 0xe;

        if (*(&human_gen_5_1 + 1) & 0x40)
        {
            long double x87_r7_23 = *(edx_1 + 0x118);
            long double temp12_1 = 0f;
            x87_r7_23 - temp12_1;
            human_gen_5_1 = (x87_r7_23 < temp12_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_23, temp12_1) ? 1 : 0) << 0xa
                | (x87_r7_23 == temp12_1 ? 1 : 0) << 0xe;

            if (!(*(&human_gen_5_1 + 1) & 0x40))
                *(context_val + 0x1a8) = g_human_gen_5 / g_human_gen_7;
            else
            {
                long double x87_r7_24 = *(edx_1 + 0x11c);
                long double temp16_1 = 0f;
                x87_r7_24 - temp16_1;
                human_gen_5_1 = (x87_r7_24 < temp16_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_24, temp16_1) ? 1 : 0) << 0xa
                    | (x87_r7_24 == temp16_1 ? 1 : 0) << 0xe;

                if (!(*(&human_gen_5_1 + 1) & 0x40))
                    *(context_val + 0x1a8) = g_human_gen_5 / g_human_gen_7;
            }

            long double x87_r7_27 = *(context_val + 0x19c);
            long double temp20_1 = 0f;
            x87_r7_27 - temp20_1;
            human_gen_5_1 = (x87_r7_27 < temp20_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_27, temp20_1) ? 1 : 0) << 0xa
                | (x87_r7_27 == temp20_1 ? 1 : 0) << 0xe;

            if (!(*(&human_gen_5_1 + 1) & 1))
            {
                long double x87_r7_30 = *(context_val + 0x19c);
                long double temp25_1 = 0f;
                x87_r7_30 - temp25_1;
                human_gen_5_1 = (x87_r7_30 < temp25_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_30, temp25_1) ? 1 : 0) << 0xa
                    | (x87_r7_30 == temp25_1 ? 1 : 0) << 0xe;

                if (!(*(&human_gen_5_1 + 1) & 0x41))
                {
                    long double x87_r7_32 = *(context_val + 0x19c) - *(context_val + 0x1a8);
                    *(context_val + 0x19c) = x87_r7_32;
                    long double temp29_1 = 0f;
                    x87_r7_32 - temp29_1;
                    human_gen_5_1 = (x87_r7_32 < temp29_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_32, temp29_1) ? 1 : 0) << 0xa
                        | (x87_r7_32 == temp29_1 ? 1 : 0) << 0xe;

                    if (*(&human_gen_5_1 + 1) & 1)
                        *(context_val + 0x19c) = 0;
                }
            }
            else
            {
                long double x87_r7_29 = *(context_val + 0x1a8) + *(context_val + 0x19c);
                *(context_val + 0x19c) = x87_r7_29;
                long double temp26_1 = 0f;
                x87_r7_29 - temp26_1;
                human_gen_5_1 = (x87_r7_29 < temp26_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_29, temp26_1) ? 1 : 0) << 0xa
                    | (x87_r7_29 == temp26_1 ? 1 : 0) << 0xe;

                if (!(*(&human_gen_5_1 + 1) & 0x41))
                    *(context_val + 0x19c) = 0;
            }
        }
    }

    if (*(edx_1 + 0x33d))
    {
        long double x87_r7_33 = *(edx_1 + 0x1c0);
        long double temp10_1 = 0f;
        x87_r7_33 - temp10_1;
        long double x87_r7_34 = *(edx_1 + 0x120);
        human_gen_5_1 = (x87_r7_33 < temp10_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_33, temp10_1) ? 1 : 0) << 0xa
            | (x87_r7_33 == temp10_1 ? 1 : 0) << 0xe | 0x3800;
        long double temp11_1 = 0f;
        x87_r7_34 - temp11_1;
        bool cond:0_1 = *(&human_gen_5_1 + 1) & 0x40;
        human_gen_5_1 = (x87_r7_34 < temp11_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_34, temp11_1) ? 1 : 0) << 0xa
            | (x87_r7_34 == temp11_1 ? 1 : 0) << 0xe;

        if (cond:0_1)
        {
            if (!(*(&human_gen_5_1 + 1) & 0x40))
                *(context_val + 0x1b0) = g_human_gen_6 / g_human_gen_7;

            long double x87_r7_45 = *(context_val + 0x1a4);
            long double temp18_1 = 0f;
            x87_r7_45 - temp18_1;
            human_gen_5_1 = (x87_r7_45 < temp18_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_45, temp18_1) ? 1 : 0) << 0xa
                | (x87_r7_45 == temp18_1 ? 1 : 0) << 0xe;

            if (!(*(&human_gen_5_1 + 1) & 1))
            {
                long double x87_r7_48 = *(context_val + 0x1a4);
                long double temp21_1 = 0f;
                x87_r7_48 - temp21_1;
                human_gen_5_1 = (x87_r7_48 < temp21_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_48, temp21_1) ? 1 : 0) << 0xa
                    | (x87_r7_48 == temp21_1 ? 1 : 0) << 0xe;

                if (!(*(&human_gen_5_1 + 1) & 0x41))
                {
                    long double x87_r7_50 = *(context_val + 0x1a4) - *(context_val + 0x1b0);
                    *(context_val + 0x1a4) = x87_r7_50;
                    long double temp27_1 = 0f;
                    x87_r7_50 - temp27_1;
                    human_gen_5_1 = (x87_r7_50 < temp27_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_50, temp27_1) ? 1 : 0) << 0xa
                        | (x87_r7_50 == temp27_1 ? 1 : 0) << 0xe;

                    if (*(&human_gen_5_1 + 1) & 1)
                        *(context_val + 0x1a4) = 0;
                }
            }
            else
            {
                long double x87_r7_47 = *(context_val + 0x1b0) + *(context_val + 0x1a4);
                *(context_val + 0x1a4) = x87_r7_47;
                long double temp22_1 = 0f;
                x87_r7_47 - temp22_1;
                human_gen_5_1 = (x87_r7_47 < temp22_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_47, temp22_1) ? 1 : 0) << 0xa
                    | (x87_r7_47 == temp22_1 ? 1 : 0) << 0xe;

                if (!(*(&human_gen_5_1 + 1) & 0x41))
                    *(context_val + 0x1a4) = 0;
            }
        }
        else
        {
            if (*(&human_gen_5_1 + 1) & 0x40)
                *(context_val + 0x1b0) = g_human_gen_6 / g_human_gen_7;

            long double x87_r7_37 = *(context_val + 0x1a4);
            long double temp19_1 = g_human_gen_6;
            x87_r7_37 - temp19_1;
            human_gen_5_1 = (x87_r7_37 < temp19_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_37, temp19_1) ? 1 : 0) << 0xa
                | (x87_r7_37 == temp19_1 ? 1 : 0) << 0xe;

            if (!(*(&human_gen_5_1 + 1) & 1))
            {
                long double x87_r7_40 = *(context_val + 0x1a4);
                long double temp23_1 = g_human_gen_6;
                x87_r7_40 - temp23_1;
                human_gen_5_1 = (x87_r7_40 < temp23_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_40, temp23_1) ? 1 : 0) << 0xa
                    | (x87_r7_40 == temp23_1 ? 1 : 0) << 0xe;

                if (!(*(&human_gen_5_1 + 1) & 0x41))
                {
                    long double x87_r7_42 = *(context_val + 0x1a4) - *(context_val + 0x1b0);
                    *(context_val + 0x1a4) = x87_r7_42;
                    long double temp28_1 = g_human_gen_6;
                    x87_r7_42 - temp28_1;
                    human_gen_5_1 = (x87_r7_42 < temp28_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_42, temp28_1) ? 1 : 0) << 0xa
                        | (x87_r7_42 == temp28_1 ? 1 : 0) << 0xe;

                    if (*(&human_gen_5_1 + 1) & 1)
                    {
                        int32_t human_gen_6_1 = g_human_gen_6;
                        *(context_val + 0x1a4) = human_gen_6_1;
                        return human_gen_6_1;
                    }
                }
            }
            else
            {
                long double x87_r7_39 = *(context_val + 0x1b0) + *(context_val + 0x1a4);
                *(context_val + 0x1a4) = x87_r7_39;
                long double temp24_1 = g_human_gen_6;
                x87_r7_39 - temp24_1;
                human_gen_5_1 = (x87_r7_39 < temp24_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_39, temp24_1) ? 1 : 0) << 0xa
                    | (x87_r7_39 == temp24_1 ? 1 : 0) << 0xe;

                if (!(*(&human_gen_5_1 + 1) & 0x41))
                    *(context_val + 0x1a4) = g_human_gen_6;
            }
        }
    }

    return human_gen_5_1;
}
