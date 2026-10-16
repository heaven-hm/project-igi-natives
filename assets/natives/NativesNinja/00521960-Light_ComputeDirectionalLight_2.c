#include "00521960-Light_ComputeDirectionalLight_2.h"
/* 0x00521960 Light_ComputeDirectionalLight_2 full linked: callers=1 callees=4 */
float* sub_521960(int32_t a1, int32_t a2, int32_t a3, int32_t a4, void* a5, float* a6, int32_t a7, float* a8, int32_t a9, float* a10, float a11, float a12, float a13, float a14, float* a15, float* a16, float* a17, int32_t a18, float* a19, int32_t a20, int32_t a21)

{
    long double x87_r7 = a15[2];
    long double temp2 = 0f;
    x87_r7 - temp2;

    if (!(*(&((x87_r7 < temp2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp2) ? 1 : 0) << 0xa
        | (x87_r7 == temp2 ? 1 : 0) << 0xe) + 1) & 1))
    {
        long double x87_r7_1 = a16[2];
        long double temp3_1 = 0f;
        x87_r7_1 - temp3_1;

        if (!(*(&((x87_r7_1 < temp3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp3_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp3_1 ? 1 : 0) << 0xe) + 1) & 1))
        {
            long double x87_r7_2 = a17[2];
            long double temp5_1 = 0f;
            x87_r7_2 - temp5_1;

            if (!(*(&((x87_r7_2 < temp5_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_2, temp5_1) ? 1 : 0) << 0xa
                    | (x87_r7_2 == temp5_1 ? 1 : 0) << 0xe) + 1) & 1))
                return sub_521110(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10,
                    a15, a16, a17, a18, a19, a20, a21);
        }
    }

    float var_38 = *a15;
    int32_t ecx_5 = a15[2];
    int32_t var_34 = a15[1];
    float eax_11 = *a16;
    int32_t var_30 = ecx_5;
    int32_t ecx_6 = a16[1];
    float var_2c = eax_11;
    int32_t var_28 = ecx_6;
    int32_t var_24 = a16[2];
    int32_t eax_13 = a17[1];
    float var_20 = *a17;
    int32_t var_1c = eax_13;
    int32_t var_18 = a17[2];
    int32_t i_6 = 3;
    int32_t edx_4 = *a18;
    int32_t var_58[0x2];
    var_58[1] = *(a18 + 4);
    var_58[0] = edx_4;
    int32_t edx_5 = a19[1];
    float var_50 = *a19;
    int32_t var_4c = edx_5;
    int32_t edx_6 = *(a20 + 4);
    int32_t var_48 = *a20;
    int32_t var_44 = edx_6;
    int32_t var_64;
    int32_t* ecx_11 = &var_64;
    int32_t* edx_7 = &var_30;
    int32_t i;

    do
    {
        long double x87_r7_3 = *edx_7;
        long double temp4_1 = 0f;
        x87_r7_3 - temp4_1;
        int32_t eax_17;

        eax_17 = !(*(&((x87_r7_3 < temp4_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_3, temp4_1) ? 1 : 0) << 0xa | (x87_r7_3 == temp4_1 ? 1 : 0) << 0xe) + 1)
            & 0x41) ? 0 : 1;

        *ecx_11 = eax_17;
        edx_7 = &edx_7[3];
        ecx_11 = &ecx_11[1];
        i = i_6;
        i_6 -= 1;
    } while (i != 1);
    void* var_60;
    int32_t var_5c;
    float* result = var_60 + var_5c + var_64;

    if (result == 3)
        return result;

    int32_t __saved_edi;
    int32_t var_68;

    if (result == 2)
    {
        int32_t esi_1 = 0;
        int32_t* eax_21 = &var_64;

        while (*eax_21)
        {
            esi_1 += 1;
            eax_21 = &eax_21[1];

            if (esi_1 >= 3)
            {
                esi_1 = var_68;
                break;
            }
        }

        int32_t i_1 = 0;
        int32_t (* edx_9)[0x2] = &var_58;
        int32_t* eax_22 = &var_30;

        do
        {
            if (i_1 != esi_1)
            {
                long double x87_r7_5 = *eax_22 + 4.09600019f;
                *eax_22 = x87_r7_5;
                long double x87_r7_6 = 4.09600019f - (&__saved_edi)[esi_1 * 3 + 0x12];
                long double x87_r6_4 = x87_r7_5 - (&__saved_edi)[esi_1 * 3 + 0x12];
                *eax_22 = 0x4083126f;
                long double x87_r7_7 = x87_r7_6 / x87_r6_4;
                eax_22[-2] = (eax_22[-2] - (&__saved_edi)[esi_1 * 3 + 0x10]) * x87_r7_7
                    + (&__saved_edi)[esi_1 * 3 + 0x10];
                eax_22[-1] = (eax_22[-1] - (&__saved_edi)[esi_1 * 3 + 0x11]) * x87_r7_7
                    + (&__saved_edi)[esi_1 * 3 + 0x11];
                *edx_9 = (*edx_9 - (&var_58)[esi_1][0]) * x87_r7_7 + (&var_58)[esi_1][0];
                var_54;
                (*edx_9)[1] = ((*edx_9)[1] - *(&var_54 + (esi_1 << 3))) * x87_r7_7
                    + *(&var_54 + (esi_1 << 3));
            }

            i_1 += 1;
            eax_22 = &eax_22[3];
            edx_9 = &edx_9[1];
        } while (i_1 < 3);

        int32_t (* ecx_15)[0x2] = &var_58;
        int32_t* eax_23 = &var_34;
        int32_t i_4 = 3;
        int32_t i_2;

        do
        {
            long double x87_r7_10 = 1f / eax_23[1];
            eax_23 = &eax_23[3];
            ecx_15 = &ecx_15[1];
            i_2 = i_4;
            i_4 -= 1;
            float var_6c_1 = x87_r7_10;
            eax_23[-2] = x87_r7_10;
            eax_23[-4] = var_6c_1 * eax_23[-4] * a13 + a11;
            eax_23[-3] = var_6c_1 * eax_23[-3] * a14 + a12;
            ecx_15[-1][0] = var_6c_1 * ecx_15[-1][0];
            (*ecx_15)[-1] = var_6c_1 * (*ecx_15)[-1];
        } while (i_2 != 1);
        return sub_521110(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, &var_38,
            &var_2c, &var_20, &var_58, &var_50, &var_48, a21);
    }

    int32_t esi_2 = 0;
    int32_t* eax_29 = &var_64;
    int32_t ebx_1;

    while (true)
    {
        if (*eax_29)
        {
            ebx_1 = esi_2;
            break;
        }

        esi_2 += 1;
        eax_29 = &eax_29[1];

        if (esi_2 >= 3)
        {
            ebx_1 = var_68;
            break;
        }
    }

    int32_t temp1_1 = (esi_2 + 1) % 3;
    int32_t temp1_2 = (esi_2 + 2) % 3;
    float var_14 = (&__saved_edi)[ebx_1 * 3 + 0x10];
    float edx_20 = (&__saved_edi)[ebx_1 * 3 + 0x11];
    float ecx_22 = (&__saved_edi)[ebx_1 * 3 + 0x12];
    float var_40 = (&__saved_edi)[ebx_1 * 2 + 8];
    float ecx_23 = (&__saved_edi)[ebx_1 * 2 + 9];
    long double x87_r7_24 = (&__saved_edi)[ebx_1 * 3 + 0x12] + 4.09600019f;
    (&__saved_edi)[ebx_1 * 3 + 0x12] = x87_r7_24;
    long double x87_r7_25 = 4.09600019f - (&__saved_edi)[temp1_1 * 3 + 0x12];
    long double x87_r6_24 = x87_r7_24 - (&__saved_edi)[temp1_1 * 3 + 0x12];
    (&__saved_edi)[ebx_1 * 3 + 0x12] = 0x4083126f;
    long double x87_r7_26 = x87_r7_25 / x87_r6_24;
    (&__saved_edi)[ebx_1 * 3 + 0x10] =
        ((&__saved_edi)[ebx_1 * 3 + 0x10] - (&__saved_edi)[temp1_1 * 3 + 0x10]) * x87_r7_26
        + (&__saved_edi)[temp1_1 * 3 + 0x10];
    (&__saved_edi)[ebx_1 * 3 + 0x11] =
        ((&__saved_edi)[ebx_1 * 3 + 0x11] - (&__saved_edi)[temp1_1 * 3 + 0x11]) * x87_r7_26
        + (&__saved_edi)[temp1_1 * 3 + 0x11];
    (&__saved_edi)[ebx_1 * 2 + 8] =
        ((&__saved_edi)[ebx_1 * 2 + 8] - (&__saved_edi)[temp1_1 * 2 + 8]) * x87_r7_26
        + (&__saved_edi)[temp1_1 * 2 + 8];
    (&__saved_edi)[ebx_1 * 2 + 9] =
        ((&__saved_edi)[ebx_1 * 2 + 9] - (&__saved_edi)[temp1_1 * 2 + 9]) * x87_r7_26
        + (&__saved_edi)[temp1_1 * 2 + 9];
    int32_t var_c_3 = 0x4083126f;
    long double x87_r7_32 = (4.09600019f - (&__saved_edi)[temp1_2 * 3 + 0x12])
        / (ecx_22 + 4.09600019f - (&__saved_edi)[temp1_2 * 3 + 0x12]);
    int32_t (* ecx_24)[0x2] = &var_58;
    int32_t i_5 = 4;
    var_14 = (var_14 - (&__saved_edi)[temp1_2 * 3 + 0x10]) * x87_r7_32
        + (&__saved_edi)[temp1_2 * 3 + 0x10];
    float var_10_2 = (edx_20 - (&__saved_edi)[temp1_2 * 3 + 0x11]) * x87_r7_32
        + (&__saved_edi)[temp1_2 * 3 + 0x11];
    var_40 =
        (var_40 - (&__saved_edi)[temp1_2 * 2 + 8]) * x87_r7_32 + (&__saved_edi)[temp1_2 * 2 + 8];
    int32_t* eax_39 = &var_34;
    float var_3c_2 =
        (ecx_23 - (&__saved_edi)[temp1_2 * 2 + 9]) * x87_r7_32 + (&__saved_edi)[temp1_2 * 2 + 9];
    int32_t i_3;

    do
    {
        long double x87_r7_35 = 1f / eax_39[1];
        eax_39 = &eax_39[3];
        ecx_24 = &ecx_24[1];
        i_3 = i_5;
        i_5 -= 1;
        float var_6c_3 = x87_r7_35;
        eax_39[-2] = x87_r7_35;
        eax_39[-4] = var_6c_3 * eax_39[-4] * a13 + a11;
        eax_39[-3] = var_6c_3 * eax_39[-3] * a14 + a12;
        ecx_24[-1][0] = var_6c_3 * ecx_24[-1][0];
        (*ecx_24)[-1] = var_6c_3 * (*ecx_24)[-1];
    } while (i_3 != 1);
    sub_521110(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, &var_38, &var_2c,
        &var_20, &var_58, &var_50, &var_48, a21);
    return sub_521110(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10,
        &(&__saved_edi)[temp1_2 * 3 + 0x10], &(&__saved_edi)[ebx_1 * 3 + 0x10], &var_14,
        &(&__saved_edi)[temp1_2 * 2 + 8], &(&__saved_edi)[ebx_1 * 2 + 8], &var_40, a21);
}
