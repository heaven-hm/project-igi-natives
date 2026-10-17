// Original IGI.EXE function: Light_ComputeDirectionalLight_2 (VA 0x00521960; static CFG gate PASS, CFG score 1.000).
#include "Light_ComputeDirectionalLight_2.h"
float* Light_ComputeDirectionalLight_2(int32_t a1, int32_t a2, int32_t a3, int32_t a4, void* a5, float* a6, int32_t a7, float* a8, int32_t a9, float* a10, float a11, float a12, float a13, float a14, float* a15, float* a16, float* a17, int32_t a18, float* a19, int32_t a20, int32_t a21)

{
    long double fpu7 = a15[2];
    long double f2 = 0f;
    fpu7 - f2;

    if (!(*(&((fpu7 < f2 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f2) ? 1 : 0) << 0xa
        | (fpu7 == f2 ? 1 : 0) << 0xe) + 1) & 1))
    {
        long double x87_r7_1 = a16[2];
        long double f3_1 = 0f;
        x87_r7_1 - f3_1;

        if (!(*(&((x87_r7_1 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f3_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == f3_1 ? 1 : 0) << 0xe) + 1) & 1))
        {
            long double x87_r7_2 = a17[2];
            long double f5_1 = 0f;
            x87_r7_2 - f5_1;

            if (!(*(&((x87_r7_2 < f5_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_2, f5_1) ? 1 : 0) << 0xa
                    | (x87_r7_2 == f5_1 ? 1 : 0) << 0xe) + 1) & 1))
                return Light_SampleLightmap(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10,
                    a15, a16, a17, a18, a19, a20, a21);
        }
    }

    float v_38 = *a15;
    int32_t objC5 = a15[2];
    int32_t v_34 = a15[1];
    float valA11 = *a16;
    int32_t v_30 = objC5;
    int32_t objC6 = a16[1];
    float v_2c = valA11;
    int32_t v_28 = objC6;
    int32_t v_24 = a16[2];
    int32_t valA13 = a17[1];
    float v_20 = *a17;
    int32_t v_1c = valA13;
    int32_t v_18 = a17[2];
    int32_t i_6 = 3;
    int32_t tmpD4 = *a18;
    int32_t v_58[0x2];
    v_58[1] = *(a18 + 4);
    v_58[0] = tmpD4;
    int32_t tmpD5 = a19[1];
    float v_50 = *a19;
    int32_t v_4c = tmpD5;
    int32_t tmpD6 = *(a20 + 4);
    int32_t v_48 = *a20;
    int32_t v_44 = tmpD6;
    int32_t v_64;
    int32_t* objC11 = &v_64;
    int32_t* tmpD7 = &v_30;
    int32_t i;

    do
    {
        long double x87_r7_3 = *tmpD7;
        long double f4_1 = 0f;
        x87_r7_3 - f4_1;
        int32_t valA17;

        valA17 = !(*(&((x87_r7_3 < f4_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_3, f4_1) ? 1 : 0) << 0xa | (x87_r7_3 == f4_1 ? 1 : 0) << 0xe) + 1)
            & 0x41) ? 0 : 1;

        *objC11 = valA17;
        tmpD7 = &tmpD7[3];
        objC11 = &objC11[1];
        i = i_6;
        i_6 -= 1;
    } while (i != 1);
    void* v_60;
    int32_t v_5c;
    float* result = v_60 + v_5c + v_64;

    if (result == 3)
        return result;

    int32_t saved_dst;
    int32_t v_68;

    if (result == 2)
    {
        int32_t srcS1 = 0;
        int32_t* valA21 = &v_64;

        while (*valA21)
        {
            srcS1 += 1;
            valA21 = &valA21[1];

            if (srcS1 >= 3)
            {
                srcS1 = v_68;
                break;
            }
        }

        int32_t i_1 = 0;
        int32_t (* tmpD9)[0x2] = &v_58;
        int32_t* valA22 = &v_30;

        do
        {
            if (i_1 != srcS1)
            {
                long double x87_r7_5 = *valA22 + 4.09600019f;
                *valA22 = x87_r7_5;
                long double x87_r7_6 = 4.09600019f - (&saved_dst)[srcS1 * 3 + 0x12];
                long double x87_r6_4 = x87_r7_5 - (&saved_dst)[srcS1 * 3 + 0x12];
                *valA22 = 0x4083126f;
                long double x87_r7_7 = x87_r7_6 / x87_r6_4;
                valA22[-2] = (valA22[-2] - (&saved_dst)[srcS1 * 3 + 0x10]) * x87_r7_7
                    + (&saved_dst)[srcS1 * 3 + 0x10];
                valA22[-1] = (valA22[-1] - (&saved_dst)[srcS1 * 3 + 0x11]) * x87_r7_7
                    + (&saved_dst)[srcS1 * 3 + 0x11];
                *tmpD9 = (*tmpD9 - (&v_58)[srcS1][0]) * x87_r7_7 + (&v_58)[srcS1][0];
                v_54;
                (*tmpD9)[1] = ((*tmpD9)[1] - *(&v_54 + (srcS1 << 3))) * x87_r7_7
                    + *(&v_54 + (srcS1 << 3));
            }

            i_1 += 1;
            valA22 = &valA22[3];
            tmpD9 = &tmpD9[1];
        } while (i_1 < 3);

        int32_t (* objC15)[0x2] = &v_58;
        int32_t* valA23 = &v_34;
        int32_t i_4 = 3;
        int32_t i_2;

        do
        {
            long double x87_r7_10 = 1f / valA23[1];
            valA23 = &valA23[3];
            objC15 = &objC15[1];
            i_2 = i_4;
            i_4 -= 1;
            float v_6c_1 = x87_r7_10;
            valA23[-2] = x87_r7_10;
            valA23[-4] = v_6c_1 * valA23[-4] * a13 + a11;
            valA23[-3] = v_6c_1 * valA23[-3] * a14 + a12;
            objC15[-1][0] = v_6c_1 * objC15[-1][0];
            (*objC15)[-1] = v_6c_1 * (*objC15)[-1];
        } while (i_2 != 1);
        return Light_SampleLightmap(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, &v_38,
            &v_2c, &v_20, &v_58, &v_50, &v_48, a21);
    }

    int32_t srcS2 = 0;
    int32_t* valA29 = &v_64;
    int32_t ctxB1;

    while (true)
    {
        if (*valA29)
        {
            ctxB1 = srcS2;
            break;
        }

        srcS2 += 1;
        valA29 = &valA29[1];

        if (srcS2 >= 3)
        {
            ctxB1 = v_68;
            break;
        }
    }

    int32_t f1_1 = (srcS2 + 1) % 3;
    int32_t f1_2 = (srcS2 + 2) % 3;
    float v_14 = (&saved_dst)[ctxB1 * 3 + 0x10];
    float tmpD20 = (&saved_dst)[ctxB1 * 3 + 0x11];
    float objC22 = (&saved_dst)[ctxB1 * 3 + 0x12];
    float v_40 = (&saved_dst)[ctxB1 * 2 + 8];
    float objC23 = (&saved_dst)[ctxB1 * 2 + 9];
    long double x87_r7_24 = (&saved_dst)[ctxB1 * 3 + 0x12] + 4.09600019f;
    (&saved_dst)[ctxB1 * 3 + 0x12] = x87_r7_24;
    long double x87_r7_25 = 4.09600019f - (&saved_dst)[f1_1 * 3 + 0x12];
    long double x87_r6_24 = x87_r7_24 - (&saved_dst)[f1_1 * 3 + 0x12];
    (&saved_dst)[ctxB1 * 3 + 0x12] = 0x4083126f;
    long double x87_r7_26 = x87_r7_25 / x87_r6_24;
    (&saved_dst)[ctxB1 * 3 + 0x10] =
        ((&saved_dst)[ctxB1 * 3 + 0x10] - (&saved_dst)[f1_1 * 3 + 0x10]) * x87_r7_26
        + (&saved_dst)[f1_1 * 3 + 0x10];
    (&saved_dst)[ctxB1 * 3 + 0x11] =
        ((&saved_dst)[ctxB1 * 3 + 0x11] - (&saved_dst)[f1_1 * 3 + 0x11]) * x87_r7_26
        + (&saved_dst)[f1_1 * 3 + 0x11];
    (&saved_dst)[ctxB1 * 2 + 8] =
        ((&saved_dst)[ctxB1 * 2 + 8] - (&saved_dst)[f1_1 * 2 + 8]) * x87_r7_26
        + (&saved_dst)[f1_1 * 2 + 8];
    (&saved_dst)[ctxB1 * 2 + 9] =
        ((&saved_dst)[ctxB1 * 2 + 9] - (&saved_dst)[f1_1 * 2 + 9]) * x87_r7_26
        + (&saved_dst)[f1_1 * 2 + 9];
    int32_t v_c_3 = 0x4083126f;
    long double x87_r7_32 = (4.09600019f - (&saved_dst)[f1_2 * 3 + 0x12])
        / (objC22 + 4.09600019f - (&saved_dst)[f1_2 * 3 + 0x12]);
    int32_t (* objC24)[0x2] = &v_58;
    int32_t i_5 = 4;
    v_14 = (v_14 - (&saved_dst)[f1_2 * 3 + 0x10]) * x87_r7_32
        + (&saved_dst)[f1_2 * 3 + 0x10];
    float v_10_2 = (tmpD20 - (&saved_dst)[f1_2 * 3 + 0x11]) * x87_r7_32
        + (&saved_dst)[f1_2 * 3 + 0x11];
    v_40 =
        (v_40 - (&saved_dst)[f1_2 * 2 + 8]) * x87_r7_32 + (&saved_dst)[f1_2 * 2 + 8];
    int32_t* valA39 = &v_34;
    float v_3c_2 =
        (objC23 - (&saved_dst)[f1_2 * 2 + 9]) * x87_r7_32 + (&saved_dst)[f1_2 * 2 + 9];
    int32_t i_3;

    do
    {
        long double x87_r7_35 = 1f / valA39[1];
        valA39 = &valA39[3];
        objC24 = &objC24[1];
        i_3 = i_5;
        i_5 -= 1;
        float v_6c_3 = x87_r7_35;
        valA39[-2] = x87_r7_35;
        valA39[-4] = v_6c_3 * valA39[-4] * a13 + a11;
        valA39[-3] = v_6c_3 * valA39[-3] * a14 + a12;
        objC24[-1][0] = v_6c_3 * objC24[-1][0];
        (*objC24)[-1] = v_6c_3 * (*objC24)[-1];
    } while (i_3 != 1);
    Light_SampleLightmap(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, &v_38, &v_2c,
        &v_20, &v_58, &v_50, &v_48, a21);
    return Light_SampleLightmap(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10,
        &(&saved_dst)[f1_2 * 3 + 0x10], &(&saved_dst)[ctxB1 * 3 + 0x10], &v_14,
        &(&saved_dst)[f1_2 * 2 + 8], &(&saved_dst)[ctxB1 * 2 + 8], &v_40, a21);
}
