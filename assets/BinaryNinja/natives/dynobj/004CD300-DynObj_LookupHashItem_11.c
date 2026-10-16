#include "DynObj_LookupHashItem_11.h"
int32_t DynObj_LookupHashItem_11(int16_t* a1, double* a2, double* a3, double* a4, int32_t a5, char a6, int32_t* a7, int32_t* a8, int32_t a9, float* a10)

{
    int32_t valA = g_ba2058;
    int32_t v_72c;
    float v_6e8;
    char v_6e4;
    float v_6e0;
    float v_6dc;

    if (valA)
    {
        int32_t valA2 = valA * 0x30;
        v_6e0 = *(valA2 + 0xba2048);
        v_6e8 = (&g_ba2040)[valA * 6];
        v_72c = (&g_ba2058)[valA * 0xc];
        v_6dc = *(valA2 + 0xba2050);
        v_6e4 = *(valA2 + 0xba203c) + 3;
    }

    float v_734 = 1f;
    int32_t* ctxB = &a1[4];
    int32_t valA5 = a1[3] + a1[2];
    int32_t* tmpD3 = a1[1] + ctxB;
    int32_t objC7 = a9 & 4;
    int32_t* v_738 = tmpD3;

    if (objC7)
        v_734 = -1f;

    double v_638;
    memcpy(&v_638, a3, 0x18);
    double v_6b0;
    memcpy(&v_6b0, a4, 0x18);
    double v_728 = (0x40000000 >> (a6 & 0x1f)) * 0.041666666666666664;
    float v_748;
    float v_744;
    double v_718;
    void v_608;

    if (valA5 > 0)
    {
        int32_t objC10 = a9 & 1;
        void* v_730 = &v_608;
        int32_t v_6f8_1 = objC10;
        int32_t v_74c_1 = valA5;

        while (true)
        {
            int32_t valA6 = *tmpD3;
            long double x87_r7_6 = ((valA6 >> 0x1a & 0x3f) - 0x18) * v_728;
            double v_710_2 = ((valA6 >> 0x14 & 0x3f) - 0x18) * v_728;
            double v_708_2 = ((valA6 >> 0xe & 0x3f) - 0x18) * v_728;

            if (objC7)
                x87_r7_6 = -(x87_r7_6);

            if (objC10)
            {
                v_748 = v_710_2;
                v_744 = *(&v_710_2 + 4);

                if (!(a9 & 2))
                {
                    v_710_2 = x87_r7_6;
                    x87_r7_6 = -(v_748);
                }
                else
                {
                    v_710_2 = -(x87_r7_6);
                    x87_r7_6 = v_748;
                }
            }
            else if (a9 & 2)
            {
                x87_r7_6 = -(x87_r7_6);
                v_710_2 = -(v_710_2);
            }

            v_718 = x87_r7_6 + *a2;

            if (g_ba2058)
            {
                long double x87_r7_16 = (v_718 - v_6e0) * v_6e8;
                float v_758_4 = (v_710_2 + a2[1] - v_6dc) * v_6e8;
                int32_t v_754;
                v_754 = x87_r7_16;
                int32_t tmpD4 = v_754;
                v_754 = v_758_4;
                long double x87_r7_17 = x87_r7_16 - tmpD4;
                int32_t objC13 = (v_754 << (v_6e4 & 0x1f)) + v_754;
                long double x87_r6_15 = v_758_4 - v_754;
                long double x87_r5_1 = *(objC13 + tmpD4 + v_72c);
                void* dstD6 = ((v_754 + 1) << (v_6e4 & 0x1f)) + v_754 + 1 + tmpD4 + 1;
                float v_758_5 = *(dstD6 + v_72c - 1);
                v_754 = *(dstD6 + v_72c);
                tmpD3 = v_738;
                long double x87_r5_2 =
                    x87_r5_1 + (*(objC13 + tmpD4 + 1 + v_72c) - x87_r5_1) * x87_r7_17;
                double v_708_4 = (
                    (x87_r7_17 * (v_754 - v_758_5) + v_758_5 - x87_r5_2) * x87_r6_15
                    + x87_r5_2 - 64.0) * 256f + v_708_2 + a2[2];
            }

            memcpy(v_730, &v_718, 0x18);
            tmpD3 = &tmpD3[1];
            bool cond_8_1 = v_74c_1 != 1;
            v_730 += 0x18;
            v_738 = tmpD3;
            v_74c_1 -= 1;

            if (!cond_8_1)
                break;

            objC10 = v_6f8_1;
        }
    }

    float v_698 = v_6b0 - v_638;
    double v_6a8;
    double v_630;
    float v_694 = v_6a8 - v_630;
    int32_t valA21 = *a1;
    double v_6a0;
    double v_628;
    float v_690 = v_6a0 - v_628;
    double v_620[0x3];
    memcpy(&v_620, a4, 0x18);
    int32_t v_738_1 = 0;

    if (valA21 > 0)
    {
        int32_t v_74c_2 = valA21;
        float v_740;
        bool c1;

        while (true)
        {
            int24_t valA22 = *ctxB;
            int32_t tmpD7 = 0;
            tmpD7 = *(&valA22 + 1);
            int32_t tmpD8 = 0;
            uint32_t objC21 = valA22 * 0x18;
            int32_t valA25 = tmpD7 * 0x18;
            tmpD8 = *(&valA22 + 2);
            int32_t saved_dst;
            double v_668 = *(&v_608 + valA25) - *(&saved_dst + objC21 + 0x160);
            void v_600;
            double v_660_1 = *(&v_600 + valA25) - *(&saved_dst + objC21 + 0x168);
            int32_t valA27 = tmpD8 * 0x18;
            int64_t v_5f8[0xbe];
            double v_658_1 = v_5f8[tmpD7 * 3] - *(&saved_dst + objC21 + 0x170);
            double v_650 = *(&v_608 + valA27) - *(&saved_dst + objC21 + 0x160);
            double v_648_1 = *(&v_600 + valA27) - *(&saved_dst + objC21 + 0x168);
            double v_640_1 = v_5f8[tmpD8 * 3] - *(&saved_dst + objC21 + 0x170);
            Sys_CloseFileStream_11(&v_6b0, &v_668, &v_650);
            Sys_FreeMemory_11(&v_6b0);
            float v_680 = v_668;
            float v_67c_1 = v_660_1;
            float v_678_1 = v_658_1;
            float v_674 = v_650;
            float v_670_1 = v_648_1;
            float v_66c_1 = v_640_1;
            v_728 = v_6b0;
            *(&v_728 + 4) = v_6a8;
            float v_720_1 = v_6a0;
            float v_68c = v_638 - *(&saved_dst + objC21 + 0x160);
            float v_688_1 = v_630 - *(&saved_dst + objC21 + 0x168);
            float v_684_1 = v_628 - *(&saved_dst + objC21 + 0x170);
            float v_6bc;

            if (Sys_PopStack_10(&v_6bc, &v_68c, &v_698, &v_728)
                && Sys_CheckHeap_10(nullptr, nullptr, &v_6bc, &v_680, &v_674, &v_728))
            {
                double v_6d4 = v_6bc + *(&saved_dst + objC21 + 0x160);
                float v_6b8;
                double v_6cc = v_6b8 + *(&saved_dst + objC21 + 0x168);
                float v_6b4;
                double v_6c4_1 = v_6b4 + *(&saved_dst + objC21 + 0x170);
                v_718 = *a3 - *a4;
                long double x87_r7_65 = a3[1] - a4[1];
                long double x87_r6_18 = a3[2] - a4[2];
                long double x87_r5_11 = v_718;
                long double f2_1 = 0f;
                x87_r5_11 - f2_1;

                if (*(&((x87_r5_11 < f2_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r5_11, f2_1) ? 1 : 0) << 0xa
                        | (x87_r5_11 == f2_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
                    x87_r5_11 = -(x87_r5_11);

                long double f4_1 = 0f;
                x87_r7_65 - f4_1;

                if (*(&((x87_r7_65 < f4_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_65, f4_1) ? 1 : 0) << 0xa
                        | (x87_r7_65 == f4_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
                    x87_r7_65 = -(x87_r7_65);

                long double f6_1 = 0f;
                x87_r6_18 - f6_1;

                if (*(&((x87_r6_18 < f6_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_18, f6_1) ? 1 : 0) << 0xa
                        | (x87_r6_18 == f6_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
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
                        long double f8_1 = a4[2];
                        x87_r7_78 - f8_1;
                        int32_t valA34;
                        int32_t tmpD11;
                        long double x87_r7_79;

                        if (*(&((x87_r7_78 < f8_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_78, f8_1) ? 1 : 0) << 0xa
                            | (x87_r7_78 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                        {
                            x87_r7_79 = a3[2];
                            tmpD11 = a4[2];
                            valA34 = *(a4 + 0x14);
                        }
                        else
                        {
                            x87_r7_79 = a4[2];
                            tmpD11 = a3[2];
                            valA34 = *(a3 + 0x14);
                        }

                        long double x87_r6_24 = v_6c4_1;
                        x87_r6_24 - x87_r7_79;
                        c1 = false;
                        int32_t v_6f4_1 = valA34;

                        if (!(*(&((x87_r6_24 < x87_r7_79 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r6_24, x87_r7_79) ? 1 : 0) << 0xa
                            | (x87_r6_24 == x87_r7_79 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                        {
                            long double x87_r7_81 = v_6c4_1;
                            long double f11_1 = tmpD11;
                            x87_r7_81 - f11_1;
                            c1 = false;

                            if (*(&((x87_r7_81 < f11_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_81, f11_1) ? 1 : 0) << 0xa
                                    | (x87_r7_81 == f11_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                                goto label_4cd9ed;
                        }
                    }
                    else
                    {
                        long double x87_r7_74 = a3[1];
                        long double f9_1 = a4[1];
                        x87_r7_74 - f9_1;
                        int32_t v_700_1;
                        long double x87_r7_75;

                        if (*(&((x87_r7_74 < f9_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_74, f9_1) ? 1 : 0) << 0xa
                            | (x87_r7_74 == f9_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                        {
                            x87_r7_75 = a3[1];
                            v_700_1 = a4[1];
                            int32_t v_6fc_2 = *(a4 + 0xc);
                        }
                        else
                        {
                            x87_r7_75 = a4[1];
                            v_700_1 = a3[1];
                            int32_t v_6fc_1 = *(a3 + 0xc);
                        }

                        long double x87_r6_23 = v_6cc;
                        x87_r6_23 - x87_r7_75;
                        c1 = false;

                        if (!(*(&((x87_r6_23 < x87_r7_75 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r6_23, x87_r7_75) ? 1 : 0) << 0xa
                            | (x87_r6_23 == x87_r7_75 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                        {
                            long double x87_r7_77 = v_6cc;
                            long double f12_1 = v_700_1;
                            x87_r7_77 - f12_1;
                            c1 = false;

                            if (*(&((x87_r7_77 < f12_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_77, f12_1) ? 1 : 0) << 0xa
                                    | (x87_r7_77 == f12_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                                goto label_4cd9ed;
                        }
                    }
                }
                else
                {
                    long double x87_r7_68 = *a3;
                    long double f7_1 = *a4;
                    x87_r7_68 - f7_1;
                    int32_t v_6f0_2;
                    long double x87_r7_69;
                    int32_t v_6ec;

                    if (*(&((x87_r7_68 < f7_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_68, f7_1) ? 1 : 0) << 0xa
                        | (x87_r7_68 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                    {
                        x87_r7_69 = *a3;
                        v_6f0_2 = *a4;
                        v_6ec = *(a4 + 4);
                    }
                    else
                    {
                        x87_r7_69 = *a4;
                        v_6f0_2 = *a3;
                        v_6ec = *(a3 + 4);
                    }
                    long double x87_r6_21 = v_6d4;
                    x87_r6_21 - x87_r7_69;
                    c1 = false;

                    if (!(*(&((x87_r6_21 < x87_r7_69 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_21, x87_r7_69) ? 1 : 0) << 0xa
                        | (x87_r6_21 == x87_r7_69 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                    {
                        long double x87_r7_71 = v_6d4;
                        long double f10_1 = v_6f0_2;
                        x87_r7_71 - f10_1;
                        c1 = false;

                        if (*(&((x87_r7_71 < f10_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_71, f10_1) ? 1 : 0) << 0xa
                            | (x87_r7_71 == f10_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                        {
                        label_4cd9ed:
                            v_6e0 = Sys_PushStack_11(a3, &v_6d4);
                            long double fp0_2 = Sys_PushStack_11(a3, &v_620);
                            long double f13_1 = v_6e0;
                            fp0_2 - f13_1;
                            c1 = false;

                            if (!(*(&((fp0_2 < f13_1 ? 1 : 0) << 8
                                | (FCMP_UO(fp0_2, f13_1) ? 1 : 0) << 0xa
                                | (fp0_2 == f13_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                            {
                                float valA38 = v_728;
                                v_738_1 = 1;
                                memcpy(&v_620, &v_6d4, 0x18);
                                v_748 = valA38;
                                v_744 = *(&v_728 + 4);
                                v_740 = v_720_1;
                            }
                        }
                    }
                }
            }

            bool cond_4_1 = v_74c_2 != 1;
            v_74c_2 -= 1;

            if (!cond_4_1)
                break;

            ctxB = &ctxB[1];
        }

        if (v_738_1)
        {
            float v_748_1 = v_748 * v_734;
            float v_744_1 = v_744 * v_734;
            long double x87_r4_13 = v_740 * v_734;
            long double x87_r4_16 = x87_r4_13 * (a4[2] - a3[2])
                + v_744_1 * (a4[1] - a3[1]) + v_748_1 * (*a4 - *a3);
            long double f3 = 0f;
            x87_r4_16 - f3;
            int32_t valA44;

            valA44 = !(*(&((x87_r4_16 < f3 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9
                | (FCMP_UO(x87_r4_16, f3) ? 1 : 0) << 0xa | (x87_r4_16 == f3 ? 1 : 0) << 0xe
                | 0x3000) + 1) & 1) ? 0 : 1;

            *a7 = valA44;
            *a8 = valA44 ^ 1;
            *a10 = v_748_1;
            a10[1] = v_744_1;
            a10[2] = x87_r4_13;
            memcpy(a5, &v_620, 0x18);
            return 1;
        }
    }

    return 0;
}
