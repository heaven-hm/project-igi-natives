#include "004CBE40-DynObj_RemoveSymbol_10.h"
/* 0x004cbe40 DynObj_RemoveSymbol_10 full linked: callers=2 callees=9 */
int32_t* sub_4cbe40(int32_t a1, int32_t* a2, double* a3, int32_t* a4, double* a5, char a6, double* a7, int32_t a8, int32_t a9)

{
    sub_4c5810();
    int32_t var_4c = a1;
    int32_t var_68 = 0x40000000;
    int32_t var_64 = 0x1e;
    int32_t var_50 = *(a1 + 0xc) + 0x20;
    int32_t var_60 = 0;
    int32_t var_5c = 0;
    int32_t var_58 = 0;
    int32_t var_54 = 0;
    double var_350[0x2];

    if (a4 > 0)
    {
        double* edx_1 = a5;
        void var_340;
        void* eax_3 = &var_340;
        void* ebx_1 = &a2[0x16];
        void* ecx_3 = a3 - &var_350;
        int32_t* var_8_1 = a4;
        void* var_10_1 = ecx_3;

        while (true)
        {
            long double x87_r7_1 = *edx_1;
            void* edi_1 = eax_3 - 0x10;
            edx_1 = &edx_1[1];
            eax_3 += 0x18;
            ebx_1 += 0x70;
            memcpy(edi_1, edi_1 + ecx_3, 0x18);
            *(eax_3 - 0x18) = x87_r7_1 + *(eax_3 - 0x18);
            *(ebx_1 - 0x70) = 0;
            bool cond:1_1 = var_8_1 != 1;
            var_8_1 -= 1;

            if (!cond:1_1)
                break;

            ecx_3 = var_10_1;
        }
    }

    double var_44;
    memcpy(&var_44, a3, 0x18);
    double var_2c;
    memcpy(&var_2c, a3, 0x18);
    int32_t* i_1 = a4;
    double var_3c;
    double var_34;
    double var_24;
    double var_1c;
    long double x87_r7_3;

    if (i_1 <= 0)
        x87_r7_3 = var_34;
    else
    {
        x87_r7_3 = var_34;
        double* ecx_6 = &a3[2];
        double* edx_2 = &var_350 - a3;
        int32_t* i;

        do
        {
            long double x87_r6_1 = var_2c;
            long double temp2_1 = ecx_6[-2];
            x87_r6_1 - temp2_1;

            if (!(*(&((x87_r6_1 < temp2_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_1, temp2_1) ? 1 : 0) << 0xa
                | (x87_r6_1 == temp2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
            {
                long double x87_r6_2 = var_44;
                long double temp3_1 = ecx_6[-2];
                x87_r6_2 - temp3_1;

                if (!(*(&((x87_r6_2 < temp3_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_2, temp3_1) ? 1 : 0) << 0xa
                    | (x87_r6_2 == temp3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                {
                    int32_t edi_3 = *(ecx_6 - 0xc);
                    var_44 = ecx_6[-2];
                    *(&var_44 + 4) = edi_3;
                }
            }
            else
            {
                int32_t edi_2 = *(ecx_6 - 0xc);
                var_2c = ecx_6[-2];
                *(&var_2c + 4) = edi_2;
            }

            long double x87_r6_3 = var_24;
            long double temp4_1 = ecx_6[-1];
            x87_r6_3 - temp4_1;

            if (!(*(&((x87_r6_3 < temp4_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_3, temp4_1) ? 1 : 0) << 0xa
                | (x87_r6_3 == temp4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
            {
                long double x87_r6_4 = var_3c;
                long double temp5_1 = ecx_6[-1];
                x87_r6_4 - temp5_1;

                if (!(*(&((x87_r6_4 < temp5_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_4, temp5_1) ? 1 : 0) << 0xa
                    | (x87_r6_4 == temp5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                {
                    var_3c = ecx_6[-1];
                    *(&var_3c + 4) = *(ecx_6 - 4);
                }
            }
            else
            {
                var_24 = ecx_6[-1];
                *(&var_24 + 4) = *(ecx_6 - 4);
            }

            long double x87_r6_5 = var_1c;
            long double temp6_1 = *ecx_6;
            x87_r6_5 - temp6_1;

            if (!(*(&((x87_r6_5 < temp6_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_5, temp6_1) ? 1 : 0) << 0xa
                | (x87_r6_5 == temp6_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
            {
                long double temp7_1 = *ecx_6;
                x87_r7_3 - temp7_1;

                if (!(*(&((x87_r7_3 < temp7_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_3, temp7_1) ? 1 : 0) << 0xa
                        | (x87_r7_3 == temp7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                    x87_r7_3 = *ecx_6;
            }
            else
            {
                var_1c = *ecx_6;
                *(&var_1c + 4) = *(ecx_6 + 4);
            }

            long double x87_r6_6 = var_1c;
            long double temp9_1 = *(edx_2 + ecx_6);
            x87_r6_6 - temp9_1;

            if (!(*(&((x87_r6_6 < temp9_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_6, temp9_1) ? 1 : 0) << 0xa
                | (x87_r6_6 == temp9_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
            {
                long double temp10_1 = *(edx_2 + ecx_6);
                x87_r7_3 - temp10_1;

                if (!(*(&((x87_r7_3 < temp10_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_3, temp10_1) ? 1 : 0) << 0xa
                        | (x87_r7_3 == temp10_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                    x87_r7_3 = *(edx_2 + ecx_6);
            }
            else
                var_1c = *(edx_2 + ecx_6);

            ecx_6 = &ecx_6[3];
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
    }

    int32_t eax_11 = *(a1 + 0xde0);
    int32_t ebx_2 = *(a1 + 0xde4);
    var_2c = var_2c + 2.0;
    int32_t edx_3 = *(a1 + 0xde8);
    double var_24_1 = var_24 + 2.0;
    double var_1c_1 = var_1c + 16387.0;
    var_44 = var_44 - 2.0;
    *(&var_34 + 4) = var_3c - 2.0 + edx_3;
    int32_t eax_16 = ((var_1c_1 + edx_3) ^ *(&var_34 + 4))
        | ((var_24_1 + ebx_2) ^ (x87_r7_3 - 16387.0 + ebx_2))
        | ((var_2c + eax_11) ^ (var_44 + eax_11));
    int32_t eflags;
    int32_t eax_17;
    eax_17 = __bsr_gprv_memv(eax_16);
    int32_t eax_18 = 0x1e - eax_17;

    if (eax_18 > 0x10)
        eax_18 = 0x10;

    int32_t* var_368 = &var_68;
    int32_t eax_19 = sub_4c9a30(a1, &var_68, a3, eax_18);
    int32_t* result = a8 & 0x7fffffff;

    if (result)
        result = sub_4cdb20(a1, a2, a3, &var_350, a4, a6, a7, result, a9);

    if (a8 & 0x80000000)
    {
        result = a4;

        if (result > 0)
        {
            double* edi_10 = a5;
            double* esi_7 = &a3[2];
            a3 = edi_10;
            a5 = esi_7;
            double* ebx_6 = &a2[6];
            a4 = result;
            bool cond:2_1;

            do
            {
                int32_t ecx_16 = *edi_10;

                if (ecx_16 < 0)
                    ecx_16 = -(ecx_16);

                long double x87_r7_11 = *edi_10;
                long double temp8_1 = 0.0;
                x87_r7_11 - temp8_1;
                int32_t eax_24;

                eax_24 = *(&((x87_r7_11 < temp8_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_11, temp8_1) ? 1 : 0) << 0xa
                    | (x87_r7_11 == temp8_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                void var_d8;

                if (sub_4cb050(&var_d8, &var_68, &esi_7[-2], eax_24, ecx_16, eax_19, 1))
                {
                    double var_c0;
                    long double x87_r6_21;
                    long double x87_r7_13;

                    if (ebx_6[8])
                    {
                        x87_r7_13 = *esi_7 - var_c0;
                        long double temp13_1 = 0.0;
                        x87_r7_13 - temp13_1;

                        if (*(&((x87_r7_13 < temp13_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_13, temp13_1) ? 1 : 0) << 0xa
                                | (x87_r7_13 == temp13_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                            x87_r7_13 = -(x87_r7_13);

                        x87_r6_21 = *esi_7 - *ebx_6;
                        long double temp15_1 = 0.0;
                        x87_r6_21 - temp15_1;

                        if (*(&((x87_r6_21 < temp15_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r6_21, temp15_1) ? 1 : 0) << 0xa
                                | (x87_r6_21 == temp15_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
                            x87_r6_21 = -(x87_r6_21);

                        x87_r7_13 - x87_r6_21;
                    }

                    if (!ebx_6[8] || *(&((x87_r7_13 < x87_r6_21 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_13, x87_r6_21) ? 1 : 0) << 0xa
                        | (x87_r7_13 == x87_r6_21 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                    {
                        int32_t var_168_1 = 0;
                        int32_t var_e0_1 = 0;
                        int32_t var_dc_1 = 0;
                        double var_d0[0x2];
                        double (* var_170)[0x2] = &var_d0;
                        char var_164_1 = 1;
                        char var_e4_1 = 0xff;
                        int32_t var_16c_1 = 1;
                        sub_4ce090(a1, 0xb, &var_170, &var_d0, 0x20000000, 4);
                        int16_t eax_31;
                        eax_31 = var_164_1;

                        if (eax_31)
                        {
                            long double x87_r7_17 = var_c0 - *esi_7;
                            long double temp14_1 = 0.0;
                            x87_r7_17 - temp14_1;
                            eax_31 = (x87_r7_17 < temp14_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_17, temp14_1) ? 1 : 0) << 0xa
                                | (x87_r7_17 == temp14_1 ? 1 : 0) << 0xe | 0x3800;

                            if (*(&eax_31 + 1) & 1)
                                x87_r7_17 = -(x87_r7_17);

                            memcpy(&ebx_6[-2], &var_d0, 0x18);
                            ebx_6[9] = x87_r7_17;
                            int32_t var_8c;
                            *(ebx_6 + 0x34) = var_8c;
                            esi_7 = a5;
                            edi_10 = a3;
                            int32_t var_88;
                            ebx_6[7] = var_88;
                            int32_t var_a0;
                            ebx_6[4] = var_a0;
                            ebx_6[8] = 1;
                            ebx_6[-3] = 0;
                            int32_t var_9c;
                            *(ebx_6 + 0x24) = var_9c;
                            int32_t var_98;
                            ebx_6[5] = var_98;
                        }
                    }
                }

                ebx_6 = &ebx_6[0xe];
                edi_10 = &edi_10[1];
                esi_7 = &esi_7[3];
                result = a4 - 1;
                cond:2_1 = a4 != 1;
                a3 = edi_10;
                a5 = esi_7;
                a4 = result;
            } while (cond:2_1);
        }
    }

    return result;
}
