#include "RigidDynCubeObj_Setup.h"
int32_t* RigidDynCubeObj_Setup(void* a1, int32_t* a2)

{
    void** ctxB = a2[8];
    double* v_240 = *a2;
    int32_t* result = *(a1 + 0x6c);
    double* v_260 = a2[1];

    if (result)
    {
        int32_t objC1 = *(a1 + 0xa4);

        if (objC1 != 0xffffffff)
        {
            void* valA1 = result[objC1];
            void* objC2 = *(*(valA1 + 0xc) + 0xc);
            result = *(objC2 + 0x28);

            if (!result)
            {
                int32_t tmpD2 = *(objC2 + 0x2c);
                int32_t valA3 = a2[5] << 5;
                result = valA3 + tmpD2;
                int32_t* result_1 = result;

                if (valA3 != -(tmpD2) && *result)
                {
                    int32_t valA4 = result[5];
                    char valA5 = a2[3];

                    if (valA5 == 0xff)
                    {
                    label_4c1906:
                        result = a2[2];
                        int32_t* result_2 = nullptr;

                        if (result > 0)
                        {
                            while (true)
                            {
                                char v_2a9_1 = 1;
                                bool v_2f5_1;

                                if (!ctxB[0x16])
                                    v_2f5_1 = false;
                                else
                                    v_2f5_1 = ctxB[0x13];

                                long double x87_r7_1 = *(a1 + 0x9c);
                                long double x87_r6_1 = *(a1 + 0xa0);
                                int16_t valA9;
                                valA9 = ctxB[0x16];
                                float* dstD1 = result_1[7];
                                char v_2d9_1 = valA9;
                                x87_r6_1 - x87_r7_1;
                                char v_2ab_1 = 0;
                                int32_t v_2b4_1 = 0;
                                float* v_218_1 = dstD1;
                                int32_t v_198[0x64];
                                v_198[0] = dstD1;
                                long double x87_r7_2;

                                if (!(*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                                        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe) + 1) & 1))
                                    x87_r7_2 = *(a1 + 0xa0);
                                else
                                    x87_r7_2 = *(a1 + 0x9c);

                                long double x87_r6_2 = *(a1 + 0x98);
                                x87_r6_2 - x87_r7_2;
                                valA9 = (x87_r6_2 < x87_r7_2 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
                                    | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe | 0x3800;
                                long double x87_r7_4;

                                if (*(&valA9 + 1) & 0x41)
                                {
                                    long double x87_r7_5 = *(a1 + 0x9c);
                                    long double x87_r6_3 = *(a1 + 0xa0);
                                    x87_r6_3 - x87_r7_5;
                                    valA9 = (x87_r6_3 < x87_r7_5 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r6_3, x87_r7_5) ? 1 : 0) << 0xa
                                        | (x87_r6_3 == x87_r7_5 ? 1 : 0) << 0xe;

                                    if (!(*(&valA9 + 1) & 1))
                                        x87_r7_4 = *(a1 + 0xa0);
                                    else
                                        x87_r7_4 = *(a1 + 0x9c);
                                }
                                else
                                    x87_r7_4 = *(a1 + 0x98);

                                long double x87_r7_7 = Render_ComputeNormals(*(a1 + 0x6c)) * x87_r7_4;
                                float v_2f4_1 = x87_r7_7;
                                long double x87_r7_8 = *(a1 + 0x20) - x87_r7_7;
                                long double f2_1 = *v_240;
                                x87_r7_8 - f2_1;
                                long double f3_1;

                                if (!(*(&((x87_r7_8 < f2_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_8, f2_1) ? 1 : 0) << 0xa
                                    | (x87_r7_8 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                                {
                                    f3_1 = *v_260;
                                    x87_r7_8 - f3_1;
                                }

                                if (*(&((x87_r7_8 < f2_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_8, f2_1) ? 1 : 0) << 0xa
                                    | (x87_r7_8 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 || *(
                                    &((x87_r7_8 < f3_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_8, f3_1) ? 1 : 0) << 0xa
                                    | (x87_r7_8 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                                {
                                    long double x87_r7_11 = v_2f4_1 + *(a1 + 0x20);
                                    long double f4_1 = *v_240;
                                    x87_r7_11 - f4_1;
                                    double* tmpD6;

                                    if (!(*(&((x87_r7_11 < f4_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_11, f4_1) ? 1 : 0) << 0xa
                                        | (x87_r7_11 == f4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                                    {
                                        tmpD6 = v_260;
                                    label_4c1a41:
                                        long double x87_r7_14 = *(a1 + 0x28) - v_2f4_1;
                                        long double f6_1 = v_240[1];
                                        x87_r7_14 - f6_1;
                                        long double f7_1;

                                        if (!(*(&((x87_r7_14 < f6_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_14, f6_1) ? 1 : 0) << 0xa
                                            | (x87_r7_14 == f6_1 ? 1 : 0) << 0xe | 0x3800) + 1)
                                            & 0x41))
                                        {
                                            f7_1 = tmpD6[1];
                                            x87_r7_14 - f7_1;
                                        }

                                        if (*(&((x87_r7_14 < f6_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_14, f6_1) ? 1 : 0) << 0xa
                                            | (x87_r7_14 == f6_1 ? 1 : 0) << 0xe | 0x3800) + 1)
                                            & 0x41 || *(&((x87_r7_14 < f7_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_14, f7_1) ? 1 : 0) << 0xa
                                            | (x87_r7_14 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                                        {
                                            long double x87_r7_17 = v_2f4_1 + *(a1 + 0x28);
                                            long double f8_1 = v_240[1];
                                            x87_r7_17 - f8_1;
                                            long double f9_1;

                                            if (*(&((x87_r7_17 < f8_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r7_17, f8_1) ? 1 : 0) << 0xa
                                                | (x87_r7_17 == f8_1 ? 1 : 0) << 0xe | 0x3800) + 1)
                                                & 1)
                                            {
                                                f9_1 = tmpD6[1];
                                                x87_r7_17 - f9_1;
                                            }

                                            if (!(*(&((x87_r7_17 < f8_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r7_17, f8_1) ? 1 : 0) << 0xa
                                                | (x87_r7_17 == f8_1 ? 1 : 0) << 0xe | 0x3800) + 1)
                                                & 1) || !(*(&((x87_r7_17 < f9_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r7_17, f9_1) ? 1 : 0) << 0xa
                                                | (x87_r7_17 == f9_1 ? 1 : 0) << 0xe) + 1) & 1))
                                            {
                                                long double x87_r7_20 = *(a1 + 0x30) - v_2f4_1;
                                                long double f10_1 = v_240[2];
                                                x87_r7_20 - f10_1;
                                                long double f11_1;

                                                if (!(*(&((x87_r7_20 < f10_1 ? 1 : 0) << 8
                                                    | (FCMP_UO(x87_r7_20, f10_1) ? 1 : 0) << 0xa
                                                    | (x87_r7_20 == f10_1 ? 1 : 0) << 0xe
                                                    | 0x3800) + 1) & 0x41))
                                                {
                                                    f11_1 = tmpD6[2];
                                                    x87_r7_20 - f11_1;
                                                }

                                                if (*(&((x87_r7_20 < f10_1 ? 1 : 0) << 8
                                                    | (FCMP_UO(x87_r7_20, f10_1) ? 1 : 0) << 0xa
                                                    | (x87_r7_20 == f10_1 ? 1 : 0) << 0xe
                                                    | 0x3800) + 1) & 0x41 || *(&(
                                                    (x87_r7_20 < f11_1 ? 1 : 0) << 8
                                                    | (FCMP_UO(x87_r7_20, f11_1) ? 1 : 0) << 0xa
                                                    | (x87_r7_20 == f11_1 ? 1 : 0) << 0xe) + 1)
                                                    & 0x41)
                                                {
                                                    long double x87_r7_23 =
                                                        v_2f4_1 + *(a1 + 0x30);
                                                    long double f12_1 = v_240[2];
                                                    x87_r7_23 - f12_1;
                                                    long double f13_1;

                                                    if (*(&((x87_r7_23 < f12_1 ? 1 : 0) << 8
                                                        | (FCMP_UO(x87_r7_23, f12_1) ? 1 : 0)
                                                        << 0xa | (x87_r7_23 == f12_1 ? 1 : 0) << 0xe
                                                        | 0x3800) + 1) & 1)
                                                    {
                                                        f13_1 = tmpD6[2];
                                                        x87_r7_23 - f13_1;
                                                    }

                                                    if (!(*(&((x87_r7_23 < f12_1 ? 1 : 0) << 8
                                                        | (FCMP_UO(x87_r7_23, f12_1) ? 1 : 0)
                                                        << 0xa | (x87_r7_23 == f12_1 ? 1 : 0) << 0xe
                                                        | 0x3800) + 1) & 1) || !(*(&(
                                                        (x87_r7_23 < f13_1 ? 1 : 0) << 8
                                                        | (FCMP_UO(x87_r7_23, f13_1) ? 1 : 0)
                                                        << 0xa
                                                        | (x87_r7_23 == f13_1 ? 1 : 0) << 0xe) + 1)
                                                        & 1))
                                                    {
                                                        long double x87_r7_26 =
                                                            *v_240 - *(a1 + 0x20);
                                                        long double x87_r6_5 =
                                                            v_240[1] - *(a1 + 0x28);
                                                        long double x87_r5_2 =
                                                            v_240[2] - *(a1 + 0x30);
                                                        float v_204_1 = x87_r5_2 * *(a1 + 0x88)
                                                            + x87_r7_26 * *(a1 + 0x70)
                                                            + x87_r6_5 * *(a1 + 0x7c);
                                                        float v_2e8_1 = v_204_1;
                                                        float v_2e8_2 =
                                                            v_204_1 / *(a1 + 0x98);
                                                        float v_2e4_2 = (x87_r5_2 * *(a1 + 0x8c)
                                                            + x87_r7_26 * *(a1 + 0x74)
                                                            + x87_r6_5 * *(a1 + 0x80)) /
                                                            *(a1 + 0x98);
                                                        float v_2e0_2 = (x87_r5_2 * *(a1 + 0x90)
                                                            + x87_r7_26 * *(a1 + 0x78)
                                                            + x87_r6_5 * *(a1 + 0x84)) /
                                                            *(a1 + 0x98);
                                                        long double x87_r7_37 =
                                                            *tmpD6 - *(a1 + 0x20);
                                                        long double x87_r6_8 =
                                                            tmpD6[1] - *(a1 + 0x28);
                                                        long double x87_r5_7 =
                                                            tmpD6[2] - *(a1 + 0x30);
                                                        float v_1ec_1 = x87_r6_8 * *(a1 + 0x7c)
                                                            + x87_r5_7 * *(a1 + 0x88)
                                                            + x87_r7_37 * *(a1 + 0x70);
                                                        float v_23c_1 = v_1ec_1;
                                                        float v_23c_2 =
                                                            v_1ec_1 / *(a1 + 0x98);
                                                        float v_2d8_1 = v_23c_2;
                                                        float v_238_2 = (x87_r5_7 * *(a1 + 0x8c)
                                                            + x87_r7_37 * *(a1 + 0x74)
                                                            + x87_r6_8 * *(a1 + 0x80)) /
                                                            *(a1 + 0x98);
                                                        long double x87_r7_45 = (
                                                            x87_r6_8 * *(a1 + 0x84)
                                                            + x87_r5_7 * *(a1 + 0x90)
                                                            + x87_r7_37 * *(a1 + 0x78)) /
                                                            *(a1 + 0x98);
                                                        float v_2d4_1 = v_238_2;
                                                        float v_234_2 = x87_r7_45;
                                                        long double x87_r7_46 =
                                                            x87_r7_45 - v_2e0_2;
                                                        float v_2d0_1 = v_234_2;
                                                        int16_t valA16;
                                                        valA16 = v_2d9_1;
                                                        double v_2c0_1 = x87_r7_46;
                                                        long double x87_r6_16 =
                                                            v_238_2 - v_2e4_2;
                                                        double v_2a8_1 = x87_r6_16;
                                                        long double x87_r5_14 =
                                                            v_23c_2 - v_2e8_2;
                                                        long double x87_r4_20 =
                                                            x87_r5_14 * x87_r5_14
                                                            + v_2a8_1 * v_2a8_1
                                                            + v_2c0_1 * v_2c0_1;
                                                        double v_230;

                                                        if (valA16)
                                                        {
                                                            long double x87_r3_25 =
                                                                *(ctxB + 8) - *(a1 + 0x20);
                                                            long double x87_r2_2 =
                                                                *(ctxB + 0x10) - *(a1 + 0x28);
                                                            float v_2d0_2 =
                                                                *(ctxB + 0x18) - *(a1 + 0x30);
                                                            float v_1f8_1 =
                                                                x87_r2_2 * *(a1 + 0x7c)
                                                                + v_2d0_2 * *(a1 + 0x88)
                                                                + x87_r3_25 * *(a1 + 0x70);
                                                            float v_2d8_2 = v_1f8_1;
                                                            v_2d8_1 = v_1f8_1 / *(a1 + 0x98);
                                                            v_2d4_1 = (v_2d0_2 * *(a1 + 0x8c)
                                                                + x87_r3_25 * *(a1 + 0x74)
                                                                + x87_r2_2 * *(a1 + 0x80)) /
                                                                *(a1 + 0x98);
                                                            long double x87_r3_33 = (
                                                                x87_r2_2 * *(a1 + 0x84)
                                                                + v_2d0_2 * *(a1 + 0x90)
                                                                + x87_r3_25 * *(a1 + 0x78)) /
                                                                *(a1 + 0x98);
                                                            v_2d0_1 = x87_r3_33;
                                                            long double x87_r3_34 =
                                                                x87_r3_33 - v_2e0_2;
                                                            long double x87_r2_8 =
                                                                v_2d4_1 - v_2e4_2;
                                                            long double x87_r1_14 =
                                                                v_2d8_1 - v_2e8_2;
                                                            v_230 = sqrtl(x87_r1_14 * x87_r1_14
                                                                + x87_r2_8 * x87_r2_8
                                                                + x87_r3_34 * x87_r3_34);
                                                        }

                                                        long double x87_r3_37 = v_2e8_2;
                                                        long double f14_1 = v_2d8_1;
                                                        x87_r3_37 - f14_1;
                                                        long double x87_r3_38;

                                                        x87_r3_38 = !(*(&(
                                                            (x87_r3_37 < f14_1 ? 1 : 0) << 8 | (
                                                            FCMP_UO(x87_r3_37, f14_1) ? 1 : 0)
                                                            << 0xa
                                                            | (x87_r3_37 == f14_1 ? 1 : 0)
                                                            << 0xe | 0x2000) + 1) & 1) ? v_2d8_1
                                                            : v_2e8_2;

                                                        float v_26c_1 = x87_r3_38 - 0.100000001f;
                                                        long double x87_r3_40 = v_2e4_2;
                                                        long double f15_1 = v_2d4_1;
                                                        x87_r3_40 - f15_1;
                                                        long double x87_r3_41;

                                                        x87_r3_41 = !(*(&(
                                                            (x87_r3_40 < f15_1 ? 1 : 0) << 8 | (
                                                            FCMP_UO(x87_r3_40, f15_1) ? 1 : 0)
                                                            << 0xa
                                                            | (x87_r3_40 == f15_1 ? 1 : 0)
                                                            << 0xe | 0x2000) + 1) & 1) ? v_2d4_1
                                                            : v_2e4_2;

                                                        float v_268_1 = x87_r3_41 - 0.100000001f;
                                                        long double x87_r3_43 = v_2e0_2;
                                                        long double f16_1 = v_2d0_1;
                                                        x87_r3_43 - f16_1;
                                                        long double x87_r3_44;

                                                        x87_r3_44 = !(*(&(
                                                            (x87_r3_43 < f16_1 ? 1 : 0) << 8 | (
                                                            FCMP_UO(x87_r3_43, f16_1) ? 1 : 0)
                                                            << 0xa
                                                            | (x87_r3_43 == f16_1 ? 1 : 0)
                                                            << 0xe | 0x2000) + 1) & 1) ? v_2d0_1
                                                            : v_2e0_2;

                                                        float v_264_1 = x87_r3_44 - 0.100000001f;
                                                        long double x87_r3_46 = v_2e8_2;
                                                        long double f17_1 = v_2d8_1;
                                                        x87_r3_46 - f17_1;
                                                        long double x87_r3_47;

                                                        x87_r3_47 = *(&(
                                                            (x87_r3_46 < f17_1 ? 1 : 0) << 8 | (
                                                            FCMP_UO(x87_r3_46, f17_1) ? 1 : 0)
                                                            << 0xa
                                                            | (x87_r3_46 == f17_1 ? 1 : 0)
                                                            << 0xe | 0x2000) + 1) & 0x41 ? v_2d8_1
                                                            : v_2e8_2;

                                                        float v_278_1 = x87_r3_47 + 0.100000001f;
                                                        long double x87_r3_49 = v_2e4_2;
                                                        long double f18_1 = v_2d4_1;
                                                        x87_r3_49 - f18_1;
                                                        long double x87_r3_50;

                                                        x87_r3_50 = *(&(
                                                            (x87_r3_49 < f18_1 ? 1 : 0) << 8 | (
                                                            FCMP_UO(x87_r3_49, f18_1) ? 1 : 0)
                                                            << 0xa
                                                            | (x87_r3_49 == f18_1 ? 1 : 0)
                                                            << 0xe | 0x2000) + 1) & 0x41 ? v_2d4_1
                                                            : v_2e4_2;

                                                        float v_274_1 = x87_r3_50 + 0.100000001f;
                                                        long double x87_r3_52 = v_2e0_2;
                                                        long double f19_1 = v_2d0_1;
                                                        x87_r3_52 - f19_1;
                                                        long double x87_r3_53;

                                                        x87_r3_53 = *(&(
                                                            (x87_r3_52 < f19_1 ? 1 : 0) << 8 | (
                                                            FCMP_UO(x87_r3_52, f19_1) ? 1 : 0)
                                                            << 0xa
                                                            | (x87_r3_52 == f19_1 ? 1 : 0)
                                                            << 0xe | 0x2000) + 1) & 0x41 ? v_2d0_1
                                                            : v_2e0_2;

                                                        float v_2d8_3 = v_23c_2;
                                                        float v_2d4_3 = v_238_2;
                                                        float v_2d0_4 = v_234_2;
                                                        float v_270_1 = x87_r3_53 + 0.100000001f;
                                                        double v_220_1 = 1.0 / x87_r4_20;
                                                        float i_2 = x87_r5_14;
                                                        float v_280_1 = x87_r6_16;
                                                        float v_27c_1 = x87_r7_46;
                                                        long double x87_r7_47 = v_280_1;
                                                        long double f20_1 = 0f;
                                                        x87_r7_47 - f20_1;

                                                        if (!(*(&(
                                                                (x87_r7_47 < f20_1 ? 1 : 0) << 8 | (
                                                                FCMP_UO(x87_r7_47, f20_1) ? 1 : 0)
                                                                << 0xa
                                                                | (x87_r7_47 == f20_1 ? 1 : 0)
                                                                << 0xe) + 1) & 1))
                                                            float v_290_3 = v_280_1;
                                                        else
                                                            float v_290_2 = -(v_280_1);

                                                        long double x87_r7_50 = i_2;
                                                        long double f21_1 = 0f;
                                                        x87_r7_50 - f21_1;
                                                        valA16 = (x87_r7_50 < f21_1 ? 1 : 0) << 8
                                                            | (FCMP_UO(x87_r7_50, f21_1) ? 1
                                                            : 0) << 0xa
                                                            | (x87_r7_50 == f21_1 ? 1 : 0)
                                                            << 0xe;
                                                        float i_1;

                                                        i_1 = !(*(&valA16 + 1) & 1) ? i_2 : -(i_2);

                                                        if (result_1[3])
                                                        {
                                                        label_4c1f56:
                                                            int32_t tmpD10 = v_2b4_1;

                                                            while (true)
                                                            {
                                                                int16_t i;
                                                                i = v_2a9_1;
                                                                char v_2e9;
                                                                int16_t* v_228;
                                                                float v_1d4;
                                                                float v_1d0;

                                                                if (!i)
                                                                {
                                                                    int16_t dstD2 = *(dstD1 + 0x16);

                                                                    if (!dstD2)
                                                                    {
                                                                        int32_t f22_1 = tmpD10;
                                                                        tmpD10 -= 1;
                                                                        v_2b4_1 = tmpD10;

                                                                        if (f22_1 - 1 >= 0)
                                                                        {
                                                                            dstD1 = v_198[tmpD10];
                                                                            continue;
                                                                        }

                                                                        i = v_2ab_1;

                                                                        if (i)
                                                                        {
                                                                            if (*(a1 + 0x98) != 0x3f800000
                                                                                || *(a1 + 0x9c) != 0x3f800000
                                                                                || *(a1 + 0xa0) != 0x3f800000)
                                                                            {
                                                                                double v_2a8_6 =
                                                                                    v_2e0_2 * *(a1 + 0xa0)
                                                                                    - v_2d0_4 * *(a1 + 0xa0);
                                                                                double v_220_2 =
                                                                                    v_2e4_2 * *(a1 + 0x9c)
                                                                                    - v_2d4_3 * *(a1 + 0x9c);
                                                                                long double x87_r7_220 =
                                                                                    v_2e8_2 * *(a1 + 0x98)
                                                                                    - v_2d8_3 * *(a1 + 0x98);
                                                                                v_230 = sqrtl(x87_r7_220 * x87_r7_220
                                                                                    + v_220_2 * v_220_2
                                                                                    + v_2a8_6 * v_2a8_6);
                                                                            }

                                                                            long double x87_r7_225;
                                                                            long double f35_1;

                                                                            if (ctxB[0x16])
                                                                            {
                                                                                x87_r7_225 = v_230;
                                                                                f35_1 = *(ctxB + 0x60);
                                                                                x87_r7_225 - f35_1;
                                                                            }

                                                                            if (!ctxB[0x16] || *(&(
                                                                                (x87_r7_225 < f35_1 ? 1 : 0) << 8 | (
                                                                                FCMP_UO(x87_r7_225, f35_1) ? 1 : 0)
                                                                                << 0xa
                                                                                | (x87_r7_225 == f35_1 ? 1 : 0)
                                                                                << 0xe) + 1) & 1)
                                                                            {
                                                                                int32_t valA62 = 0;
                                                                                int32_t objC28 = 0;
                                                                                valA62 = *v_228;
                                                                                objC28 = v_228[1];
                                                                                float* valA64 = (valA62 << 4) + valA4;
                                                                                float* objC30 = (objC28 << 4) + valA4;
                                                                                int32_t dstD6 = 0;
                                                                                dstD6 = v_228[2];
                                                                                float* tmpD34 = (dstD6 << 4) + valA4;
                                                                                int32_t tmpD35 = 0;
                                                                                tmpD35 = v_228[3];
                                                                                int16_t tmpD38 =
                                                                                    *(result_1[6] + tmpD35 * 0xc + 8);
                                                                                int32_t dstD11;

                                                                                if (tmpD38 != 0xffff)
                                                                                    dstD11 = *(*(a1 + 0x68)
                                                                                        + (tmpD38 << 2) + 0xd3c);
                                                                                else
                                                                                    dstD11 = *(*(a1 + 0x68) + 0xd40);

                                                                                long double x87_r7_227 =
                                                                                    *tmpD34 - *valA64;
                                                                                long double x87_r6_133 =
                                                                                    tmpD34[1] - valA64[1];
                                                                                long double x87_r5_49 =
                                                                                    tmpD34[2] - valA64[2];
                                                                                float v_1e0_1 = *objC30 - *valA64;
                                                                                float v_1dc_1 = objC30[1] - valA64[1];
                                                                                long double x87_r4_40 =
                                                                                    objC30[2] - valA64[2];
                                                                                float v_210_1 = x87_r4_40 * x87_r6_133
                                                                                    - v_1dc_1 * x87_r5_49;
                                                                                ctxB[0xe] = v_210_1;
                                                                                float v_20c_1 = -((
                                                                                    x87_r4_40 * x87_r7_227
                                                                                    - v_1e0_1 * x87_r5_49));
                                                                                ctxB[0xf] = v_20c_1;
                                                                                float v_208_1 = v_1dc_1 * x87_r7_227
                                                                                    - v_1e0_1 * x87_r6_133;
                                                                                ctxB[0x10] = v_208_1;
                                                                                ctxB[0xb] = v_210_1;
                                                                                ctxB[0xc] = v_20c_1;
                                                                                ctxB[0xd] = v_208_1;
                                                                                long double x87_r7_236 =
                                                                                    ctxB[0xe] * *(a1 + 0x7c)
                                                                                    + *(a1 + 0x84) * ctxB[0x10]
                                                                                    + *(a1 + 0x80) * ctxB[0xf];
                                                                                long double x87_r7_240 =
                                                                                    *(a1 + 0x90) * ctxB[0x10]
                                                                                    + *(a1 + 0x8c) * ctxB[0xf]
                                                                                    + *(a1 + 0x88) * ctxB[0xe];
                                                                                ctxB[0xe] = *(a1 + 0x78) * ctxB[0x10]
                                                                                    + *(a1 + 0x74) * ctxB[0xf]
                                                                                    + *(a1 + 0x70) * ctxB[0xe];
                                                                                ctxB[0xf] = x87_r7_236;
                                                                                ctxB[0x10] = x87_r7_240;
                                                                                float objC35 = v_2d4_3;
                                                                                ctxB[8] = v_2d8_3;
                                                                                float valA67 = v_2d0_4;
                                                                                ctxB[9] = objC35;
                                                                                ctxB[0xa] = valA67;
                                                                                valA67 = v_2f5_1;
                                                                                long double x87_r7_242 =
                                                                                    v_2d8_3 * *(a1 + 0x98);
                                                                                long double x87_r6_148 =
                                                                                    v_2d4_3 * *(a1 + 0x9c);
                                                                                long double x87_r5_55 =
                                                                                    v_2d0_4 * *(a1 + 0xa0);
                                                                                objC35 = valA67;
                                                                                char f45_1 = objC35;
                                                                                objC35 = -(objC35);
                                                                                char f46_1 = valA67;
                                                                                valA67 = -(valA67);
                                                                                float v_1ac_1 =
                                                                                    x87_r5_55 * *(a1 + 0x84)
                                                                                    + x87_r7_242 * *(a1 + 0x7c)
                                                                                    + x87_r6_148 * *(a1 + 0x80);
                                                                                long double x87_r7_244 =
                                                                                    x87_r6_148 * *(a1 + 0x8c)
                                                                                    + x87_r5_55 * *(a1 + 0x90)
                                                                                    + x87_r7_242 * *(a1 + 0x88);
                                                                                *(ctxB + 8) = x87_r6_148 * *(a1 + 0x74)
                                                                                    + x87_r5_55 * *(a1 + 0x78)
                                                                                    + x87_r7_242 * *(a1 + 0x70)
                                                                                    + *(a1 + 0x20);
                                                                                *(ctxB + 0x10) =
                                                                                    v_1ac_1 + *(a1 + 0x28);
                                                                                long double x87_r7_245 =
                                                                                    x87_r7_244 + *(a1 + 0x30);
                                                                                ctxB[0x14] = ~(valA67 - valA67) & dstD11;
                                                                                ctxB[0x13] = (objC35 - objC35) & dstD11;
                                                                                ctxB[0x18] = v_230;
                                                                                *(ctxB + 0x18) = x87_r7_245;
                                                                                *ctxB = a1;
                                                                                ctxB[0x15] = v_2e9;
                                                                                ctxB[0x16] = 1;
                                                                                ctxB[0x19] = *(&v_230 + 4);
                                                                                ctxB[0x12] =
                                                                                    (v_228 - result_1[4]) >> 3;
                                                                                ctxB[0x1a] = v_1d4;
                                                                                ctxB[0x1b] = v_1d0;
                                                                            }
                                                                        }

                                                                        break;
                                                                    }
                                                                    else
                                                                    {
                                                                        uint32_t valA21 = dstD2 * 3;
                                                                        long double x87_r7_54 =
                                                                            v_218_1[valA21 * 2] - v_2e8_2;
                                                                        dstD1 = &v_218_1[valA21 * 2];
                                                                        long double x87_r6_18 =
                                                                            v_218_1[valA21 * 2 + 1] - v_2e4_2;
                                                                        long double x87_r5_16 =
                                                                            dstD1[2] - v_2e0_2;
                                                                        v_198[tmpD10] = dstD1;
                                                                        i_1 = x87_r5_16;
                                                                        double v_2c0_2 = x87_r6_18;
                                                                        double v_2a8_3 = x87_r7_54;
                                                                        long double x87_r7_56 =
                                                                            x87_r5_16 * v_27c_1
                                                                            + x87_r6_18 * v_280_1
                                                                            + x87_r7_54 * i_2;
                                                                        float v_2b8_1 = dstD1[3];
                                                                        long double x87_r7_61 =
                                                                            v_2a8_3 * v_2a8_3
                                                                            + v_2c0_2 * v_2c0_2 + i_1 * i_1
                                                                            - x87_r7_56 * x87_r7_56 * v_220_1;
                                                                        long double x87_r6_33 =
                                                                            v_2b8_1 * v_2b8_1;
                                                                        x87_r6_33 - x87_r7_61;

                                                                        if (*(&(
                                                                                (x87_r6_33 < x87_r7_61 ? 1 : 0) << 8 | (
                                                                                FCMP_UO(x87_r6_33, x87_r7_61) ? 1 : 0)
                                                                                << 0xa
                                                                                | (x87_r6_33 == x87_r7_61 ? 1 : 0)
                                                                                << 0xe) + 1) & 1)
                                                                            continue;
                                                                        else
                                                                        {
                                                                            long double x87_r7_63 =
                                                                                dstD1[3] + *dstD1;
                                                                            long double f23_1 = v_26c_1;
                                                                            x87_r7_63 - f23_1;

                                                                            if (*(&(
                                                                                    (x87_r7_63 < f23_1 ? 1 : 0) << 8 | (
                                                                                    FCMP_UO(x87_r7_63, f23_1) ? 1 : 0)
                                                                                    << 0xa
                                                                                    | (x87_r7_63 == f23_1 ? 1 : 0)
                                                                                    << 0xe) + 1) & 1)
                                                                                continue;
                                                                            else
                                                                            {
                                                                                long double x87_r7_65 =
                                                                                    dstD1[1] + dstD1[3];
                                                                                long double f25_1 = v_268_1;
                                                                                x87_r7_65 - f25_1;

                                                                                if (*(&(
                                                                                        (x87_r7_65 < f25_1 ? 1 : 0) << 8 | (
                                                                                        FCMP_UO(x87_r7_65, f25_1) ? 1 : 0)
                                                                                        << 0xa
                                                                                        | (x87_r7_65 == f25_1 ? 1 : 0)
                                                                                        << 0xe) + 1) & 1)
                                                                                    continue;
                                                                                else
                                                                                {
                                                                                    long double x87_r7_67 =
                                                                                        dstD1[2] + dstD1[3];
                                                                                    long double f28_1 = v_264_1;
                                                                                    x87_r7_67 - f28_1;

                                                                                    if (*(&(
                                                                                            (x87_r7_67 < f28_1 ? 1 : 0) << 8 | (
                                                                                            FCMP_UO(x87_r7_67, f28_1) ? 1 : 0)
                                                                                            << 0xa
                                                                                            | (x87_r7_67 == f28_1 ? 1 : 0)
                                                                                            << 0xe) + 1) & 1)
                                                                                        continue;
                                                                                    else
                                                                                    {
                                                                                        long double x87_r7_69 =
                                                                                            *dstD1 - dstD1[3];
                                                                                        long double f31_1 = v_278_1;
                                                                                        x87_r7_69 - f31_1;

                                                                                        if (!(*(&(
                                                                                                (x87_r7_69 < f31_1 ? 1 : 0) << 8 | (
                                                                                                FCMP_UO(x87_r7_69, f31_1) ? 1 : 0)
                                                                                                << 0xa
                                                                                                | (x87_r7_69 == f31_1 ? 1 : 0)
                                                                                                << 0xe) + 1) & 0x41))
                                                                                            continue;
                                                                                        else
                                                                                        {
                                                                                            long double x87_r7_71 =
                                                                                                dstD1[1] - dstD1[3];
                                                                                            long double f36_1 = v_274_1;
                                                                                            x87_r7_71 - f36_1;

                                                                                            if (!(*(&(
                                                                                                    (x87_r7_71 < f36_1 ? 1 : 0) << 8 | (
                                                                                                    FCMP_UO(x87_r7_71, f36_1) ? 1 : 0)
                                                                                                    << 0xa
                                                                                                    | (x87_r7_71 == f36_1 ? 1 : 0)
                                                                                                    << 0xe) + 1) & 0x41))
                                                                                                continue;
                                                                                            else
                                                                                            {
                                                                                                long double x87_r7_73 =
                                                                                                    dstD1[2] - dstD1[3];
                                                                                                long double f40_1 = v_270_1;
                                                                                                x87_r7_73 - f40_1;

                                                                                                if (!(*(&(
                                                                                                        (x87_r7_73 < f40_1 ? 1 : 0) << 8 | (
                                                                                                        FCMP_UO(x87_r7_73, f40_1) ? 1 : 0)
                                                                                                        << 0xa
                                                                                                        | (x87_r7_73 == f40_1 ? 1 : 0)
                                                                                                        << 0xe) + 1) & 0x41))
                                                                                                    continue;
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }

                                                                i = dstD1[5];
                                                                v_2a9_1 = 0;

                                                                if (i)
                                                                {
                                                                    int32_t saved_dst;
                                                                    float** objC17 =
                                                                        &(&saved_dst)[tmpD10 + 0x5c];

                                                                    do
                                                                    {
                                                                        objC17 = &objC17[1];
                                                                        tmpD10 += 1;
                                                                        uint32_t valA24 = i * 3;
                                                                        long double x87_r7_75 =
                                                                            v_218_1[valA24 * 2] - v_2e8_2;
                                                                        dstD1 = &v_218_1[valA24 * 2];
                                                                        long double x87_r6_35 =
                                                                            v_218_1[valA24 * 2 + 1] - v_2e4_2;
                                                                        long double x87_r5_26 =
                                                                            dstD1[2] - v_2e0_2;
                                                                        *objC17 = dstD1;
                                                                        i_1 = x87_r6_35;
                                                                        double v_2c0_3 = x87_r7_75;
                                                                        double v_2a8_4 = x87_r5_26;
                                                                        long double x87_r7_77 =
                                                                            x87_r5_26 * v_27c_1
                                                                            + x87_r6_35 * v_280_1
                                                                            + x87_r7_75 * i_2;
                                                                        float v_2b8_2 = dstD1[3];
                                                                        long double x87_r7_82 =
                                                                            v_2a8_4 * v_2a8_4
                                                                            + v_2c0_3 * v_2c0_3 + i_1 * i_1
                                                                            - x87_r7_77 * x87_r7_77 * v_220_1;
                                                                        long double x87_r6_50 =
                                                                            v_2b8_2 * v_2b8_2;
                                                                        x87_r6_50 - x87_r7_82;
                                                                        i = (x87_r6_50 < x87_r7_82 ? 1 : 0) << 8
                                                                            | (FCMP_UO(x87_r6_50, x87_r7_82) ? 1
                                                                            : 0) << 0xa
                                                                            | (x87_r6_50 == x87_r7_82 ? 1 : 0)
                                                                            << 0xe;

                                                                        if (*(&i + 1) & 1)
                                                                            break;

                                                                        long double x87_r7_84 =
                                                                            dstD1[3] + *dstD1;
                                                                        long double f24_1 = v_26c_1;
                                                                        x87_r7_84 - f24_1;
                                                                        i = (x87_r7_84 < f24_1 ? 1 : 0) << 8
                                                                            | (FCMP_UO(x87_r7_84, f24_1) ? 1
                                                                            : 0) << 0xa
                                                                            | (x87_r7_84 == f24_1 ? 1 : 0)
                                                                            << 0xe;

                                                                        if (*(&i + 1) & 1)
                                                                            break;

                                                                        long double x87_r7_86 =
                                                                            dstD1[1] + dstD1[3];
                                                                        long double f27_1 = v_268_1;
                                                                        x87_r7_86 - f27_1;
                                                                        i = (x87_r7_86 < f27_1 ? 1 : 0) << 8
                                                                            | (FCMP_UO(x87_r7_86, f27_1) ? 1
                                                                            : 0) << 0xa
                                                                            | (x87_r7_86 == f27_1 ? 1 : 0)
                                                                            << 0xe;

                                                                        if (*(&i + 1) & 1)
                                                                            break;

                                                                        long double x87_r7_88 =
                                                                            dstD1[2] + dstD1[3];
                                                                        long double f30_1 = v_264_1;
                                                                        x87_r7_88 - f30_1;
                                                                        i = (x87_r7_88 < f30_1 ? 1 : 0) << 8
                                                                            | (FCMP_UO(x87_r7_88, f30_1) ? 1
                                                                            : 0) << 0xa
                                                                            | (x87_r7_88 == f30_1 ? 1 : 0)
                                                                            << 0xe;

                                                                        if (*(&i + 1) & 1)
                                                                            break;

                                                                        long double x87_r7_90 =
                                                                            *dstD1 - dstD1[3];
                                                                        long double f34_1 = v_278_1;
                                                                        x87_r7_90 - f34_1;
                                                                        i = (x87_r7_90 < f34_1 ? 1 : 0) << 8
                                                                            | (FCMP_UO(x87_r7_90, f34_1) ? 1
                                                                            : 0) << 0xa
                                                                            | (x87_r7_90 == f34_1 ? 1 : 0)
                                                                            << 0xe;

                                                                        if (!(*(&i + 1) & 0x41))
                                                                            break;

                                                                        long double x87_r7_92 =
                                                                            dstD1[1] - dstD1[3];
                                                                        long double f39_1 = v_274_1;
                                                                        x87_r7_92 - f39_1;
                                                                        i = (x87_r7_92 < f39_1 ? 1 : 0) << 8
                                                                            | (FCMP_UO(x87_r7_92, f39_1) ? 1
                                                                            : 0) << 0xa
                                                                            | (x87_r7_92 == f39_1 ? 1 : 0)
                                                                            << 0xe;

                                                                        if (!(*(&i + 1) & 0x41))
                                                                            break;

                                                                        long double x87_r7_94 =
                                                                            dstD1[2] - dstD1[3];
                                                                        long double f44_1 = v_270_1;
                                                                        x87_r7_94 - f44_1;
                                                                        i = (x87_r7_94 < f44_1 ? 1 : 0) << 8
                                                                            | (FCMP_UO(x87_r7_94, f44_1) ? 1
                                                                            : 0) << 0xa
                                                                            | (x87_r7_94 == f44_1 ? 1 : 0)
                                                                            << 0xe;

                                                                        if (!(*(&i + 1) & 0x41))
                                                                            break;

                                                                        i = dstD1[5];
                                                                    } while (i);

                                                                    v_2b4_1 = tmpD10;
                                                                }

                                                                int16_t objC15 = *(dstD1 + 0x12);

                                                                if (objC15)
                                                                {
                                                                    float i_3 = 0f;
                                                                    i_3 = dstD1[4];
                                                                    i_1 = i_3;
                                                                    int16_t* tmpD13 =
                                                                        result_1[4] + (i_3 << 3);
                                                                    int16_t* v_2b8_3 = tmpD13;

                                                                    if (i_3 >= objC15 + i_3)
                                                                        goto label_4c1f56;

                                                                    int32_t valA52;
                                                                    void* const objC22;

                                                                    do
                                                                    {
                                                                        int32_t objC19 = 0;
                                                                        objC19 = *tmpD13;
                                                                        float* objC21 = (objC19 << 4) + valA4;
                                                                        int32_t valA26 = 0;
                                                                        valA26 = tmpD13[1];
                                                                        float* valA28 = (valA26 << 4) + valA4;
                                                                        int32_t valA29 = 0;
                                                                        valA29 = v_2b8_3[2];
                                                                        float* valA31 = (valA29 << 4) + valA4;
                                                                        int32_t valA32 = 0;
                                                                        valA32 = v_2b8_3[3];

                                                                        if (*(result_1[6] + valA32 * 0xc + 4)
                                                                            == 0xffff || a2[6])
                                                                        {
                                                                            long double x87_r7_95 = v_26c_1;
                                                                            long double f26_1 = *objC21;
                                                                            x87_r7_95 - f26_1;
                                                                            long double x87_r7_96;
                                                                            long double f29_1;

                                                                            if (!(*(&(
                                                                                (x87_r7_95 < f26_1 ? 1 : 0) << 8 | (
                                                                                FCMP_UO(x87_r7_95, f26_1) ? 1 : 0)
                                                                                << 0xa
                                                                                | (x87_r7_95 == f26_1 ? 1 : 0)
                                                                                << 0xe) + 1) & 0x41))
                                                                            {
                                                                                x87_r7_96 = v_26c_1;
                                                                                f29_1 = *valA28;
                                                                                x87_r7_96 - f29_1;
                                                                            }

                                                                            float* tmpD22;

                                                                            if (*(&(
                                                                                (x87_r7_95 < f26_1 ? 1 : 0) << 8 | (
                                                                                FCMP_UO(x87_r7_95, f26_1) ? 1 : 0)
                                                                                << 0xa
                                                                                | (x87_r7_95 == f26_1 ? 1 : 0)
                                                                                << 0xe) + 1) & 0x41 || *(&(
                                                                                (x87_r7_96 < f29_1 ? 1 : 0) << 8 | (
                                                                                FCMP_UO(x87_r7_96, f29_1) ? 1 : 0)
                                                                                << 0xa
                                                                                | (x87_r7_96 == f29_1 ? 1 : 0)
                                                                                << 0xe) + 1) & 0x41)
                                                                            {
                                                                                tmpD22 = valA31;
                                                                            label_4c22f9:
                                                                                long double x87_r7_98 = v_268_1;
                                                                                long double f32_1 = objC21[1];
                                                                                x87_r7_98 - f32_1;

                                                                                if (*(&(
                                                                                    (x87_r7_98 < f32_1 ? 1 : 0) << 8 | (
                                                                                    FCMP_UO(x87_r7_98, f32_1) ? 1 : 0)
                                                                                    << 0xa
                                                                                    | (x87_r7_98 == f32_1 ? 1 : 0)
                                                                                    << 0xe) + 1) & 0x41)
                                                                                {
                                                                                label_4c2334:
                                                                                    long double x87_r7_101 = v_264_1;
                                                                                    long double f37_1 = objC21[2];
                                                                                    x87_r7_101 - f37_1;

                                                                                    if (*(&(
                                                                                        (x87_r7_101 < f37_1 ? 1 : 0) << 8 | (
                                                                                        FCMP_UO(x87_r7_101, f37_1) ? 1 : 0)
                                                                                        << 0xa
                                                                                        | (x87_r7_101 == f37_1 ? 1 : 0)
                                                                                        << 0xe) + 1) & 0x41)
                                                                                    {
                                                                                    label_4c236f:
                                                                                        long double x87_r7_104 = v_278_1;
                                                                                        long double f41_1 = *objC21;
                                                                                        x87_r7_104 - f41_1;

                                                                                        if (!(*(&(
                                                                                            (x87_r7_104 < f41_1 ? 1 : 0) << 8 | (
                                                                                            FCMP_UO(x87_r7_104, f41_1) ? 1 : 0)
                                                                                            << 0xa
                                                                                            | (x87_r7_104 == f41_1 ? 1 : 0)
                                                                                            << 0xe) + 1) & 1))
                                                                                        {
                                                                                        label_4c23a7:
                                                                                            long double x87_r7_107 = v_274_1;
                                                                                            long double f47_1 = objC21[1];
                                                                                            x87_r7_107 - f47_1;

                                                                                            if (!(*(&(
                                                                                                (x87_r7_107 < f47_1 ? 1 : 0) << 8 | (
                                                                                                FCMP_UO(x87_r7_107, f47_1) ? 1 : 0)
                                                                                                << 0xa
                                                                                                | (x87_r7_107 == f47_1 ? 1 : 0)
                                                                                                << 0xe) + 1) & 1))
                                                                                            {
                                                                                            label_4c23e2:
                                                                                                long double x87_r7_110 = v_270_1;
                                                                                                long double f50_1 = objC21[2];
                                                                                                x87_r7_110 - f50_1;

                                                                                                if (!(*(&(
                                                                                                    (x87_r7_110 < f50_1 ? 1 : 0) << 8 | (
                                                                                                    FCMP_UO(x87_r7_110, f50_1) ? 1 : 0)
                                                                                                    << 0xa
                                                                                                    | (x87_r7_110 == f50_1 ? 1 : 0)
                                                                                                    << 0xe) + 1) & 1))
                                                                                                {
                                                                                                label_4c2425:
                                                                                                    float v_2cc_1 = *tmpD22 - *objC21;
                                                                                                    float v_2c8_1 = tmpD22[1] - objC21[1];
                                                                                                    float v_2c4_1 = tmpD22[2] - objC21[2];
                                                                                                    float v_24c_1 = *valA28 - *objC21;
                                                                                                    float v_248_1 = valA28[1] - objC21[1];
                                                                                                    long double x87_r7_124 =
                                                                                                        valA28[2] - objC21[2];
                                                                                                    float v_244_1 = x87_r7_124;
                                                                                                    float v_2f0_3 = x87_r7_124 * v_2c8_1
