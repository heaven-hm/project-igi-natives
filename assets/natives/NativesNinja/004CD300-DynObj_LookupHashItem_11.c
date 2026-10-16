#include "004CD300-DynObj_LookupHashItem_11.h"
/* 0x004cd300 DynObj_LookupHashItem_11 full linked: callers=1 callees=12 */
int32_t sub_4cd300(int16_t* a1, double* a2, double* a3, double* a4, int32_t a5, char a6, int32_t* a7, int32_t* a8, int32_t a9, float* a10)

{
    int32_t eax = g_ba2058;
    int32_t var_72c;
    float var_6e8;
    char var_6e4;
    float var_6e0;
    float var_6dc;

    if (eax)
    {
        int32_t eax_2 = eax * 0x30;
        var_6e0 = *(eax_2 + 0xba2048);
        var_6e8 = (&g_ba2040)[eax * 6];
        var_72c = (&g_ba2058)[eax * 0xc];
        var_6dc = *(eax_2 + 0xba2050);
        var_6e4 = *(eax_2 + 0xba203c) + 3;
    }

    float var_734 = 1f;
    int32_t* ebx = &a1[4];
    int32_t eax_5 = a1[3] + a1[2];
    int32_t* edx_3 = a1[1] + ebx;
    int32_t ecx_7 = a9 & 4;
    int32_t* var_738 = edx_3;

    if (ecx_7)
        var_734 = -1f;

    double var_638;
    memcpy(&var_638, a3, 0x18);
    double var_6b0;
    memcpy(&var_6b0, a4, 0x18);
    double var_728 = (0x40000000 >> (a6 & 0x1f)) * 0.041666666666666664;
    float var_748;
    float var_744;
    double var_718;
    void var_608;

    if (eax_5 > 0)
    {
        int32_t ecx_10 = a9 & 1;
        void* var_730 = &var_608;
        int32_t var_6f8_1 = ecx_10;
        int32_t var_74c_1 = eax_5;

        while (true)
        {
            int32_t eax_6 = *edx_3;
            long double x87_r7_6 = ((eax_6 >> 0x1a & 0x3f) - 0x18) * var_728;
            double var_710_2 = ((eax_6 >> 0x14 & 0x3f) - 0x18) * var_728;
            double var_708_2 = ((eax_6 >> 0xe & 0x3f) - 0x18) * var_728;

            if (ecx_7)
                x87_r7_6 = -(x87_r7_6);

            if (ecx_10)
            {
                var_748 = var_710_2;
                var_744 = *(&var_710_2 + 4);

                if (!(a9 & 2))
                {
                    var_710_2 = x87_r7_6;
                    x87_r7_6 = -(var_748);
                }
                else
                {
                    var_710_2 = -(x87_r7_6);
                    x87_r7_6 = var_748;
                }
            }
            else if (a9 & 2)
            {
                x87_r7_6 = -(x87_r7_6);
                var_710_2 = -(var_710_2);
            }

            var_718 = x87_r7_6 + *a2;

            if (g_ba2058)
            {
                long double x87_r7_16 = (var_718 - var_6e0) * var_6e8;
                float var_758_4 = (var_710_2 + a2[1] - var_6dc) * var_6e8;
                int32_t var_754;
                var_754 = x87_r7_16;
                int32_t edx_4 = var_754;
                var_754 = var_758_4;
                long double x87_r7_17 = x87_r7_16 - edx_4;
                int32_t ecx_13 = (var_754 << (var_6e4 & 0x1f)) + var_754;
                long double x87_r6_15 = var_758_4 - var_754;
                long double x87_r5_1 = *(ecx_13 + edx_4 + var_72c);
                void* edi_6 = ((var_754 + 1) << (var_6e4 & 0x1f)) + var_754 + 1 + edx_4 + 1;
                float var_758_5 = *(edi_6 + var_72c - 1);
                var_754 = *(edi_6 + var_72c);
                edx_3 = var_738;
                long double x87_r5_2 =
                    x87_r5_1 + (*(ecx_13 + edx_4 + 1 + var_72c) - x87_r5_1) * x87_r7_17;
                double var_708_4 = (
                    (x87_r7_17 * (var_754 - var_758_5) + var_758_5 - x87_r5_2) * x87_r6_15
                    + x87_r5_2 - 64.0) * 256f + var_708_2 + a2[2];
            }

            memcpy(var_730, &var_718, 0x18);
            edx_3 = &edx_3[1];
            bool cond:8_1 = var_74c_1 != 1;
            var_730 += 0x18;
            var_738 = edx_3;
            var_74c_1 -= 1;

            if (!cond:8_1)
                break;

            ecx_10 = var_6f8_1;
        }
    }

    float var_698 = var_6b0 - var_638;
    double var_6a8;
    double var_630;
    float var_694 = var_6a8 - var_630;
    int32_t eax_21 = *a1;
    double var_6a0;
    double var_628;
    float var_690 = var_6a0 - var_628;
    double var_620[0x3];
    memcpy(&var_620, a4, 0x18);
    int32_t var_738_1 = 0;

    if (eax_21 > 0)
    {
        int32_t var_74c_2 = eax_21;
        float var_740;
        bool c1;

        while (true)
        {
            int24_t eax_22 = *ebx;
            int32_t edx_7 = 0;
            edx_7 = *(&eax_22 + 1);
            int32_t edx_8 = 0;
            uint32_t ecx_21 = eax_22 * 0x18;
            int32_t eax_25 = edx_7 * 0x18;
            edx_8 = *(&eax_22 + 2);
            int32_t __saved_edi;
            double var_668 = *(&var_608 + eax_25) - *(&__saved_edi + ecx_21 + 0x160);
            void var_600;
            double var_660_1 = *(&var_600 + eax_25) - *(&__saved_edi + ecx_21 + 0x168);
            int32_t eax_27 = edx_8 * 0x18;
            int64_t var_5f8[0xbe];
            double var_658_1 = var_5f8[edx_7 * 3] - *(&__saved_edi + ecx_21 + 0x170);
            double var_650 = *(&var_608 + eax_27) - *(&__saved_edi + ecx_21 + 0x160);
            double var_648_1 = *(&var_600 + eax_27) - *(&__saved_edi + ecx_21 + 0x168);
            double var_640_1 = var_5f8[edx_8 * 3] - *(&__saved_edi + ecx_21 + 0x170);
            sub_4b3190(&var_6b0, &var_668, &var_650);
            sub_4b3100(&var_6b0);
            float var_680 = var_668;
            float var_67c_1 = var_660_1;
            float var_678_1 = var_658_1;
            float var_674 = var_650;
            float var_670_1 = var_648_1;
            float var_66c_1 = var_640_1;
            var_728 = var_6b0;
            *(&var_728 + 4) = var_6a8;
            float var_720_1 = var_6a0;
            float var_68c = var_638 - *(&__saved_edi + ecx_21 + 0x160);
            float var_688_1 = var_630 - *(&__saved_edi + ecx_21 + 0x168);
            float var_684_1 = var_628 - *(&__saved_edi + ecx_21 + 0x170);
            float var_6bc;

            if (sub_4b2c70(&var_6bc, &var_68c, &var_698, &var_728)
                && sub_4b2d90(nullptr, nullptr, &var_6bc, &var_680, &var_674, &var_728))
            {
                double var_6d4 = var_6bc + *(&__saved_edi + ecx_21 + 0x160);
                float var_6b8;
                double var_6cc = var_6b8 + *(&__saved_edi + ecx_21 + 0x168);
                float var_6b4;
                double var_6c4_1 = var_6b4 + *(&__saved_edi + ecx_21 + 0x170);
                var_718 = *a3 - *a4;
                long double x87_r7_65 = a3[1] - a4[1];
                long double x87_r6_18 = a3[2] - a4[2];
                long double x87_r5_11 = var_718;
                long double temp2_1 = 0f;
                x87_r5_11 - temp2_1;

                if (*(&((x87_r5_11 < temp2_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r5_11, temp2_1) ? 1 : 0) << 0xa
                        | (x87_r5_11 == temp2_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
                    x87_r5_11 = -(x87_r5_11);

                long double temp4_1 = 0f;
                x87_r7_65 - temp4_1;

                if (*(&((x87_r7_65 < temp4_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_65, temp4_1) ? 1 : 0) << 0xa
                        | (x87_r7_65 == temp4_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
                    x87_r7_65 = -(x87_r7_65);

                long double temp6_1 = 0f;
                x87_r6_18 - temp6_1;

                if (*(&((x87_r6_18 < temp6_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_18, temp6_1) ? 1 : 0) << 0xa
                        | (x87_r6_18 == temp6_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
                    x87_r6_18 = -(x87_r6_18);

                x87_r5_11 - x87_r7_65;

                if (!(*(&((x87_r5_11 < x87_r7_65 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r5_11, x87_r7_65) ? 1 : 0) << 0xa
                        | (x87_r5_11 == x87_r7_65 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x41))
                    x87_r5_11 - x87_r6_18;

                if (*(&((x87_r5_11 < x87_r7_65 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r5_11, x87_r7_65) ? 1 : 0) << 0xa
                    | (x87_r5_11 == x87_r7_65 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x41 || *(&(
                    (x87_r5_11 < x87_r6_18 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r5_11, x87_r6_18) ? 1 : 0) << 0xa
                    | (x87_r5_11 == x87_r6_18 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41)
                {
                    x87_r7_65 - x87_r6_18;

                    if (*(&((x87_r7_65 < x87_r6_18 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_65, x87_r6_18) ? 1 : 0) << 0xa
                        | (x87_r7_65 == x87_r6_18 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                    {
                        long double x87_r7_78 = a3[2];
                        long double temp8_1 = a4[2];
                        x87_r7_78 - temp8_1;
                        int32_t eax_34;
                        int32_t edx_11;
                        long double x87_r7_79;

                        if (*(&((x87_r7_78 < temp8_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_78, temp8_1) ? 1 : 0) << 0xa
                            | (x87_r7_78 == temp8_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                        {
                            x87_r7_79 = a3[2];
                            edx_11 = a4[2];
                            eax_34 = *(a4 + 0x14);
                        }
                        else
                        {
                            x87_r7_79 = a4[2];
                            edx_11 = a3[2];
                            eax_34 = *(a3 + 0x14);
                        }

                        long double x87_r6_24 = var_6c4_1;
                        x87_r6_24 - x87_r7_79;
                        c1 = false;
                        int32_t var_6f4_1 = eax_34;

                        if (!(*(&((x87_r6_24 < x87_r7_79 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r6_24, x87_r7_79) ? 1 : 0) << 0xa
                            | (x87_r6_24 == x87_r7_79 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                        {
                            long double x87_r7_81 = var_6c4_1;
                            long double temp11_1 = edx_11;
                            x87_r7_81 - temp11_1;
                            c1 = false;

                            if (*(&((x87_r7_81 < temp11_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_81, temp11_1) ? 1 : 0) << 0xa
                                    | (x87_r7_81 == temp11_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                                goto label_4cd9ed;
                        }
                    }
                    else
                    {
                        long double x87_r7_74 = a3[1];
                        long double temp9_1 = a4[1];
                        x87_r7_74 - temp9_1;
                        int32_t var_700_1;
                        long double x87_r7_75;

                        if (*(&((x87_r7_74 < temp9_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_74, temp9_1) ? 1 : 0) << 0xa
                            | (x87_r7_74 == temp9_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                        {
                            x87_r7_75 = a3[1];
                            var_700_1 = a4[1];
                            int32_t var_6fc_2 = *(a4 + 0xc);
                        }
                        else
                        {
                            x87_r7_75 = a4[1];
                            var_700_1 = a3[1];
                            int32_t var_6fc_1 = *(a3 + 0xc);
                        }

                        long double x87_r6_23 = var_6cc;
                        x87_r6_23 - x87_r7_75;
                        c1 = false;

                        if (!(*(&((x87_r6_23 < x87_r7_75 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r6_23, x87_r7_75) ? 1 : 0) << 0xa
                            | (x87_r6_23 == x87_r7_75 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                        {
                            long double x87_r7_77 = var_6cc;
                            long double temp12_1 = var_700_1;
                            x87_r7_77 - temp12_1;
                            c1 = false;

                            if (*(&((x87_r7_77 < temp12_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_77, temp12_1) ? 1 : 0) << 0xa
                                    | (x87_r7_77 == temp12_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                                goto label_4cd9ed;
                        }
                    }
                }
                else
                {
                    long double x87_r7_68 = *a3;
                    long double temp7_1 = *a4;
                    x87_r7_68 - temp7_1;
                    int32_t var_6f0_2;
                    long double x87_r7_69;
                    int32_t var_6ec;

                    if (*(&((x87_r7_68 < temp7_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_68, temp7_1) ? 1 : 0) << 0xa
                        | (x87_r7_68 == temp7_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                    {
                        x87_r7_69 = *a3;
                        var_6f0_2 = *a4;
                        var_6ec = *(a4 + 4);
                    }
                    else
                    {
                        x87_r7_69 = *a4;
                        var_6f0_2 = *a3;
                        var_6ec = *(a3 + 4);
                    }
                    long double x87_r6_21 = var_6d4;
                    x87_r6_21 - x87_r7_69;
                    c1 = false;

                    if (!(*(&((x87_r6_21 < x87_r7_69 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_21, x87_r7_69) ? 1 : 0) << 0xa
                        | (x87_r6_21 == x87_r7_69 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                    {
                        long double x87_r7_71 = var_6d4;
                        long double temp10_1 = var_6f0_2;
                        x87_r7_71 - temp10_1;
                        c1 = false;

                        if (*(&((x87_r7_71 < temp10_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_71, temp10_1) ? 1 : 0) << 0xa
                            | (x87_r7_71 == temp10_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                        {
                        label_4cd9ed:
                            var_6e0 = sub_4b32f0(a3, &var_6d4);
                            long double st0_2 = sub_4b32f0(a3, &var_620);
                            long double temp13_1 = var_6e0;
                            st0_2 - temp13_1;
                            c1 = false;

                            if (!(*(&((st0_2 < temp13_1 ? 1 : 0) << 8
                                | (FCMP_UO(st0_2, temp13_1) ? 1 : 0) << 0xa
                                | (st0_2 == temp13_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                            {
                                float eax_38 = var_728;
                                var_738_1 = 1;
                                memcpy(&var_620, &var_6d4, 0x18);
                                var_748 = eax_38;
                                var_744 = *(&var_728 + 4);
                                var_740 = var_720_1;
                            }
                        }
                    }
                }
            }

            bool cond:4_1 = var_74c_2 != 1;
            var_74c_2 -= 1;

            if (!cond:4_1)
                break;

            ebx = &ebx[1];
        }

        if (var_738_1)
        {
            float var_748_1 = var_748 * var_734;
            float var_744_1 = var_744 * var_734;
            long double x87_r4_13 = var_740 * var_734;
            long double x87_r4_16 = x87_r4_13 * (a4[2] - a3[2])
                + var_744_1 * (a4[1] - a3[1]) + var_748_1 * (*a4 - *a3);
            long double temp3 = 0f;
            x87_r4_16 - temp3;
            int32_t eax_44;

            eax_44 = !(*(&((x87_r4_16 < temp3 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9
                | (FCMP_UO(x87_r4_16, temp3) ? 1 : 0) << 0xa | (x87_r4_16 == temp3 ? 1 : 0) << 0xe
                | 0x3000) + 1) & 1) ? 0 : 1;

            *a7 = eax_44;
            *a8 = eax_44 ^ 1;
            *a10 = var_748_1;
            a10[1] = var_744_1;
            a10[2] = x87_r4_13;
            memcpy(a5, &var_620, 0x18);
            return 1;
        }
    }

    return 0;
}
