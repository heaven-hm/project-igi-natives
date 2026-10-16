#include "00521E40-Light_RenderLensflare_2.h"
/* 0x00521e40 Light_RenderLensflare_2 full linked: callers=2 callees=6 */
uint32_t sub_521e40(void* a1, double* a2, float* a3 @ 0x10, float* a4, void* a5, int32_t a6, float a7, float a8, float a9, float a10, float a11, float a12, float a13, float a14, float a15 @ 0xf8, float a16, float a17, float a18, float a19, float a20, float a21, float a22)

{
    int32_t ebp;
    int32_t var_4 = ebp;
    sub_4a54a0(0x3ab7c);
    int32_t esi_1 = a5 * a6;
    int32_t* edx = *(a1 + 0x88);
    int32_t* arg_ec = edx;

    if (esi_1 > 0)
        __builtin_memset(a3, 0xffffffff, esi_1 << 2);

    if (a12)
    {
        int32_t ecx_3;
        int32_t edi_3;

        if (!a10)
        {
            if (esi_1 > 0)
                edi_3 = __memfill_u32(a4, 0, esi_1);
        }
        else if (esi_1 > 0)
            edi_3 = __memfill_u32(a4, 0x7f7fffff, esi_1);
    }

    uint32_t result = *edx;
    int32_t edi_4 = 0;
    int32_t arg_e8 = 0;

    if (result > 0)
    {
        float* arg_c;
        float* ebx_1 = arg_c;
        double* esi_2 = a2;

        while (true)
        {
            int32_t ecx_4 = edi_4 * 9;
            int32_t eax_4 = edx[ecx_4 + 0xd];

            if (eax_4 > a9 || edx[ecx_4 + 0xc] != eax_4 - 1)
                result = 0;
            else
                result = 1;

            uint32_t result_1 = result;

            if (edx[ecx_4 + 0xc] == a9 || result)
            {
                result = *(*(edx[ecx_4 + 7] + 0xc) + 0xc);

                if (*(result + 0x20) == 3)
                {
                    void* edx_3 = *(result + 0x24);
                    void* arg_60 = edx_3;
                    result = *(edx_3 + 8);

                    if (result && edx_3)
                    {
                        double* eax_7 = edx[ecx_4 + 0xa];
                        long double x87_r7_2 = *eax_7 - *esi_2;
                        long double x87_r6_2 = eax_7[1] - esi_2[1];
                        long double x87_r5_2 = eax_7[2] - esi_2[2];
                        float* eax_8 = edx[ecx_4 + 9];
                        float arg_80 =
                            x87_r7_2 * *ebx_1 + x87_r5_2 * ebx_1[2] + x87_r6_2 * ebx_1[1];
                        float arg_84 =
                            x87_r7_2 * ebx_1[3] + x87_r5_2 * ebx_1[5] + x87_r6_2 * ebx_1[4];
                        float arg_88 =
                            x87_r5_2 * ebx_1[8] + x87_r6_2 * ebx_1[7] + x87_r7_2 * ebx_1[6];
                        float arg_8c = eax_8[6] * ebx_1[2] + eax_8[3] * ebx_1[1] + *eax_8 * *ebx_1;
                        float arg_90 =
                            eax_8[7] * ebx_1[2] + eax_8[4] * ebx_1[1] + eax_8[1] * *ebx_1;
                        float arg_94 =
                            *ebx_1 * eax_8[2] + eax_8[8] * ebx_1[2] + eax_8[5] * ebx_1[1];
                        float arg_98 =
                            *eax_8 * ebx_1[3] + ebx_1[5] * eax_8[6] + ebx_1[4] * eax_8[3];
                        float arg_9c =
                            eax_8[1] * ebx_1[3] + eax_8[7] * ebx_1[5] + eax_8[4] * ebx_1[4];
                        float arg_a0 =
                            eax_8[8] * ebx_1[5] + eax_8[5] * ebx_1[4] + eax_8[2] * ebx_1[3];
                        float arg_a4 =
                            ebx_1[8] * eax_8[6] + ebx_1[7] * eax_8[3] + *eax_8 * ebx_1[6];
                        float arg_a8 =
                            ebx_1[8] * eax_8[7] + ebx_1[7] * eax_8[4] + eax_8[1] * ebx_1[6];
                        int32_t eax_10 = eax_8[9] + ebx_1[9] + 1;
                        int32_t arg_b0 = eax_10;
                        float arg_ac =
                            eax_8[2] * ebx_1[6] + ebx_1[8] * eax_8[8] + ebx_1[7] * eax_8[5];
                        float arg_f4;
                        memcpy(&arg_f4, &arg_8c, 0x28);

                        if (eax_10 > 0x3e8)
                        {
                            long double x87_r7_41 = arg_8c;
                            long double temp1_1 = 0f;
                            x87_r7_41 - temp1_1;
                            float arg_c0 = arg_8c;
                            float arg_c8 = arg_94;
                            float arg_c4 = arg_90;

                            if (!(*(&((x87_r7_41 < temp1_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_41, temp1_1) ? 1 : 0) << 0xa
                                | (x87_r7_41 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            {
                            label_52211f:
                                long double x87_r7_44 = arg_94;
                                long double x87_r6_43 = arg_90;
                                long double x87_r5_6 = arg_8c;
                                long double x87_r7_46 = 1.0 / sqrtl(x87_r5_6 * x87_r5_6
                                    + x87_r6_43 * x87_r6_43 + x87_r7_44 * x87_r7_44);
                                arg_c0 = arg_8c * x87_r7_46;
                                arg_c4 = arg_c4 * x87_r7_46;
                                arg_c8 = arg_c8 * x87_r7_46;
                            }
                            else
                            {
                                long double x87_r7_42 = arg_90;
                                long double temp2_1 = 0f;
                                x87_r7_42 - temp2_1;

                                if (!(*(&((x87_r7_42 < temp2_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_42, temp2_1) ? 1 : 0) << 0xa
                                        | (x87_r7_42 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                    goto label_52211f;

                                long double x87_r7_43 = arg_94;
                                long double temp5_1 = 0f;
                                x87_r7_43 - temp5_1;

                                if (!(*(&((x87_r7_43 < temp5_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_43, temp5_1) ? 1 : 0) << 0xa
                                        | (x87_r7_43 == temp5_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                    goto label_52211f;
                            }

                            float arg_44 = arg_a8 * arg_94 - arg_ac * arg_90;
                            long double x87_r6_54 = arg_ac * arg_8c;
                            float arg_cc = arg_44;
                            float arg_48 = -((arg_a4 * arg_94 - x87_r6_54));
                            float arg_4c = arg_a4 * arg_90 - arg_a8 * arg_8c;
                            float arg_70 = arg_4c * arg_c4 - arg_48 * arg_c8;
                            float arg_d8 = arg_70;
                            float arg_74 = -((arg_4c * arg_c0 - arg_44 * arg_c8));
                            float arg_78 = arg_48 * arg_c0 - arg_44 * arg_c4;
                            long double x87_r7_68 = arg_44;
                            long double temp4_1 = 0f;
                            x87_r7_68 - temp4_1;

                            if (!(*(&((x87_r7_68 < temp4_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_68, temp4_1) ? 1 : 0) << 0xa
                                | (x87_r7_68 == temp4_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            {
                            label_5222c9:
                                long double x87_r7_71 = arg_44;
                                long double x87_r6_63 = arg_48;
                                long double x87_r5_8 = arg_4c;
                                long double x87_r7_73 = 1.0 / sqrtl(x87_r5_8 * x87_r5_8
                                    + x87_r6_63 * x87_r6_63 + x87_r7_71 * x87_r7_71);
                                arg_cc = arg_44 * x87_r7_73;
                                float arg_d0 = arg_48 * x87_r7_73;
                                float arg_d4 = arg_4c * x87_r7_73;
                            }
                            else
                            {
                                long double x87_r7_69 = arg_48;
                                long double temp6_1 = 0f;
                                x87_r7_69 - temp6_1;

                                if (!(*(&((x87_r7_69 < temp6_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_69, temp6_1) ? 1 : 0) << 0xa
                                        | (x87_r7_69 == temp6_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                    goto label_5222c9;

                                long double x87_r7_70 = arg_4c;
                                long double temp8_1 = 0f;
                                x87_r7_70 - temp8_1;

                                if (!(*(&((x87_r7_70 < temp8_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_70, temp8_1) ? 1 : 0) << 0xa
                                        | (x87_r7_70 == temp8_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                    goto label_5222c9;
                            }

                            long double x87_r7_75 = arg_70;
                            long double temp7_1 = 0f;
                            x87_r7_75 - temp7_1;

                            if (!(*(&((x87_r7_75 < temp7_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_75, temp7_1) ? 1 : 0) << 0xa
                                | (x87_r7_75 == temp7_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            {
                            label_52235e:
                                long double x87_r7_78 = arg_78;
                                long double x87_r6_71 = arg_74;
                                long double x87_r5_10 = arg_70;
                                long double x87_r7_80 = 1.0 / sqrtl(x87_r5_10 * x87_r5_10
                                    + x87_r6_71 * x87_r6_71 + x87_r7_78 * x87_r7_78);
                                arg_d8 = arg_70 * x87_r7_80;
                                float arg_dc = arg_74 * x87_r7_80;
                                float arg_e0 = arg_78 * x87_r7_80;
                            }
                            else
                            {
                                long double x87_r7_76 = arg_74;
                                long double temp9_1 = 0f;
                                x87_r7_76 - temp9_1;

                                if (!(*(&((x87_r7_76 < temp9_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_76, temp9_1) ? 1 : 0) << 0xa
                                        | (x87_r7_76 == temp9_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                    goto label_52235e;

                                long double x87_r7_77 = arg_78;
                                long double temp10_1 = 0f;
                                x87_r7_77 - temp10_1;

                                if (!(*(&((x87_r7_77 < temp10_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_77, temp10_1) ? 1 : 0) << 0xa
                                        | (x87_r7_77 == temp10_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                    goto label_52235e;
                            }

                            memcpy(&arg_8c, &arg_c0, 0x28);
                            arg_b0 = 0;
                        }

                        int32_t i = 0;
                        void arg_1fc;

                        if (*(edx_3 + 0x10) > 0)
                        {
                            int32_t edi_5 = 0;
                            float* ecx_11 = &arg_1fc;

                            do
                            {
                                int32_t* eax_20 = edi_5 + *(edx_3 + 0x14);
                                float edx_4 = *eax_20;
                                float edx_5 = eax_20[1];
                                float eax_21 = eax_20[2];
                                float arg_158 = a16 * eax_21 + a15 * edx_5 + arg_f4 * edx_4;
                                a7 = arg_158;
                                long double x87_r7_95 = arg_158 + arg_80;
                                a9 = a22 * eax_21 + a21 * edx_5 + a20 * edx_4;
                                a8 = a19 * eax_21 + a18 * edx_5 + a17 * edx_4 + arg_84;
                                long double x87_r6_94 = a9 + arg_88;
                                long double temp3_1 = 4.09600019f;
                                x87_r6_94 - temp3_1;

                                if (*(&((x87_r6_94 < temp3_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r6_94, temp3_1) ? 1 : 0) << 0xa
                                    | (x87_r6_94 == temp3_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
                                {
                                    *ecx_11 = x87_r6_94 - 4.09600019f;
                                    ecx_11[-2] = x87_r7_95;
                                    ecx_11[-1] = a8;
                                }
                                else if (!a10)
                                {
                                    long double x87_r6_96 = 1f / x87_r6_94;
                                    *ecx_11 = x87_r6_96;
                                    float var_8_2 = a5 >> 1;
                                    ecx_11[-2] = x87_r6_96 * var_8_2 * x87_r7_95 + a7;
                                    ecx_11[-1] = var_8_2 * a8 * *ecx_11 + a8;
                                }
                                else
                                {
                                    *ecx_11 = x87_r6_94;
                                    float var_8_1 = a5 >> 1;
                                    ecx_11[-2] = x87_r7_95 / a13 * var_8_1 + a7;
                                    ecx_11[-1] = a8 / a13 * var_8_1 + a8;
                                }

                                edx_3 = arg_60;
                                i += 1;
                                edi_5 += 0x28;
                                ecx_11 = &ecx_11[3];
                            } while (i < *(edx_3 + 0x10));
                        }

                        void* ecx_12 = *(edx_3 + 0x1c);

                        while (true)
                        {
                            int32_t edx_10 = 0;
                            edx_10 = *(ecx_12 + 0xc);
                            void* esi_3 = ecx_12 + 0x20;
                            int32_t eax_28;
                            int32_t edx_11;
                            edx_11 = HIGHD(0x55555556 * edx_10);
                            eax_28 = LOWD(0x55555556 * edx_10);
                            a5 = ecx_12;
                            result = edx_11 >> 0x1f;
                            void* arg_7c = esi_3;
                            a6 = 0;

                            if (edx_10 / 3 > 0)
                            {
                                while (true)
                                {
                                    int16_t edx_13 = *(ecx_12 + 0x14);
                                    int16_t eax_30 = *(esi_3 + 2) + edx_13;
                                    int16_t ecx_13 = edx_13 + *esi_3;
                                    int16_t esi_4 = *(esi_3 + 4) + edx_13;
                                    int16_t arg_58 = ecx_13;

                                    if (ecx_13 != eax_30 && eax_30 != esi_4 && esi_4 != ecx_13
                                        && eax_30 != esi_4 && esi_4 != ecx_13)
                                    {
                                        int32_t ecx_14 = 0;
                                        ecx_14 = !*(a5 + 0x18);
                                        int32_t eax_31 = 0;
                                        eax_31 = a11;

                                        if (ecx_14 != eax_31)
                                        {
                                            int32_t eax_32 = 0;
                                            eax_32 = *(a5 + 0x12);
                                            void* edx_16 = edx[ecx_4 + 6];
                                            uint32_t edi_7 = esi_4;
                                            float** ecx_18 = *(edx_16 + 0x38) + eax_32 * 0x28;
                                            uint32_t esi_8 = eax_30;
                                            uint32_t ecx_21 = arg_58;
                                            uint32_t eax_34 = ecx_21 * 3;
                                            long double x87_r7_108 = *(&arg_1fc + (eax_34 << 2));
                                            long double temp11_1 = 0f;
                                            x87_r7_108 - temp11_1;
                                            int32_t __saved_edi;
                                            arg_c = &(&__saved_edi)[eax_34 + 0x82];
                                            void arg_128;
                                            float arg_130;
                                            void arg_138;

                                            if (*(&((x87_r7_108 < temp11_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r7_108, temp11_1) ? 1 : 0) << 0xa
                                                | (x87_r7_108 == temp11_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                                            {
                                            label_52297f:
                                                uint32_t esi_23 = esi_8 * 5;
                                                uint32_t ecx_46 = ecx_21 * 5;
                                                int32_t eax_67 = *(arg_60 + 0x14);
                                                long double x87_r7_134 = *(eax_67 + (esi_23 << 3))
                                                    - *(eax_67 + (ecx_46 << 3));
                                                float* ecx_47 = eax_67 + (ecx_46 << 3);
                                                long double x87_r6_107 =
                                                    *(eax_67 + (esi_23 << 3) + 4) - ecx_47[1];
                                                long double x87_r5_16 =
                                                    *(eax_67 + (esi_23 << 3) + 8) - ecx_47[2];
                                                uint32_t esi_25 = edi_7 * 5;
                                                void* eax_68 = eax_67 + (esi_25 << 3);
                                                float arg_164 = *(eax_67 + (esi_25 << 3)) - *ecx_47;
                                                float arg_168 = *(eax_68 + 4) - ecx_47[1];
                                                long double x87_r4_29 = *(eax_68 + 8) - ecx_47[2];
                                                float* eax_69 = edx[ecx_4 + 9];
                                                double* esi_27 = edx[ecx_4 + 0xa];
                                                float arg_11c =
                                                    x87_r4_29 * x87_r6_107 - arg_168 * x87_r5_16;
                                                float arg_120 = -((x87_r4_29 * x87_r7_134
                                                    - arg_164 * x87_r5_16));
                                                long double x87_r7_136 =
                                                    x87_r7_134 * arg_168 - arg_164 * x87_r6_107;
                                                float arg_64 = arg_120 * eax_69[1]
                                                    + arg_11c * *eax_69 + x87_r7_136 * eax_69[2];
                                                float arg_b4 = arg_64;
                                                float arg_68 = arg_120 * eax_69[4]
                                                    + arg_11c * eax_69[3] + x87_r7_136 * eax_69[5];
                                                float arg_b8 = arg_68;
                                                float arg_6c = arg_120 * eax_69[7]
                                                    + arg_11c * eax_69[6] + x87_r7_136 * eax_69[8];
                                                long double x87_r7_141 = *esi_27 - *a2
                                                    + ecx_47[2] * eax_69[2] + eax_69[1] * ecx_47[1]
                                                    + *eax_69 * *ecx_47;
                                                long double x87_r6_131 = ecx_47[1] * eax_69[4]
                                                    + ecx_47[2] * eax_69[5] + *ecx_47 * eax_69[3]
                                                    + esi_27[1] - a2[1];
                                                long double x87_r5_44 = ecx_47[1] * eax_69[7]
                                                    + ecx_47[2] * eax_69[8] + *ecx_47 * eax_69[6]
                                                    + esi_27[2] - a2[2];
                                                long double temp12_1 = 0f;
                                                x87_r7_141 - temp12_1;

                                                if (!(*(&((x87_r7_141 < temp12_1 ? 1 : 0) << 8
                                                    | (FCMP_UO(x87_r7_141, temp12_1) ? 1 : 0)
                                                    << 0xa | (x87_r7_141 == temp12_1 ? 1 : 0) << 0xe
                                                    | 0x2800) + 1) & 0x40))
                                                {
                                                label_522b80:
                                                    long double x87_r4_46 = 1.0 / sqrtl(
                                                        x87_r7_141 * x87_r7_141
                                                        + x87_r6_131 * x87_r6_131
                                                        + x87_r5_44 * x87_r5_44);
                                                    x87_r7_141 = x87_r7_141 * x87_r4_46;
                                                    x87_r6_131 = x87_r6_131 * x87_r4_46;
                                                    x87_r5_44 = x87_r5_44 * x87_r4_46;
                                                }
                                                else
                                                {
                                                    long double temp14_1 = 0f;
                                                    x87_r6_131 - temp14_1;

                                                    if (!(*(&((x87_r6_131 < temp14_1 ? 1 : 0) << 8
                                                            | (FCMP_UO(x87_r6_131, temp14_1) ? 1
                                                            : 0) << 0xa | (x87_r6_131 == temp14_1 ? 1 : 0)
                                                            << 0xe | 0x2800) + 1) & 0x40))
                                                        goto label_522b80;

                                                    long double temp17_1 = 0f;
                                                    x87_r5_44 - temp17_1;

                                                    if (!(*(&((x87_r5_44 < temp17_1 ? 1 : 0) << 8
                                                            | (FCMP_UO(x87_r5_44, temp17_1) ? 1
                                                            : 0) << 0xa | (x87_r5_44 == temp17_1 ? 1 : 0)
                                                            << 0xe | 0x2800) + 1) & 0x40))
                                                        goto label_522b80;
                                                }

                                                long double x87_r4_57 = arg_64;
                                                long double temp16_1 = 0f;
                                                x87_r4_57 - temp16_1;
                                                long double x87_r4_64;

                                                if (!(*(&((x87_r4_57 < temp16_1 ? 1 : 0) << 8
                                                    | (FCMP_UO(x87_r4_57, temp16_1) ? 1 : 0) << 0xa
                                                    | (x87_r4_57 == temp16_1 ? 1 : 0) << 0xe
                                                    | 0x2800) + 1) & 0x40))
                                                {
                                                label_522bd0:
                                                    long double x87_r4_60 = arg_6c;
                                                    long double x87_r3_28 = arg_68;
                                                    long double x87_r2_5 = arg_64;
                                                    long double x87_r4_63 = 1.0 / sqrtl(
                                                        x87_r2_5 * x87_r2_5 + x87_r3_28 * x87_r3_28
                                                        + x87_r4_60 * x87_r4_60);
                                                    arg_b4 = arg_64 * x87_r4_63;
                                                    arg_b8 = arg_b8 * x87_r4_63;
                                                    x87_r4_64 = x87_r4_63 * arg_6c;
                                                }
                                                else
                                                {
                                                    long double x87_r4_58 = arg_68;
                                                    long double temp19_1 = 0f;
                                                    x87_r4_58 - temp19_1;

                                                    if (!(*(&((x87_r4_58 < temp19_1 ? 1 : 0) << 8
                                                            | (FCMP_UO(x87_r4_58, temp19_1) ? 1
                                                            : 0) << 0xa | (x87_r4_58 == temp19_1 ? 1 : 0)
                                                            << 0xe | 0x2800) + 1) & 0x40))
                                                        goto label_522bd0;

                                                    long double x87_r4_59 = arg_6c;
                                                    long double temp21_1 = 0f;
                                                    x87_r4_59 - temp21_1;

                                                    if (!(*(&((x87_r4_59 < temp21_1 ? 1 : 0) << 8
                                                            | (FCMP_UO(x87_r4_59, temp21_1) ? 1
                                                            : 0) << 0xa | (x87_r4_59 == temp21_1 ? 1 : 0)
                                                            << 0xe | 0x2800) + 1) & 0x40))
                                                        goto label_522bd0;

                                                    x87_r4_64 = arg_6c;
                                                }

                                                long double x87_r6_135 = x87_r5_44 * x87_r4_64
                                                    + x87_r6_131 * arg_b8 + x87_r7_141 * arg_b4;
                                                long double temp20_1 = 0f;
                                                x87_r6_135 - temp20_1;
                                                float var_8_6;

                                                if (!(*(&((x87_r6_135 < temp20_1 ? 1 : 0) << 8
                                                    | (FCMP_UO(x87_r6_135, temp20_1) ? 1 : 0)
                                                    << 0xa | (x87_r6_135 == temp20_1 ? 1 : 0) << 0xe
                                                    | 0x3800) + 1) & 1) && !result_1)
                                                {
                                                    void arg_188;
                                                    float* edi_17 = &arg_188;
                                                    __return_addr = &arg_58;
                                                    float** ebx_11 = &arg_c;
                                                    float* ecx_48 = &arg_128;
                                                    a1 = 3;
                                                    bool cond:10_1;

                                                    do
                                                    {
                                                        int32_t eax_72 = 0;
                                                        eax_72 = *__return_addr;
                                                        int32_t* esi_30 = eax_67 + eax_72 * 0x28;
                                                        *ecx_48 = esi_30[8];
                                                        ecx_48[1] = esi_30[9];
                                                        *ecx_48 = *(edx_16 + eax_32 * 0x2c + 0x64)
                                                            * *ecx_48;
                                                        float* eax_78 = *ebx_11;
                                                        ecx_48[1] = *(edx_16 + eax_32 * 0x2c + 0x66)
                                                            * ecx_48[1];
                                                        long double x87_r7_149 = eax_78[2];
                                                        long double temp25_1 = 0f;
                                                        x87_r7_149 - temp25_1;

                                                        if (!(*(&(
                                                            (x87_r7_149 < temp25_1 ? 1 : 0) << 8 | (
                                                            FCMP_UO(x87_r7_149, temp25_1) ? 1 : 0)
                                                            << 0xa
                                                            | (x87_r7_149 == temp25_1 ? 1 : 0)
                                                            << 0xe) + 1) & 0x41))
                                                        {
                                                            float eax_80 = *esi_30;
                                                            *ebx_11 = edi_17;
                                                            float eax_81 = esi_30[1];
                                                            float eax_82 = esi_30[2];
                                                            float arg_14c = eax_82 * a16
                                                                + eax_81 * a15 + eax_80 * arg_f4;
                                                            a13 = arg_14c;
                                                            a14 = eax_82 * a19 + eax_81 * a18
                                                                + eax_80 * a17 + arg_84;
                                                            edi_17[2] = eax_82 * a22
                                                                + eax_81 * a21 + eax_80 * a20
                                                                + arg_88;
                                                            *edi_17 = arg_14c + arg_80;
                                                            edi_17[1] = a14;
                                                        }

                                                        ecx_48 = &ecx_48[2];
                                                        ebx_11 = &ebx_11[1];
                                                        __return_addr += 2;
                                                        edi_17 = &edi_17[3];
                                                        cond:10_1 = a1 != 1;
                                                        a1 -= 1;
                                                    } while (cond:10_1);

                                                    if (!a14)
                                                        a2 = ecx_18[9];
                                                    else if (a14 == 1)
                                                        a2 = *(edx_16 + eax_32 * 0x2c + 0x60);

                                                    var_8_6 = a5 >> 1;
                                                    sub_521960(&(&__saved_edi)[esi_8 * 3 + 0x82],
                                                        &(&__saved_edi)[edi_7 * 3 + 0x82], a5,
                                                        a2, *(edx_16 + eax_32 * 0x2c + 0x64),
                                                        *(edx_16 + eax_32 * 0x2c + 0x66), 0,
                                                        nullptr, a5, a6, a7, a8, var_8_6,
                                                        var_8_6, arg_c,
                                                        &(&__saved_edi)[esi_8 * 3 + 0x82],
                                                        &(&__saved_edi)[edi_7 * 3 + 0x82],
                                                        &arg_128, &arg_130, &arg_138, a10);
                                                }
                                                else if (a10 || result_1)
                                                {
                                                    void arg_1d0;
                                                    float* edi_18 = &arg_1d0;
                                                    __return_addr = &arg_58;
                                                    float** ebx_12 = &arg_c;
                                                    float* ecx_52 = &arg_128;
                                                    a1 = 3;
                                                    bool cond:13_1;

                                                    do
                                                    {
                                                        int32_t eax_97 = 0;
                                                        eax_97 = *__return_addr;
                                                        int32_t* esi_33 = eax_67 + eax_97 * 0x28;
                                                        *ecx_52 = esi_33[8];
                                                        ecx_52[1] = esi_33[9];
                                                        *ecx_52 = *(edx_16 + eax_32 * 0x2c + 0x64)
                                                            * *ecx_52;
                                                        float* eax_103 = *ebx_12;
                                                        ecx_52[1] = *(edx_16 + eax_32 * 0x2c + 0x66)
                                                            * ecx_52[1];
                                                        long double x87_r7_169 = eax_103[2];
                                                        long double temp24_1 = 0f;
                                                        x87_r7_169 - temp24_1;

                                                        if (!(*(&(
                                                            (x87_r7_169 < temp24_1 ? 1 : 0) << 8 | (
                                                            FCMP_UO(x87_r7_169, temp24_1) ? 1 : 0)
                                                            << 0xa
                                                            | (x87_r7_169 == temp24_1 ? 1 : 0)
                                                            << 0xe) + 1) & 0x41))
                                                        {
                                                            float eax_111 = *esi_33;
                                                            *ebx_12 = edi_18;
                                                            float eax_112 = esi_33[1];
                                                            float eax_113 = esi_33[2];
                                                            float arg_140 = eax_113 * a16
                                                                + eax_112 * a15 + eax_111 * arg_f4;
                                                            a10 = arg_140;
                                                            a11 = eax_113 * a19
                                                                + eax_112 * a18 + eax_111 * a17
                                                                + arg_84;
                                                            edi_18[2] = (eax_113 * a22
                                                                + eax_112 * a21 + eax_111 * a20
                                                                + arg_88) * 0.999000013f;
                                                            *edi_18 = arg_140 + arg_80;
                                                            edi_18[1] = a11;
                                                        }
                                                        else
                                                        {
                                                            *edi_18 = **ebx_12;
                                                            edi_18[1] = (*ebx_12)[1];
                                                            float* eax_109 = *ebx_12;
                                                            *ebx_12 = edi_18;
                                                            edi_18[2] = eax_109[2];
                                                            edi_18[2] = edi_18[2] * 1.001001f;
                                                        }

                                                        ecx_52 = &ecx_52[2];
                                                        ebx_12 = &ebx_12[1];
                                                        __return_addr += 2;
                                                        edi_18 = &edi_18[3];
                                                        cond:13_1 = a1 != 1;
                                                        a1 -= 1;
                                                    } while (cond:13_1);

                                                    if (!a14)
                                                        a2 = g_a83b28;
                                                    else if (a14 == 1)
                                                        a2 = *(edx_16 + eax_32 * 0x2c + 0x60);

                                                    var_8_6 = a5 >> 1;
                                                    sub_521960(&(&__saved_edi)[esi_8 * 3 + 0x82],
                                                        &(&__saved_edi)[edi_7 * 3 + 0x82], a5,
                                                        a2, *(edx_16 + eax_32 * 0x2c + 0x64),
                                                        *(edx_16 + eax_32 * 0x2c + 0x66), 0,
                                                        nullptr, a5, a6, a7, a8, var_8_6,
                                                        var_8_6, arg_c,
                                                        &(&__saved_edi)[esi_8 * 3 + 0x82],
                                                        &(&__saved_edi)[edi_7 * 3 + 0x82],
                                                        &arg_128, &arg_130, &arg_138, a10);
                                                }
                                            }
                                            else
                                            {
                                                long double x87_r7_109 =
                                                    (&__saved_edi)[esi_8 * 3 + 0x84];
                                                long double temp13_1 = 0f;
                                                x87_r7_109 - temp13_1;

                                                if (*(&((x87_r7_109 < temp13_1 ? 1 : 0) << 8
                                                        | (FCMP_UO(x87_r7_109, temp13_1) ? 1 : 0)
                                                        << 0xa | (x87_r7_109 == temp13_1 ? 1 : 0) << 0xe)
                                                        + 1) & 0x41)
                                                    goto label_52297f;

                                                long double x87_r7_110 =
                                                    (&__saved_edi)[edi_7 * 3 + 0x84];
                                                long double temp15_1 = 0f;
                                                x87_r7_110 - temp15_1;

                                                if (*(&((x87_r7_110 < temp15_1 ? 1 : 0) << 8
                                                        | (FCMP_UO(x87_r7_110, temp15_1) ? 1 : 0)
                                                        << 0xa | (x87_r7_110 == temp15_1 ? 1 : 0) << 0xe)
                                                        + 1) & 0x41)
                                                    goto label_52297f;

                                                long double x87_r7_113 = (
                                                    (&__saved_edi)[edi_7 * 3 + 0x83]
                                                    - (&__saved_edi)[eax_34 + 0x83]) * (
                                                    (&__saved_edi)[esi_8 * 3 + 0x82]
                                                    - (&__saved_edi)[eax_34 + 0x82]);
                                                long double x87_r6_105 = (
                                                    (&__saved_edi)[esi_8 * 3 + 0x83]
                                                    - (&__saved_edi)[eax_34 + 0x83]) * (
                                                    (&__saved_edi)[edi_7 * 3 + 0x82]
                                                    - (&__saved_edi)[eax_34 + 0x82]);
                                                long double x87_r7_114 = x87_r7_113 - x87_r6_105;
                                                long double temp18_1 = 0f;
                                                x87_r7_114 - temp18_1;

                                                if (!(*(&((x87_r7_114 < temp18_1 ? 1 : 0) << 8
                                                    | (FCMP_UO(x87_r7_114, temp18_1) ? 1 : 0)
                                                    << 0xa | (x87_r7_114 == temp18_1 ? 1 : 0) << 0xe)
                                                    + 1) & 1) && !result_1)
                                                {
                                                    void** var_8_3 = &arg_c;
                                                    float* eax_47 = &arg_128;
                                                    int32_t edi_8 = *(arg_60 + 0x14);
                                                    int16_t* esi_9 = &arg_58;
                                                    __return_addr = 3;
                                                    bool cond:9_1;

                                                    do
                                                    {
                                                        int32_t ecx_24 = 0;
                                                        ecx_24 = *esi_9;
                                                        int32_t ecx_25 = ecx_24 * 5;
                                                        *eax_47 = *(edi_8 + (ecx_25 << 3) + 0x20);
                                                        eax_47[1] = *(edi_8 + (ecx_25 << 3) + 0x24);
                                                        *eax_47 = *(edx_16 + eax_32 * 0x2c + 0x64)
                                                            * *eax_47;
                                                        eax_47[1] = *(edx_16 + eax_32 * 0x2c + 0x66)
                                                            * eax_47[1];

                                                        if (!a10)
                                                        {
                                                            void* ecx_30 = *var_8_3;
                                                            *eax_47 = *(ecx_30 + 8) * *eax_47;
                                                            eax_47[1] = *(ecx_30 + 8) * eax_47[1];
                                                        }

                                                        esi_9 = &esi_9[1];
                                                        eax_47 = &eax_47[2];
                                                        var_8_3 = &var_8_3[1];
                                                        cond:9_1 = __return_addr != 1;
                                                        __return_addr -= 1;
                                                    } while (cond:9_1);

                                                    if (!a14)
                                                        a2 = ecx_18[9];
                                                    else if (a14 == 1)
                                                        a2 = *(edx_16 + eax_32 * 0x2c + 0x60);

                                                    sub_521110(&(&__saved_edi)[esi_8 * 3 + 0x82],
                                                        &(&__saved_edi)[edi_7 * 3 + 0x82], a5,
                                                        a2, *(edx_16 + eax_32 * 0x2c + 0x64),
                                                        *(edx_16 + eax_32 * 0x2c + 0x66), 0,
                                                        nullptr, a5, a6, arg_c,
                                                        &(&__saved_edi)[esi_8 * 3 + 0x82],
                                                        &(&__saved_edi)[edi_7 * 3 + 0x82],
                                                        &arg_128, &arg_130, &arg_138, a10);
                                                }
                                                else if (a10 || result_1)
                                                {
                                                    float** edi_9 = &arg_c;
                                                    float** arg_50 = &arg_c;
                                                    int32_t eax_58 = *(arg_60 + 0x14);
                                                    void arg_1b4;
                                                    float* ecx_41 = &arg_1b4;
                                                    float* eax_59 = &arg_128;
                                                    __return_addr = &arg_58;
                                                    a1 = 3;
                                                    bool cond:8_1;

                                                    do
                                                    {
                                                        int32_t esi_10 = 0;
                                                        esi_10 = *__return_addr;
                                                        int32_t esi_11 = esi_10 * 5;
                                                        *eax_59 = *(eax_58 + (esi_11 << 3) + 0x20);
                                                        eax_59[1] =
                                                            *(eax_58 + (esi_11 << 3) + 0x24);
                                                        *eax_59 = *(edx_16 + eax_32 * 0x2c + 0x64)
                                                            * *eax_59;
                                                        eax_59[1] = *(edx_16 + eax_32 * 0x2c + 0x66)
                                                            * eax_59[1];

                                                        if (!a10)
                                                        {
                                                            float* esi_16 = *edi_9;
                                                            *eax_59 = *eax_59 * esi_16[2];
                                                            eax_59[1] = eax_59[1] * esi_16[2];
                                                        }

                                                        float* edi_10 = *edi_9;
                                                        eax_59 = &eax_59[2];
                                                        ecx_41[-2] = *edi_10;
                                                        ecx_41[-1] = edi_10[1];
                                                        *ecx_41 = edi_10[2];
                                                        long double x87_r7_132 =
                                                            *ecx_41 * 1.001001f;
                                                        ecx_41 = &ecx_41[3];
                                                        *arg_50 = &ecx_41[-2];
                                                        edi_9 = &arg_50[1];
                                                        ecx_41[-3] = x87_r7_132;
                                                        __return_addr += 2;
                                                        cond:8_1 = a1 != 1;
                                                        arg_50 = edi_9;
                                                        a1 -= 1;
                                                    } while (cond:8_1);

                                                    if (!a14)
                                                        a2 = g_a83b28;
                                                    else if (a14 == 1)
                                                        a2 = *(edx_16 + eax_32 * 0x2c + 0x60);

                                                    sub_521110(&(&__saved_edi)[esi_8 * 3 + 0x82],
                                                        &(&__saved_edi)[edi_7 * 3 + 0x82], a5,
                                                        a2, *(edx_16 + eax_32 * 0x2c + 0x64),
                                                        *(edx_16 + eax_32 * 0x2c + 0x66), 0,
                                                        nullptr, a5, a6, arg_c,
                                                        &(&__saved_edi)[esi_8 * 3 + 0x82],
                                                        &(&__saved_edi)[edi_7 * 3 + 0x82],
                                                        &arg_128, &arg_130, &arg_138, a10);
                                                }
                                            }
                                        }
                                    }

                                    int32_t ecx_66 = 0;
                                    ecx_66 = *(a5 + 0xc);
                                    int32_t eax_128;
                                    void* edx_23;
                                    edx_23 = HIGHD(0x55555556 * ecx_66);
                                    eax_128 = LOWD(0x55555556 * ecx_66);
                                    result = edx_23 >> 0x1f;
                                    bool cond:6_1 = a6 + 1 < ecx_66 / 3;
                                    a6 += 1;
                                    arg_7c += 6;

                                    if (!cond:6_1)
                                        break;

                                    esi_3 = arg_7c;
                                    ecx_12 = a5;
                                }

                                ebx_1 = arg_c;
                                ecx_12 = a5;
                            }

                            result = *(ecx_12 + 0xe);

                            if (result == 0xffff)
                                break;

                            ecx_12 = ecx_12 + (result & 0xffff) + 0x20;
                        }

                        esi_2 = a2;
                        edi_4 = arg_e8;
                    }
                }
            }
            else
            {
                esi_2 = a2;
                edi_4 = arg_e8;
            }

            edi_4 += 1;
            arg_e8 = edi_4;

            if (edi_4 >= *arg_ec)
                break;

            edx = arg_ec;
        }
    }

    return result;
}
