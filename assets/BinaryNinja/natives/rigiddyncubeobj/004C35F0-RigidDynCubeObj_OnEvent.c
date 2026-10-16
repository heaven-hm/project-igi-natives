#include "RigidDynCubeObj_OnEvent.h"
void* RigidDynCubeObj_OnEvent(void* a1, int32_t* a2)

{
    double* valA = *a2;
    double* objC = a2[1];
    void* result = *(a1 + 0x6c);

    if (result)
    {
        int32_t objC1 = *(a1 + 0xa4);

        if (objC1 != 0xffffffff)
        {
            void* valA1 = *(result + (objC1 << 2));
            result = *(*(valA1 + 0xc) + 0xc);

            if (!*(result + 0x28))
            {
                int32_t* ctxB1 = *(result + 0x2c);

                if (ctxB1 && *ctxB1)
                {
                    result = ctxB1[5];
                    void* result_2 = result;
                    result = a2[5];

                    if (!result)
                    {
                    label_4c3687:
                        int16_t valA4;
                        valA4 = a2[2];

                        if (valA4 == 0xff)
                        {
                        label_4c36c2:
                            long double x87_r7_2 = *(a1 + 0x9c);
                            long double x87_r6_1 = *(a1 + 0xa0);
                            float* srcS1 = ctxB1[7];
                            char v_241_1 = 1;
                            x87_r6_1 - x87_r7_2;
                            void* result_1 = nullptr;
                            float* v_1cc_1 = srcS1;
                            int32_t v_198[0x64];
                            v_198[0] = srcS1;
                            long double x87_r7_3;

                            if (!(*(&((x87_r6_1 < x87_r7_2 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r6_1, x87_r7_2) ? 1 : 0) << 0xa
                                    | (x87_r6_1 == x87_r7_2 ? 1 : 0) << 0xe) + 1) & 1))
                                x87_r7_3 = *(a1 + 0xa0);
                            else
                                x87_r7_3 = *(a1 + 0x9c);

                            long double x87_r6_2 = *(a1 + 0x98);
                            x87_r6_2 - x87_r7_3;
                            long double x87_r7_5;

                            if (*(&((x87_r6_2 < x87_r7_3 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r6_2, x87_r7_3) ? 1 : 0) << 0xa
                                | (x87_r6_2 == x87_r7_3 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                            {
                                long double x87_r7_6 = *(a1 + 0x9c);
                                long double x87_r6_3 = *(a1 + 0xa0);
                                x87_r6_3 - x87_r7_6;

                                if (!(*(&((x87_r6_3 < x87_r7_6 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r6_3, x87_r7_6) ? 1 : 0) << 0xa
                                        | (x87_r6_3 == x87_r7_6 ? 1 : 0) << 0xe) + 1) & 1))
                                    x87_r7_5 = *(a1 + 0xa0);
                                else
                                    x87_r7_5 = *(a1 + 0x9c);
                            }
                            else
                                x87_r7_5 = *(a1 + 0x98);

                            long double fp0_1;
                            fp0_1 = Render_ComputeNormals(*(a1 + 0x6c));
                            long double x87_r7_8 = fp0_1 * x87_r7_5;
                            float v_260_1 = x87_r7_8;
                            long double x87_r7_9 = *(a1 + 0x20) - x87_r7_8;
                            long double f2_1 = *valA;
                            x87_r7_9 - f2_1;
                            result = (x87_r7_9 < f2_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_9, f2_1) ? 1 : 0) << 0xa
                                | (x87_r7_9 == f2_1 ? 1 : 0) << 0xe | 0x3800;
                            double* tmpD4;

                            if (*(&result + 1) & 0x41)
                            {
                                tmpD4 = objC;
                            label_4c3784:
                                long double x87_r7_12 = v_260_1 + *(a1 + 0x20);
                                long double f4_1 = *valA;
                                x87_r7_12 - f4_1;
                                result = (x87_r7_12 < f4_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_12, f4_1) ? 1 : 0) << 0xa
                                    | (x87_r7_12 == f4_1 ? 1 : 0) << 0xe | 0x3800;

                                if (!(*(&result + 1) & 1))
                                {
                                label_4c37a5:
                                    long double x87_r7_15 = *(a1 + 0x28) - v_260_1;
                                    long double f6_1 = valA[1];
                                    x87_r7_15 - f6_1;
                                    result = (x87_r7_15 < f6_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_15, f6_1) ? 1 : 0) << 0xa
                                        | (x87_r7_15 == f6_1 ? 1 : 0) << 0xe | 0x3800;

                                    if (*(&result + 1) & 0x41)
                                    {
                                    label_4c37c8:
                                        long double x87_r7_18 = v_260_1 + *(a1 + 0x28);
                                        long double f8_1 = valA[1];
                                        x87_r7_18 - f8_1;
                                        result = (x87_r7_18 < f8_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_18, f8_1) ? 1 : 0) << 0xa
                                            | (x87_r7_18 == f8_1 ? 1 : 0) << 0xe | 0x3800;

                                        if (!(*(&result + 1) & 1))
                                        {
                                        label_4c37eb:
                                            long double x87_r7_21 = *(a1 + 0x30) - v_260_1;
                                            long double f10_1 = valA[2];
                                            x87_r7_21 - f10_1;
                                            result = (x87_r7_21 < f10_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r7_21, f10_1) ? 1 : 0) << 0xa
                                                | (x87_r7_21 == f10_1 ? 1 : 0) << 0xe | 0x3800;

                                            if (*(&result + 1) & 0x41)
                                            {
                                            label_4c380e:
                                                long double x87_r7_24 = v_260_1 + *(a1 + 0x30);
                                                long double f12_1 = valA[2];
                                                x87_r7_24 - f12_1;
                                                result = (x87_r7_24 < f12_1 ? 1 : 0) << 8
                                                    | (FCMP_UO(x87_r7_24, f12_1) ? 1 : 0) << 0xa
                                                    | (x87_r7_24 == f12_1 ? 1 : 0) << 0xe
                                                    | 0x3800;

                                                if (!(*(&result + 1) & 1))
                                                {
                                                label_4c382f:
                                                    long double x87_r7_27 = *valA - *(a1 + 0x20);
                                                    long double x87_r6_5 = valA[1] - *(a1 + 0x28);
                                                    long double x87_r5_2 = valA[2] - *(a1 + 0x30);
                                                    float v_20c_1 = x87_r6_5 * *(a1 + 0x7c)
                                                        + x87_r5_2 * *(a1 + 0x88)
                                                        + x87_r7_27 * *(a1 + 0x70);
                                                    float v_234_1 = v_20c_1;
                                                    float v_234_2 = v_20c_1 / *(a1 + 0x98);
                                                    float v_230_2 = (x87_r5_2 * *(a1 + 0x8c)
                                                        + x87_r7_27 * *(a1 + 0x74)
                                                        + x87_r6_5 * *(a1 + 0x80)) / *(a1 + 0x98);
                                                    float v_22c_2 = (x87_r6_5 * *(a1 + 0x84)
                                                        + x87_r5_2 * *(a1 + 0x90)
                                                        + x87_r7_27 * *(a1 + 0x78)) / *(a1 + 0x98);
                                                    long double x87_r7_37 = *tmpD4 - *(a1 + 0x20);
                                                    long double x87_r6_12 =
                                                        tmpD4[1] - *(a1 + 0x28);
                                                    long double x87_r5_8 =
                                                        tmpD4[2] - *(a1 + 0x30);
                                                    float v_20c_2 = x87_r5_8 * *(a1 + 0x88)
                                                        + x87_r7_37 * *(a1 + 0x70)
                                                        + x87_r6_12 * *(a1 + 0x7c);
                                                    float v_240_1 = v_20c_2;
                                                    float v_240_2 = v_20c_2 / *(a1 + 0x98);
                                                    float v_23c_2 = (x87_r5_8 * *(a1 + 0x8c)
                                                        + x87_r7_37 * *(a1 + 0x74)
                                                        + x87_r6_12 * *(a1 + 0x80)) / *(a1 + 0x98);
                                                    long double x87_r7_46 = (
                                                        x87_r5_8 * *(a1 + 0x90)
                                                        + x87_r7_37 * *(a1 + 0x78)
                                                        + x87_r6_12 * *(a1 + 0x84)) / *(a1 + 0x98);
                                                    long double x87_r6_14 = v_234_2;
                                                    long double f14_1 = v_240_2;
                                                    x87_r6_14 - f14_1;
                                                    float v_200_1;

                                                    v_200_1 = !(*(&(
                                                        (x87_r6_14 < f14_1 ? 1 : 0) << 8
                                                        | (FCMP_UO(x87_r6_14, f14_1) ? 1 : 0)
                                                        << 0xa
                                                        | (x87_r6_14 == f14_1 ? 1 : 0) << 0xe
                                                        | 0x3800) + 1) & 1) ? v_240_2 : v_234_2;

                                                    long double x87_r6_15 = v_230_2;
                                                    long double f15_1 = v_23c_2;
                                                    x87_r6_15 - f15_1;
                                                    float v_1fc_1;

                                                    v_1fc_1 = !(*(&(
                                                        (x87_r6_15 < f15_1 ? 1 : 0) << 8
                                                        | (FCMP_UO(x87_r6_15, f15_1) ? 1 : 0)
                                                        << 0xa
                                                        | (x87_r6_15 == f15_1 ? 1 : 0) << 0xe
                                                        | 0x3800) + 1) & 1) ? v_23c_2 : v_230_2;

                                                    long double x87_r6_16 = v_22c_2;
                                                    x87_r6_16 - x87_r7_46;
                                                    float v_1f8_1;

                                                    v_1f8_1 = !(*(&(
                                                        (x87_r6_16 < x87_r7_46 ? 1 : 0) << 8
                                                        | (FCMP_UO(x87_r6_16, x87_r7_46) ? 1 : 0)
                                                        << 0xa
                                                        | (x87_r6_16 == x87_r7_46 ? 1 : 0) << 0xe
                                                        | 0x3800) + 1) & 1) ? x87_r7_46 : v_22c_2;

                                                    long double x87_r6_17 = v_234_2;
                                                    long double f16_1 = v_240_2;
                                                    x87_r6_17 - f16_1;
                                                    float v_1f4_1;

                                                    v_1f4_1 = *(&(
                                                        (x87_r6_17 < f16_1 ? 1 : 0) << 8
                                                        | (FCMP_UO(x87_r6_17, f16_1) ? 1 : 0)
                                                        << 0xa
                                                        | (x87_r6_17 == f16_1 ? 1 : 0) << 0xe
                                                        | 0x3800) + 1) & 0x41 ? v_240_2 : v_234_2;

                                                    long double x87_r6_18 = v_230_2;
                                                    long double f17_1 = v_23c_2;
                                                    x87_r6_18 - f17_1;
                                                    float v_1f0_1;

                                                    v_1f0_1 = *(&(
                                                        (x87_r6_18 < f17_1 ? 1 : 0) << 8
                                                        | (FCMP_UO(x87_r6_18, f17_1) ? 1 : 0)
                                                        << 0xa
                                                        | (x87_r6_18 == f17_1 ? 1 : 0) << 0xe
                                                        | 0x3800) + 1) & 0x41 ? v_23c_2 : v_230_2;

                                                    long double x87_r6_19 = v_22c_2;
                                                    x87_r6_19 - x87_r7_46;
                                                    float v_1ec_1;

                                                    v_1ec_1 = *(&(
                                                        (x87_r6_19 < x87_r7_46 ? 1 : 0) << 8
                                                        | (FCMP_UO(x87_r6_19, x87_r7_46) ? 1 : 0)
                                                        << 0xa
                                                        | (x87_r6_19 == x87_r7_46 ? 1 : 0) << 0xe
                                                        | 0x3800) + 1) & 0x41 ? x87_r7_46 : v_22c_2;

                                                    long double x87_r7_47 = x87_r7_46 - v_22c_2;
                                                    long double x87_r5_13 = v_23c_2 - v_230_2;
                                                    float v_258_1 = x87_r5_13;
                                                    long double x87_r4_18 = v_240_2 - v_234_2;
                                                    float v_25c_2 = x87_r4_18;
                                                    double v_1b0_1 = 1.0 / (x87_r4_18 * x87_r4_18
                                                        + x87_r5_13 * x87_r5_13
                                                        + x87_r7_47 * x87_r7_47);
                                                    float v_210_1 = x87_r7_47;
                                                    long double x87_r7_48 = v_258_1;
                                                    long double f18_1 = 0f;
                                                    x87_r7_48 - f18_1;
                                                    long double x87_r7_49 = v_258_1;

                                                    if (*(&((x87_r7_48 < f18_1 ? 1 : 0) << 8 | (
                                                            FCMP_UO(x87_r7_48, f18_1) ? 1 : 0) << 0xa
                                                            | (x87_r7_48 == f18_1 ? 1 : 0)
                                                            << 0xe | 0x3800) + 1) & 1)
                                                        x87_r7_49 = -(x87_r7_49);

                                                    long double x87_r6_23 = v_25c_2;
                                                    long double f19_1 = 0f;
                                                    x87_r6_23 - f19_1;
                                                    long double x87_r6_24 = v_25c_2;

                                                    if (*(&((x87_r6_23 < f19_1 ? 1 : 0) << 8 | (
                                                            FCMP_UO(x87_r6_23, f19_1) ? 1 : 0) << 0xa
                                                            | (x87_r6_23 == f19_1 ? 1 : 0)
                                                            << 0xe | 0x3000) + 1) & 1)
                                                        x87_r6_24 = -(x87_r6_24);

                                                    x87_r7_49 - x87_r6_24;

                                                    if (!(*(&((x87_r7_49 < x87_r6_24 ? 1 : 0) << 8
                                                        | (FCMP_UO(x87_r7_49, x87_r6_24) ? 1 : 0)
                                                        << 0xa
                                                        | (x87_r7_49 == x87_r6_24 ? 1 : 0) << 0xe
                                                        | 0x3800) + 1) & 0x41))
                                                    {
                                                        long double x87_r7_52 = v_258_1;
                                                        long double f20_1 = 0f;
                                                        x87_r7_52 - f20_1;

                                                        if (!(*(&(
                                                                (x87_r7_52 < f20_1 ? 1 : 0) << 8 | (
                                                                FCMP_UO(x87_r7_52, f20_1) ? 1 : 0)
                                                                << 0xa
                                                                | (x87_r7_52 == f20_1 ? 1 : 0)
                                                                << 0xe) + 1) & 1))
                                                            float v_220_2 = v_258_1;
                                                        else
                                                            float v_220_1 = -(v_258_1);

                                                        long double x87_r7_55 = v_210_1;
                                                        long double f22_1 = 0f;
                                                        x87_r7_55 - f22_1;

                                                        if (!(*(&(
                                                                (x87_r7_55 < f22_1 ? 1 : 0) << 8 | (
                                                                FCMP_UO(x87_r7_55, f22_1) ? 1 : 0)
                                                                << 0xa
                                                                | (x87_r7_55 == f22_1 ? 1 : 0)
                                                                << 0xe) + 1) & 1))
                                                            float v_220_4 = v_210_1;
                                                        else
                                                            float v_220_3 = -(v_210_1);
                                                    }

                                                    while (true)
                                                    {
                                                    label_4c3b13:
                                                        int16_t i;
                                                        i = v_241_1;
                                                        void* result_3;
                                                        float* dstD1;

                                                        if (i)
                                                        {
                                                            result_3 = result_1;
                                                            dstD1 = v_1cc_1;
                                                        }
                                                        else
                                                        {
                                                            int16_t srcS2 = *(srcS1 + 0x16);

                                                            if (!srcS2)
                                                            {
                                                                result = result_1 - 1;
                                                                bool cond_4_1 = result_1 - 1 < 0;
                                                                result_1 = result;

                                                                if (cond_4_1)
                                                                    break;

                                                                srcS1 = v_198[result];
                                                                continue;
                                                            }
                                                            else
                                                            {
                                                                dstD1 = v_1cc_1;
                                                                result_3 = result_1;
                                                                uint32_t objC16 = srcS2 * 3;
                                                                long double x87_r7_59 =
                                                                    dstD1[objC16 * 2] - v_234_2;
                                                                srcS1 = &dstD1[objC16 * 2];
                                                                v_198[result_3] = srcS1;
                                                                float v_1d8_1 = x87_r7_59;
                                                                float v_1d4_1 = srcS1[1] - v_230_2;
                                                                long double x87_r7_63 =
                                                                    srcS1[2] - v_22c_2;
                                                                long double x87_r6_26 = v_1d4_1;
                                                                long double x87_r5_15 = v_1d8_1;
                                                                float v_25c_3 = x87_r7_63 * v_210_1
                                                                    + v_1d4_1 * v_258_1
                                                                    + v_1d8_1 * v_25c_2;
                                                                float v_260_2 = srcS1[3];
                                                                long double x87_r7_67 =
                                                                    x87_r5_15 * x87_r5_15
                                                                    + x87_r6_26 * x87_r6_26
                                                                    + x87_r7_63 * x87_r7_63
                                                                    - v_25c_3 * v_25c_3 * v_1b0_1;
                                                                long double x87_r6_34 =
                                                                    v_260_2 * v_260_2;
                                                                x87_r6_34 - x87_r7_67;
                                                                i = (x87_r6_34 < x87_r7_67 ? 1 : 0) << 8
                                                                    | (FCMP_UO(x87_r6_34, x87_r7_67) ? 1
                                                                    : 0) << 0xa
                                                                    | (x87_r6_34 == x87_r7_67 ? 1 : 0)
                                                                    << 0xe;

                                                                if (*(&i + 1) & 1)
                                                                    continue;
                                                                else
                                                                {
                                                                    long double x87_r7_69 =
                                                                        srcS1[3] + *srcS1;
                                                                    long double f23_1 = v_200_1;
                                                                    x87_r7_69 - f23_1;
                                                                    i = (x87_r7_69 < f23_1 ? 1 : 0) << 8
                                                                        | (FCMP_UO(x87_r7_69, f23_1) ? 1
                                                                        : 0) << 0xa
                                                                        | (x87_r7_69 == f23_1 ? 1 : 0)
                                                                        << 0xe;

                                                                    if (*(&i + 1) & 1)
                                                                        continue;
                                                                    else
                                                                    {
                                                                        long double x87_r7_71 =
                                                                            srcS1[1] + srcS1[3];
                                                                        long double f24_1 = v_1fc_1;
                                                                        x87_r7_71 - f24_1;
                                                                        i = (x87_r7_71 < f24_1 ? 1 : 0) << 8
                                                                            | (FCMP_UO(x87_r7_71, f24_1) ? 1
                                                                            : 0) << 0xa
                                                                            | (x87_r7_71 == f24_1 ? 1 : 0)
                                                                            << 0xe;

                                                                        if (*(&i + 1) & 1)
                                                                            continue;
                                                                        else
                                                                        {
                                                                            long double x87_r7_73 =
                                                                                srcS1[2] + srcS1[3];
                                                                            long double f26_1 = v_1f8_1;
                                                                            x87_r7_73 - f26_1;
                                                                            i = (x87_r7_73 < f26_1 ? 1 : 0) << 8
                                                                                | (FCMP_UO(x87_r7_73, f26_1) ? 1
                                                                                : 0) << 0xa
                                                                                | (x87_r7_73 == f26_1 ? 1 : 0)
                                                                                << 0xe;

                                                                            if (*(&i + 1) & 1)
                                                                                continue;
                                                                            else
                                                                            {
                                                                                long double x87_r7_75 =
                                                                                    *srcS1 - srcS1[3];
                                                                                long double f28_1 = v_1f4_1;
                                                                                x87_r7_75 - f28_1;
                                                                                i = (x87_r7_75 < f28_1 ? 1 : 0) << 8
                                                                                    | (FCMP_UO(x87_r7_75, f28_1) ? 1
                                                                                    : 0) << 0xa
                                                                                    | (x87_r7_75 == f28_1 ? 1 : 0)
                                                                                    << 0xe;

                                                                                if (!(*(&i + 1) & 0x41))
                                                                                    continue;
                                                                                else
                                                                                {
                                                                                    long double x87_r7_77 =
                                                                                        srcS1[1] - srcS1[3];
                                                                                    long double f31_1 = v_1f0_1;
                                                                                    x87_r7_77 - f31_1;
                                                                                    i = (x87_r7_77 < f31_1 ? 1 : 0) << 8
                                                                                        | (FCMP_UO(x87_r7_77, f31_1) ? 1
                                                                                        : 0) << 0xa
                                                                                        | (x87_r7_77 == f31_1 ? 1 : 0)
                                                                                        << 0xe;

                                                                                    if (!(*(&i + 1) & 0x41))
                                                                                        continue;
                                                                                    else
                                                                                    {
                                                                                        long double x87_r7_79 =
                                                                                            srcS1[2] - srcS1[3];
                                                                                        long double f35_1 = v_1ec_1;
                                                                                        x87_r7_79 - f35_1;
                                                                                        i = (x87_r7_79 < f35_1 ? 1 : 0) << 8
                                                                                            | (FCMP_UO(x87_r7_79, f35_1) ? 1
                                                                                            : 0) << 0xa
                                                                                            | (x87_r7_79 == f35_1 ? 1 : 0)
                                                                                            << 0xe;

                                                                                        if (!(*(&i + 1) & 0x41))
                                                                                            continue;
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        i = srcS1[5];
                                                        v_241_1 = 0;

                                                        if (i)
                                                        {
                                                            int32_t saved_dst;
                                                            float** objC17 =
                                                                &(&saved_dst)[result_3 + 0x36];

                                                            do
                                                            {
                                                                objC17 = &objC17[1];
                                                                result_3 += 1;
                                                                uint32_t valA17 = i * 3;
                                                                long double x87_r7_81 =
                                                                    dstD1[valA17 * 2] - v_234_2;
                                                                srcS1 = &dstD1[valA17 * 2];
                                                                *objC17 = srcS1;
                                                                float v_1c8_1 = x87_r7_81;
                                                                float v_1c4_1 = srcS1[1] - v_230_2;
                                                                long double x87_r7_85 =
                                                                    srcS1[2] - v_22c_2;
                                                                long double x87_r6_35 = v_1c4_1;
                                                                long double x87_r5_17 = v_1c8_1;
                                                                float v_25c_4 = x87_r7_85 * v_210_1
                                                                    + v_1c4_1 * v_258_1
                                                                    + v_1c8_1 * v_25c_2;
                                                                float v_260_3 = srcS1[3];
                                                                long double x87_r7_89 =
                                                                    x87_r5_17 * x87_r5_17
                                                                    + x87_r6_35 * x87_r6_35
                                                                    + x87_r7_85 * x87_r7_85
                                                                    - v_25c_4 * v_25c_4 * v_1b0_1;
                                                                long double x87_r6_43 =
                                                                    v_260_3 * v_260_3;
                                                                x87_r6_43 - x87_r7_89;
                                                                i = (x87_r6_43 < x87_r7_89 ? 1 : 0) << 8
                                                                    | (FCMP_UO(x87_r6_43, x87_r7_89) ? 1
                                                                    : 0) << 0xa
                                                                    | (x87_r6_43 == x87_r7_89 ? 1 : 0)
                                                                    << 0xe;

                                                                if (*(&i + 1) & 1)
                                                                    break;

                                                                long double x87_r7_91 =
                                                                    srcS1[3] + *srcS1;
                                                                long double f25_1 = v_200_1;
                                                                x87_r7_91 - f25_1;
                                                                i = (x87_r7_91 < f25_1 ? 1 : 0) << 8
                                                                    | (FCMP_UO(x87_r7_91, f25_1) ? 1
                                                                    : 0) << 0xa
                                                                    | (x87_r7_91 == f25_1 ? 1 : 0)
                                                                    << 0xe;

                                                                if (*(&i + 1) & 1)
                                                                    break;

                                                                long double x87_r7_93 =
                                                                    srcS1[1] + srcS1[3];
                                                                long double f27_1 = v_1fc_1;
                                                                x87_r7_93 - f27_1;
                                                                i = (x87_r7_93 < f27_1 ? 1 : 0) << 8
                                                                    | (FCMP_UO(x87_r7_93, f27_1) ? 1
                                                                    : 0) << 0xa
                                                                    | (x87_r7_93 == f27_1 ? 1 : 0)
                                                                    << 0xe;

                                                                if (*(&i + 1) & 1)
                                                                    break;

                                                                long double x87_r7_95 =
                                                                    srcS1[2] + srcS1[3];
                                                                long double f30_1 = v_1f8_1;
                                                                x87_r7_95 - f30_1;
                                                                i = (x87_r7_95 < f30_1 ? 1 : 0) << 8
                                                                    | (FCMP_UO(x87_r7_95, f30_1) ? 1
                                                                    : 0) << 0xa
                                                                    | (x87_r7_95 == f30_1 ? 1 : 0)
                                                                    << 0xe;

                                                                if (*(&i + 1) & 1)
                                                                    break;

                                                                long double x87_r7_97 =
                                                                    *srcS1 - srcS1[3];
                                                                long double f34_1 = v_1f4_1;
                                                                x87_r7_97 - f34_1;
                                                                i = (x87_r7_97 < f34_1 ? 1 : 0) << 8
                                                                    | (FCMP_UO(x87_r7_97, f34_1) ? 1
                                                                    : 0) << 0xa
                                                                    | (x87_r7_97 == f34_1 ? 1 : 0)
                                                                    << 0xe;

                                                                if (!(*(&i + 1) & 0x41))
                                                                    break;

                                                                long double x87_r7_99 =
                                                                    srcS1[1] - srcS1[3];
                                                                long double f39_1 = v_1f0_1;
                                                                x87_r7_99 - f39_1;
                                                                i = (x87_r7_99 < f39_1 ? 1 : 0) << 8
                                                                    | (FCMP_UO(x87_r7_99, f39_1) ? 1
                                                                    : 0) << 0xa
                                                                    | (x87_r7_99 == f39_1 ? 1 : 0)
                                                                    << 0xe;

                                                                if (!(*(&i + 1) & 0x41))
                                                                    break;

                                                                long double x87_r7_101 =
                                                                    srcS1[2] - srcS1[3];
                                                                long double f43_1 = v_1ec_1;
                                                                x87_r7_101 - f43_1;
                                                                i = (x87_r7_101 < f43_1 ? 1 : 0) << 8
                                                                    | (FCMP_UO(x87_r7_101, f43_1) ? 1
                                                                    : 0) << 0xa
                                                                    | (x87_r7_101 == f43_1 ? 1 : 0)
                                                                    << 0xe;

                                                                if (!(*(&i + 1) & 0x41))
                                                                    break;

                                                                i = srcS1[5];
                                                            } while (i);

                                                            result_1 = result_3;
                                                        }

                                                        int16_t objC15 = *(srcS1 + 0x12);

                                                        if (objC15)
                                                        {
                                                            int32_t valA18 = 0;
                                                            valA18 = srcS1[4];
                                                            int32_t v_220_5 = valA18;
                                                            int16_t* ctxB2 =
                                                                ctxB1[4] + (valA18 << 3);
                                                            int16_t* v_25c_5 = ctxB2;

                                                            if (valA18 < objC15 + valA18)
                                                            {
                                                                while (true)
                                                                {
                                                                    int32_t objC20 = 0;
                                                                    objC20 = *ctxB2;
                                                                    int32_t tmpD14 = 0;
                                                                    tmpD14 = ctxB2[1];
                                                                    int32_t dstD2 = 0;
                                                                    dstD2 = ctxB2[2];
                                                                    float* objC22 =
                                                                        (objC20 << 4) + result_2;
                                                                    float* tmpD16 =
                                                                        (tmpD14 << 4) + result_2;
                                                                    float* dstD4 = (dstD2 << 4) + result_2;
                                                                    int32_t valA20 = 0;
                                                                    valA20 = ctxB2[3];
                                                                    int32_t ctxB4 = ctxB1[6];
                                                                    int32_t valA21 = valA20 * 3;

                                                                    if (*(ctxB4 + (valA21 << 2) + 4)
                                                                        == 0xffff)
                                                                    {
                                                                        long double x87_r7_102 = v_200_1;
                                                                        long double f29_1 = *objC22;
                                                                        x87_r7_102 - f29_1;

                                                                        if (*(&(
                                                                            (x87_r7_102 < f29_1 ? 1 : 0) << 8 | (
                                                                            FCMP_UO(x87_r7_102, f29_1) ? 1 : 0)
                                                                            << 0xa
                                                                            | (x87_r7_102 == f29_1 ? 1 : 0)
                                                                            << 0xe) + 1) & 0x41)
                                                                        {
                                                                        label_4c3e99:
                                                                            long double x87_r7_105 = v_1fc_1;
                                                                            long double f32_1 = objC22[1];
                                                                            x87_r7_105 - f32_1;

                                                                            if (*(&(
                                                                                (x87_r7_105 < f32_1 ? 1 : 0) << 8 | (
                                                                                FCMP_UO(x87_r7_105, f32_1) ? 1 : 0)
                                                                                << 0xa
                                                                                | (x87_r7_105 == f32_1 ? 1 : 0)
                                                                                << 0xe) + 1) & 0x41)
                                                                            {
                                                                            label_4c3ec7:
                                                                                long double x87_r7_108 = v_1f8_1;
                                                                                long double f36_1 = objC22[2];
                                                                                x87_r7_108 - f36_1;

                                                                                if (*(&(
                                                                                    (x87_r7_108 < f36_1 ? 1 : 0) << 8 | (
                                                                                    FCMP_UO(x87_r7_108, f36_1) ? 1 : 0)
                                                                                    << 0xa
                                                                                    | (x87_r7_108 == f36_1 ? 1 : 0)
                                                                                    << 0xe) + 1) & 0x41)
                                                                                {
                                                                                label_4c3ef5:
                                                                                    long double x87_r7_111 = v_1f4_1;
                                                                                    long double f40_1 = *objC22;
                                                                                    x87_r7_111 - f40_1;

                                                                                    if (!(*(&(
                                                                                        (x87_r7_111 < f40_1 ? 1 : 0) << 8 | (
                                                                                        FCMP_UO(x87_r7_111, f40_1) ? 1 : 0)
                                                                                        << 0xa
                                                                                        | (x87_r7_111 == f40_1 ? 1 : 0)
                                                                                        << 0xe) + 1) & 1))
                                                                                    {
                                                                                    label_4c3f20:
                                                                                        long double x87_r7_114 = v_1f0_1;
                                                                                        long double f44_1 = objC22[1];
                                                                                        x87_r7_114 - f44_1;

                                                                                        if (!(*(&(
                                                                                            (x87_r7_114 < f44_1 ? 1 : 0) << 8 | (
                                                                                            FCMP_UO(x87_r7_114, f44_1) ? 1 : 0)
                                                                                            << 0xa
                                                                                            | (x87_r7_114 == f44_1 ? 1 : 0)
                                                                                            << 0xe) + 1) & 1))
                                                                                        {
                                                                                        label_4c3f57:
                                                                                            long double x87_r7_117 = v_1ec_1;
                                                                                            long double f47_1 = objC22[2];
                                                                                            x87_r7_117 - f47_1;

                                                                                            if (!(*(&(
                                                                                                (x87_r7_117 < f47_1 ? 1 : 0) << 8 | (
                                                                                                FCMP_UO(x87_r7_117, f47_1) ? 1 : 0)
                                                                                                << 0xa
                                                                                                | (x87_r7_117 == f47_1 ? 1 : 0)
                                                                                                << 0xe) + 1) & 1))
                                                                                            {
                                                                                            label_4c3f92:
                                                                                                float v_250_1 = *dstD4 - *objC22;
                                                                                                float v_24c_1 = dstD4[1] - objC22[1];
                                                                                                float v_248_1 = dstD4[2] - objC22[2];
                                                                                                float v_1e8_1 = *tmpD16 - *objC22;
                                                                                                float v_1e4_1 = tmpD16[1] - objC22[1];
                                                                                                long double x87_r7_131 =
                                                                                                    tmpD16[2] - objC22[2];
                                                                                                float v_1e0_1 = x87_r7_131;
                                                                                                float v_258_2 = x87_r7_131 * v_24c_1
                                                                                                    - v_1e4_1 * v_248_1;
                                                                                                long double x87_r7_136 =
                                                                                                    v_1e0_1 * v_250_1
                                                                                                    - v_1e8_1 * v_248_1;
                                                                                                float v_23c_3 = -(x87_r7_136);
                                                                                                float v_228_1 = v_1e4_1 * v_250_1
                                                                                                    - v_1e8_1 * v_24c_1;
                                                                                                long double x87_r7_144 =
                                                                                                    v_228_1 * v_210_1
                                                                                                    + v_23c_3 * v_258_1
                                                                                                    + v_258_2 * v_25c_2;
                                                                                                long double f50_1 = 0.0;
                                                                                                x87_r7_144 - f50_1;
                                                                                                float v_1bc_1 = x87_r7_144;
                                                                                                bool c1_1 = /* bool c1_1 =
                                                                                                    unknown  {fst dword [esp+0xb4], fp0} */;

                                                                                                if (!(*(&(
                                                                                                    (x87_r7_144 < f50_1 ? 1 : 0) << 8
                                                                                                    | (c1_1 ? 1 : 0) << 9 | (
                                                                                                    FCMP_UO(x87_r7_144, f50_1) ? 1 : 0)
                                                                                                    << 0xa
                                                                                                    | (x87_r7_144 == f50_1 ? 1 : 0)
                                                                                                    << 0xe | 0x3800) + 1) & 0x40))
                                                                                                {
                                                                                                    long double x87_r7_146 = (
                                                                                                        (objC22[2] - v_22c_2) * v_228_1
                                                                                                        + (objC22[1] - v_230_2) * v_23c_3
                                                                                                        + (*objC22 - v_234_2) * v_258_2)
                                                                                                        / x87_r7_144;
                                                                                                    float v_260_4 = x87_r7_146;
                                                                                                    long double f53_1 = 0f;
                                                                                                    x87_r7_146 - f53_1;

                                                                                                    if (!(*(&(
                                                                                                        (x87_r7_146 < f53_1 ? 1 : 0) << 8 | (
                                                                                                        FCMP_UO(x87_r7_146, f53_1) ? 1 : 0)
                                                                                                        << 0xa
                                                                                                        | (x87_r7_146 == f53_1 ? 1 : 0)
                                                                                                        << 0xe) + 1) & 1))
                                                                                                    {
                                                                                                        long double x87_r7_147 = v_260_4;
                                                                                                        long double f55_1 = 1f;
                                                                                                        x87_r7_147 - f55_1;

                                                                                                        if (*(&(
                                                                                                            (x87_r7_147 < f55_1 ? 1 : 0) << 8 | (
                                                                                                            FCMP_UO(x87_r7_147, f55_1) ? 1 : 0)
                                                                                                            << 0xa
                                                                                                            | (x87_r7_147 == f55_1 ? 1 : 0)
                                                                                                            << 0xe) + 1) & 0x41)
                                                                                                        {
                                                                                                            float v_20c_3 =
                                                                                                                v_260_4 * v_25c_2 + v_234_2;
                                                                                                            float v_208_3 =
                                                                                                                v_260_4 * v_258_1 + v_230_2;
                                                                                                            float v_204_3 =
                                                                                                                v_260_4 * v_210_1 + v_22c_2;
                                                                                                            long double x87_r7_157 = v_258_2;
                                                                                                            long double f56_1 = 0f;
                                                                                                            x87_r7_157 - f56_1;
                                                                                                            float v_1a4_1;

                                                                                                            v_1a4_1 = !(*(&(
                                                                                                                (x87_r7_157 < f56_1 ? 1 : 0) << 8 | (
                                                                                                                FCMP_UO(x87_r7_157, f56_1) ? 1 : 0)
                                                                                                                << 0xa
                                                                                                                | (x87_r7_157 == f56_1 ? 1 : 0)
                                                                                                                << 0xe) + 1) & 1) ? v_258_2
                                                                                                                : -(v_258_2);

                                                                                                            long double x87_r7_160 = v_23c_3;
                                                                                                            long double f57_1 = 0f;
                                                                                                            x87_r7_160 - f57_1;
                                                                                                            long double x87_r7_161 = v_23c_3;

                                                                                                            if (*(&(
                                                                                                                    (x87_r7_160 < f57_1 ? 1 : 0) << 8 | (
                                                                                                                    FCMP_UO(x87_r7_160, f57_1) ? 1 : 0)
                                                                                                                    << 0xa
                                                                                                                    | (x87_r7_160 == f57_1 ? 1 : 0)
                                                                                                                    << 0xe | 0x3800) + 1) & 1)
                                                                                                                x87_r7_161 = -(x87_r7_161);

                                                                                                            long double x87_r6_60 = v_228_1;
                                                                                                            long double f58_1 = 0f;
                                                                                                            x87_r6_60 - f58_1;
                                                                                                            long double x87_r6_61 = v_228_1;

                                                                                                            if (*(&(
                                                                                                                    (x87_r6_60 < f58_1 ? 1 : 0) << 8 | (
                                                                                                                    FCMP_UO(x87_r6_60, f58_1) ? 1 : 0)
                                                                                                                    << 0xa
                                                                                                                    | (x87_r6_60 == f58_1 ? 1 : 0)
                                                                                                                    << 0xe | 0x3000) + 1) & 1)
                                                                                                                x87_r6_61 = -(x87_r6_61);

                                                                                                            long double x87_r5_25 = v_1a4_1;
                                                                                                            x87_r5_25 - x87_r7_161;
                                                                                                            long double x87_r5_26;

                                                                                                            if (!(*(&(
                                                                                                                (x87_r5_25 < x87_r7_161 ? 1 : 0) << 8
                                                                                                                | (FCMP_UO(x87_r5_25, x87_r7_161) ? 1
                                                                                                                : 0) << 0xa
                                                                                                                | (x87_r5_25 == x87_r7_161 ? 1 : 0)
                                                                                                                << 0xe | 0x3000) + 1) & 0x41))
                                                                                                            {
                                                                                                                x87_r5_26 = v_1a4_1;
                                                                                                                x87_r5_26 - x87_r6_61;
                                                                                                            }

                                                                                                            float v_260_5;

                                                                                                            if (*(&(
                                                                                                                (x87_r5_25 < x87_r7_161 ? 1 : 0) << 8
                                                                                                                | (FCMP_UO(x87_r5_25, x87_r7_161) ? 1
                                                                                                                : 0) << 0xa
                                                                                                                | (x87_r5_25 == x87_r7_161 ? 1 : 0)
                                                                                                                << 0xe | 0x3000) + 1) & 0x41 || *(&(
                                                                                                                (x87_r5_26 < x87_r6_61 ? 1 : 0) << 8 | (
                                                                                                                FCMP_UO(x87_r5_26, x87_r6_61) ? 1 : 0)
                                                                                                                << 0xa
                                                                                                                | (x87_r5_26 == x87_r6_61 ? 1 : 0)
                                                                                                                << 0xe | 0x3000) + 1) & 0x41)
                                                                                                            {
                                                                                                                x87_r7_161 - x87_r6_61;

                                                                                                                if (*(&(
                                                                                                                    (x87_r7_161 < x87_r6_61 ? 1 : 0) << 8
                                                                                                                    | (FCMP_UO(x87_r7_161, x87_r6_61) ? 1
                                                                                                                    : 0) << 0xa
                                                                                                                    | (x87_r7_161 == x87_r6_61 ? 1 : 0)
                                                                                                                    << 0xe | 0x3800) + 1) & 0x41)
                                                                                                                {
                                                                                                                    x87_r7_144 = v_228_1;
                                                                                                                    long double f59_1 = 0.0;
                                                                                                                    x87_r7_144 - f59_1;

                                                                                                                    if (!(*(&(
                                                                                                                        (x87_r7_144 < f59_1 ? 1 : 0) << 8 | (
                                                                                                                        FCMP_UO(x87_r7_144, f59_1) ? 1 : 0)
                                                                                                                        << 0xa
                                                                                                                        | (x87_r7_144 == f59_1 ? 1 : 0)
                                                                                                                        << 0xe | 0x3800) + 1) & 0x40))
                                                                                                                    {
                                                                                                                        float v_258_4 = v_208_3 - objC22[1];
                                                                                                                        float v_21c_3 = v_20c_3 - *objC22;
                                                                                                                        v_228_1 = (v_258_4 * v_250_1
                                                                                                                            - v_21c_3 * v_24c_1) / x87_r7_144;
                                                                                                                        long double x87_r7_188 = v_228_1;
                                                                                                                        long double f62_1 = 0.0;
                                                                                                                        x87_r7_188 - f62_1;

                                                                                                                        if (!(*(&(
                                                                                                                            (x87_r7_188 < f62_1 ? 1 : 0) << 8 | (
                                                                                                                            FCMP_UO(x87_r7_188, f62_1) ? 1 : 0)
                                                                                                                            << 0xa
                                                                                                                            | (x87_r7_188 == f62_1 ? 1 : 0)
                                                                                                                            << 0xe) + 1) & 1))
                                                                                                                        {
                                                                                                                            long double x87_r7_189 = v_228_1;
                                                                                                                            long double f65_1 = 1.0;
                                                                                                                            x87_r7_189 - f65_1;

                                                                                                                            if (*(&(
                                                                                                                                (x87_r7_189 < f65_1 ? 1 : 0) << 8 | (
                                                                                                                                FCMP_UO(x87_r7_189, f65_1) ? 1 : 0)
                                                                                                                                << 0xa
                                                                                                                                | (x87_r7_189 == f65_1 ? 1 : 0)
                                                                                                                                << 0xe) + 1) & 0x41)
                                                                                                                            {
                                                                                                                                long double x87_r7_190 = v_250_1;
                                                                                                                                long double f68_1 = 0f;
                                                                                                                                x87_r7_190 - f68_1;
                                                                                                                                long double x87_r7_191 = v_250_1;

                                                                                                                                if (*(&(
                                                                                                                                        (x87_r7_190 < f68_1 ? 1 : 0) << 8 | (
                                                                                                                                        FCMP_UO(x87_r7_190, f68_1) ? 1 : 0)
                                                                                                                                        << 0xa
                                                                                                                                        | (x87_r7_190 == f68_1 ? 1 : 0)
                                                                                                                                        << 0xe | 0x3800) + 1) & 1)
                                                                                                                                    x87_r7_191 = -(x87_r7_191);

                                                                                                                                long double x87_r6_102 = v_24c_1;
                                                                                                                                long double f71_1 = 0f;
                                                                                                                                x87_r6_102 - f71_1;
                                                                                                                                long double x87_r6_103 = v_24c_1;

                                                                                                                                if (*(&(
                                                                                                                                        (x87_r6_102 < f71_1 ? 1 : 0) << 8 | (
                                                                                                                                        FCMP_UO(x87_r6_102, f71_1) ? 1 : 0)
                                                                                                                                        << 0xa
                                                                                                                                        | (x87_r6_102 == f71_1 ? 1 : 0)
                                                                                                                                        << 0xe | 0x3000) + 1) & 1)
                                                                                                                                    x87_r6_103 = -(x87_r6_103);

                                                                                                                                x87_r7_191 - x87_r6_103;

                                                                                                                                if (*(&(
                                                                                                                                    (x87_r7_191 < x87_r6_103 ? 1 : 0) << 8
                                                                                                                                    | (FCMP_UO(x87_r7_191, x87_r6_103) ? 1
                                                                                                                                    : 0) << 0xa
                                                                                                                                    | (x87_r7_191 == x87_r6_103 ? 1 : 0)
                                                                                                                                    << 0xe | 0x3800) + 1) & 0x41)
                                                                                                                                {
                                                                                                                                    long double x87_r7_196 = v_24c_1;
                                                                                                                                    long double f74_1 = 0f;
                                                                                                                                    x87_r7_196 - f74_1;

                                                                                                                                    if (!(*(&(
                                                                                                                                        (x87_r7_196 < f74_1 ? 1 : 0) << 8 | (
                                                                                                                                        FCMP_UO(x87_r7_196, f74_1) ? 1 : 0)
                                                                                                                                        << 0xa
                                                                                                                                        | (x87_r7_196 == f74_1 ? 1 : 0)
                                                                                                                                        << 0xe) + 1) & 0x40))
                                                                                                                                    {
                                                                                                                                        x87_r7_144 = (v_258_4
                                                                                                                                            - v_1e4_1 * v_228_1) / v_24c_1;
                                                                                                                                        goto label_4c4467;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                                else
                                                                                                                                {
                                                                                                                                    x87_r7_144 = (v_21c_3
                                                                                                                                        - v_1e8_1 * v_228_1) / v_250_1;
                                                                                                                                label_4c4467:
                                                                                                                                    long double f76_1 = 0.0;
                                                                                                                                    x87_r7_144 - f76_1;

                                                                                                                                    if (!(*(&(
                                                                                                                                        (x87_r7_144 < f76_1 ? 1 : 0) << 8 | (
                                                                                                                                        FCMP_UO(x87_r7_144, f76_1) ? 1 : 0)
                                                                                                                                        << 0xa
                                                                                                                                        | (x87_r7_144 == f76_1 ? 1 : 0)
                                                                                                                                        << 0xe | 0x3800) + 1) & 1))
                                                                                                                                    {
                                                                                                                                        long double x87_r6_110 =
                                                                                                                                            x87_r7_144 + v_228_1;
                                                                                                                                        long double f78_1 = 1.0;
                                                                                                                                        x87_r6_110 - f78_1;

                                                                                                                                        if (*(&(
                                                                                                                                                (x87_r6_110 < f78_1 ? 1 : 0) << 8 | (
                                                                                                                                                FCMP_UO(x87_r6_110, f78_1) ? 1 : 0)
                                                                                                                                                << 0xa
                                                                                                                                                | (x87_r6_110 == f78_1 ? 1 : 0)
                                                                                                                                                << 0xe | 0x3800) + 1) & 0x41)
                                                                                                                                            goto label_4c4497;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                                else
                                                                                                                {
                                                                                                                    x87_r7_144 = x87_r7_136;
                                                                                                                    long double f60_1 = 0.0;
                                                                                                                    x87_r7_144 - f60_1;

                                                                                                                    if (!(*(&(
                                                                                                                        (x87_r7_144 < f60_1 ? 1 : 0) << 8 | (
                                                                                                                        FCMP_UO(x87_r7_144, f60_1) ? 1 : 0)
                                                                                                                        << 0xa
                                                                                                                        | (x87_r7_144 == f60_1 ? 1 : 0)
                                                                                                                        << 0xe | 0x3800) + 1) & 0x40))
                                                                                                                    {
                                                                                                                        v_260_5 = v_204_3 - objC22[2];
                                                                                                                        float v_21c_2 = v_20c_3 - *objC22;
                                                                                                                        v_228_1 = (v_260_5 * v_250_1
                                                                                                                            - v_21c_2 * v_248_1) / x87_r7_144;
                                                                                                                        long double x87_r7_179 = v_228_1;
                                                                                                                        long double f63_1 = 0.0;
                                                                                                                        x87_r7_179 - f63_1;

                                                                                                                        if (!(*(&(
                                                                                                                            (x87_r7_179 < f63_1 ? 1 : 0) << 8 | (
                                                                                                                            FCMP_UO(x87_r7_179, f63_1) ? 1 : 0)
                                                                                                                            << 0xa
                                                                                                                            | (x87_r7_179 == f63_1 ? 1 : 0)
                                                                                                                            << 0xe) + 1) & 1))
                                                                                                                        {
                                                                                                                            long double x87_r7_180 = v_228_1;
                                                                                                                            long double f66_1 = 1.0;
                                                                                                                            x87_r7_180 - f66_1;
