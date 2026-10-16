#include "DynObj_LinkDynamicCube_9.h"
int32_t DynObj_LinkDynamicCube_9(int16_t* a1, double* a2, double* a3, char a4, int32_t* a5, int32_t a6)

{
    int32_t valA = g_ba2058;
    int32_t v_72c;
    char v_71c;
    float v_6f0;
    float v_6ec;
    float v_6d4;
    int32_t srcS;

    if (!valA)
        srcS = v_72c;
    else
    {
        int32_t valA2 = valA * 0x30;
        v_6f0 = *(valA2 + 0xba2048);
        long double x87_r7_2 = *(valA2 + 0xba2050);
        srcS = (&g_ba2058)[valA * 0xc];
        v_6d4 = (&g_ba2040)[valA * 6];
        v_72c = srcS;
        v_6ec = x87_r7_2;
        v_71c = *(valA2 + 0xba203c) + 3;
    }

    float v_6d0 = 1f;
    int16_t* dstD = &a1[4];
    int16_t* ctxB1 = a1[1] + dstD;
    int32_t valA5 = a1[3] + a1[2];

    if (a6 & 0xfffffffc)
        v_6d0 = -1f;

    double v_6e8 = (0x40000000 >> (a4 & 0x1f)) * 0.041666666666666664;
    void* v_730;
    int32_t v_728;
    float v_718;
    double v_710;
    float v_700;
    void v_608;

    if (valA5 > 0)
    {
        v_730 = &v_608;
        int32_t tmpD3 = a6 & 4;
        int32_t objC8 = a6 & 1;
        int32_t v_6c8_1 = tmpD3;
        int32_t v_6cc_1 = objC8;
        int32_t v_734_1 = valA5;

        while (true)
        {
            int32_t valA6 = 0;
            int32_t dstD1 = 0;
            valA6 = ctxB1[1];
            dstD1 = *ctxB1;
            int32_t valA8 = (valA6 << 0x10) + dstD1;
            long double x87_r7_6 = ((valA8 >> 0x1a) - 0x18) * v_6e8;
            double v_710_2 = ((valA8 >> 0x14 & 0x3f) - 0x18) * v_6e8;
            double v_708_2 = ((valA8 >> 0xe & 0x3f) - 0x18) * v_6e8;

            if (tmpD3)
                x87_r7_6 = -(x87_r7_6);

            if (objC8)
            {
                v_700 = v_710_2;
                int32_t v_6fc_1 = *(&v_710_2 + 4);

                if (!(a6 & 2))
                {
                    v_710_2 = x87_r7_6;
                    x87_r7_6 = -(v_700);
                }
                else
                {
                    v_710_2 = -(x87_r7_6);
                    x87_r7_6 = v_700;
                }
            }
            else if (a6 & 2)
            {
                x87_r7_6 = -(x87_r7_6);
                v_710_2 = -(v_710_2);
            }

            v_718 = x87_r7_6 + *a2;
            v_710 = v_710_2 + a2[1];
            double v_708_3 = v_708_2 + a2[2];

            if (g_ba2058)
            {
                long double x87_r7_16 = (v_718 - v_6f0) * v_6d4;
                float v_738_4 = (v_710 - v_6ec) * v_6d4;
                v_728 = x87_r7_16;
                int32_t tmpD4 = v_728;
                v_728 = v_738_4;
                int32_t valA16 = v_728;
                v_728 = valA16;
                long double x87_r7_17 = x87_r7_16 - tmpD4;
                int32_t objC11 = (valA16 << (v_71c & 0x1f)) + valA16;
                long double x87_r6_15 = v_738_4 - v_728;
                int32_t objC13 = *(objC11 + tmpD4 + 1 + srcS);
                v_728 = *(objC11 + tmpD4 + srcS);
                long double x87_r5_1 = v_728;
                v_728 = objC13;
                long double x87_r4_1 = v_728;
                void* dstD16 = ((valA16 + 1) << (v_71c & 0x1f)) + valA16 + 1 + tmpD4 + 1;
                v_728 = *(dstD16 + srcS - 1);
                float v_738_5 = v_728;
                v_728 = *(dstD16 + srcS);
                tmpD3 = v_6c8_1;
                long double x87_r5_2 = x87_r5_1 + (x87_r4_1 - x87_r5_1) * x87_r7_17;
                double v_708_4 = (
                    (x87_r7_17 * (v_728 - v_738_5) + v_738_5 - x87_r5_2) * x87_r6_15
                    + x87_r5_2 - 64.0) * 256f + v_708_3;
            }

            memcpy(v_730, &v_718, 0x18);
            ctxB1 = &ctxB1[2];
            bool cond_7_1 = v_734_1 != 1;
            v_730 += 0x18;
            v_734_1 -= 1;

            if (!cond_7_1)
                break;

            srcS = v_72c;
            objC8 = v_6cc_1;
        }
    }

    int32_t valA22 = 0;
    valA22 = dstD[1];
    int32_t tmpD7 = 0;
    tmpD7 = *dstD;
    int32_t v_71c_1 = 0;
    int32_t srcS3 = *a1;
    void* valA24 = (valA22 << 0x10) + tmpD7;
    int32_t objC16 = 0;
    objC16 = *(&valA24 + 1);
    v_730 = valA24;
    int32_t valA25 = 0;
    valA25 = *(&v_730 + 2);
    uint32_t tmpD11 = valA24 * 0x18;
    int32_t objC18 = objC16 * 0x18;
    int32_t v_6f0_1 = 0;
    int32_t valA27 = valA25 * 0x18;
    int32_t v_6ec_1 = 0x43d00000;
    double v_6a4 =
        (*(&v_608 + tmpD11) + *(&v_608 + objC18) + *(&v_608 + valA27)) * 0.33333333333333331;
    void v_600;
    double v_69c_1 =
        (*(&v_600 + tmpD11) + *(&v_600 + objC18) + *(&v_600 + valA27)) * 0.33333333333333331;
    int64_t v_5f8[0xbe];
    double v_694_1 =
        (v_5f8[valA24 * 3] + v_5f8[objC16 * 3] + v_5f8[valA25 * 3]) * 0.33333333333333331;

    if (srcS3 > 0)
    {
        int16_t* objC19 = dstD;
        int32_t v_734_2 = srcS3;
        int16_t* v_72c_1 = objC19;
        float v_6e0;
        double v_620;

        while (true)
        {
            int32_t valA28 = 0;
            int32_t tmpD12 = 0;
            valA28 = objC19[1];
            tmpD12 = *objC19;
            void* valA30 = (valA28 << 0x10) + tmpD12;
            int32_t tmpD13 = 0;
            tmpD13 = *(&valA30 + 1);
            v_730 = valA30;
            int32_t tmpD14 = 0;
            tmpD14 = *(&v_730 + 2);
            uint32_t objC23 = valA30 * 0x18;
            int32_t valA33 = tmpD13 * 0x18;
            int32_t saved_dst;
            double v_650 = *(&v_608 + valA33) - *(&saved_dst + objC23 + 0x140);
            double v_648_1 = *(&v_600 + valA33) - *(&saved_dst + objC23 + 0x148);
            int32_t valA35 = tmpD14 * 0x18;
            double v_640_1 = v_5f8[tmpD13 * 3] - *(&saved_dst + objC23 + 0x150);
            double v_638 = *(&v_608 + valA35) - *(&saved_dst + objC23 + 0x140);
            double v_630_1 = *(&v_600 + valA35) - *(&saved_dst + objC23 + 0x148);
            double v_628_1 = v_5f8[tmpD14 * 3] - *(&saved_dst + objC23 + 0x150);
            double v_668;
            Sys_CloseFileStream_11(&v_668, &v_650, &v_638);
            long double x87_r7_43 = v_668;
            long double f1_1 = 0.0;
            x87_r7_43 - f1_1;
            double v_660;
            double v_658;

            if (!(*(&((x87_r7_43 < f1_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_43, f1_1) ? 1 : 0) << 0xa
                | (x87_r7_43 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            {
            label_4c94f4:
                Sys_FreeMemory_11(&v_668);
                v_718 = v_650;
                float v_714_1 = v_648_1;
                v_710 = v_640_1;
                float v_68c = v_638;
                float v_688_1 = v_630_1;
                float v_684_1 = v_628_1;
                v_700 = v_668;
                float v_6fc_2 = v_660;
                float v_6f8_1 = v_658;
                float v_680 = *a3 - *(&saved_dst + objC23 + 0x140);
                float v_67c_1 = a3[1] - *(&saved_dst + objC23 + 0x148);
                float v_678_1 = a3[2] - *(&saved_dst + objC23 + 0x150);
                float v_674 = v_6a4 - *a3;
                float v_670_1 = v_69c_1 - a3[1];
                float v_66c_1 = v_694_1 - a3[2];

                if (Sys_PopStack_10(&v_728, &v_680, &v_674, &v_700)
                    && Sys_CheckHeap_10(nullptr, nullptr, &v_728, &v_718, &v_68c, &v_700))
                {
                    double v_6bc = *(&saved_dst + objC23 + 0x140) - *a3 + v_728;
                    float v_724;
                    double v_6b4_1 = *(&saved_dst + objC23 + 0x148) - a3[1] + v_724;
                    float v_720;
                    long double x87_r7_75 = *(&saved_dst + objC23 + 0x150) - a3[2] + v_720;
                    long double x87_r7_78 =
                        x87_r7_75 * x87_r7_75 + v_6b4_1 * v_6b4_1 + v_6bc * v_6bc;
                    long double x87_r6_27 = v_6f0_1;
                    x87_r6_27 - x87_r7_78;

                    if (!(*(&((x87_r6_27 < x87_r7_78 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_27, x87_r7_78) ? 1 : 0) << 0xa
                        | (x87_r6_27 == x87_r7_78 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                    {
                        *(&v_6e8 + 4) = v_6fc_2;
                        v_6f0_1 = x87_r7_78;
                        v_71c_1 = 1;
                        v_6e8 = v_700;
                        v_6e0 = v_6f8_1;
                        memcpy(&v_620, &v_6bc, 0x18);
                    }
                }
            }
            else
            {
                long double x87_r7_44 = v_660;
                long double f2_1 = 0.0;
                x87_r7_44 - f2_1;

                if (!(*(&((x87_r7_44 < f2_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_44, f2_1) ? 1 : 0) << 0xa
                        | (x87_r7_44 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    goto label_4c94f4;

                long double x87_r7_45 = v_658;
                long double f4_1 = 0.0;
                x87_r7_45 - f4_1;

                if (!(*(&((x87_r7_45 < f4_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_45, f4_1) ? 1 : 0) << 0xa
                        | (x87_r7_45 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    goto label_4c94f4;
            }
            bool cond_5_1 = v_734_2 != 1;
            v_72c_1 = &v_72c_1[2];
            v_734_2 -= 1;

            if (!cond_5_1)
                break;

            objC19 = v_72c_1;
        }

        if (v_71c_1)
        {
            double v_618;
            double v_610;
            long double x87_r7_84 =
                (v_6e0 * v_610 + *(&v_6e8 + 4) * v_618 + v_6e8 * v_620) * v_6d0;
            long double f5 = 0.0;
            x87_r7_84 - f5;

            if (*(&((x87_r7_84 < f5 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_84, f5) ? 1 : 0) << 0xa
                | (x87_r7_84 == f5 ? 1 : 0) << 0xe) + 1) & 0x41)
            {
                *a5 = 0;
                return 1;
            }

            *a5 = 1;
            return 1;
        }
    }

    *a5 = 0;
    return 1;
}
