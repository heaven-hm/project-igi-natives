#include "00521110-Light_SampleLightmap.h"
/* 0x00521110 Light_SampleLightmap full linked: callers=5 callees=0 */
float* sub_521110(int32_t a1, int32_t a2, int32_t a3, int32_t a4, void* a5, float* a6, int32_t a7, float* a8, int32_t a9, float* a10, float* a11, float* a12, float* a13, int32_t a14, float* a15, int32_t a16, int32_t a17)

{
    float* esi = a11;
    float* edi = a12;
    long double x87_r7 = esi[1];
    long double temp1 = edi[1];
    x87_r7 - temp1;
    int32_t var_24 = 0;
    long double x87_r7_1;
    long double temp3_1;

    if (!(*(&((x87_r7 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp1) ? 1 : 0) << 0xa
        | (x87_r7 == temp1 ? 1 : 0) << 0xe) + 1) & 0x41))
    {
        x87_r7_1 = esi[1];
        temp3_1 = a13[1];
        x87_r7_1 - temp3_1;
    }

    float* result_1;

    if (*(&((x87_r7 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp1) ? 1 : 0) << 0xa
        | (x87_r7 == temp1 ? 1 : 0) << 0xe) + 1) & 0x41 || *(&((x87_r7_1 < temp3_1 ? 1 : 0) << 8
        | (FCMP_UO(x87_r7_1, temp3_1) ? 1 : 0) << 0xa | (x87_r7_1 == temp3_1 ? 1 : 0) << 0xe) + 1)
        & 0x41)
    {
        long double x87_r7_2 = edi[1];
        long double temp2_1 = a13[1];
        x87_r7_2 - temp2_1;

        if (*(&((x87_r7_2 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, temp2_1) ? 1 : 0) << 0xa
            | (x87_r7_2 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x41)
        {
            a11 = a13;
            result_1 = a16;
        }
        else
        {
            a11 = edi;
            result_1 = a15;
        }
    }
    else
    {
        a11 = esi;
        result_1 = a14;
    }

    long double x87_r7_3 = esi[1];
    long double temp4 = edi[1];
    x87_r7_3 - temp4;
    long double x87_r7_4;
    long double temp6_1;

    if (*(&((x87_r7_3 < temp4 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, temp4) ? 1 : 0) << 0xa
        | (x87_r7_3 == temp4 ? 1 : 0) << 0xe) + 1) & 1)
    {
        x87_r7_4 = esi[1];
        temp6_1 = a13[1];
        x87_r7_4 - temp6_1;
    }

    float* var_20;
    float* edx_2;
    float* ebx;

    if (!(*(&((x87_r7_3 < temp4 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, temp4) ? 1 : 0) << 0xa
        | (x87_r7_3 == temp4 ? 1 : 0) << 0xe) + 1) & 1) || !(*(&((x87_r7_4 < temp6_1 ? 1 : 0) << 8
        | (FCMP_UO(x87_r7_4, temp6_1) ? 1 : 0) << 0xa | (x87_r7_4 == temp6_1 ? 1 : 0) << 0xe) + 1)
        & 1))
    {
        long double x87_r7_5 = edi[1];
        long double temp5_1 = a13[1];
        x87_r7_5 - temp5_1;

        if (!(*(&((x87_r7_5 < temp5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, temp5_1) ? 1 : 0) << 0xa
            | (x87_r7_5 == temp5_1 ? 1 : 0) << 0xe) + 1) & 1))
        {
            edx_2 = a16;
            ebx = a13;
            var_20 = ebx;
        }
        else
        {
            edx_2 = a15;
            ebx = edi;
            var_20 = ebx;
        }
    }
    else
    {
        edx_2 = a14;
        ebx = esi;
        var_20 = ebx;
    }

    float* result = a11;
    long double x87_r7_6 = ebx[1];
    long double temp7 = result[1];
    x87_r7_6 - temp7;
    result = (x87_r7_6 < temp7 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, temp7) ? 1 : 0) << 0xa
        | (x87_r7_6 == temp7 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
    {
        float* var_58_1;
        float* ecx_1;

        if (esi != ebx && esi != a11)
        {
            ecx_1 = a14;
            edi = esi;
            var_58_1 = edi;
        }
        else if (edi == ebx || edi == a11)
        {
            edi = a13;
            ecx_1 = a16;
            var_58_1 = edi;
        }
        else
        {
            ecx_1 = a15;
            var_58_1 = edi;
        }

        int32_t var_7c_1 = edi[1];
        long double x87_r7_9 = (edi[1] - ebx[1]) / (a11[1] - ebx[1]);
        float var_80 = (*a11 - *ebx) * x87_r7_9 + *ebx;
        result = result_1;
        float var_78_1 = (a11[2] - ebx[2]) * x87_r7_9 + ebx[2];
        float var_88 = (*result - *edx_2) * x87_r7_9 + *edx_2;
        float var_84_1 = (result[1] - edx_2[1]) * x87_r7_9 + edx_2[1];
        long double x87_r7_11 = *edi;
        long double temp8_1 = var_80;
        x87_r7_11 - temp8_1;
        result = (x87_r7_11 < temp8_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_11, temp8_1) ? 1 : 0) << 0xa
            | (x87_r7_11 == temp8_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 1))
        {
            long double x87_r7_12 = *edi;
            long double temp9_1 = var_80;
            x87_r7_12 - temp9_1;
            result = (x87_r7_12 < temp9_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_12, temp9_1) ? 1 : 0) << 0xa
                | (x87_r7_12 == temp9_1 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 0x41))
            {
                a15 = edi;
                a13 = &var_80;
                a12 = &var_88;
                goto label_52128e;
            }
        }
        else
        {
            a12 = ecx_1;
            a13 = edi;
            a15 = &var_80;
            ecx_1 = &var_88;
        label_52128e:
            void* ecx_2 = a5 - 1;
            void* ecx_4 = a6 - 1;
            int32_t eflags_1;
            int32_t eax_4;
            eax_4 = __bsr_gprv_memv(a5);
            long double x87_r7_13 = ebx[1];
            long double temp10_1 = 0f;
            x87_r7_13 - temp10_1;
            long double x87_r7_14 = ebx[1];
            int32_t esi_2;

            esi_2 = *(&((x87_r7_13 < temp10_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_13, temp10_1) ? 1 : 0) << 0xa
                | (x87_r7_13 == temp10_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1 ? x87_r7_14
                : x87_r7_14 + 0.999989986f;

            long double x87_r7_16 = edi[1];
            long double temp11_1 = 0f;
            x87_r7_16 - temp11_1;
            long double x87_r7_17 = edi[1];
            a14 = esi_2;
            int64_t var_c_3;
            void* eax_6;

            if (*(&((x87_r7_16 < temp11_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_16, temp11_1) ? 1 : 0) << 0xa
                | (x87_r7_16 == temp11_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
            {
                var_c_3 = x87_r7_17 - 0.999989986f;
                eax_6 = var_c_3;
            }
            else
            {
                var_c_3 = x87_r7_17;
                eax_6 = var_c_3;
            }

            float* eax_7 = eax_6 + 1;

            if (esi_2 < a8)
            {
                esi_2 = a8;
                a14 = esi_2;
            }

            if (eax_7 > a10)
                eax_7 = a10;

            double var_60;
            double var_54;
            float* ecx_13;
            long double x87_r6_36;
            long double x87_r7_25;

            if (esi_2 >= eax_7)
            {
                x87_r7_25 = var_c_3;
                x87_r6_36 = var_c_3;
                ecx_13 = a12;
            }
            else
            {
                var_24 = 1;
                long double x87_r7_20 = *a15 - *a13;
                long double x87_r6_20 = edi[1] - ebx[1];
                long double x87_r5_3;

                if (a13 != edi)
                    x87_r5_3 = (*a11 - *ebx) / (a11[1] - ebx[1]);
                else
                    x87_r5_3 = (*a13 - *ebx) / x87_r6_20;

                var_60 = x87_r5_3;
                long double x87_r5_8;

                if (a15 != edi)
                    x87_r5_8 = (*a11 - *ebx) / (a11[1] - ebx[1]);
                else
                    x87_r5_8 = (*a15 - *ebx) / x87_r6_20;

                var_54 = x87_r5_8;
                ecx_13 = a12;
                double var_6c_1 = (a13[2] - var_20[2]) / x87_r6_20;
                double var_74_1 = (*ecx_13 - *edx_2) / x87_r6_20;
                double var_1c_1 = (ecx_13[1] - edx_2[1]) / x87_r6_20;
                double var_3c_1 = (a15[2] - a13[2]) / x87_r7_20;
                double var_48_1 = (*ecx_1 - *ecx_13) / x87_r7_20;
                int32_t ebx_5 = esi_2 * a3;
                a6 = eax_7 - esi_2;
                double var_34_1 = (ecx_1[1] - ecx_13[1]) / x87_r7_20;
                long double x87_r7_23 = a14 - var_20[1];
                double var_14_1 = x87_r7_23;
                x87_r7_25 = x87_r7_23 * var_60 + *var_20;
                long double x87_r6_33 = var_14_1 * var_54 + *var_20;
                long double x87_r5_22 = var_14_1 * var_6c_1 + var_20[2];
                double var_2c_1 = var_14_1 * var_74_1 + *edx_2;
                double var_14_2 = var_14_1 * var_1c_1 + edx_2[1];
                bool cond:2_1;

                do
                {
                    long double temp14_1 = 0.0;
                    x87_r7_25 - temp14_1;
                    int32_t edi_2;

                    edi_2 = *(&((x87_r7_25 < temp14_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_25, temp14_1) ? 1 : 0) << 0xa
                        | (x87_r7_25 == temp14_1 ? 1 : 0) << 0xe | 0x2000) + 1) & 1 ? x87_r7_25
                        : x87_r7_25 + 0.99998998641967773;

                    long double temp15_1 = 0.0;
                    x87_r6_33 - temp15_1;
                    a14 = edi_2;
                    int32_t eax_9;

                    eax_9 = *(&((x87_r6_33 < temp15_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_33, temp15_1) ? 1 : 0) << 0xa
                        | (x87_r6_33 == temp15_1 ? 1 : 0) << 0xe | 0x2000) + 1) & 1
                        ? x87_r6_33 - 0.99998998641967773 : x87_r6_33;

                    int32_t eax_10 = eax_9 + 1;

                    if (edi_2 < a7)
                    {
                        edi_2 = a7;
                        a14 = edi_2;
                    }

                    if (eax_10 > a9)
                        eax_10 = a9;

                    long double x87_r2_3;
                    long double x87_r3_3;
                    long double x87_r4_20;

                    if (!a17)
                    {
                        if (edi_2 < eax_10)
                        {
                            int32_t edx_11 = (edi_2 + ebx_5) << 2;
                            long double x87_r4_23 = a14 - x87_r7_25;
                            float* esi_4 = edx_11 + a2;
                            double var_c_11 = x87_r4_23;
                            int32_t* edx_13 = edx_11 - esi_4 + a1;
                            int32_t i_5 = eax_10 - edi_2;
                            x87_r4_20 = x87_r4_23 * var_3c_1 + x87_r5_22;
                            x87_r3_3 = var_c_11 * var_48_1 + var_2c_1;
                            x87_r2_3 = var_c_11 * var_34_1 + var_14_2;
                            int32_t i;

                            do
                            {
                                long double x87_r1_5 = *esi_4;
                                x87_r4_20 - x87_r1_5;

                                if (!(*(&((x87_r4_20 < x87_r1_5 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r4_20, x87_r1_5) ? 1 : 0) << 0xa
                                    | (x87_r4_20 == x87_r1_5 ? 1 : 0) << 0xe | 0x1000) + 1) & 0x41))
                                {
                                    long double x87_r1_7 = 1.0 / x87_r4_20;
                                    *(edx_13 + esi_4) = *(a4 + (((((x87_r1_7 * x87_r2_3) & ecx_4)
                                        << (eax_4 & 0x1f)) + ((x87_r1_7 * x87_r3_3) & ecx_2)) << 2));
                                    *esi_4 = x87_r4_20;
                                }

                                x87_r4_20 = x87_r4_20 + var_3c_1;
                                x87_r3_3 = x87_r3_3 + var_48_1;
                                x87_r2_3 = x87_r2_3 + var_34_1;
                                esi_4 = &esi_4[1];
                                i = i_5;
                                i_5 -= 1;
                            } while (i != 1);
                            ecx_13 = a12;
                        }
                    }
                    else if (edi_2 < eax_10)
                    {
                        int32_t edx_7 = (edi_2 + ebx_5) << 2;
                        long double x87_r4_18 = a14 - x87_r7_25;
                        float* esi_3 = edx_7 + a2;
                        double var_c_8 = x87_r4_18;
                        int32_t* edx_9 = edx_7 - esi_3 + a1;
                        int32_t i_4 = eax_10 - edi_2;
                        x87_r4_20 = x87_r4_18 * var_3c_1 + x87_r5_22;
                        x87_r3_3 = var_c_8 * var_48_1 + var_2c_1;
                        x87_r2_3 = var_c_8 * var_34_1 + var_14_2;
                        int32_t i_1;

                        do
                        {
                            long double x87_r1_1 = *esi_3;
                            x87_r4_20 - x87_r1_1;

                            if (*(&((x87_r4_20 < x87_r1_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r4_20, x87_r1_1) ? 1 : 0) << 0xa
                                | (x87_r4_20 == x87_r1_1 ? 1 : 0) << 0xe | 0x1000) + 1) & 1)
                            {
                                *(edx_9 + esi_3) = *(a4 + ((((x87_r2_3 & ecx_4) << (eax_4 & 0x1f))
                                    + (x87_r3_3 & ecx_2)) << 2));
                                *esi_3 = x87_r4_20;
                            }

                            x87_r4_20 = x87_r4_20 + var_3c_1;
                            x87_r3_3 = x87_r3_3 + var_48_1;
                            x87_r2_3 = x87_r2_3 + var_34_1;
                            esi_3 = &esi_3[1];
                            i_1 = i_4;
                            i_4 -= 1;
                        } while (i_1 != 1);
                        ecx_13 = a12;
                    }
                    x87_r7_25 = x87_r7_25 + var_60;
                    x87_r6_33 = x87_r6_33 + var_54;
                    x87_r5_22 = x87_r5_22 + var_6c_1;
                    ebx_5 += a3;
                    cond:2_1 = a6 != 1;
                    a6 -= 1;
                    var_2c_1 = var_2c_1 + var_74_1;
                    var_14_2 = var_14_2 + var_1c_1;
                } while (cond:2_1);
                var_c_3 = x87_r6_33;
                x87_r6_36 = x87_r6_33;
            }

            long double x87_r5_32 = var_58_1[1];
            long double temp12_1 = 0f;
            x87_r5_32 - temp12_1;
            long double x87_r5_33 = var_58_1[1];

            a14 = *(&((x87_r5_32 < temp12_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r5_32, temp12_1) ? 1 : 0) << 0xa
                | (x87_r5_32 == temp12_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1 ? x87_r5_33
                : x87_r5_33 + 0.999989986f;

            long double x87_r5_35 = a11[1];
            long double temp13_1 = 0f;
            x87_r5_35 - temp13_1;
            long double x87_r5_36 = a11[1];
            int32_t edi_3;

            edi_3 = *(&((x87_r5_35 < temp13_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r5_35, temp13_1) ? 1 : 0) << 0xa
                | (x87_r5_35 == temp13_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1 ? x87_r5_36 - 0.999989986f
                : x87_r5_36;

            float* result_2 = edi_3 + 1;

            if (a14 < a8)
                a14 = a8;

            result = a10;

            if (result_2 > result)
                result_2 = result;

            if (a14 < result_2)
            {
                float* ebx_7 = a15;
                long double x87_r5_39 = *ebx_7 - *a13;
                long double x87_r4_32 = a11[1] - var_58_1[1];

                if (a13 != var_58_1)
                {
                    if (!var_24)
                        var_60 = (*a11 - *var_20) / (a11[1] - var_20[1]);

                    ebx_7 = a15;
                }
                else
                    var_60 = (*a11 - *a13) / x87_r4_32;

                if (ebx_7 != var_58_1)
                {
                    if (!var_24)
                        var_54 = (*a11 - *var_20) / (a11[1] - var_20[1]);

                    ebx_7 = a15;
                }
                else
                    var_54 = (*a11 - *ebx_7) / x87_r4_32;

                double var_6c_2 = (a11[2] - a13[2]) / x87_r4_32;
                double var_74_2 = (*result_1 - *ecx_13) / x87_r4_32;
                double var_1c_6 = (result_1[1] - ecx_13[1]) / x87_r4_32;
                double var_3c_2 = (ebx_7[2] - a13[2]) / x87_r5_39;
                double var_48_2 = (*ecx_1 - *ecx_13) / x87_r5_39;
                double var_34_2 = (ecx_1[1] - ecx_13[1]) / x87_r5_39;
                double var_14_3 = a14 - var_58_1[1];

                if (a13 == var_58_1 || !var_24)
                {
                    x87_r7_25 = var_14_3 * var_60 + *a13;
                    x87_r6_36 = var_c_3;
                }

                if (ebx_7 == var_58_1 || !var_24)
                    x87_r6_36 = var_14_3 * var_54 + *ebx_7;

                long double x87_r5_45 = var_14_3 * var_6c_2 + a13[2];
                result = a14;
                float* ebx_13 = result * a3;
                double var_2c_2 = var_14_3 * var_74_2 + *ecx_13;
                a15 = ebx_13;
                a8 = result_2 - result;
                double var_14_4 = var_14_3 * var_1c_6 + ecx_13[1];
                bool cond:4_1;

                do
                {
                    long double temp19_1 = 0.0;
                    x87_r7_25 - temp19_1;
                    int32_t edi_5;

                    edi_5 = *(&((x87_r7_25 < temp19_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_25, temp19_1) ? 1 : 0) << 0xa
                        | (x87_r7_25 == temp19_1 ? 1 : 0) << 0xe | 0x2000) + 1) & 1 ? x87_r7_25
                        : x87_r7_25 + 0.99998998641967773;

                    long double temp20_1 = 0.0;
                    x87_r6_36 - temp20_1;
                    a14 = edi_5;
                    int32_t eax_31;

                    eax_31 = *(&((x87_r6_36 < temp20_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_36, temp20_1) ? 1 : 0) << 0xa
                        | (x87_r6_36 == temp20_1 ? 1 : 0) << 0xe | 0x2000) + 1) & 1
                        ? x87_r6_36 - 0.99998998641967773 : x87_r6_36;

                    int32_t eax_32 = eax_31 + 1;

                    if (edi_5 < a7)
                    {
                        edi_5 = a7;
                        a14 = edi_5;
                    }

                    if (eax_32 > a9)
                        eax_32 = a9;

                    long double x87_r2_25;
                    long double x87_r3_32;
                    long double x87_r4_58;

                    if (!a17)
                    {
                        if (edi_5 < eax_32)
                        {
                            int32_t edx_26 = (edi_5 + ebx_13) << 2;
                            long double x87_r4_61 = a14 - x87_r7_25;
                            float* esi_7 = edx_26 + a2;
                            double var_c_21 = x87_r4_61;
                            int32_t* edx_28 = edx_26 - esi_7 + a1;
                            x87_r4_58 = x87_r4_61 * var_3c_2 + x87_r5_45;
                            int32_t i_7 = eax_32 - edi_5;
                            x87_r3_32 = var_c_21 * var_48_2 + var_2c_2;
                            x87_r2_25 = var_c_21 * var_34_2 + var_14_4;
                            int32_t i_2;

                            do
                            {
                                long double x87_r1_14 = *esi_7;
                                x87_r4_58 - x87_r1_14;

                                if (!(*(&((x87_r4_58 < x87_r1_14 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r4_58, x87_r1_14) ? 1 : 0) << 0xa
                                    | (x87_r4_58 == x87_r1_14 ? 1 : 0) << 0xe | 0x1000) + 1) & 0x41))
                                {
                                    long double x87_r1_16 = 1.0 / x87_r4_58;
                                    ebx_13 = a15;
                                    *(edx_28 + esi_7) = *(a4 + (((((x87_r1_16 * x87_r2_25)
                                        & ecx_4) << (eax_4 & 0x1f))
                                        + ((x87_r1_16 * x87_r3_32) & ecx_2)) << 2));
                                    *esi_7 = x87_r4_58;
                                }

                                x87_r4_58 = x87_r4_58 + var_3c_2;
                                x87_r3_32 = x87_r3_32 + var_48_2;
                                x87_r2_25 = x87_r2_25 + var_34_2;
                                esi_7 = &esi_7[1];
                                i_2 = i_7;
                                i_7 -= 1;
                            } while (i_2 != 1);
                        }
                    }
                    else if (edi_5 < eax_32)
                    {
                        int32_t edx_22 = (edi_5 + ebx_13) << 2;
                        long double x87_r4_56 = a14 - x87_r7_25;
                        float* esi_6 = edx_22 + a2;
                        double var_c_18 = x87_r4_56;
                        int32_t* edx_24 = edx_22 - esi_6 + a1;
                        void* i_6 = eax_32 - edi_5;
                        x87_r4_58 = x87_r4_56 * var_3c_2 + x87_r5_45;
                        x87_r3_32 = var_c_18 * var_48_2 + var_2c_2;
                        x87_r2_25 = var_c_18 * var_34_2 + var_14_4;
                        void* i_3;

                        do
                        {
                            long double x87_r1_10 = *esi_6;
                            x87_r4_58 - x87_r1_10;

                            if (*(&((x87_r4_58 < x87_r1_10 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r4_58, x87_r1_10) ? 1 : 0) << 0xa
                                | (x87_r4_58 == x87_r1_10 ? 1 : 0) << 0xe | 0x1000) + 1) & 1)
                            {
                                *(edx_24 + esi_6) = *(a4 + ((((x87_r2_25 & ecx_4)
                                    << (eax_4 & 0x1f)) + (x87_r3_32 & ecx_2)) << 2));
                                *esi_6 = x87_r4_58;
                            }

                            x87_r4_58 = x87_r4_58 + var_3c_2;
                            x87_r3_32 = x87_r3_32 + var_48_2;
                            x87_r2_25 = x87_r2_25 + var_34_2;
                            esi_6 = &esi_6[1];
                            i_3 = i_6;
                            i_6 -= 1;
                        } while (i_3 != 1);
                    }
                    x87_r7_25 = x87_r7_25 + var_60;
                    x87_r6_36 = x87_r6_36 + var_54;
                    x87_r5_45 = x87_r5_45 + var_6c_2;
                    ebx_13 += a3;
                    result = a8 - 1;
                    cond:4_1 = a8 != 1;
                    a15 = ebx_13;
                    a8 = result;
                    var_2c_2 = var_2c_2 + var_74_2;
                    var_14_4 = var_14_4 + var_1c_6;
                } while (cond:4_1);
            }
        }
    }

    return result;
}
