#include "00461A70-Human_WallSweep.h"
/* 0x00461a70 Human_WallSweep full linked: callers=1 callees=14 */
int32_t sub_461a70(void* a1, double* a2, int32_t* a3, float* a4, int32_t* a5)

{
    float var_25c;
    float* eax_1 = sub_48a340(&var_25c, a1, 0);
    float var_280 = *eax_1;
    int32_t var_28c = 0;
    int32_t var_27c = eax_1[1];
    float edx_1 = eax_1[2];
    *a5 &= 0xfffffff7;
    double* ebx_1;
    double* esi_4;

    while (true)
    {
        esi_4 = a3;
        ebx_1 = a2;
        char var_299_1 = 0;
        double var_250 = *esi_4 - *ebx_1;
        double var_248 = esi_4[1] - ebx_1[1];
        double var_240_1 = esi_4[2] - ebx_1[2];

        if (sub_4b3320(&var_250))
            break;

        double var_288_1 = sub_4b3130(&var_250) + 10.24;
        sub_4b3100(&var_250);
        long double x87_r7_10 = var_288_1 * var_250;
        void var_22c;
        memcpy(&var_22c, &var_250, 0x18);
        double var_224 = var_224 * var_288_1;
        double var_21c = var_21c * var_288_1;
        var_28c += 1;
        double var_204_1 = 409.60000000000002 - edx_1;
        char eax_5 = *(a1 + 0x33d);
        int32_t var_214 = 0;
        double var_1a0 = x87_r7_10;
        long double x87_r6_7 = var_224;
        double var_238_1 = x87_r6_7;
        double var_198_1 = x87_r6_7;
        int32_t var_210_1 = 0;
        int32_t var_20c_1 = 0;
        int32_t var_208_1 = 0;
        double var_190_1 = var_204_1 + var_21c;
        long double x87_r5_3;

        x87_r5_3 = !eax_5 ? 1638.4000000000001 : 819.20000000000005;

        int32_t var_1fc_1 = 0;
        int32_t var_1f8_1 = 0;
        int32_t var_1f4_1 = 0;
        int32_t var_1f0_1 = 0;
        double var_188_1 = x87_r7_10;
        double var_180_1 = x87_r6_7;
        double var_178_1 = x87_r5_3 - edx_1 + var_21c;
        long double x87_r6_10;

        x87_r6_10 = !eax_5 ? 7372.8000000000002 : 5324.8000000000002;

        int32_t var_168 = var_238_1;
        int32_t var_1e4_1 = 0;
        int32_t var_1e0_1 = 0;
        int32_t var_1dc_1 = 0;
        double var_170_1 = x87_r7_10;
        long double x87_r7_12 = x87_r6_10 - edx_1 + var_21c;
        int32_t var_1d8 = 0;
        int32_t var_164_1 = *(&var_238_1 + 4);
        int32_t i = 0;
        double var_160_1 = x87_r7_12;
        double var_1b8;
        double var_1b0;
        void var_1a8;

        do
        {
            long double x87_r7_14 = *(&var_214 + i) + *ebx_1;
            i += 0x18;
            *(&var_22c + i) = x87_r7_14;
            *(&var_224 + i) = *(&var_224 + i) + ebx_1[1];
            *(&var_21c + i) = ebx_1[2] + *(&var_21c + i);
            *(&var_1b8 + i) = *(&var_1b8 + i) + *ebx_1;
            *(&var_1b0 + i) = *(&var_1b0 + i) + ebx_1[1];
            *(&var_1a8 + i) = ebx_1[2] + *(&var_1a8 + i);
        } while (i < 0x48);

        void* var_1a4_1 = a1;
        void var_158;
        __builtin_memset(&var_158, 0, 0x150);
        char eax_7 = Level_LoadObjects_4();
        sub_4cdb20(Level_StartMission_4(), &var_158, &var_214, &var_1a0, 3, eax_7, &var_1a8,
            0xffffffff, 1);
        void* ebx_2 = nullptr;
        double var_288_2 = var_288_1 - 10.24;
        int32_t* edx_6;

        if (*a5 & 4)
        {
            void var_b0;
            float* ecx_10 = &var_b0;
            int32_t i_4 = 2;
            int32_t i_1;

            do
            {
                if (ecx_10[8])
                {
                    int32_t* eax_22 = ecx_10;
                    float esi_1 = *eax_22;
                    long double x87_r7_61 = esi_1;
                    float esi_2 = eax_22[1];
                    long double temp2_1 = 0f;
                    x87_r7_61 - temp2_1;
                    long double x87_r7_62 = eax_22[2];

                    if (!(*(&((x87_r7_61 < temp2_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_61, temp2_1) ? 1 : 0) << 0xa
                        | (x87_r7_61 == temp2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                    {
                    label_462120:
                        long double x87_r5_17 = esi_2;
                        long double x87_r4_15 = esi_1;
                        x87_r7_62 = 1.0 / sqrtl(x87_r4_15 * x87_r4_15 + x87_r5_17 * x87_r5_17
                            + x87_r7_62 * x87_r7_62) * x87_r7_62;
                    }
                    else
                    {
                        long double x87_r6_32 = esi_2;
                        long double temp5_1 = 0f;
                        x87_r6_32 - temp5_1;

                        if (!(*(&((x87_r6_32 < temp5_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r6_32, temp5_1) ? 1 : 0) << 0xa
                                | (x87_r6_32 == temp5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                            goto label_462120;

                        long double temp8_1 = 0f;
                        x87_r7_62 - temp8_1;

                        if (!(*(&((x87_r7_62 < temp8_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_62, temp8_1) ? 1 : 0) << 0xa
                                | (x87_r7_62 == temp8_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                            goto label_462120;
                    }

                    long double temp7_1 = 0f;
                    x87_r7_62 - temp7_1;

                    if (*(&((x87_r7_62 < temp7_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_62, temp7_1) ? 1 : 0) << 0xa
                            | (x87_r7_62 == temp7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                        x87_r7_62 = -(x87_r7_62);

                    long double temp11_1 = 0.100000001f;
                    x87_r7_62 - temp11_1;

                    if (*(&((x87_r7_62 < temp11_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_62, temp11_1) ? 1 : 0) << 0xa
                        | (x87_r7_62 == temp11_1 ? 1 : 0) << 0xe) + 1) & 1)
                    {
                        ecx_10[2] = 0;
                        long double x87_r7_64 = *ecx_10;
                        long double temp14_1 = 0f;
                        x87_r7_64 - temp14_1;
                        long double x87_r7_65;
                        long double temp18_1;

                        if (*(&((x87_r7_64 < temp14_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_64, temp14_1) ? 1 : 0) << 0xa
                            | (x87_r7_64 == temp14_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                        {
                            x87_r7_65 = ecx_10[1];
                            temp18_1 = 0f;
                            x87_r7_65 - temp18_1;
                        }

                        if (!(*(&((x87_r7_64 < temp14_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_64, temp14_1) ? 1 : 0) << 0xa
                            | (x87_r7_64 == temp14_1 ? 1 : 0) << 0xe) + 1) & 0x40) || !(*(&(
                            (x87_r7_65 < temp18_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_65, temp18_1) ? 1 : 0) << 0xa
                            | (x87_r7_65 == temp18_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        {
                            long double x87_r7_66 = ecx_10[1];
                            long double x87_r6_37 = *ecx_10;
                            long double x87_r7_71 =
                                1.0 / sqrtl(x87_r7_66 * x87_r7_66 + x87_r6_37 * x87_r6_37);
                            *ecx_10 = *ecx_10 * x87_r7_71;
                            ecx_10[1] = ecx_10[1] * x87_r7_71;
                            ecx_10[2] = ecx_10[2] * x87_r7_71;
                        }

                        long double x87_r7_73;
                        long double temp24_1;

                        if (ebx_2)
                        {
                            x87_r7_73 = *(ecx_10 + 0x28);
                            temp24_1 = *(ebx_2 + 0x60);
                            x87_r7_73 - temp24_1;
                        }

                        if (!ebx_2 || *(&((x87_r7_73 < temp24_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_73, temp24_1) ? 1 : 0) << 0xa
                                | (x87_r7_73 == temp24_1 ? 1 : 0) << 0xe) + 1) & 1)
                            ebx_2 = &ecx_10[-0xe];
                    }
                }

                ecx_10 = &ecx_10[0x1c];
                i_1 = i_4;
                i_4 -= 1;
            } while (i_1 != 1);
            edx_6 = a3;
            goto label_4621e4;
        }

        float var_120;
        int32_t* ecx_4 = &var_120;
        int32_t i_3 = 3;
        int32_t i_2;

        do
        {
            if (ecx_4[8])
            {
                float edi_1 = *ecx_4;
                long double x87_r7_27 = edi_1;
                float edi_2 = ecx_4[1];
                long double temp4_1 = 0f;
                x87_r7_27 - temp4_1;
                long double x87_r7_28 = ecx_4[2];

                if (!(*(&((x87_r7_27 < temp4_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_27, temp4_1) ? 1 : 0) << 0xa
                    | (x87_r7_27 == temp4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                {
                label_461dfb:
                    long double x87_r5_8 = edi_2;
                    long double x87_r4_3 = edi_1;
                    x87_r7_28 = 1.0
                        / sqrtl(x87_r4_3 * x87_r4_3 + x87_r5_8 * x87_r5_8 + x87_r7_28 * x87_r7_28)
                        * x87_r7_28;
                }
                else
                {
                    long double x87_r6_12 = edi_2;
                    long double temp6_1 = 0f;
                    x87_r6_12 - temp6_1;

                    if (!(*(&((x87_r6_12 < temp6_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r6_12, temp6_1) ? 1 : 0) << 0xa
                            | (x87_r6_12 == temp6_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                        goto label_461dfb;

                    long double temp10_1 = 0f;
                    x87_r7_28 - temp10_1;

                    if (!(*(&((x87_r7_28 < temp10_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_28, temp10_1) ? 1 : 0) << 0xa
                            | (x87_r7_28 == temp10_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                        goto label_461dfb;
                }

                long double temp9_1 = 0f;
                x87_r7_28 - temp9_1;

                if (*(&((x87_r7_28 < temp9_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_28, temp9_1) ? 1 : 0) << 0xa
                        | (x87_r7_28 == temp9_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                    x87_r7_28 = -(x87_r7_28);

                long double temp13_1 = 0.100000001f;
                x87_r7_28 - temp13_1;

                if (*(&((x87_r7_28 < temp13_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_28, temp13_1) ? 1 : 0) << 0xa
                    | (x87_r7_28 == temp13_1 ? 1 : 0) << 0xe) + 1) & 1)
                {
                    ecx_4[2] = 0;
                    long double x87_r7_30 = *ecx_4;
                    long double temp16_1 = 0f;
                    x87_r7_30 - temp16_1;
                    long double x87_r7_31;
                    long double temp22_1;

                    if (*(&((x87_r7_30 < temp16_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_30, temp16_1) ? 1 : 0) << 0xa
                        | (x87_r7_30 == temp16_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                    {
                        x87_r7_31 = ecx_4[1];
                        temp22_1 = 0f;
                        x87_r7_31 - temp22_1;
                    }

                    if (!(*(&((x87_r7_30 < temp16_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_30, temp16_1) ? 1 : 0) << 0xa
                        | (x87_r7_30 == temp16_1 ? 1 : 0) << 0xe) + 1) & 0x40) || !(*(&(
                        (x87_r7_31 < temp22_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_31, temp22_1) ? 1 : 0) << 0xa
                        | (x87_r7_31 == temp22_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    {
                        long double x87_r7_32 = ecx_4[1];
                        long double x87_r6_17 = *ecx_4;
                        long double x87_r7_37 =
                            1.0 / sqrtl(x87_r7_32 * x87_r7_32 + x87_r6_17 * x87_r6_17);
                        *ecx_4 = *ecx_4 * x87_r7_37;
                        ecx_4[1] = ecx_4[1] * x87_r7_37;
                        ecx_4[2] = ecx_4[2] * x87_r7_37;
                    }

                    long double x87_r7_39;
                    long double temp27_1;

                    if (ebx_2)
                    {
                        x87_r7_39 = *(ecx_4 + 0x28);
                        temp27_1 = *(ebx_2 + 0x60);
                        x87_r7_39 - temp27_1;
                    }

                    if (!ebx_2 || *(&((x87_r7_39 < temp27_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_39, temp27_1) ? 1 : 0) << 0xa
                            | (x87_r7_39 == temp27_1 ? 1 : 0) << 0xe) + 1) & 1)
                        ebx_2 = &ecx_4[-0xe];
                }
            }

            ecx_4 = &ecx_4[0x1c];
            i_2 = i_3;
            i_3 -= 1;
        } while (i_2 != 1);
        int32_t var_100;

        if (!var_100 || ebx_2)
            edx_6 = a3;
        else
        {
            long double x87_r7_40 = var_120;
            long double temp12_1 = 0f;
            x87_r7_40 - temp12_1;
            float var_298_2 = var_120;
            float var_11c;
            float var_294_2 = var_11c;
            long double x87_r7_46;
            float var_118;

            if (!(*(&((x87_r7_40 < temp12_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_40, temp12_1) ? 1 : 0) << 0xa
                | (x87_r7_40 == temp12_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            {
            label_461f28:
                long double x87_r7_43 = var_118;
                long double x87_r6_28 = var_11c;
                long double x87_r5_13 = var_120;
                x87_r7_46 = 1.0
                    / sqrtl(x87_r5_13 * x87_r5_13 + x87_r6_28 * x87_r6_28 + x87_r7_43 * x87_r7_43)
                    * var_118;
            }
            else
            {
                long double x87_r7_41 = var_11c;
                long double temp15_1 = 0f;
                x87_r7_41 - temp15_1;

                if (!(*(&((x87_r7_41 < temp15_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_41, temp15_1) ? 1 : 0) << 0xa
                        | (x87_r7_41 == temp15_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    goto label_461f28;

                long double x87_r7_42 = var_118;
                long double temp21_1 = 0f;
                x87_r7_42 - temp21_1;

                if (!(*(&((x87_r7_42 < temp21_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_42, temp21_1) ? 1 : 0) << 0xa
                        | (x87_r7_42 == temp21_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    goto label_461f28;

                x87_r7_46 = var_118;
            }
            long double temp20_1 = 0.999899983f;
            x87_r7_46 - temp20_1;

            if (*(&((x87_r7_46 < temp20_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_46, temp20_1) ? 1 : 0) << 0xa
                    | (x87_r7_46 == temp20_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                edx_6 = a3;
            else
            {
                edx_6 = a3;
                void var_150;
                memcpy(edx_6, &var_150, 0x18);
                *(edx_6 + 0x10) = edx_1 - 409.60000000000002 + *(edx_6 + 0x10);
            }
        }

        int32_t var_20;

        if (!var_20)
        {
        label_4621e4:

            if (ebx_2)
            {
            label_4621f3:
                double var_274 = *(ebx_2 + 0x38);
                double var_26c = *(ebx_2 + 0x3c);
                double var_264_1 = *(ebx_2 + 0x40);
                sub_4b3100(&var_274);
                long double x87_r7_78 = var_288_2 * var_250;
                void var_1c0;
                memcpy(&var_1c0, &var_250, 0x18);
                var_1b8 = var_1b8 * var_288_2;
                long double x87_r6_51 = var_1b0 * var_288_2;
                var_1b0 = x87_r6_51;
                long double x87_r7_80 =
                    x87_r6_51 * var_264_1 + var_1b8 * var_26c + x87_r7_78 * var_274;
                long double temp17_1 = 0.0;
                x87_r7_80 - temp17_1;

                if (*(&((x87_r7_80 < temp17_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_80, temp17_1) ? 1 : 0) << 0xa
                    | (x87_r7_80 == temp17_1 ? 1 : 0) << 0xe) + 1) & 1)
                {
                    float var_1cc = *a3 - *(ebx_2 + 8);
                    float var_1c8_1 = *(a3 + 8) - *(ebx_2 + 0x10);
                    float var_1c4_1 = *(a3 + 0x10) - *(ebx_2 + 0x18);
                    sub_4b2c70(&var_25c, &var_1cc, ebx_2 + 0x38, ebx_2 + 0x38);
                    var_299_1 = 1;
                    *a3 = var_25c + *(ebx_2 + 8);
                    float var_258;
                    *(a3 + 8) = var_258 + *(ebx_2 + 0x10);
                    float var_254;
                    *(a3 + 0x10) = var_254 + *(ebx_2 + 0x18);
                    long double x87_r7_94 = var_274 * 10.24;
                    var_26c = var_26c * 10.24;
                    double var_264_2 = var_264_1 * 10.24;
                    *a3 = x87_r7_94 + *a3;
                    *(a3 + 8) = var_26c + *(a3 + 8);
                    *(a3 + 0x10) = var_264_2 + *(a3 + 0x10);
                    *a5 |= 8;
                }

                edx_6 = a3;
            }
        }
        else
        {
            if (ebx_2)
                goto label_4621f3;

            float var_40;
            long double x87_r7_50 = var_40;
            long double temp19_1 = 0f;
            x87_r7_50 - temp19_1;
            float var_3c;
            float var_294_3 = var_3c;
            float var_298_3 = var_40;
            long double x87_r7_56;
            float var_38;

            if (!(*(&((x87_r7_50 < temp19_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_50, temp19_1) ? 1 : 0) << 0xa
                | (x87_r7_50 == temp19_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            {
            label_462011:
                long double x87_r7_53 = var_38;
                long double x87_r6_30 = var_3c;
                long double x87_r5_15 = var_40;
                x87_r7_56 = 1.0
                    / sqrtl(x87_r5_15 * x87_r5_15 + x87_r6_30 * x87_r6_30 + x87_r7_53 * x87_r7_53)
                    * var_38;
            }
            else
            {
                long double x87_r7_51 = var_3c;
                long double temp23_1 = 0f;
                x87_r7_51 - temp23_1;

                if (!(*(&((x87_r7_51 < temp23_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_51, temp23_1) ? 1 : 0) << 0xa
                        | (x87_r7_51 == temp23_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    goto label_462011;

                long double x87_r7_52 = var_38;
                long double temp26_1 = 0f;
                x87_r7_52 - temp26_1;

                if (!(*(&((x87_r7_52 < temp26_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_52, temp26_1) ? 1 : 0) << 0xa
                        | (x87_r7_52 == temp26_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    goto label_462011;

                x87_r7_56 = var_38;
            }
            long double temp25_1 = -0.999899983f;
            x87_r7_56 - temp25_1;
            void* eax_18;

            if (!(*(&((x87_r7_56 < temp25_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_56, temp25_1) ? 1 : 0) << 0xa
                | (x87_r7_56 == temp25_1 ? 1 : 0) << 0xe) + 1) & 1))
            {
                int32_t var_70;
                *edx_6 = var_70;
                int32_t var_6c;
                edx_6[1] = var_6c;
                int32_t var_68;
                edx_6[2] = var_68;
                int32_t var_64;
                edx_6[3] = var_64;
                eax_18 = a1;
                *(eax_18 + 0x664) = 0;
                *(eax_18 + 0x668) = 0;
            }
            else
                eax_18 = a1;

            *(eax_18 + 0x66c) = 0;
            double var_60;
            *(edx_6 + 0x10) = var_60 - (7372.8000000000002 - edx_1) - 10.24;
        }

        if (var_28c > 0xa)
        {
            *edx_6 = *a2;
            edx_6[1] = *(a2 + 4);
            edx_6[2] = a2[1];
            edx_6[3] = *(a2 + 0xc);
        }
        else if (var_299_1)
            continue;

        ebx_1 = a2;
        esi_4 = a3;
        break;
    }

    *a4 = *esi_4 - *ebx_1;
    a4[1] = esi_4[1] - ebx_1[1];
    int32_t var_2ac_5 = var_28c;
    a4[2] = esi_4[2] - ebx_1[2];
    return sub_460c80(a1, "Checks: %d\n");
}
