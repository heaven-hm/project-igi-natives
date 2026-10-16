#include "004CDB20-World_TraceBatch.h"
/* 0x004cdb20 World_TraceBatch full linked: callers=3 callees=13 */
int32_t* sub_4cdb20(int32_t a1, int32_t* a2, double* a3, double* a4, int32_t* a5, char a6, double* a7, int32_t a8, int32_t a9)

{
    int32_t* result = a5;
    int32_t var_8 = 1;

    if (result)
    {
        int32_t esi_2 = g_a4438c + 1;
        g_a44390 += result;
        double* edx_3 = a3;
        g_a4438c = esi_2;
        double var_3c;
        memcpy(&var_3c, edx_3, 0x18);
        double var_24;
        memcpy(&var_24, edx_3, 0x18);
        double var_34;
        double var_1c;
        double var_14;
        double* ebx_2;
        long double x87_r7_1;
        double var_2c;

        if (result <= 0)
        {
            x87_r7_1 = var_2c;
            ebx_2 = a4;
        }
        else
        {
            int32_t* result_2 = result;
            x87_r7_1 = var_2c;
            double* edi_1 = &a2[2];
            a3 = edi_1;

            while (true)
            {
                long double x87_r6_1 = *edx_3;
                long double temp0_1 = *a4;
                x87_r6_1 - temp0_1;
                long double x87_r6_2;
                long double temp1_1;

                if (*(&((x87_r6_1 < temp0_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_1, temp0_1) ? 1 : 0) << 0xa
                    | (x87_r6_1 == temp0_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40)
                {
                    x87_r6_2 = edx_3[1];
                    temp1_1 = a4[1];
                    x87_r6_2 - temp1_1;
                }

                if (!(*(&((x87_r6_1 < temp0_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_1, temp0_1) ? 1 : 0) << 0xa
                        | (x87_r6_1 == temp0_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40) || !(*(&(
                        (x87_r6_2 < temp1_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_2, temp1_1) ? 1 : 0) << 0xa
                        | (x87_r6_2 == temp1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                    var_8 = 0;

                long double x87_r6_3 = *edx_3;
                long double temp2_1 = var_3c;
                x87_r6_3 - temp2_1;

                if (*(&((x87_r6_3 < temp2_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_3, temp2_1) ? 1 : 0) << 0xa
                    | (x87_r6_3 == temp2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                {
                    long double x87_r6_4 = *edx_3;
                    long double temp3_1 = var_24;
                    x87_r6_4 - temp3_1;

                    if (*(&((x87_r6_4 < temp3_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_4, temp3_1) ? 1 : 0) << 0xa
                        | (x87_r6_4 == temp3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                    {
                        int32_t ecx_3 = *(edx_3 + 4);
                        var_24 = *edx_3;
                        *(&var_24 + 4) = ecx_3;
                    }
                }
                else
                {
                    int32_t ecx_2 = *(edx_3 + 4);
                    var_3c = *edx_3;
                    *(&var_3c + 4) = ecx_2;
                }

                long double x87_r6_5 = edx_3[1];
                long double temp4_1 = var_34;
                x87_r6_5 - temp4_1;

                if (*(&((x87_r6_5 < temp4_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_5, temp4_1) ? 1 : 0) << 0xa
                    | (x87_r6_5 == temp4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                {
                    long double x87_r6_6 = edx_3[1];
                    long double temp5_1 = var_1c;
                    x87_r6_6 - temp5_1;

                    if (*(&((x87_r6_6 < temp5_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_6, temp5_1) ? 1 : 0) << 0xa
                        | (x87_r6_6 == temp5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                    {
                        var_1c = edx_3[1];
                        *(&var_1c + 4) = *(edx_3 + 0xc);
                    }
                }
                else
                {
                    var_34 = edx_3[1];
                    *(&var_34 + 4) = *(edx_3 + 0xc);
                }

                long double temp7_1 = edx_3[2];
                x87_r7_1 - temp7_1;

                if (!(*(&((x87_r7_1 < temp7_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_1, temp7_1) ? 1 : 0) << 0xa
                    | (x87_r7_1 == temp7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                {
                    long double x87_r6_7 = edx_3[2];
                    long double temp9_1 = var_14;
                    x87_r6_7 - temp9_1;

                    if (*(&((x87_r6_7 < temp9_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_7, temp9_1) ? 1 : 0) << 0xa
                        | (x87_r6_7 == temp9_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                    {
                        var_14 = edx_3[2];
                        *(&var_14 + 4) = *(edx_3 + 0x14);
                    }
                }
                else
                    x87_r7_1 = edx_3[2];

                long double x87_r6_8 = *a4;
                long double temp10_1 = var_3c;
                x87_r6_8 - temp10_1;

                if (*(&((x87_r6_8 < temp10_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_8, temp10_1) ? 1 : 0) << 0xa
                    | (x87_r6_8 == temp10_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                {
                    long double x87_r6_9 = *a4;
                    long double temp11_1 = var_24;
                    x87_r6_9 - temp11_1;

                    if (*(&((x87_r6_9 < temp11_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_9, temp11_1) ? 1 : 0) << 0xa
                        | (x87_r6_9 == temp11_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                    {
                        int32_t ecx_8 = *(a4 + 4);
                        var_24 = *a4;
                        *(&var_24 + 4) = ecx_8;
                    }
                }
                else
                {
                    int32_t ecx_7 = *(a4 + 4);
                    var_3c = *a4;
                    *(&var_3c + 4) = ecx_7;
                }

                long double x87_r6_10 = a4[1];
                long double temp12_1 = var_34;
                x87_r6_10 - temp12_1;

                if (*(&((x87_r6_10 < temp12_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_10, temp12_1) ? 1 : 0) << 0xa
                    | (x87_r6_10 == temp12_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                {
                    long double x87_r6_11 = a4[1];
                    long double temp13_1 = var_1c;
                    x87_r6_11 - temp13_1;

                    if (*(&((x87_r6_11 < temp13_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_11, temp13_1) ? 1 : 0) << 0xa
                        | (x87_r6_11 == temp13_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                    {
                        var_1c = a4[1];
                        *(&var_1c + 4) = *(a4 + 0xc);
                    }
                }
                else
                {
                    var_34 = a4[1];
                    *(&var_34 + 4) = *(a4 + 0xc);
                }

                long double temp14_1 = a4[2];
                x87_r7_1 - temp14_1;

                if (!(*(&((x87_r7_1 < temp14_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_1, temp14_1) ? 1 : 0) << 0xa
                    | (x87_r7_1 == temp14_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                {
                    long double x87_r6_12 = a4[2];
                    long double temp15_1 = var_14;
                    x87_r6_12 - temp15_1;

                    if (*(&((x87_r6_12 < temp15_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_12, temp15_1) ? 1 : 0) << 0xa
                        | (x87_r6_12 == temp15_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                    {
                        var_14 = a4[2];
                        *(&var_14 + 4) = *(a4 + 0x14);
                    }
                }
                else
                    x87_r7_1 = a4[2];

                edi_1[0xa] = 0;
                *a2 = 0;
                memcpy(edi_1, a4, 0x18);
                edx_3 = &edx_3[3];
                ebx_2 = &a4[3];
                bool cond:4_1 = result_2 != 1;
                a4 = ebx_2;
                a2 = &a2[0x1c];
                a3 = &a3[0xe];
                result_2 -= 1;

                if (!cond:4_1)
                    break;

                edi_1 = a3;
            }

            result = a5;
        }
        int32_t ecx_15 = result * 0x18;
        double* edx_4 = edx_3 - ecx_15;
        double* ebx_3 = ebx_2 - ecx_15;
        var_3c = var_3c + 2.0;
        a3 = edx_4;
        double var_34_1 = var_34 + 2.0;
        int32_t* esi_9 = &a2[-((result * 7)) * 4];
        char var_58_1 = a6;
        double* var_54 = a7;
        double var_2c_1 = x87_r7_1 + 16387.0;
        int32_t* var_44_1 = esi_9;
        double* i = nullptr;
        var_24 = var_24 - 2.0;
        double* var_64 = edx_4;
        double* var_60_1 = ebx_3;
        int32_t* result_1 = result;
        int32_t var_50_1 = a9;
        int32_t var_4c_1 = 0;
        int32_t var_48;
        __builtin_strncpy(&var_48, "DCBA", 4);
        double var_1c_1 = var_1c - 2.0;
        double var_14_1 = var_14 - 16387.0;
        int32_t var_88;

        if (a8 & 0x7fffffff)
        {
            if (!var_8)
            {
                do
                {
                    if (i == 1 || !i || i == 4 || i == 5)
                    {
                        int32_t var_1b0_2 = a8;
                        void** var_1c0_1 = &var_64;
                        sub_4c8130(a1, 9, edx_4, ebx_3, result, i, var_88);
                        edx_4 = a3;
                        result = a5;
                    }

                    i += 1;
                } while (i < 6);
            }
            else
            {
                do
                {
                    if (i == 1 || !i || i == 4 || i == 5)
                        result = sub_4c7770(a1, 0xa, &var_64, &var_24, &var_3c, a8, i);

                    i += 1;
                } while (i < 6);
            }
        }

        if (a8 & 0x80000000)
        {
            sub_4c5810();
            int32_t esi_10 = a1;
            int32_t ebx_4 = *(esi_10 + 0xde4);
            int32_t var_70_1 = *(esi_10 + 0xc) + 0x20;
            int32_t edx_8 = *(esi_10 + 0xde8);
            int32_t var_80_1 = 0;
            int32_t var_7c_1 = 0;
            int32_t var_78_1 = 0;
            int32_t var_74_1 = 0;
            int32_t eax_13 = *(esi_10 + 0xde0);
            int32_t edi_4 = var_24 + eax_13;
            int32_t var_6c_1 = esi_10;
            var_88 = 0x40000000;
            int32_t var_84_1 = 0x1e;
            int32_t eax_18 = ((var_2c_1 + *(esi_10 + 0xde8)) ^ (var_14_1 + edx_8))
                | ((var_34_1 + ebx_4) ^ (var_1c_1 + ebx_4)) | ((var_3c + eax_13) ^ edi_4);
            a6 = eax_18;
            int32_t eflags_1;
            int32_t eax_19;
            eax_19 = __bsr_gprv_memv(a6);
            a6 = eax_19;
            int32_t eax_20 = 0x1e - a6;

            if (eax_20 > 0x10)
                eax_20 = 0x10;

            double* edi_5 = a3;
            int32_t* var_1b4_3 = &var_88;
            double* eax_21 = sub_4c9a30(esi_10, &var_88, edi_5, eax_20);
            result = a5;

            if (result > 0)
            {
                a6 = edi_5;
                double* eax_23 = ebx_3 - edi_5;
                int32_t* ebx_8 = &esi_9[0x16];
                a4 = eax_23;
                a2 = a5;

                while (true)
                {
                    void var_104;

                    if (sub_4cc810(&var_104, &var_88, eax_21, edi_5, eax_23 + edi_5))
                    {
                        double var_fc[0x6];
                        long double st0_2;
                        long double temp8_1;

                        if (*ebx_8)
                        {
                            double var_c_7 = sub_4b32f0(edi_5, &var_fc);
                            st0_2 = sub_4b32f0(edi_5, &ebx_8[-0x14]);
                            temp8_1 = var_c_7;
                            st0_2 - temp8_1;
                        }

                        if (!*ebx_8 || !(*(&((st0_2 < temp8_1 ? 1 : 0) << 8
                            | (FCMP_UO(st0_2, temp8_1) ? 1 : 0) << 0xa
                            | (st0_2 == temp8_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                        {
                            int32_t var_194_1 = 0;
                            int32_t var_10c_1 = 0;
                            int32_t var_108_1 = 0;
                            char var_190_1 = 1;
                            char var_110_1 = 0xff;
                            int32_t var_198_1 = 1;
                            double (* var_19c)[0x6] = &var_fc;
                            sub_4ce090(esi_10, 0xb, &var_19c, &var_fc, 0x20000000, 4);

                            if (var_190_1)
                            {
                                int32_t var_a4;
                                ebx_8[2] = var_a4;
                                int32_t var_a0;
                                ebx_8[3] = var_a0;
                                memcpy(&ebx_8[-0x14], &var_fc, 0x18);
                                int32_t var_b8;
                                ebx_8[-3] = var_b8;
                                edi_5 = a6;
                                esi_10 = a1;
                                int32_t var_b4;
                                ebx_8[-2] = var_b4;
                                int32_t var_cc;
                                ebx_8[-8] = var_cc;
                                *ebx_8 = 1;
                                ebx_8[-0x16] = 0;
                                int32_t var_c8;
                                ebx_8[-7] = var_c8;
                                int32_t var_c4;
                                ebx_8[-6] = var_c4;
                            }
                        }
                    }

                    ebx_8 = &ebx_8[0x1c];
                    edi_5 = &edi_5[3];
                    result = a2 - 1;
                    bool cond:3_1 = a2 != 1;
                    a6 = edi_5;
                    a2 = result;

                    if (!cond:3_1)
                        break;

                    eax_23 = a4;
                }
            }
        }
    }

    return result;
}
