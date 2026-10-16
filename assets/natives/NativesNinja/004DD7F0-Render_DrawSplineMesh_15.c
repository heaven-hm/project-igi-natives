#include "004DD7F0-Render_DrawSplineMesh_15.h"
/* 0x004dd7f0 Render_DrawSplineMesh_15 full linked: callers=1 callees=5 */
int32_t sub_4dd7f0(void* a1, int32_t a2, int32_t a3, float* a4, float* a5, float* a6, float* a7)

{
    float var_b24 = 3.40282347e+38f;
    float var_b20 = 3.40282347e+38f;
    float var_b1c = -3.40282347e+38f;
    float var_b18 = -3.40282347e+38f;
    int32_t var_b10 = 0;
    void* ebp = *(*(*(*(a1 + 0x6c) + (a2 << 2)) + 0xc) + 0xc);
    int32_t edx_1 = *(ebp + 0x98);
    int32_t ecx_1 = a3 * 5;
    int32_t* ebx = edx_1 + (ecx_1 << 2);
    int32_t* var_b14 = ebx;

    if (*(*(edx_1 + (ecx_1 << 2) + 0x10) + g_a5e354 + 0x14c))
    {
        int32_t edx_3 = ebx[2] * 3;
        int32_t eax_5 = *(ebp + 0x90);
        int32_t edx_4 = *(ebp + 0x94);
        int32_t edi_2 = *(eax_5 + (edx_3 << 2) + 4) * 3;
        int32_t ecx_4 = *(eax_5 + (edx_3 << 2)) * 3;
        long double x87_r7_2 = *(edx_4 + (edi_2 << 2)) - *(edx_4 + (ecx_4 << 2));
        float* ecx_5 = edx_4 + (ecx_4 << 2);
        int32_t eax_8 = *(eax_5 + (edx_3 << 2) + 8) * 3;
        long double x87_r6_2 = *(edx_4 + (edi_2 << 2) + 4) - ecx_5[1];
        long double x87_r5_2 = *(edx_4 + (edi_2 << 2) + 8) - ecx_5[2];
        void* eax_9 = edx_4 + (eax_8 << 2);
        float var_b60 = *(edx_4 + (eax_8 << 2)) - *ecx_5;
        float var_b5c_1 = *(eax_9 + 4) - ecx_5[1];
        long double x87_r4_6 = *(eax_9 + 8) - ecx_5[2];
        float var_b70 = x87_r4_6 * x87_r6_2 - var_b5c_1 * x87_r5_2;
        float var_b6c_1 = -((x87_r4_6 * x87_r7_2 - var_b60 * x87_r5_2));
        long double x87_r7_4 = x87_r7_2 * var_b5c_1 - var_b60 * x87_r6_2;
        float var_b4c =
            var_b70 * *(a1 + 0x70) + x87_r7_4 * *(a1 + 0x78) + var_b6c_1 * *(a1 + 0x74);
        long double x87_r6_9 = var_b70 * *(a1 + 0x7c);
        long double x87_r5_12 = x87_r7_4 * *(a1 + 0x84);
        float var_b40 = var_b4c;
        float var_b48_1 = x87_r6_9 + x87_r5_12 + var_b6c_1 * *(a1 + 0x80);
        float var_b3c_1 = var_b48_1;
        float var_b44_1 =
            var_b70 * *(a1 + 0x88) + x87_r7_4 * *(a1 + 0x90) + var_b6c_1 * *(a1 + 0x8c);
        long double x87_r7_8 = var_b4c;
        long double temp1_1 = 0f;
        x87_r7_8 - temp1_1;
        float var_b38_1 = var_b44_1;

        if (!(*(&((x87_r7_8 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_8, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_8 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
        label_4dd9aa:
            long double x87_r7_11 = var_b44_1;
            long double x87_r6_18 = var_b48_1;
            long double x87_r5_15 = var_b4c;
            long double x87_r7_13 =
                1.0 / sqrtl(x87_r5_15 * x87_r5_15 + x87_r6_18 * x87_r6_18 + x87_r7_11 * x87_r7_11);
            var_b40 = var_b4c * x87_r7_13;
            var_b3c_1 = var_b3c_1 * x87_r7_13;
            var_b38_1 = var_b38_1 * x87_r7_13;
        }
        else
        {
            long double x87_r7_9 = var_b48_1;
            long double temp2_1 = 0f;
            x87_r7_9 - temp2_1;

            if (!(*(&((x87_r7_9 < temp2_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_9, temp2_1) ? 1 : 0) << 0xa
                    | (x87_r7_9 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_4dd9aa;

            long double x87_r7_10 = var_b44_1;
            long double temp4_1 = 0f;
            x87_r7_10 - temp4_1;

            if (!(*(&((x87_r7_10 < temp4_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_10, temp4_1) ? 1 : 0) << 0xa
                    | (x87_r7_10 == temp4_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_4dd9aa;
        }

        float var_b30_1 =
            ecx_5[1] * *(a1 + 0x80) + ecx_5[2] * *(a1 + 0x84) + *ecx_5 * *(a1 + 0x7c);
        float var_b2c_1 =
            *(a1 + 0x88) * *ecx_5 + *(a1 + 0x90) * ecx_5[2] + *(a1 + 0x8c) * ecx_5[1];
        double var_b00_1 = var_b30_1 + *(a1 + 0x28);
        long double x87_r7_20 = *(a1 + 0x70) * *ecx_5 + *(a1 + 0x78) * ecx_5[2]
            + *(a1 + 0x74) * ecx_5[1] + *(a1 + 0x20) - g_bcab08;
        float var_b64_1 = x87_r7_20;
        long double x87_r6_43 = var_b00_1 - g_bcab10;
        float var_b50_1 = x87_r6_43;
        long double x87_r5_26 = var_b2c_1 + *(a1 + 0x30) - g_bcab18;
        float var_b54_1 = x87_r5_26;
        long double temp3_1 = 0f;
        x87_r7_20 - temp3_1;

        if (!(*(&((x87_r7_20 < temp3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_20, temp3_1) ? 1 : 0) << 0xa
            | (x87_r7_20 == temp3_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x40))
        {
        label_4ddae6:
            long double x87_r4_20 =
                1.0 / sqrtl(x87_r7_20 * x87_r7_20 + x87_r6_43 * x87_r6_43 + x87_r5_26 * x87_r5_26);
            x87_r7_20 = x87_r7_20 * x87_r4_20;
            x87_r6_43 = x87_r6_43 * x87_r4_20;
            x87_r5_26 = x87_r5_26 * x87_r4_20;
        }
        else
        {
            long double temp5_1 = 0f;
            x87_r6_43 - temp5_1;

            if (!(*(&((x87_r6_43 < temp5_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_43, temp5_1) ? 1 : 0) << 0xa
                    | (x87_r6_43 == temp5_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x40))
                goto label_4ddae6;

            long double temp7_1 = 0f;
            x87_r5_26 - temp7_1;

            if (!(*(&((x87_r5_26 < temp7_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r5_26, temp7_1) ? 1 : 0) << 0xa
                    | (x87_r5_26 == temp7_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x40))
                goto label_4ddae6;
        }

        long double x87_r7_23 = x87_r5_26 * var_b38_1 + x87_r6_43 * var_b3c_1 + x87_r7_20 * var_b40;
        long double temp6_1 = 0f;
        x87_r7_23 - temp6_1;
        float var_b34;
        long double x87_r4_34;
        long double temp8_1;

        if (*(&((x87_r7_23 < temp6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_23, temp6_1) ? 1 : 0) << 0xa
            | (x87_r7_23 == temp6_1 ? 1 : 0) << 0xe) + 1) & 1)
        {
            long double x87_r7_24 = var_b40;
            var_b70 = var_b40;
            var_b60 = var_b64_1;
            var_b70 = -(x87_r7_24);
            float var_b6c_3 = -(var_b3c_1);
            float var_b68_2 = -(var_b38_1);
            sub_4b2c70(&var_b34, &var_b60, &var_b70, &var_b40);
            long double x87_r7_31 = var_b54_1 - var_b2c_1;
            long double x87_r6_50 = var_b50_1 - var_b30_1;
            long double x87_r5_32 = var_b60 - var_b34;
            x87_r4_34 = x87_r5_32 * x87_r5_32 + x87_r6_50 * x87_r6_50 + x87_r7_31 * x87_r7_31;
            temp8_1 = 167772.172f;
            x87_r4_34 - temp8_1;
        }

        if (!(*(&((x87_r7_23 < temp6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_23, temp6_1) ? 1 : 0) << 0xa
            | (x87_r7_23 == temp6_1 ? 1 : 0) << 0xe) + 1) & 1) || *(&(
            (x87_r4_34 < temp8_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r4_34, temp8_1) ? 1 : 0) << 0xa
            | (x87_r4_34 == temp8_1 ? 1 : 0) << 0xe) + 1) & 0x41)
        {
            float var_b08_1 = *(a1 + 0x20) - g_bcab08;
            float var_b04_1 = *(a1 + 0x28) - g_bcab10;
            int32_t edi_4 = ebx[1];
            var_b00_1 = *(a1 + 0x30) - g_bcab18;

            if (edi_4 > 0)
            {
                void var_ae0;
                float* edx_9 = &var_ae0;
                int32_t var_b50_2 = edi_4;
                float* ecx_9 = *(ebp + 0x94) + *ebx * 0xc;
                bool cond:0_1;

                do
                {
                    var_b60 = ecx_9[1] * *(a1 + 0x74) + *(a1 + 0x78) * ecx_9[2]
                        + *(a1 + 0x70) * *ecx_9;
                    long double x87_r7_44 = ecx_9[1] * *(a1 + 0x80);
                    long double x87_r6_57 = *(a1 + 0x7c) * *ecx_9;
                    var_b34 = var_b60;
                    long double x87_r7_52 = var_b60 + var_b08_1;
                    long double x87_r6_65 =
                        x87_r7_44 + x87_r6_57 + ecx_9[2] * *(a1 + 0x84) + var_b04_1;
                    long double x87_r5_35 = ecx_9[1] * *(a1 + 0x8c) + *(a1 + 0x90) * ecx_9[2]
                        + *(a1 + 0x88) * *ecx_9 + var_b00_1;
                    var_b70 =
                        x87_r5_35 * g_bcaae8 + x87_r6_65 * g_bcaae4 + x87_r7_52 * g_bcaae0;
                    long double x87_r4_40 = x87_r5_35 * g_bcaaf4;
                    long double x87_r3_21 = x87_r6_65 * g_bcaaf0;
                    edx_9[-4] = var_b70;
                    float var_b6c_4 = x87_r4_40 + x87_r3_21 + x87_r7_52 * g_bcaaec;
                    long double x87_r5_36 = x87_r5_35 * g_bcab00;
                    long double x87_r5_38 = x87_r6_65 * g_bcaafc;
                    edx_9[-3] = var_b6c_4;
                    float var_b68_3 = x87_r5_36 + x87_r5_38 + x87_r7_52 * g_bcaaf8;
                    long double x87_r7_55 = var_b68_3;
                    long double temp9_1 = 0.040959999f;
                    x87_r7_55 - temp9_1;
                    edx_9[-2] = var_b68_3;

                    if (*(&((x87_r7_55 < temp9_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_55, temp9_1) ? 1 : 0) << 0xa
                            | (x87_r7_55 == temp9_1 ? 1 : 0) << 0xe) + 1) & 1)
                        edx_9[2] = 0x10;
                    else
                    {
                        int32_t ebp_1 = 1;
                        var_b10 = 1;
                        int32_t var_b54_2 = 1;
                        float var_b64_2 = 1f / var_b68_3;
                        long double x87_r7_59 = var_b64_2 * var_b70;
                        edx_9[1] = var_b64_2;
                        long double x87_r7_61 = x87_r7_59 * g_bcab28 + g_bcab30;
                        edx_9[-1] = x87_r7_61;
                        long double x87_r6_73 = var_b64_2 * var_b6c_4 * g_bcab2c + g_bcab34;
                        float var_b28_2 = x87_r6_73;
                        *edx_9 = x87_r6_73;
                        long double temp10_1 = g_bcabd0;
                        x87_r7_61 - temp10_1;

                        if (!(*(&((x87_r7_61 < temp10_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_61, temp10_1) ? 1 : 0) << 0xa
                                | (x87_r7_61 == temp10_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
                            var_b54_2 = 0;

                        long double temp12_1 = g_bcabd4;
                        x87_r6_73 - temp12_1;
                        int32_t edi_8;

                        edi_8 = !(*(&((x87_r6_73 < temp12_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r6_73, temp12_1) ? 1 : 0) << 0xa
                            | (x87_r6_73 == temp12_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 0 : 1;

                        long double temp13_1 = g_bcabd8;
                        x87_r7_61 - temp13_1;

                        if (*(&((x87_r7_61 < temp13_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_61, temp13_1) ? 1 : 0) << 0xa
                                | (x87_r7_61 == temp13_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                            ebp_1 = 0;

                        long double x87_r7_62 = var_b28_2;
                        long double temp15_1 = g_bcabdc;
                        x87_r7_62 - temp15_1;
                        int32_t eax_25;

                        eax_25 = *(&((x87_r7_62 < temp15_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_62, temp15_1) ? 1 : 0) << 0xa
                            | (x87_r7_62 == temp15_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                        edx_9[2] = (((eax_25 * 2) | ebp_1) << 1 | edi_8) << 1 | var_b54_2;
                    }

                    ecx_9 = &ecx_9[3];
                    edx_9 = &edx_9[7];
                    cond:0_1 = var_b50_2 != 1;
                    var_b50_2 -= 1;
                } while (cond:0_1);

                if (var_b10)
                {
                    var_b4c = &var_b24;
                    int32_t* var_b48_2 = &var_b1c;
                    int32_t ebp_2 = 0;

                    if (ebx[3] > 0)
                    {
                        while (true)
                        {
                            int32_t ebx_1 = *ebx;
                            int32_t var_b84_2 = 0x3d27c5ac;
                            int32_t* edx_11 = *(ebp + 0x90) + (ebx[2] + ebp_2) * 0xc;
                            float* var_b88_2 = &var_b4c;
                            int32_t eax_42 = edx_11[1] - ebx_1;
                            void var_bc0;
                            void var_ba4;
                            memcpy(&var_ba4,
                                &var_bc0 + (edx_11[2] - ebx_1) * 0x1c + 0xd0, 0x1c);
                            int32_t eax_44 = *edx_11 - ebx_1;
                            void var_bdc;
                            memcpy(&var_bc0, &var_bdc + eax_42 * 0x1c + 0xec, 0x1c);
                            memcpy(&var_bdc, &var_bdc + eax_44 * 0x1c + 0xec, 0x1c);
                            sub_4dab50();
                            ebp_2 += 1;

                            if (ebp_2 >= var_b14[3])
                                break;

                            ebx = var_b14;
                        }
                    }

                    long double x87_r7_63 = var_b24;
                    long double temp14_1 = *a5;
                    x87_r7_63 - temp14_1;

                    if (*(&((x87_r7_63 < temp14_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_63, temp14_1) ? 1 : 0) << 0xa
                        | (x87_r7_63 == temp14_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                    {
                        long double x87_r7_64 = var_b20;
                        long double temp16_1 = a5[1];
                        x87_r7_64 - temp16_1;

                        if (*(&((x87_r7_64 < temp16_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_64, temp16_1) ? 1 : 0) << 0xa
                            | (x87_r7_64 == temp16_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                        {
                            long double x87_r7_65 = var_b1c;
                            long double temp17_1 = *a4;
                            x87_r7_65 - temp17_1;

                            if (!(*(&((x87_r7_65 < temp17_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_65, temp17_1) ? 1 : 0) << 0xa
                                | (x87_r7_65 == temp17_1 ? 1 : 0) << 0xe) + 1) & 1))
                            {
                                long double x87_r7_66 = var_b18;
                                long double temp18_1 = a4[1];
                                x87_r7_66 - temp18_1;

                                if (!(*(&((x87_r7_66 < temp18_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_66, temp18_1) ? 1 : 0) << 0xa
                                    | (x87_r7_66 == temp18_1 ? 1 : 0) << 0xe) + 1) & 1))
                                {
                                    *a6 = var_b24;
                                    float ecx_18 = var_b1c;
                                    a6[1] = var_b20;
                                    *a7 = ecx_18;
                                    a7[1] = var_b18;
                                    return 1;
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}
