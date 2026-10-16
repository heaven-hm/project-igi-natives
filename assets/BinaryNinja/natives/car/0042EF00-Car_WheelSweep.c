#include "Car_WheelSweep.h"
int32_t Car_WheelSweep(float* a1)

{
    void* valA = a1[0x6d];
    int32_t objC = 0;
    float srcS = 0f;
    void* dstD = *(valA + 0x2d4);
    float v_a90 = 0f;
    void* v_a8c = dstD;
    int32_t result_1 = 0;
    int32_t v_a60 = 0xffffffff;
    int32_t v_a5c = 0xffefffff;
    int32_t v_a88 = 0;
    double v_a78;
    int32_t v_a70;
    double v_a68;
    void v_8c8;

    if (*(dstD + 0x118) > 0)
    {
        char* v_a9c_1 = &a1[0x1d7];
        float* tmpD2 = dstD + 0x128;
        int32_t* v_a84_1 = &v_8c8;
        float* v_a94_1 = tmpD2;
        int32_t v_a98_1 = 0;
        bool cond_1_1;

        do
        {
            int32_t valA5 = tmpD2[-1];

            if (valA5 >= 0 && *v_a9c_1)
            {
                long double x87_r7_2 = *tmpD2 + 2048.0;
                int32_t tmpD4 = valA5 * 7;
                void* tmpD5 = &a1[tmpD4 * 2];
                int32_t saved_dst;
                *(&saved_dst + objC + 0x60) = a1[tmpD4 * 2 + 0x72];
                void v_a40;
                *(&v_a40 + objC) = *(tmpD5 + 0x1cc);
                long double x87_r6_3 = *(tmpD5 + 0x1d0);
                void v_a38;
                *(&v_a38 + objC) = x87_r6_3;
                v_a78 = a1[0x1c] * *(&saved_dst + objC + 0x60) + a1[0x1e] * x87_r6_3
                    + a1[0x1d] * *(&v_a40 + objC);
                v_a70 = a1[0x1f] * *(&saved_dst + objC + 0x60) + a1[0x21] * x87_r6_3
                    + a1[0x20] * *(&v_a40 + objC);
                v_a68 = a1[0x22] * *(&saved_dst + objC + 0x60) + a1[0x24] * x87_r6_3
                    + a1[0x23] * *(&v_a40 + objC);
                memcpy(&saved_dst + objC + 0x60, &v_a78, 0x18);
                *(&saved_dst + objC + 0x60) = *(a1 + 0x20) + *(&saved_dst + objC + 0x60);
                int32_t objC1 = v_a98_1;
                *(&v_a40 + objC1) = *(a1 + 0x28) + *(&v_a40 + objC1);
                long double x87_r6_10 = *(a1 + 0x30) + *(&v_a38 + objC1);
                *(&v_a38 + objC1) = x87_r6_10;
                int32_t valA4 = v_a98_1 + 0x18;
                v_a98_1 = valA4;
                *(&v_a38 + objC1) = *v_a94_1 + x87_r6_10 + 4096.0;
                memcpy(&saved_dst + objC1 + 0x220, &saved_dst + objC + 0x60, 0x18);
                void v_890;
                *(&v_890 + valA4) = *(&v_890 + valA4) - x87_r7_2 - 4096.0;
                float srcS4 = v_a90;
                *(tmpD5 + 0x1d4) = 0;
                *v_a84_1 = v_a88;
                v_a90 = srcS4 + 1;
                v_a84_1 = &v_a84_1[1];
                tmpD2 = v_a94_1;
                dstD = v_a8c;
                objC = valA4;
            }

            if (!*v_a9c_1)
                a1[valA5 * 0xe + 0x75] = 1;

            v_a9c_1 = &v_a9c_1[0x1c];
            tmpD2 = &tmpD2[5];
            cond_1_1 = v_a88 + 1 < *(dstD + 0x118);
            v_a88 += 1;
            v_a94_1 = tmpD2;
        } while (cond_1_1);
        srcS = v_a90;
    }

    float* v_a4c = a1;
    void v_a50;
    double v_a48;
    double v_888[0x30];
    void v_708;
    int32_t result = DynObj_FindSymbol_11(Level_StartMission_4(), &v_708, &v_a48, &v_888, srcS, 0xc,
        &v_a50, 0xffffffff);

    if (srcS > 0)
    {
        void v_6a8;
        double* v_a9c_2 = &v_6a8;
        int32_t* v_a94_2 = &v_8c8;
        float v_a88_1 = srcS;

        while (true)
        {
            float v_a98_2 = 0f;
            float srcS12 = *v_a94_2;
            int32_t objC4 = srcS12 * 5;
            v_a90 = *(dstD + (objC4 << 2) + 0x128);
            int32_t objC5 = 0;
            float dstD3 = *(dstD + (objC4 << 2) + 0x124);
            int32_t tmpD8 = 0;

            if (v_a9c_2[-1])
            {
                long double x87_r7_4 = *v_a9c_2;
                long double f1_1 = 4096.0;
                x87_r7_4 - f1_1;
                int32_t v_a84_2;

                if (*(&((x87_r7_4 < f1_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_4, f1_1) ? 1 : 0) << 0xa
                    | (x87_r7_4 == f1_1 ? 1 : 0) << 0xe) + 1) & 1)
                {
                    long double x87_r7_6 = 4096.0 - *v_a9c_2;
                    long double x87_r6_15 = v_a60;
                    v_a98_2 = v_a90;
                    objC5 = 1;
                    x87_r6_15 - x87_r7_6;
                    result_1 = 1;
                    v_a84_2 = 1;

                    if (1 & *(&((x87_r6_15 < x87_r7_6 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r6_15, x87_r7_6) ? 1 : 0) << 0xa
                            | (x87_r6_15 == x87_r7_6 ? 1 : 0) << 0xe | 0x3800) + 1))
                        v_a60 = x87_r7_6;

                    goto label_42f236;
                }

                long double x87_r7_7 = *v_a9c_2;
                long double f3_1 = 4096.0;
                x87_r7_7 - f3_1;

                if (!(*(&((x87_r7_7 < f3_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_7, f3_1) ? 1 : 0) << 0xa
                    | (x87_r7_7 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                {
                    long double x87_r7_9 = v_a90 + 4096f;
                    long double f4_1 = *v_a9c_2;
                    x87_r7_9 - f4_1;

                    if (!(*(&((x87_r7_9 < f4_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_9, f4_1) ? 1 : 0) << 0xa
                        | (x87_r7_9 == f4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                    {
                        v_a84_2 = 1;
                        v_a98_2 = x87_r7_9 - *v_a9c_2;
                    label_42f236:
                        long double x87_r7_13 = v_a98_2 / v_a90;
                        v_a78 = 0;
                        *(&v_a78 + 4) = 0;
                        v_a70 = x87_r7_13 * *(v_a8c + ((srcS12 * 5 + 0x4b) << 2)) * *(valA + 8)
                            * 44.6008873f;

                        if (objC5)
                            v_a70 = (2f - *v_a9c_2 * 0.000244140625) * v_a70;

                        int32_t tmpD13 = dstD3 * 7;
                        *(&v_a70 + 4) = a1[tmpD13 * 2 + 0x72];
                        v_a68 = a1[tmpD13 * 2 + 0x73];
                        *(&v_a68 + 4) = a1[tmpD13 * 2 + 0x74];
                        ForceAccumulator_Add(&a1[0x3c], &v_a78);
                        tmpD8 = v_a84_2;
                    }
                }
            }

            int32_t valA25 = dstD3 * 7;
            long double x87_r7_23 = a1[valA25 * 2 + 0x7c] - v_a98_2;
            void* dstD4 = &a1[valA25 * 2];
            long double f0_1 = 0f;
            x87_r7_23 - f0_1;

            if (*(&((x87_r7_23 < f0_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_23, f0_1) ? 1 : 0) << 0xa
                    | (x87_r7_23 == f0_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                x87_r7_23 = -(x87_r7_23);

            long double f2_1 = 0.00100000005f;
            x87_r7_23 - f2_1;

            if (!(*(&((x87_r7_23 < f2_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_23, f2_1) ? 1 : 0) << 0xa
                | (x87_r7_23 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            {
                long double x87_r7_24 = *(dstD4 + 0x1f0);
                long double x87_r6_19 = v_a98_2;
                x87_r6_19 - x87_r7_24;
                long double x87_r7_26;

                x87_r7_26 = *(&((x87_r6_19 < x87_r7_24 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_19, x87_r7_24) ? 1 : 0) << 0xa
                    | (x87_r6_19 == x87_r7_24 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41
                    ? x87_r7_24 * 0.0500000007f + v_a98_2 * 0.949999988f : v_a98_2;

                *(dstD4 + 0x1f0) = x87_r7_26;
            }

            void* objC10 = &a1[srcS12 * 7];
            *(objC10 + 0x75d) = tmpD8;
            *(dstD4 + 0x1d6) = tmpD8;

            if (tmpD8)
            {
                *(objC10 + 0x760) = v_a9c_2[-5];
                *(objC10 + 0x764) = *(v_a9c_2 - 0x24);
                *(objC10 + 0x768) = v_a9c_2[-4];
                long double x87_r7_28 = *(objC10 + 0x760);
                long double f6_1 = 0f;
                x87_r7_28 - f6_1;

                if (!(*(&((x87_r7_28 < f6_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_28, f6_1) ? 1 : 0) << 0xa
                    | (x87_r7_28 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                {
                label_42f3a9:
                    long double x87_r7_31 = *(objC10 + 0x768);
                    long double x87_r6_22 = *(objC10 + 0x764);
                    long double x87_r5_16 = *(objC10 + 0x760);
                    long double x87_r7_33 = 1.0 / sqrtl(x87_r5_16 * x87_r5_16
                        + x87_r6_22 * x87_r6_22 + x87_r7_31 * x87_r7_31);
                    *(objC10 + 0x760) = *(objC10 + 0x760) * x87_r7_33;
                    *(objC10 + 0x764) = *(objC10 + 0x764) * x87_r7_33;
                    *(objC10 + 0x768) = *(objC10 + 0x768) * x87_r7_33;
                }
                else
                {
                    long double x87_r7_29 = *(objC10 + 0x764);
                    long double f7_1 = 0f;
                    x87_r7_29 - f7_1;

                    if (!(*(&((x87_r7_29 < f7_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_29, f7_1) ? 1 : 0) << 0xa
                            | (x87_r7_29 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_42f3a9;

                    long double x87_r7_30 = *(objC10 + 0x768);
                    long double f8_1 = 0f;
                    x87_r7_30 - f8_1;

                    if (!(*(&((x87_r7_30 < f8_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_30, f8_1) ? 1 : 0) << 0xa
                            | (x87_r7_30 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_42f3a9;
                }

                *(objC10 + 0x76c) = *(dstD4 + 0x1c8);
                *(objC10 + 0x770) = *(dstD4 + 0x1cc);
                *(objC10 + 0x774) = *(dstD4 + 0x1d0);
                *(objC10 + 0x774) = *(objC10 + 0x774) + 1638.40002f;
                a1[0x6e] = 1;
                Car_WheelDrive(a1, srcS12, dstD3);
            }

            bool cond_4_1 = v_a88_1 != 1;
            v_a94_2 = &v_a94_2[1];
            v_a9c_2 = &v_a9c_2[0xe];
            v_a88_1 -= 1;

            if (!cond_4_1)
                break;

            dstD = v_a8c;
        }

        result = result_1;

        if (result)
        {
            memcpy(&v_a78, &a1[8], 0x18);
            double v_a68_1 = v_a68 + v_a60;
            long double x87_r7_39 = a1[0x27];
            long double x87_r6_30 = a1[0x28];
            x87_r6_30 - x87_r7_39;
            long double x87_r7_40;

            if (!(*(&((x87_r6_30 < x87_r7_39 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_30, x87_r7_39) ? 1 : 0) << 0xa
                    | (x87_r6_30 == x87_r7_39 ? 1 : 0) << 0xe) + 1) & 1))
                x87_r7_40 = a1[0x28];
            else
                x87_r7_40 = a1[0x27];

            long double x87_r6_31 = a1[0x26];
            x87_r6_31 - x87_r7_40;
            long double x87_r7_42;

            if (*(&((x87_r6_31 < x87_r7_40 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_31, x87_r7_40) ? 1 : 0) << 0xa
                | (x87_r6_31 == x87_r7_40 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
            {
                long double x87_r7_43 = a1[0x27];
                long double x87_r6_32 = a1[0x28];
                x87_r6_32 - x87_r7_43;

                if (!(*(&((x87_r6_32 < x87_r7_43 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_32, x87_r7_43) ? 1 : 0) << 0xa
                        | (x87_r6_32 == x87_r7_43 ? 1 : 0) << 0xe) + 1) & 1))
                    x87_r7_42 = a1[0x28];
                else
                    x87_r7_42 = a1[0x27];
            }
            else
                x87_r7_42 = a1[0x26];

            float v_aac_4 = Render_ComputeNormals(a1[0x1b]) * x87_r7_42;
            return WorldObject_CommitTransform(Level_StartMission_4(), a1, &v_a78, v_aac_4);
        }
    }

    return result;
}
