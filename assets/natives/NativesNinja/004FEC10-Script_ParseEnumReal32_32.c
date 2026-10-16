#include "004FEC10-Script_ParseEnumReal32_32.h"
/* 0x004fec10 Script_ParseEnumReal32_32 full linked: callers=2 callees=24 */
char* sub_4fec10(int32_t a1, float* a2, int32_t* a3, char* a4, float a5, int32_t a6, float* a7 @ 0x20)

{
    float var_140 = 0f;
    int32_t var_130 = 0;
    void* eax_1 = sub_4f1030(a1);

    if (!eax_1)
    {
        *a4 = eax_1;
        return eax_1;
    }

    int32_t* eax_2 = QTask_DeleteTask_2(eax_1, g_a7a620);
    int32_t* ebx = eax_2;
    int32_t* var_cc = ebx;

    if (!ebx)
    {
        *a4 = ebx;
        return a4;
    }

    long double x87_r7 = *(eax_1 + 0x28);
    long double temp1 = 0f;
    x87_r7 - temp1;
    eax_2 = (x87_r7 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp1) ? 1 : 0) << 0xa
        | (x87_r7 == temp1 ? 1 : 0) << 0xe;

    if (!(*(&eax_2 + 1) & 0x40))
    {
        long double x87_r7_1 = a5;
        long double temp2_1 = 0f;
        x87_r7_1 - temp2_1;
        eax_2 = (x87_r7_1 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp2_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp2_1 ? 1 : 0) << 0xe | 0x3800;

        if (*(&eax_2 + 1) & 1)
        {
            do
            {
                x87_r7_1 = x87_r7_1 + *(eax_1 + 0x28);
                long double temp4_1 = 0f;
                x87_r7_1 - temp4_1;
                eax_2 = (x87_r7_1 < temp4_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_1, temp4_1) ? 1 : 0) << 0xa
                    | (x87_r7_1 == temp4_1 ? 1 : 0) << 0xe | 0x3800;
            } while (*(&eax_2 + 1) & 1);

            a5 = x87_r7_1;
        }

        long double temp3_1 = *(eax_1 + 0x28);
        x87_r7_1 - temp3_1;
        eax_2 = (x87_r7_1 < temp3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp3_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp3_1 ? 1 : 0) << 0xe | 0x3800;

        if (!(*(&eax_2 + 1) & 1))
        {
            do
            {
                x87_r7_1 = x87_r7_1 - *(eax_1 + 0x28);
                long double temp6_1 = *(eax_1 + 0x28);
                x87_r7_1 - temp6_1;
                eax_2 = (x87_r7_1 < temp6_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_1, temp6_1) ? 1 : 0) << 0xa
                    | (x87_r7_1 == temp6_1 ? 1 : 0) << 0xe | 0x3800;
            } while (!(*(&eax_2 + 1) & 1));

            a5 = x87_r7_1;
        }

        long double temp5_1 = 0f;
        x87_r7_1 - temp5_1;
        eax_2 = (x87_r7_1 < temp5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp5_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp5_1 ? 1 : 0) << 0xe | 0x3800;

        if (!(*(&eax_2 + 1) & 0x40))
        {
            long double x87_r6 = 0f;
            x87_r6 - x87_r7_1;
            eax_2 = (x87_r6 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6, x87_r7_1) ? 1 : 0) << 0xa
                | (x87_r6 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800;

            if (*(&eax_2 + 1) & 1)
            {
                void* ebx_2;

                do
                {
                    eax_2 = g_a7a620;
                    eax_2 = QTask_TriggerEvent_2(var_cc, eax_2);

                    if (!eax_2)
                    {
                        *a4 = 0;
                        return eax_2;
                    }

                    ebx_2 = eax_2[0x3c];
                    var_cc = eax_2;
                    long double x87_r7_5 = var_140 + *(ebx_2 + 0xf8);
                    var_140 = x87_r7_5;
                    long double temp8_1 = a5;
                    x87_r7_5 - temp8_1;
                    eax_2 = (x87_r7_5 < temp8_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_5, temp8_1) ? 1 : 0) << 0xa
                        | (x87_r7_5 == temp8_1 ? 1 : 0) << 0xe;
                } while (*(&eax_2 + 1) & 1);

                if (ebx_2)
                {
                    long double x87_r7_7 = var_140 - *(ebx_2 + 0xf8);
                    long double temp9 = a5;
                    x87_r7_7 - temp9;
                    eax_2 = (x87_r7_7 < temp9 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_7, temp9) ? 1 : 0) << 0xa
                        | (x87_r7_7 == temp9 ? 1 : 0) << 0xe | 0x3800;

                    if (*(&eax_2 + 1) & 0x40)
                    {
                        int32_t i_3 = a6 + 1;

                        if (i_3 > 0)
                        {
                            eax_2 = a3;
                            int32_t i;

                            do
                            {
                                eax_2 = &eax_2[6];
                                i = i_3;
                                i_3 -= 1;
                                *(eax_2 - 0x18) = *(ebx_2 + 0x104) + *(ebx_2 + 0x20);
                                *(eax_2 - 0x10) = *(ebx_2 + 0x108) + *(ebx_2 + 0x28);
                                *(eax_2 - 8) = *(ebx_2 + 0x10c) + *(ebx_2 + 0x30);
                            } while (i != 1);
                        }

                        if (a2)
                            memcpy(a2, ebx_2 + 0x200, 0x28);

                        *a4 = 1;
                        return eax_2;
                    }

                    long double temp10 = a5;
                    x87_r7_7 - temp10;
                    int32_t edi_3;

                    if (!(*(&((x87_r7_7 < temp10 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_7, temp10) ? 1 : 0) << 0xa
                            | (x87_r7_7 == temp10 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                        edi_3 = var_130;
                    else
                    {
                        edi_3 = var_130;
                        float* ecx_5 = ebx_2 + 0x548;
                        long double temp13_1;

                        do
                        {
                            if (edi_3 >= *(ebx_2 + 0x59c))
                            {
                                int32_t eax_6 = a6;
                                int32_t i_5 = eax_6 + 1;

                                if (i_5 > 0)
                                {
                                    int32_t* ecx_6 = a3;
                                    int32_t i_1;

                                    do
                                    {
                                        ecx_6 = &ecx_6[6];
                                        *(ecx_6 - 0x18) = *(ebx_2 + *(ebx_2 + 0x59c) * 0xc + 0x104)
                                            + *(ebx_2 + 0x20);
                                        i_1 = i_5;
                                        i_5 -= 1;
                                        *(ecx_6 - 0x10) = *(ebx_2 + (*(ebx_2 + 0x59c) + 0x16) * 0xc)
                                            + *(ebx_2 + 0x28);
                                        eax_6 = *(ebx_2 + 0x59c) * 3;
                                        *(ecx_6 - 8) =
                                            *(ebx_2 + (eax_6 << 2) + 0x10c) + *(ebx_2 + 0x30);
                                    } while (i_1 != 1);
                                }

                                if (a2)
                                {
                                    eax_6 = *(ebx_2 + 0x59c);
                                    memcpy(a2, ebx_2 + eax_6 * 0x28 + 0x200, 0x28);
                                }

                                *a4 = 1;
                                return eax_6;
                            }

                            x87_r7_7 = x87_r7_7 + *ecx_5;
                            edi_3 += 1;
                            ecx_5 = &ecx_5[1];
                            temp13_1 = a5;
                            x87_r7_7 - temp13_1;
                        } while (*(&((x87_r7_7 < temp13_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_7, temp13_1) ? 1 : 0) << 0xa
                            | (x87_r7_7 == temp13_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1);
                    }

                    int32_t edi_5 = edi_3 - 1;
                    int32_t esi_5 = 0;
                    int32_t var_130_1 = edi_5;
                    var_140 = x87_r7_7 - *(ebx_2 + (edi_3 << 2) + 0x544);
                    void* eax_14 = ebx_2 + edi_5 * 0xc;
                    float* var_b4 = eax_14 + 0x104;
                    float* var_90 = eax_14 + 0x110;
                    float var_154 = (a5 - var_140) / *(ebx_2 + (edi_5 << 2) + 0x548);
                    void* var_94 = ebx_2 + ((edi_5 * 3 + 0x45) << 2);
                    float* ecx_11 = ebx_2 + ((edi_5 * 3 + 0x42) << 2);
                    float* var_b0 = ecx_11;
                    float* var_98 = eax_14 + 0x10c;
                    float* var_ac = eax_14 + 0x118;
                    float var_88 = (*(ebx_2 + ((edi_5 * 3 + 0x45) << 2))
                        - *(ebx_2 + ((edi_5 * 3 + 0x42) << 2))) * var_154 + *ecx_11;
                    float* ecx_13 = a2;
                    int32_t* eax_16 = a3;
                    float var_84 =
                        (*(eax_14 + 0x118) - *(eax_14 + 0x10c)) * var_154 + *(eax_14 + 0x10c);
                    *eax_16 = (*(eax_14 + 0x110) - *(eax_14 + 0x104)) * var_154 + *(eax_14 + 0x104)
                        + *(ebx_2 + 0x20);
                    *(eax_16 + 8) = var_88 + *(ebx_2 + 0x28);
                    *(eax_16 + 0x10) = var_84 + *(ebx_2 + 0x30);
                    int16_t top = 0;
                    char var_139;
                    float var_12c;
                    int32_t var_11c;
                    float var_118;
                    float var_114;
                    float var_c8;
                    int32_t var_a8;
                    float var_9c;

                    if (ecx_13)
                    {
                        int32_t edx_8 = edi_5 * 5;
                        void* ecx_14 = ebx_2 + (edx_8 << 3);
                        long double x87_r7_37 = *(ebx_2 + (edx_8 << 3) + 0x220)
                            + *(ebx_2 + (edx_8 << 3) + 0x210) + *(ecx_14 + 0x200);
                        long double temp12_1 = 0f;
                        x87_r7_37 - temp12_1;
                        float var_c4;
                        float var_c0;
                        float var_bc_1;
                        long double x87_r7_40;

                        if (*(&((x87_r7_37 < temp12_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_37, temp12_1) ? 1 : 0) << 0xa
                            | (x87_r7_37 == temp12_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                        {
                            long double x87_r7_42 = *(ecx_14 + 0x210);
                            long double temp14_1 = *(ecx_14 + 0x200);
                            x87_r7_42 - temp14_1;
                            var_a8 = 1;
                            int32_t var_a4_1 = 2;
                            int32_t var_a0_1 = 0;
                            int32_t var_150_1 = 0;

                            if (!(*(&((x87_r7_42 < temp14_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_42, temp14_1) ? 1 : 0) << 0xa
                                | (x87_r7_42 == temp14_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                            {
                                esi_5 = 1;
                                var_150_1 = 1;
                            }

                            long double x87_r7_43 = *(ecx_14 + 0x220);
                            long double temp15_1 = *((esi_5 << 4) + ecx_14 + 0x200);
                            x87_r7_43 - temp15_1;

                            if (!(*(&((x87_r7_43 < temp15_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_43, temp15_1) ? 1 : 0) << 0xa
                                | (x87_r7_43 == temp15_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                            {
                                esi_5 = 2;
                                var_150_1 = 2;
                            }

                            int32_t edx_11 = (&var_a8)[esi_5];
                            x87_r7_40 = sqrtl(*((esi_5 << 4) + ecx_14 + 0x200)
                                - *((edx_11 << 4) + ecx_14 + 0x200)
                                - *(((&var_a8)[edx_11] << 4) + ecx_14 + 0x200) + 1f);
                            (&var_c8)[var_150_1] = x87_r7_40 * 0.5f;
                            long double temp18_1 = 0f;
                            x87_r7_40 - temp18_1;

                            if (!(*(&((x87_r7_40 < temp18_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_40, temp18_1) ? 1 : 0) << 0xa
                                    | (x87_r7_40 == temp18_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                                x87_r7_40 = 0.5f / x87_r7_40;

                            int32_t eax_24 = var_150_1 * 3;
                            int32_t eax_25 = edx_11 * 3;
                            int32_t eax_28 = (&var_a8)[edx_11];
                            (&var_c8)[edx_11] = (*(ecx_14 + ((var_150_1 + eax_25) << 2) + 0x200)
                                + *(ecx_14 + ((eax_24 + edx_11) << 2) + 0x200)) * x87_r7_40;
                            int32_t edx_12 = eax_28 * 3;
                            (&var_c8)[eax_28] = (*(ecx_14 + ((var_150_1 + edx_12) << 2) + 0x200)
                                + *(ecx_14 + ((eax_24 + eax_28) << 2) + 0x200)) * x87_r7_40;
                            var_bc_1 = -(((*(ecx_14 + ((eax_28 + eax_25) << 2) + 0x200)
                                - *(ecx_14 + ((edx_11 + edx_12) << 2) + 0x200)) * x87_r7_40));
                        }
                        else
                        {
                            long double x87_r7_39 = sqrtl(x87_r7_37 + 1f);
                            var_bc_1 = x87_r7_39 * 0.5f;
                            x87_r7_40 = 0.5f / x87_r7_39;
                            var_c8 = -(((*(ecx_14 + 0x214) - *(ecx_14 + 0x21c)) * x87_r7_40));
                            var_c4 = -(((*(ecx_14 + 0x218) - *(ebx_2 + ((edi_5 * 5 + 0x41) << 3)))
                                * x87_r7_40));
                            var_c0 = -(((*(ecx_14 + 0x204) - *(ecx_14 + 0x20c)) * x87_r7_40));
                        }
                        int32_t eax_30 = *(ecx_14 + 0x224);
                        long double x87_r7_51 =
                            *(ecx_14 + 0x248) + *(ecx_14 + 0x238) + *(ecx_14 + 0x228);
                        long double temp16_1 = 0f;
                        x87_r7_51 - temp16_1;
                        float var_110;
                        float var_10c;
                        float var_108_1;
                        long double x87_r7_54;

                        if (*(&((x87_r7_51 < temp16_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_51, temp16_1) ? 1 : 0) << 0xa
                            | (x87_r7_51 == temp16_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                        {
                            long double x87_r7_56 = *(ecx_14 + 0x238);
                            long double temp19_1 = *(ecx_14 + 0x228);
                            x87_r7_56 - temp19_1;
                            int32_t edx_19 = 0;
                            var_a8 = 1;
                            int32_t var_a4_2 = 2;
                            int32_t var_a0_2 = 0;

                            if (!(*(&((x87_r7_56 < temp19_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_56, temp19_1) ? 1 : 0) << 0xa
                                    | (x87_r7_56 == temp19_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                                edx_19 = 1;

                            long double x87_r7_57 = *(ecx_14 + 0x248);
                            long double temp21_1 = *((edx_19 << 4) + ecx_14 + 0x228);
                            x87_r7_57 - temp21_1;

                            if (!(*(&((x87_r7_57 < temp21_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_57, temp21_1) ? 1 : 0) << 0xa
                                    | (x87_r7_57 == temp21_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                                edx_19 = 2;

                            int32_t esi_12 = (&var_a8)[edx_19];
                            x87_r7_54 = sqrtl(*((edx_19 << 4) + ecx_14 + 0x228)
                                - *((esi_12 << 4) + ecx_14 + 0x228)
                                - *(((&var_a8)[esi_12] << 4) + ecx_14 + 0x228) + 1f);
                            (&var_114)[edx_19] = x87_r7_54 * 0.5f;
                            long double temp22_1 = 0f;
                            x87_r7_54 - temp22_1;

                            if (!(*(&((x87_r7_54 < temp22_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_54, temp22_1) ? 1 : 0) << 0xa
                                    | (x87_r7_54 == temp22_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                                x87_r7_54 = 0.5f / x87_r7_54;

                            int32_t edi_8 = esi_12 * 3;
                            int32_t eax_40 = edx_19 * 3;
                            int32_t eax_42 = (&var_a8)[esi_12];
                            int32_t edi_10 = eax_42 * 3;
                            (&var_114)[esi_12] = (*(ecx_14 + ((edi_8 + edx_19) << 2) + 0x228)
                                + *(ecx_14 + ((eax_40 + esi_12) << 2) + 0x228)) * x87_r7_54;
                            (&var_114)[eax_42] = (*(ecx_14 + ((edi_10 + edx_19) << 2) + 0x228)
                                + *(ecx_14 + ((eax_40 + eax_42) << 2) + 0x228)) * x87_r7_54;
                            var_108_1 = -(((*(ecx_14 + ((edi_8 + eax_42) << 2) + 0x228)
                                - *(ecx_14 + ((edi_10 + esi_12) << 2) + 0x228)) * x87_r7_54));
                        }
                        else
                        {
                            long double x87_r7_53 = sqrtl(x87_r7_51 + 1f);
                            var_108_1 = x87_r7_53 * 0.5f;
                            x87_r7_54 = 0.5f / x87_r7_53;
                            var_114 = -(((*(ecx_14 + 0x23c) - *(ecx_14 + 0x244)) * x87_r7_54));
                            var_110 = -(((*(ecx_14 + 0x240) - *(ebx_2 + ((edi_5 * 5 + 0x46) << 3)))
                                * x87_r7_54));
                            var_10c = -(((*(ecx_14 + 0x22c) - *(ecx_14 + 0x234)) * x87_r7_54));
                        }
                        int32_t ecx_15 = *(ecx_14 + 0x24c);
                        sub_4b44d0(&var_139, &var_118, &var_9c, &var_c8, &var_114);
                        int16_t eax_46;
                        eax_46 = var_139;

                        if (eax_46)
                        {
                            var_114 = -(var_114);
                            var_110 = -(var_110);
                            var_10c = -(var_10c);
                            var_108_1 = -(var_108_1);
                        }

                        long double x87_r7_71 = var_118;
                        long double temp23_1 = 0f;
                        x87_r7_71 - temp23_1;
                        float var_128;
                        float var_124;
                        float var_120;

                        if (!(*(&((x87_r7_71 < temp23_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_71, temp23_1) ? 1 : 0) << 0xa
                            | (x87_r7_71 == temp23_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        {
                            long double x87_r7_72 = var_118;
                            long double temp26_1 = 0.00999999978f;
                            x87_r7_72 - temp26_1;
                            long double x87_r6_61;
                            long double x87_r7_74;

                            if (!(*(&((x87_r7_72 < temp26_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_72, temp26_1) ? 1 : 0) << 0xa
                                | (x87_r7_72 == temp26_1 ? 1 : 0) << 0xe) + 1) & 1))
                            {
                                float var_138_3 = var_118 * var_154;
                                long double st0_1;
                                bool c1_1;
                                bool c2_21;
                                st0_1 = __fsin(var_118 - var_138_3);
                                x87_r7_74 = st0_1 * var_9c;
                                long double st0_2;
                                bool c1_2;
                                bool c2_22;
                                st0_2 = __fsin(var_138_3);
                                x87_r6_61 = st0_2 * var_9c;
                            }
                            else
                            {
                                x87_r7_74 = 1f - var_154;
                                x87_r6_61 = var_154;
                            }

                            var_11c = ecx_15 + eax_30 + 1;
                            var_12c = x87_r6_61 * var_114 + x87_r7_74 * var_c8;
                            var_128 = x87_r6_61 * var_110 + x87_r7_74 * var_c4;
                            var_124 = x87_r6_61 * var_10c + x87_r7_74 * var_c0;
                            var_120 = x87_r6_61 * var_108_1 + x87_r7_74 * var_bc_1;
                        }
                        else
                            memcpy(&var_12c, &var_c8, 0x14);

                        long double x87_r7_83 = var_12c * var_12c;
                        edi_5 = var_130_1;
                        long double x87_r6_68 = var_128 * var_12c;
                        a2[9] = var_11c;
                        ecx_13 = a2;
                        long double x87_r6_69 = x87_r6_68 + x87_r6_68;
                        long double x87_r5_11 = var_124 * var_12c;
                        float var_148_3 = x87_r5_11 + x87_r5_11;
                        long double x87_r5_14 = var_120 * var_12c;
                        float var_150_2 = x87_r5_14 + x87_r5_14;
                        long double x87_r5_17 = var_128 * var_128;
                        float var_14c_1 = x87_r5_17 + x87_r5_17;
                        long double x87_r5_20 = var_124 * var_128;
                        float var_d0_1 = x87_r5_20 + x87_r5_20;
                        long double x87_r5_23 = var_120 * var_128;
                        float var_144_2 = x87_r5_23 + x87_r5_23;
                        long double x87_r5_26 = var_124 * var_124;
                        float var_138_4 = x87_r5_26 + x87_r5_26;
                        long double x87_r5_29 = var_120 * var_124;
                        long double x87_r5_30 = x87_r5_29 + x87_r5_29;
                        *a2 = 1f - var_14c_1 - var_138_4;
                        a2[1] = x87_r6_69 - x87_r5_30;
                        a2[2] = var_144_2 + var_148_3;
                        a2[3] = x87_r5_30 + x87_r6_69;
                        long double x87_r7_85 = 1f - (x87_r7_83 + x87_r7_83);
                        a2[4] = x87_r7_85 - var_138_4;
                        a2[5] = var_d0_1 - var_150_2;
                        a2[6] = var_148_3 - var_144_2;
                        a2[7] = var_d0_1 + var_150_2;
                        a2[8] = x87_r7_85 - var_14c_1;
                        top = 0;
                        eax_16 = a3;
                    }

                    float* esi_13 = a7;

                    if (esi_13)
                    {
                        float var_88_1 =
                            ecx_13[4] * esi_13[1] + ecx_13[3] * *esi_13 + ecx_13[5] * esi_13[2];
                        float var_84_1 =
                            ecx_13[7] * esi_13[1] + ecx_13[6] * *esi_13 + ecx_13[8] * esi_13[2];
                        *eax_16 = ecx_13[1] * esi_13[1] + ecx_13[2] * esi_13[2] + *ecx_13 * *esi_13
                            + *eax_16;
                        *(eax_16 + 8) = var_88_1 + *(eax_16 + 8);
                        *(eax_16 + 0x10) = var_84_1 + *(eax_16 + 0x10);
                        top = 0;
                    }

                    int32_t eax_49 = a6;
                    float var_d0_2 = a5;
                    int32_t var_138_5 = 0;

                    if (eax_49 > 0)
                    {
🚫🚫                        while (true)
                        {
                            /* unimplemented  {fld st0, dword [eax+ecx*4]} */
🚫🚫                            float var_150_3 = /* float var_150_3 =
                                unimplemented  {fst dword [esp+0x10], st0} */;
🚫🚫                            /* unimplemented  {fld st0, st0} */
🚫🚫                            /* unimplemented  {fmul st0, st1} */
                            int32_t* var_154_1 = a3;
                            a3 = &a3[6];
🚫🚫🚫                            float var_14c_2 = /* float var_14c_2 =
                                unimplemented  {fstp dword [esp+0x14], st0} */;
                            /* unimplemented  {fstp dword [esp+0x14], st0} */
🚫🚫                            /* unimplemented  {fld st0, st0} */
🚫🚫                            /* unimplemented  {fadd dword [esp+0x90]} */
🚫🚫🚫                            float var_d0_3 = /* float var_d0_3 =
                                unimplemented  {fstp dword [esp+0x90], st0} */;
                            /* unimplemented  {fstp dword [esp+0x90], st0} */

                            if (a2)
                                a2 = &a2[0xa];

⋯                            long double temp20_1 = 0f;
                            /* unimplemented  {fcomp st0, dword [&g_5333ec]} f- temp20_1 */
                                - temp20_1;
                            bool c0_21 = /* bool c0_21 =
                                unimplemented  {fcomp st0, dword [&g_5333ec]} f< temp20_1 */
                                < temp20_1;
                            bool c2_23 = FCMP_UO(/* bool c2_23 = is_unordered.t(
                                unimplemented  {fcomp st0, dword [&g_5333ec]}, temp20_1) */,
                                temp20_1);
                            bool c3_21 = /* bool c3_21 =
                                unimplemented  {fcomp st0, dword [&g_5333ec]} f== temp20_1 */
                                == temp20_1;
                            /* unimplemented  {fcomp st0, dword [&g_5333ec]} */
                            int16_t top_49;
                            double var_100;
                            double var_e8;
                            double var_e0;
                            int32_t* eax_58;
                            int16_t top_35;

                            if (!(*(&((c0_21 ? 1 : 0) << 8 | (c2_23 ? 1 : 0) << 0xa
                                | (c3_21 ? 1 : 0) << 0xe | (top & 7) << 0xb) + 1) & 1))
                            {
🚫🚫                                /* unimplemented  {fld st0, dword [ecx]} */
🚫🚫                                /* unimplemented  {fadd qword [ebx+0x20]} */
🚫🚫🚫                                var_e8 = /* var_e8 = unimplemented  {fstp qword [esp+0x78], st0} */;
                                /* unimplemented  {fstp qword [esp+0x78], st0} */
🚫🚫                                /* unimplemented  {fld st0, dword [edx]} */
🚫🚫                                /* unimplemented  {fadd qword [ebx+0x28]} */
🚫🚫🚫                                var_e0 = /* var_e0 = unimplemented  {fstp qword [esp+0x80], st0} */;
                                /* unimplemented  {fstp qword [esp+0x80], st0} */
🚫🚫                                /* unimplemented  {fld st0, dword [eax]} */
🚫🚫                                /* unimplemented  {fadd qword [ebx+0x30]} */
🚫🚫🚫                                double var_d8_5 = /* double var_d8_5 =
                                    unimplemented  {fstp qword [esp+0x88], st0} */;
                                /* unimplemented  {fstp qword [esp+0x88], st0} */

                                if (esi_13)
                                {
🚫🚫                                    /* unimplemented  {fld st0, dword [ebx+edx*8]} */
🚫🚫                                    /* unimplemented  {fmul st0, dword [esi+0x8]} */
🚫🚫                                    /* unimplemented  {fld st0, dword [ebx+ecx*8+0x22c]} */
🚫🚫                                    /* unimplemented  {fmul st0, dword [esi+0x4]} */
🚫🚫🚫                                    /* unimplemented  {faddp st1, st0} */
                                    /* unimplemented  {faddp st1, st0} */
🚫🚫                                    /* unimplemented  {fld st0, dword [eax+0x228]} */
🚫🚫                                    /* unimplemented  {fmul st0, dword [esi]} */
🚫🚫🚫                                    /* unimplemented  {faddp st1, st0} */
                                    /* unimplemented  {faddp st1, st0} */
🚫🚫                                    /* unimplemented  {fld st0, dword [eax+0x238]} */
🚫🚫                                    /* unimplemented  {fmul st0, dword [esi+0x4]} */
🚫🚫                                    /* unimplemented  {fld st0, dword [eax+0x234]} */
🚫🚫                                    /* unimplemented  {fmul st0, dword [esi]} */
🚫🚫🚫                                    /* unimplemented  {faddp st1, st0} */
                                    /* unimplemented  {faddp st1, st0} */
🚫🚫                                    /* unimplemented  {fld st0, dword [eax+0x23c]} */
🚫🚫                                    /* unimplemented  {fmul st0, dword [esi+0x8]} */
🚫🚫🚫                                    /* unimplemented  {faddp st1, st0} */
                                    /* unimplemented  {faddp st1, st0} */
🚫🚫🚫                                    float var_10_1 = /* float var_10_1 =
                                        unimplemented  {fstp dword [esp+0x150], st0} */;
                                    /* unimplemented  {fstp dword [esp+0x150], st0} */
🚫🚫                                    /* unimplemented  {fld st0, dword [eax+0x244]} */
🚫🚫                                    /* unimplemented  {fmul st0, dword [esi+0x4]} */
🚫🚫                                    /* unimplemented  {fld st0, dword [eax+0x240]} */
🚫🚫                                    /* unimplemented  {fmul st0, dword [esi]} */
🚫🚫🚫                                    /* unimplemented  {faddp st1, st0} */
                                    /* unimplemented  {faddp st1, st0} */
🚫🚫                                    /* unimplemented  {fld st0, dword [eax+0x248]} */
🚫🚫                                    /* unimplemented  {fmul st0, dword [esi+0x8]} */
🚫🚫🚫                                    /* unimplemented  {faddp st1, st0} */
                                    /* unimplemented  {faddp st1, st0} */
🚫🚫🚫                                    float var_c_1 = /* float var_c_1 =
                                        unimplemented  {fstp dword [esp+0x154], st0} */;
                                    /* unimplemented  {fstp dword [esp+0x154], st0} */
🚫🚫                                    /* unimplemented  {fadd qword [esp+0x78]} */
🚫🚫🚫                                    var_e8 = /* var_e8 =
                                        unimplemented  {fstp qword [esp+0x78], st0} */;
                                    /* unimplemented  {fstp qword [esp+0x78], st0} */
🚫🚫                                    /* unimplemented  {fld st0, dword [esp+0x150]} */
🚫🚫                                    /* unimplemented  {fadd qword [esp+0x80]} */
🚫🚫🚫                                    var_e0 = /* var_e0 =
                                        unimplemented  {fstp qword [esp+0x80], st0} */;
                                    /* unimplemented  {fstp qword [esp+0x80], st0} */
🚫🚫                                    /* unimplemented  {fld st0, dword [esp+0x154]} */
🚫🚫                                    /* unimplemented  {fadd qword [esp+0x88]} */
🚫🚫🚫                                    double var_d8_6 = /* double var_d8_6 =
                                        unimplemented  {fstp qword [esp+0x88], st0} */;
                                    /* unimplemented  {fstp qword [esp+0x88], st0} */
                                }

🚫🚫                                int32_t ecx_29 = sub_4b32f0(var_154_1, &var_e8);
                                /* unimplemented  {call sub_4b32f0} */
⋯                                long double temp24_1 = var_14c_2;
                                /* unimplemented  {fcomp st0, dword [esp+0x1c]} f- temp24_1 */
                                    - temp24_1;
                                bool c0_26 = /* bool c0_26 =
                                    unimplemented  {fcomp st0, dword [esp+0x1c]} f< temp24_1 */
                                    < temp24_1;
                                bool c2_30 = FCMP_UO(/* bool c2_30 = is_unordered.t(
                                    unimplemented  {fcomp st0, dword [esp+0x1c]}, temp24_1) */,
                                    temp24_1);
                                bool c3_26 = /* bool c3_26 =
                                    unimplemented  {fcomp st0, dword [esp+0x1c]} f== temp24_1 */
                                    == temp24_1;
                                /* unimplemented  {fcomp st0, dword [esp+0x1c]} */
                                top_35 = top;

                                if (*(&((c0_26 ? 1 : 0) << 8 | (c2_30 ? 1 : 0) << 0xa
                                    | (c3_26 ? 1 : 0) << 0xe | (top_35 & 7) << 0xb) + 1) & 0x41)
                                {
                                    int32_t eax_77;

                                    do
                                    {
                                        int16_t top_266;

                                        if (edi_5 >= *(ebx_2 + 0x59c) - 1)
                                        {
                                            ecx_29 = g_a7a620;
                                            eax_58 = QTask_TriggerEvent_2(var_cc, ecx_29);

                                            if (!eax_58)
                                                goto label_50081a;

                                            void* ecx_30 = eax_58[0x3c];

                                            if (!ecx_30)
                                                goto label_50081a;

                                            esi_13 = a7;
🚫🚫                                            /* unimplemented  {fld st0, dword [esp+0x20]} */
🚫🚫                                            /* unimplemented  {fadd dword [ebx+edx*4+0x548]} */
                                            edi_5 = 0;
                                            var_cc = eax_58;
                                            ebx_2 = ecx_30;
                                            var_130_1 = 0;
🚫🚫🚫                                            var_140 = /* var_140 =
                                                unimplemented  {fstp dword [esp+0x20], st0} */;
                                            /* unimplemented  {fstp dword [esp+0x20], st0} */
                                            top_266 = top_35;
                                        }
                                        else
                                        {
🚫🚫                                            /* unimplemented  {fld st0, dword [esp+0x20]} */
🚫🚫                                            /* unimplemented  {fadd dword [ebx+edi*4+0x548]} */
                                            edi_5 += 1;
                                            var_130_1 = edi_5;
🚫🚫🚫                                            var_140 = /* var_140 =
                                                unimplemented  {fstp dword [esp+0x20], st0} */;
                                            /* unimplemented  {fstp dword [esp+0x20], st0} */
                                            top_266 = top_35;
                                        }

                                        void* eax_72 = ebx_2 + edi_5 * 0xc;
🚫🚫                                        /* unimplemented  {fld st0, dword [eax+0x104]} */
🚫🚫                                        /* unimplemented  {fadd qword [ebx+0x20]} */
                                        void* var_b4_2 = eax_72 + 0x104;
🚫🚫🚫                                        var_100 = /* var_100 =
                                            unimplemented  {fstp qword [esp+0x60], st0} */;
                                        /* unimplemented  {fstp qword [esp+0x60], st0} */
🚫🚫                                        /* unimplemented  {fld st0, dword [ebx+ecx*4]} */
🚫🚫                                        /* unimplemented  {fadd qword [ebx+0x28]} */
                                        void* var_b0_2 = ebx_2 + ((edi_5 * 3 + 0x42) << 2);
                                        void* var_98_2 = eax_72 + 0x10c;
🚫🚫🚫                                        double var_f8_9 = /* double var_f8_9 =
                                            unimplemented  {fstp qword [esp+0x68], st0} */;
                                        /* unimplemented  {fstp qword [esp+0x68], st0} */
🚫🚫                                        /* unimplemented  {fld st0, dword [ecx]} */
🚫🚫                                        /* unimplemented  {fadd qword [ebx+0x30]} */
                                        void* var_90_2 = eax_72 + 0x110;
                                        void* var_ac_2 = eax_72 + 0x118;
🚫🚫🚫                                        double var_f0_9 = /* double var_f0_9 =
                                            unimplemented  {fstp qword [esp+0x70], st0} */;
                                        /* unimplemented  {fstp qword [esp+0x70], st0} */
🚫🚫                                        /* unimplemented  {fld st0, dword [ecx]} */
🚫🚫                                        /* unimplemented  {fadd qword [ebx+0x20]} */
                                        void* var_94_2 = ebx_2 + ((edi_5 * 3 + 0x45) << 2);
🚫🚫🚫                                        var_e8 = /* var_e8 =
                                            unimplemented  {fstp qword [esp+0x78], st0} */;
                                        /* unimplemented  {fstp qword [esp+0x78], st0} */
🚫🚫                                        /* unimplemented  {fld st0, dword [ecx]} */
🚫🚫                                        /* unimplemented  {fadd qword [ebx+0x28]} */
🚫🚫🚫                                        var_e0 = /* var_e0 =
                                            unimplemented  {fstp qword [esp+0x80], st0} */;
                                        /* unimplemented  {fstp qword [esp+0x80], st0} */
🚫🚫                                        /* unimplemented  {fld st0, dword [eax]} */
🚫🚫                                        /* unimplemented  {fadd qword [ebx+0x30]} */
🚫🚫🚫                                        double var_d8_9 = /* double var_d8_9 =
                                            unimplemented  {fstp qword [esp+0x88], st0} */;
                                        /* unimplemented  {fstp qword [esp+0x88], st0} */
                                        int16_t top_279 = top_266;

                                        if (esi_13)
                                        {
🚫🚫                                            /* unimplemented  {fld st0, dword [ebx+ecx*8]} */
🚫🚫                                            /* unimplemented  {fmul st0, dword [esi+0x8]} */
🚫🚫                                            /* unimplemented  {fld st0, dword [ebx+eax*8+0x204]} */
🚫🚫                                            /* unimplemented  {fmul st0, dword [esi+0x4]} */
🚫🚫🚫                                            /* unimplemented  {faddp st1, st0} */
                                            /* unimplemented  {faddp st1, st0} */
🚫🚫                                            /* unimplemented  {fld st0, dword [eax+0x200]} */
🚫🚫                                            /* unimplemented  {fmul st0, dword [esi]} */
🚫🚫🚫                                            /* unimplemented  {faddp st1, st0} */
                                            /* unimplemented  {faddp st1, st0} */
🚫🚫                                            /* unimplemented  {fld st0, dword [eax+0x210]} */
🚫🚫                                            /* unimplemented  {fmul st0, dword [esi+0x4]} */
🚫🚫                                            /* unimplemented  {fld st0, dword [eax+0x20c]} */
🚫🚫                                            /* unimplemented  {fmul st0, dword [esi]} */
🚫🚫🚫                                            /* unimplemented  {faddp st1, st0} */
                                            /* unimplemented  {faddp st1, st0} */
🚫🚫                                            /* unimplemented  {fld st0, dword [eax+0x214]} */
🚫🚫                                            /* unimplemented  {fmul st0, dword [esi+0x8]} */
🚫🚫🚫                                            /* unimplemented  {faddp st1, st0} */
                                            /* unimplemented  {faddp st1, st0} */
🚫🚫🚫                                            float var_4c_1 = /* float var_4c_1 =
                                                unimplemented  {fstp dword [esp+0x114], st0} */;
                                            /* unimplemented  {fstp dword [esp+0x114], st0} */
🚫🚫                                            /* unimplemented  {fld st0, dword [eax+0x21c]} */
🚫🚫                                            /* unimplemented  {fmul st0, dword [esi+0x4]} */
🚫🚫                                            /* unimplemented  {fld st0, dword [eax+0x218]} */
🚫🚫                                            /* unimplemented  {fmul st0, dword [esi]} */
🚫🚫🚫                                            /* unimplemented  {faddp st1, st0} */
                                            /* unimplemented  {faddp st1, st0} */
🚫🚫                                            /* unimplemented  {fld st0, dword [eax+0x220]} */
🚫🚫                                            /* unimplemented  {fmul st0, dword [esi+0x8]} */
🚫🚫🚫                                            /* unimplemented  {faddp st1, st0} */
                                            /* unimplemented  {faddp st1, st0} */
🚫🚫🚫                                            float var_48_1 = /* float var_48_1 =
                                                unimplemented  {fstp dword [esp+0x118], st0} */;
                                            /* unimplemented  {fstp dword [esp+0x118], st0} */
🚫🚫                                            /* unimplemented  {fadd qword [esp+0x60]} */
🚫🚫🚫                                            var_100 = /* var_100 =
                                                unimplemented  {fstp qword [esp+0x60], st0} */;
                                            /* unimplemented  {fstp qword [esp+0x60], st0} */
🚫🚫                                            /* unimplemented  {fld st0, dword [esp+0x114]} */
🚫🚫                                            /* unimplemented  {fadd qword [esp+0x68]} */
🚫🚫🚫                                            double var_f8_10 = /* double var_f8_10 =
                                                unimplemented  {fstp qword [esp+0x68], st0} */;
                                            /* unimplemented  {fstp qword [esp+0x68], st0} */
🚫🚫                                            /* unimplemented  {fld st0, dword [esp+0x118]} */
🚫🚫                                            /* unimplemented  {fadd qword [esp+0x70]} */
🚫🚫🚫                                            double var_f0_10 = /* double var_f0_10 =
                                                unimplemented  {fstp qword [esp+0x70], st0} */;
                                            /* unimplemented  {fstp qword [esp+0x70], st0} */
🚫🚫                                            /* unimplemented  {fld st0, dword [ebx+edx*8]} */
🚫🚫                                            /* unimplemented  {fmul st0, dword [esi+0x8]} */
🚫🚫                                            /* unimplemented  {fld st0, dword [eax+0x22c]} */
🚫🚫                                            /* unimplemented  {fmul st0, dword [esi+0x4]} */
🚫🚫🚫                                            /* unimplemented  {faddp st1, st0} */
                                            /* unimplemented  {faddp st1, st0} */
🚫🚫                                            /* unimplemented  {fld st0, dword [eax+0x228]} */
🚫🚫                                            /* unimplemented  {fmul st0, dword [esi]} */
🚫🚫🚫                                            /* unimplemented  {faddp st1, st0} */
                                            /* unimplemented  {faddp st1, st0} */
🚫🚫                                            /* unimplemented  {fld st0, dword [eax+0x238]} */
🚫🚫                                            /* unimplemented  {fmul st0, dword [esi+0x4]} */
🚫🚫                                            /* unimplemented  {fld st0, dword [eax+0x234]} */
🚫🚫                                            /* unimplemented  {fmul st0, dword [esi]} */
🚫🚫🚫                                            /* unimplemented  {faddp st1, st0} */
                                            /* unimplemented  {faddp st1, st0} */
🚫🚫                                            /* unimplemented  {fld st0, dword [eax+0x23c]} */
🚫🚫                                            /* unimplemented  {fmul st0, dword [esi+0x8]} */
🚫🚫🚫                                            /* unimplemented  {faddp st1, st0} */
                                            /* unimplemented  {faddp st1, st0} */
🚫🚫🚫                                            float var_1c_1 = /* float var_1c_1 =
                                                unimplemented  {fstp dword [esp+0x144], st0} */;
                                            /* unimplemented  {fstp dword [esp+0x144], st0} */
🚫🚫                                            /* unimplemented  {fld st0, dword [eax+0x244]} */
🚫🚫                                            /* unimplemented  {fmul st0, dword [esi+0x4]} */
🚫🚫                                            /* unimplemented  {fld st0, dword [eax+0x240]} */
🚫🚫                                            /* unimplemented  {fmul st0, dword [esi]} */
🚫🚫🚫                                            /* unimplemented  {faddp st1, st0} */
                                            /* unimplemented  {faddp st1, st0} */
🚫🚫                                            /* unimplemented  {fld st0, dword [eax+0x248]} */
🚫🚫                                            /* unimplemented  {fmul st0, dword [esi+0x8]} */
🚫🚫🚫                                            /* unimplemented  {faddp st1, st0} */
                                            /* unimplemented  {faddp st1, st0} */
🚫🚫🚫                                            float var_18_1 = /* float var_18_1 =
                                                unimplemented  {fstp dword [esp+0x148], st0} */;
                                            /* unimplemented  {fstp dword [esp+0x148], st0} */
🚫🚫                                            /* unimplemented  {fadd qword [esp+0x78]} */
🚫🚫🚫                                            var_e8 = /* var_e8 =
                                                unimplemented  {fstp qword [esp+0x78], st0} */;
                                            /* unimplemented  {fstp qword [esp+0x78], st0} */
🚫🚫                                            /* unimplemented  {fld st0, dword [esp+0x144]} */
🚫🚫                                            /* unimplemented  {fadd qword [esp+0x80]} */
🚫🚫🚫                                            var_e0 = /* var_e0 =
                                                unimplemented  {fstp qword [esp+0x80], st0} */;
                                            /* unimplemented  {fstp qword [esp+0x80], st0} */
🚫🚫                                            /* unimplemented  {fld st0, dword [esp+0x148]} */
🚫🚫                                            /* unimplemented  {fadd qword [esp+0x88]} */
🚫🚫🚫                                            double var_d8_10 = /* double var_d8_10 =
                                                unimplemented  {fstp qword [esp+0x88], st0} */;
                                            /* unimplemented  {fstp qword [esp+0x88], st0} */
                                            int16_t top_311;
                                            top_279 = top_311 + 2;
                                        }

🚫🚫                                        sub_4b32f0(var_154_1, &var_100);
                                        /* unimplemented  {call sub_4b32f0} */
🚫🚫🚫                                        float var_144_4 = /* float var_144_4 =
                                            unimplemented  {fstp dword [esp+0x24], st0} */;
                                        /* unimplemented  {fstp dword [esp+0x24], st0} */
🚫🚫                                        sub_4b32f0(var_154_1, &var_e8);
                                        /* unimplemented  {call sub_4b32f0} */
🚫🚫🚫                                        float var_148_5 = /* float var_148_5 =
                                            unimplemented  {fstp dword [esp+0x28], st0} */;
                                        /* unimplemented  {fstp dword [esp+0x28], st0} */
🚫🚫                                        /* unimplemented  {fld st0, dword [esp+0x2c]} */
⋯                                        long double temp29_1 = var_14c_2;
                                        /* unimplemented  {fcomp st0, dword [esp+0x24]}
                                            f- temp29_1 */ - temp29_1;
                                        bool c0_27 = /* bool c0_27 =
                                            unimplemented  {fcomp st0, dword [esp+0x24]}
                                            f< temp29_1 */ < temp29_1;
                                        bool c2_31 = FCMP_UO(/* bool c2_31 = is_unordered.t(
                                            unimplemented  {fcomp st0, dword [esp+0x24]}, temp29_1) */,
                                            temp29_1);
                                        bool c3_27 = /* bool c3_27 =
                                            unimplemented  {fcomp st0, dword [esp+0x24]}
                                            f== temp29_1 */ == temp29_1;
                                        /* unimplemented  {fcomp st0, dword [esp+0x24]} */

                                        ecx_29 = *(&((c0_27 ? 1 : 0) << 8 | (c2_31 ? 1 : 0) << 0xa
                                            | (c3_27 ? 1 : 0) << 0xe | (top_279 & 7) << 0xb) + 1)
                                            & 0x41 ? 0 : 1;

🚫🚫                                        /* unimplemented  {fld st0, dword [esp+0x18]} */
⋯                                        long double temp34_1 = var_14c_2;
                                        /* unimplemented  {fcomp st0, dword [esp+0x14]}
                                            f- temp34_1 */ - temp34_1;
                                        bool c0_28 = /* bool c0_28 =
                                            unimplemented  {fcomp st0, dword [esp+0x14]}
                                            f< temp34_1 */ < temp34_1;
                                        bool c2_32 = FCMP_UO(/* bool c2_32 = is_unordered.t(
                                            unimplemented  {fcomp st0, dword [esp+0x14]}, temp34_1) */,
                                            temp34_1);
                                        bool c3_28 = /* bool c3_28 =
                                            unimplemented  {fcomp st0, dword [esp+0x14]}
                                            f== temp34_1 */ == temp34_1;
                                        /* unimplemented  {fcomp st0, dword [esp+0x14]} */
                                        top_35 = top_279;

                                        eax_77 = *(&((c0_28 ? 1 : 0) << 8 | (c2_32 ? 1 : 0) << 0xa
                                            | (c3_28 ? 1 : 0) << 0xe | (top_35 & 7) << 0xb) + 1) & 0x41
                                            ? 0 : 1;
                                    } while (ecx_29 == eax_77);
🚫🚫                                    /* unimplemented  {fld st0, dword [ebx+edi*4+0x548]} */
                                    int32_t var_164_13 = ecx_29;
🚫🚫🚫                                    float var_14c_4 = /* float var_14c_4 =
                                        unimplemented  {fstp dword [esp+0x18], st0} */;
                                    /* unimplemented  {fstp dword [esp+0x18], st0} */
🚫🚫                                    /* unimplemented  {fld st0, dword [esp+0x20]} */
🚫🚫                                    /* unimplemented  {fsqrt } */
🚫🚫🚫                                    float var_154_7 = /* float var_154_7 =
                                        unimplemented  {fstp dword [esp+0x10], st0} */;
                                    /* unimplemented  {fstp dword [esp+0x10], st0} */
🚫🚫                                    /* unimplemented  {fld st0, dword [esp+0x1c]} */
🚫🚫                                    /* unimplemented  {fsub st0, dword [esp+0x20]} */
🚫🚫                                    /* unimplemented  {fld st0, dword [esp+0x18]} */
🚫🚫                                    /* unimplemented  {fmul st0, dword [esp+0x18]} */
🚫🚫🚫                                    /* unimplemented  {fsubp st1, st0} */
                                    /* unimplemented  {fsubp st1, st0} */
🚫🚫                                    /* unimplemented  {fld st0, dword [esp+0x10]} */
🚫🚫                                    /* unimplemented  {fmul st0, dword [esp+0x18]} */
🚫🚫                                    /* unimplemented  {fmul st0, dword [&g_534ba8]} */
🚫🚫🚫                                    /* unimplemented  {fdivp st1, st0} */
                                    /* unimplemented  {fdivp st1, st0} */
🚫🚫🚫                                    float var_164_14 = /* float var_164_14 =
                                        unimplemented  {fstp dword [esp], st0} */;
                                    /* unimplemented  {fstp dword [esp], st0} */
🚫🚫                                    sub_4b2760(var_164_14);
                                    /* unimplemented  {call sub_4b2760} */
🚫🚫                                    /* unimplemented  {fld st0, st0} */
🚫🚫🚫                                    long double st0_5;
                                    bool c1_5;
                                    bool c2_33;
                                    st0_5 = __fsin(/* st0_5, c1_5, c2_33 =
                                        __fsin(unimplemented  {fsin }) */);
                                    /* unimplemented  {fsin } */
🚫🚫🚫                                    float var_144_5 = /* float var_144_5 =
                                        unimplemented  {fstp dword [esp+0x20], st0} */;
                                    /* unimplemented  {fstp dword [esp+0x20], st0} */
🚫🚫                                    /* unimplemented  {fld st0, dword [&g_533400]} */
🚫🚫                                    /* unimplemented  {fsub st0, st1} */
🚫🚫🚫                                    float var_134_4 = /* float var_134_4 =
                                        unimplemented  {fstp dword [esp+0x30], st0} */;
                                    /* unimplemented  {fstp dword [esp+0x30], st0} */
🚫🚫🚫                                    /* unimplemented  {fstp st0, st0} */
                                    /* unimplemented  {fstp st0, st0} */
🚫🚫                                    /* unimplemented  {fld st0, dword [esp+0x20]} */
🚫🚫                                    /* unimplemented  {fdiv st0, dword [esp+0x14]} */
🚫🚫                                    /* unimplemented  {fmul st0, dword [esp+0x10]} */
🚫🚫🚫                                    float var_164_15 = /* float var_164_15 =
                                        unimplemented  {fstp dword [esp], st0} */;
                                    /* unimplemented  {fstp dword [esp], st0} */
                                    int16_t top_346 = top_35 + 1;
🚫🚫                                    sub_4b27d0(var_164_15);
                                    /* unimplemented  {call sub_4b27d0} */
🚫🚫                                    /* unimplemented  {fsubr st0, dword [esp+0x30]} */
🚫🚫🚫🚫🚫                                    long double temp41_1 = 0.001;
                                    /* unimplemented  {fcom st0, qword [&g_534ba0]}
                                        f- temp41_1 */ - temp41_1;
                                    bool c0_29 = /* bool c0_29 =
                                        unimplemented  {fcom st0, qword [&g_534ba0]}
                                        f< temp41_1 */ < temp41_1;
                                    bool c2_34 = FCMP_UO(/* bool c2_34 = is_unordered.t(
                                        unimplemented  {fcom st0, qword [&g_534ba0]}, temp41_1) */,
                                        temp41_1);
                                    bool c3_29 = /* bool c3_29 =
                                        unimplemented  {fcom st0, qword [&g_534ba0]}
                                        f== temp41_1 */ == temp41_1;

                                    if (*(&((c0_29 ? 1 : 0) << 8 | (c2_34 ? 1 : 0) << 0xa
                                        | (c3_29 ? 1 : 0) << 0xe | (top_346 & 7) << 0xb) + 1) & 0x41)
                                    {
🚫🚫🚫                                        /* unimplemented  {fstp st0, st0} */
                                        /* unimplemented  {fstp st0, st0} */
🚫🚫                                        /* unimplemented  {fld st0, dword [esp+0x18]} */
🚫🚫                                        /* unimplemented  {fsqrt } */
🚫🚫                                        /* unimplemented  {fld st0, dword [esp+0x10]} */
🚫🚫                                        /* unimplemented  {fsub st0, dword [esp+0xc]} */
🚫🚫🚫🚫                                        /* unimplemented  {fxch st0, st1} */
                                        /* unimplemented  {fxch st0, st1} */
🚫🚫                                        /* unimplemented  {fsub st0, dword [esp+0xc]} */
🚫🚫🚫                                        /* unimplemented  {fdivp st1, st0} */
                                        /* unimplemented  {fdivp st1, st0} */
                                    }
                                    else
                                    {
🚫🚫🚫                                        long double st0_6;
                                        bool c1_6;
                                        bool c2_35;
                                        st0_6 = __fsin(/* st0_6, c1_6, c2_35 =
                                            __fsin(unimplemented  {fsin }) */);
                                        /* unimplemented  {fsin } */
🚫🚫                                        /* unimplemented  {fmul st0, dword [esp+0x10]} */
🚫🚫                                        /* unimplemented  {fdiv st0, dword [esp+0x1c]} */
🚫🚫                                        /* unimplemented  {fdiv st0, dword [esp+0x14]} */
                                    }

🚫🚫🚫                                    float var_154_8 = /* float var_154_8 =
                                        unimplemented  {fstp dword [esp+0xc], st0} */;
                                    /* unimplemented  {fstp dword [esp+0xc], st0} */
                                    top_49 = top_346 + 1;
                                }
                                else
                                {
🚫🚫                                    /* unimplemented  {fld st0, dword [esp+0x90]} */
🚫🚫                                    /* unimplemented  {fsub st0, dword [esp+0x20]} */
🚫🚫                                    /* unimplemented  {fdiv st0, dword [ebx+edi*4+0x548]} */
🚫🚫🚫                                    float var_154_6 = /* float var_154_6 =
                                        unimplemented  {fstp dword [esp+0xc], st0} */;
                                    /* unimplemented  {fstp dword [esp+0xc], st0} */
🚫🚫                                    /* unimplemented  {fld st0, dword [edx]} */
🚫🚫                                    /* unimplemented  {fadd qword [ebx+0x20]} */
🚫🚫🚫                                    var_100 = /* var_100 =
                                        unimplemented  {fstp qword [esp+0x60], st0} */;
                                    /* unimplemented  {fstp qword [esp+0x60], st0} */
🚫🚫                                    /* unimplemented  {fld st0, dword [eax]} */
🚫🚫                                    /* unimplemented  {fadd qword [ebx+0x28]} */
🚫🚫🚫                                    double var_f8_7 = /* double var_f8_7 =
                                        unimplemented  {fstp qword [esp+0x68], st0} */;
                                    /* unimplemented  {fstp qword [esp+0x68], st0} */
🚫🚫                                    /* unimplemented  {fld st0, dword [ecx]} */
🚫🚫                                    /* unimplemented  {fadd qword [ebx+0x30]} */
🚫🚫🚫                                    double var_f0_7 = /* double var_f0_7 =
                                        unimplemented  {fstp qword [esp+0x70], st0} */;
                                    /* unimplemented  {fstp qword [esp+0x70], st0} */
🚫🚫                                    /* unimplemented  {fld st0, dword [edx]} */
🚫🚫                                    /* unimplemented  {fadd qword [ebx+0x20]} */
🚫🚫🚫                                    var_e8 = /* var_e8 =
