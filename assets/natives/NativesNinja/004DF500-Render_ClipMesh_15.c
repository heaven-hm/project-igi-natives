#include "004DF500-Render_ClipMesh_15.h"
/* 0x004df500 Render_ClipMesh_15 full linked: callers=1 callees=3 */
int32_t* sub_4df500(float a1, int32_t* a2, int32_t* a3)

{
    void* eax = *(a1 + 0x148);

    if (eax)
    {
        int32_t* eax_1 = *(eax + 8);

        if (*eax_1 && eax_1)
        {
            int32_t var_18;
            sub_4b0b00(&var_18, 0x10, 0x3e8, 0);
            void* eax_5 = *(a1 + 0x148);
            int32_t* var_14;
            int32_t i_2;
            int32_t var_8;
            int32_t* var_4;

            if (eax_5)
            {
                int32_t* i = *(eax_5 + 8);

                if (*i && i)
                {
                    do
                    {
                        void* ecx_5 = *(*(*i[0x1b] + 0xc) + 0xc);
                        int32_t* eax_10 = var_14[i_2] * var_8 + var_18;
                        *(var_4 + eax_10) = i_2;
                        i_2 += 1;
                        *eax_10 = *(ecx_5 + 0x50);
                        eax_10[1] = *(ecx_5 + 0x54);
                        eax_10[2] = *(ecx_5 + 0x58);
                        eax_10[3] = *(ecx_5 + 0x5c);
                        eax_5 = i[0x3a];

                        if (eax_5)
                            sub_4dcba0(&var_18, eax_5);

                        i = *i;

                        if (!i)
                            break;

                        if (!*i)
                            break;
                    } while (i);
                }
            }

            int32_t i_1 = i_2;
            int32_t* edi_4 = var_14;

            if (i_1 > 1)
            {
                int32_t* ebx_3 = a2;
                int32_t* ebp_1 = a2;

                do
                {
                    a1 = 3.40282347e+38f;
                    int32_t var_54_1 = 0;
                    long double x87_r7_5;
                    long double temp3_1;

                    if (i_1 > 0)
                    {
                        int32_t* var_50_1 = edi_4;
                        bool cond:2_1;

                        do
                        {
                            int32_t eax_12 = 0;
                            int32_t* var_58_1 = edi_4;
                            int32_t var_4c_1 = 0;

                            do
                            {
                                if (var_54_1 != eax_12)
                                {
                                    int32_t* ecx_9 = *var_50_1 * var_8 + var_18;
                                    int32_t* edx_13 = *var_58_1 * var_8 + var_18;
                                    long double x87_r7_2 = edx_13[2] - ecx_9[2];
                                    long double x87_r6_2 = edx_13[1] - ecx_9[1];
                                    long double x87_r5_2 = *edx_13 - *ecx_9;
                                    long double x87_r4_5 = sqrtl(x87_r5_2 * x87_r5_2
                                        + x87_r6_2 * x87_r6_2 + x87_r7_2 * x87_r7_2);
                                    long double temp2_1 = a1;
                                    x87_r4_5 - temp2_1;

                                    if (*(&((x87_r4_5 < temp2_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r4_5, temp2_1) ? 1 : 0) << 0xa
                                        | (x87_r4_5 == temp2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                                    {
                                        a1 = x87_r4_5;
                                        ebx_3 = ecx_9;
                                        ebp_1 = edx_13;
                                    }
                                }

                                eax_12 = var_4c_1 + 1;
                                var_4c_1 = eax_12;
                                var_58_1 = &var_58_1[1];
                            } while (eax_12 < i_1);

                            cond:2_1 = var_54_1 + 1 < i_1;
                            var_54_1 += 1;
                            var_50_1 = &var_50_1[1];
                        } while (cond:2_1);
                        x87_r7_5 = a1;
                        temp3_1 = 0f;
                        x87_r7_5 - temp3_1;
                    }

                    if (i_1 <= 0 || !(*(&((x87_r7_5 < temp3_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_5, temp3_1) ? 1 : 0) << 0xa
                        | (x87_r7_5 == temp3_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    {
                        long double x87_r7_9 = a1 + ebp_1[3];
                        long double temp0_1 = ebx_3[3];
                        x87_r7_9 - temp0_1;
                        int32_t* eax_20;

                        if (!(*(&((x87_r7_9 < temp0_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_9, temp0_1) ? 1 : 0) << 0xa
                            | (x87_r7_9 == temp0_1 ? 1 : 0) << 0xe) + 1) & 1))
                        {
                            long double x87_r7_11 = a1 + ebx_3[3];
                            long double temp1_1 = ebp_1[3];
                            x87_r7_11 - temp1_1;

                            if (!(*(&((x87_r7_11 < temp1_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_11, temp1_1) ? 1 : 0) << 0xa
                                | (x87_r7_11 == temp1_1 ? 1 : 0) << 0xe) + 1) & 1))
                            {
                                float var_30_1 = *ebp_1 - *ebx_3;
                                float var_48_1 = var_30_1;
                                float var_3c_1 = var_30_1;
                                float var_2c_1 = ebp_1[1] - ebx_3[1];
                                float var_28_1 = ebp_1[2] - ebx_3[2];
                                long double x87_r7_18 = var_28_1;
                                long double x87_r6_5 = var_2c_1;
                                long double x87_r5_4 = var_30_1;
                                long double x87_r4_10 = sqrtl(x87_r5_4 * x87_r5_4
                                    + x87_r6_5 * x87_r6_5 + x87_r7_18 * x87_r7_18);
                                long double x87_r6_8 = ebx_3[3] / x87_r4_10;
                                float var_48_4 = -((var_30_1 * x87_r6_8)) + *ebx_3;
                                float var_44_4 = -((var_2c_1 * x87_r6_8)) + ebx_3[1];
                                float var_40_2 = -((x87_r6_8 * var_28_1)) + ebx_3[2];
                                long double x87_r7_20 = ebp_1[3] / x87_r4_10;
                                float var_3c_3 = var_30_1 * x87_r7_20 + *ebp_1;
                                float var_38_3 = var_2c_1 * x87_r7_20 + ebp_1[1];
                                long double x87_r7_22 = x87_r7_20 * var_28_1 + ebp_1[2];
                                float var_24_1 = (var_3c_3 - var_48_4) * 0.5f + var_48_4;
                                *ebx_3 = var_24_1;
                                float var_20_1 = (var_38_3 - var_44_4) * 0.5f + var_44_4;
                                ebx_3[1] = var_20_1;
                                float var_1c_1 = (x87_r7_22 - var_40_2) * 0.5f + var_40_2;
                                long double x87_r7_23 = x87_r7_22 - var_1c_1;
                                ebx_3[2] = var_1c_1;
                                long double x87_r6_33 = var_38_3 - var_20_1;
                                long double x87_r5_19 = var_3c_3 - var_24_1;
                                ebx_3[3] = sqrtl(x87_r5_19 * x87_r5_19 + x87_r6_33 * x87_r6_33
                                    + x87_r7_23 * x87_r7_23);
                                int32_t** edx_30 = var_4;
                                i_1 = i_2 - 1;
                                eax_20 = *(edx_30 + ebp_1);
                                i_2 = i_1;

                                if (eax_20 == i_1)
                                    edi_4 = var_14;
                                else
                                {
                                    int32_t* esi_16 = var_14[i_1] * var_8 + var_18;
                                    int32_t edi_12 = var_14[eax_20];
                                    int32_t edx_31 = *(esi_16 + edx_30);
                                    var_14[eax_20] = var_14[edx_31];
                                    var_14[edx_31] = edi_12;
                                    *(esi_16 + var_4) = eax_20;
                                    i_1 = i_2;
                                    edi_4 = var_14;
                                }
                            }
                            else
                            {
                                i_1 -= 1;
                                eax_20 = *(ebx_3 + var_4);
                                i_2 = i_1;

                                if (eax_20 != i_1)
                                {
                                    int32_t* esi_12 = edi_4[i_1] * var_8 + var_18;
                                    int32_t edx_25 = edi_4[eax_20];
                                    int32_t ecx_17 = *(esi_12 + var_4);
                                    edi_4[eax_20] = edi_4[ecx_17];
                                    var_14[ecx_17] = edx_25;
                                    *(esi_12 + var_4) = eax_20;
                                    i_1 = i_2;
                                    edi_4 = var_14;
                                }
                            }
                        }
                        else
                        {
                            i_1 -= 1;
                            eax_20 = *(var_4 + ebp_1);
                            i_2 = i_1;

                            if (eax_20 != i_1)
                            {
                                int32_t edx_21 = edi_4[eax_20];
                                int32_t* esi_9 = edi_4[i_1] * var_8 + var_18;
                                int32_t ecx_13 = *(esi_9 + var_4);
                                edi_4[eax_20] = edi_4[ecx_13];
                                var_14[ecx_13] = edx_21;
                                *(esi_9 + var_4) = eax_20;
                                i_1 = i_2;
                                edi_4 = var_14;
                            }
                        }
                    }
                    else
                    {
                        long double x87_r7_6 = ebx_3[3];
                        long double x87_r6_4 = ebp_1[3];
                        x87_r6_4 - x87_r7_6;
                        long double x87_r7_7;

                        if (!(*(&((x87_r6_4 < x87_r7_6 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r6_4, x87_r7_6) ? 1 : 0) << 0xa
                                | (x87_r6_4 == x87_r7_6 ? 1 : 0) << 0xe) + 1) & 1))
                            x87_r7_7 = ebp_1[3];
                        else
                            x87_r7_7 = ebx_3[3];

                        ebx_3[3] = x87_r7_7;
                        i_1 = i_2 - 1;
                        int32_t ecx_10 = *(var_4 + ebp_1);
                        i_2 = i_1;

                        if (ecx_10 == i_1)
                            edi_4 = var_14;
                        else
                        {
                            int32_t* esi_6 = var_14[i_1] * var_8 + var_18;
                            int32_t edi_6 = var_14[ecx_10];
                            int32_t edx_19 = *(esi_6 + var_4);
                            var_14[ecx_10] = var_14[edx_19];
                            var_14[edx_19] = edi_6;
                            *(esi_6 + var_4) = ecx_10;
                            i_1 = i_2;
                            edi_4 = var_14;
                        }
                    }
                } while (i_1 > 1);
            }

            int32_t* eax_28 = *edi_4 * var_8 + var_18;
            *a2 = *eax_28;
            a2[1] = eax_28[1];
            a2[2] = eax_28[2];
            *a3 = eax_28[3];
            int32_t eax_29 = *(eax_28 + var_4);
            int32_t var_10 = i_1 - 1;

            if (eax_29 != i_1 - 1)
            {
                int32_t* esi_20 = edi_4[i_1 - 1] * var_8 + var_18;
                int32_t edx_35 = edi_4[eax_29];
                int32_t ecx_28 = *(esi_20 + var_4);
                edi_4[eax_29] = edi_4[ecx_28];
                var_14[ecx_28] = edx_35;
                *(esi_20 + var_4) = eax_29;
            }

            return sub_4b0b70(&var_18);
        }
    }

    int32_t* eax_30 = *(a1 + 0x6c);

    if (!eax_30)
        return eax_30;

    void* eax_3 = *(*(*eax_30 + 0xc) + 0xc);
    *a2 = *(eax_3 + 0x50);
    a2[1] = *(eax_3 + 0x54);
    a2[2] = *(eax_3 + 0x58);
    int32_t eax_4 = *(eax_3 + 0x5c);
    *a3 = eax_4;
    return eax_4;
}
