#include "004C9750-DynObj_RemoveSymbol_9.h"
/* 0x004c9750 DynObj_RemoveSymbol_9 full linked: callers=1 callees=8 */
uint32_t sub_4c9750(int32_t a1, int32_t* a2, double* a3, uint32_t a4, char a5, int32_t a6, int32_t a7)

{
    sub_4c5810();
    int32_t ebx = a1;
    int32_t eax = *(ebx + 0xc);
    double var_2c;
    memcpy(&var_2c, a3, 0x18);
    double var_44;
    memcpy(&var_44, a3, 0x18);
    int32_t var_50 = eax + 0x20;
    int32_t var_4c = ebx;
    int32_t var_68 = 0x40000000;
    int32_t var_64 = 0x1e;
    int32_t var_60 = 0;
    int32_t var_5c = 0;
    int32_t var_58 = 0;
    int32_t var_54 = 0;
    char var_f4[0x80];
    double var_3c;
    double var_34;
    double var_24;
    double var_1c;

    if (a4 > 0)
    {
        int64_t var_c;
        *(&var_c + 4) = a4;
        long double x87_r7_1 = var_1c;
        int32_t* esi_2 = a2;
        double* edx_1 = &a3[2];
        __builtin_memset(__builtin_memset(&var_f4, 0x1010101, a4 & 0xfffffffc), 1, a4 & 3);
        uint32_t i_1 = a4;
        uint32_t i;

        do
        {
            long double x87_r6_1 = var_44;
            long double temp0_1 = edx_1[-2];
            x87_r6_1 - temp0_1;

            if (!(*(&((x87_r6_1 < temp0_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_1, temp0_1) ? 1 : 0) << 0xa
                | (x87_r6_1 == temp0_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
            {
                long double x87_r6_2 = var_2c;
                long double temp1_1 = edx_1[-2];
                x87_r6_2 - temp1_1;

                if (!(*(&((x87_r6_2 < temp1_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_2, temp1_1) ? 1 : 0) << 0xa
                    | (x87_r6_2 == temp1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                {
                    int32_t edi_3 = *(edx_1 - 0xc);
                    var_2c = edx_1[-2];
                    *(&var_2c + 4) = edi_3;
                }
            }
            else
            {
                int32_t edi_2 = *(edx_1 - 0xc);
                var_44 = edx_1[-2];
                *(&var_44 + 4) = edi_2;
            }

            long double x87_r6_3 = var_3c;
            long double temp2_1 = edx_1[-1];
            x87_r6_3 - temp2_1;

            if (!(*(&((x87_r6_3 < temp2_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_3, temp2_1) ? 1 : 0) << 0xa
                | (x87_r6_3 == temp2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
            {
                long double x87_r6_4 = var_24;
                long double temp3_1 = edx_1[-1];
                x87_r6_4 - temp3_1;

                if (!(*(&((x87_r6_4 < temp3_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_4, temp3_1) ? 1 : 0) << 0xa
                    | (x87_r6_4 == temp3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                {
                    var_24 = edx_1[-1];
                    *(&var_24 + 4) = *(edx_1 - 4);
                }
            }
            else
            {
                var_3c = edx_1[-1];
                *(&var_3c + 4) = *(edx_1 - 4);
            }

            long double x87_r6_5 = var_34;
            long double temp5_1 = *edx_1;
            x87_r6_5 - temp5_1;

            if (!(*(&((x87_r6_5 < temp5_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_5, temp5_1) ? 1 : 0) << 0xa
                | (x87_r6_5 == temp5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
            {
                long double temp6_1 = *edx_1;
                x87_r7_1 - temp6_1;

                if (!(*(&((x87_r7_1 < temp6_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_1, temp6_1) ? 1 : 0) << 0xa
                        | (x87_r7_1 == temp6_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                    x87_r7_1 = *edx_1;
            }
            else
            {
                var_34 = *edx_1;
                *(&var_34 + 4) = *(edx_1 + 4);
            }

            *esi_2 = 0;
            edx_1 = &edx_1[3];
            esi_2 = &esi_2[1];
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
        var_1c = x87_r7_1;
        ebx = a1;
    }

    int32_t eax_8 = *(ebx + 0xde0);
    int32_t ebx_2 = *(ebx + 0xde4);
    int32_t edx_2 = *(a1 + 0xde8);
    double var_1c_1 = var_1c - 2.0;
    int64_t var_c_2 = var_24 - 2.0;
    int32_t edi_7 = var_c_2;
    *(&var_c_2 + 4) = edx_2;
    *(&var_1c_1 + 4) = var_1c_1 + edx_2;
    int32_t eax_13 = ((var_34 + 2.0 + *(&var_c_2 + 4)) ^ *(&var_1c_1 + 4))
        | ((var_3c + 2.0 + ebx_2) ^ (edi_7 + ebx_2))
        | ((var_44 + 2.0 + eax_8) ^ (var_2c - 2.0 + eax_8));
    *(&var_c_2 + 4) = eax_13;
    int32_t eflags;
    uint32_t result;
    result = __bsr_gprv_memv(*(&var_c_2 + 4));
    *(&var_c_2 + 4) = result;
    int32_t esi_5 = 0x1e - *(&var_c_2 + 4);
    double* ebx_5;

    if (!(a7 & 0x7fffffff))
        ebx_5 = a3;
    else
    {
        ebx_5 = a3;
        int32_t* var_f8_1 = a2;
        char var_74_1 = a5;
        uint32_t var_fc_1 = a4;
        double* var_100 = ebx_5;
        int32_t var_70_1 = a6;
        int32_t var_6c_1 = 0;
        result = sub_4ce390(a1, 0xb, &var_100, ebx_5, a7);
    }

    if (a7 & 0x80000000)
    {
        result = a1;

        if (*(result + 0xc))
        {
            if (esi_5 > 0x10)
                esi_5 = 0x10;

            int32_t* var_118_2 = &var_68;
            a5 = sub_4c9a30(result, &var_68, ebx_5, esi_5);
            result = a4;
            int32_t edi_10 = 0;

            if (result > 0)
            {
                int32_t* esi_6 = a2;

                do
                {
                    void* eax_17 = *esi_6;

                    if (var_f4[edi_10])
                    {
                        long double x87_r7_7;
                        long double temp4_1;

                        if (eax_17)
                        {
                            x87_r7_7 = *(eax_17 + 0xc);
                            temp4_1 = 0f;
                            x87_r7_7 - temp4_1;
                        }

                        if (!eax_17 || *(&((x87_r7_7 < temp4_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_7, temp4_1) ? 1 : 0) << 0xa
                                | (x87_r7_7 == temp4_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                            *esi_6 = sub_4c9d70(&var_68, ebx_5, a5);
                    }
                    else if (!eax_17)
                        *esi_6 = *(a1 + 0xd3c);

                    result = a4;
                    edi_10 += 1;
                    esi_6 = &esi_6[1];
                    ebx_5 = &ebx_5[3];
                } while (edi_10 < result);
            }
        }
    }

    return result;
}
