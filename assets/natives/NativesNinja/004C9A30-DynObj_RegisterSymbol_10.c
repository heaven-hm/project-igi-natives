#include "004C9A30-DynObj_RegisterSymbol_10.h"
/* 0x004c9a30 DynObj_RegisterSymbol_10 full linked: callers=6 callees=1 */
int32_t sub_4c9a30(void* a1, int32_t* a2, double* a3 @ 0x10, int32_t a4)

{
    int32_t* ebx = a2;
    void* var_40 = ebx[6];
    int32_t edx = *(ebx[7] + 0xc);
    a2 = ebx[1];
    int32_t var_20 = ebx[4];
    double* ecx_3 = a3;
    int32_t var_28 = *ebx;
    int32_t var_44 = ebx[2];
    int32_t var_24 = ebx[3];
    int32_t edi = *ecx_3;
    int32_t var_1c = ebx[5];
    a3 = *(a1 + 0x20);
    int32_t esi = ecx_3[1];
    int32_t ebp = ecx_3[2];
    long double x87_r7_3 = *ecx_3;
    long double temp0 = 0.0;
    x87_r7_3 - temp0;

    if (*(&((x87_r7_3 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, temp0) ? 1 : 0) << 0xa
        | (x87_r7_3 == temp0 ? 1 : 0) << 0xe) + 1) & 1)
    {
        long double x87_r7_4 = edi;
        long double temp2_1 = *ecx_3;
        x87_r7_4 - temp2_1;

        if (!(*(&((x87_r7_4 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, temp2_1) ? 1 : 0) << 0xa
                | (x87_r7_4 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            edi -= 1;
    }

    long double x87_r7_5 = ecx_3[1];
    long double temp1 = 0.0;
    x87_r7_5 - temp1;

    if (*(&((x87_r7_5 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, temp1) ? 1 : 0) << 0xa
        | (x87_r7_5 == temp1 ? 1 : 0) << 0xe) + 1) & 1)
    {
        long double x87_r7_6 = esi;
        long double temp4_1 = ecx_3[1];
        x87_r7_6 - temp4_1;

        if (!(*(&((x87_r7_6 < temp4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, temp4_1) ? 1 : 0) << 0xa
                | (x87_r7_6 == temp4_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            esi -= 1;
    }

    long double x87_r7_7 = ecx_3[2];
    long double temp3 = 0.0;
    x87_r7_7 - temp3;

    if (*(&((x87_r7_7 < temp3 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_7, temp3) ? 1 : 0) << 0xa
        | (x87_r7_7 == temp3 ? 1 : 0) << 0xe) + 1) & 1)
    {
        long double x87_r7_8 = ebp;
        long double temp5_1 = ecx_3[2];
        x87_r7_8 - temp5_1;

        if (!(*(&((x87_r7_8 < temp5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_8, temp5_1) ? 1 : 0) << 0xa
                | (x87_r7_8 == temp5_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            ebp -= 1;
    }

    int32_t edi_1 = edi + *(a1 + 0xde0);
    int32_t esi_1 = esi + *(a1 + 0xde4);
    int32_t ebp_1 = ebp + *(a1 + 0xde8);
    int32_t edi_2 = edi_1 ^ 0x40000000;
    int32_t esi_2 = esi_1 ^ 0x40000000;
    int32_t ebp_2 = ebp_1 ^ 0x40000000;
    int32_t var_3c_1 = edi_2;
    int32_t var_38_1 = esi_2;
    int32_t var_34_1 = ebp_2;
    sub_4c5810();
    int32_t result = 0;
    int32_t result_1 = 0;

    if (a4 > 0)
    {
        int32_t* ecx_6 = a2;
        void* var_30_1 = ecx_6 - 1;

        while (true)
        {
            int32_t esi_4 = esi_2 >> (ecx_6 & 0x1f) & 1;
            int32_t edi_4 = edi_2 >> (ecx_6 & 0x1f) & 1;
            int32_t ebp_4 = ebp_2 >> (a2 & 0x1f) & 1;
            int32_t ecx_10 =
                *(((((esi_4 * 2) | edi_4) + (var_44 << 3)) << 2) + &g_548060) | ebp_4 << 2;

            if (!(*(var_40 + 0x18) & 1 << (ecx_10 & 0x1f)))
            {
                result = result_1;
                break;
            }

            if (g_b97d20 && a3)
            {
                if (a3[7] & 0x80)
                {
                    void* eax_13 = *(a3 + 0x2c);
                    a1 = eax_13;

                    while (true)
                    {
                        if (*(eax_13 + 0x5c) & 0x80)
                        {
                            int32_t ecx_11 = 0;
                            ecx_11 = *(eax_13 + 0x1c);
                            (*((ecx_11 << 2) + &g_a9c4e0))(eax_13, *(eax_13 + 0x48));
                            eax_13 = a1;
                        }

                        void* eax_14 = *(eax_13 + 0x58);
                        a1 = eax_14;

                        if (!eax_14)
                            break;

                        eax_13 = a1;
                    }
                }

                char eax_15 = var_30_1;
                double* edx_17 = *(a3 + (((ebp_1 >> ((eax_15 - 1) & 0x1f) & 4)
                    | (esi_1 >> (eax_15 & 0x1f) & 2) | (edi_1 >> (a2 & 0x1f) & 1)) << 2) + 0xc);
                a3 = edx_17;
            }

            int32_t edx_19 = var_28 >> 1;
            var_28 = edx_19;
            a2 -= 1;
            var_30_1 -= 1;
            var_24 -= (-(edi_4) ^ edx_19) + edi_4;
            var_20 -= (-(esi_4) ^ edx_19) + esi_4;
            int32_t edx_20 = 0;
            edx_20 = *(ecx_10 + var_40 + 0x10);
            var_1c -= (-(ebp_4) ^ edx_19) + ebp_4;

            var_44 = var_44 >= 4 ? ((var_44 - edx_20) & 3) + ((edx_20 ^ var_44) & 4)
                : ((var_44 + edx_20) & 3) + (edx_20 & 4);

            int32_t edx_24 = 0;
            edx_24 = *(var_40 + (ecx_10 << 1));
            result = result_1 + 1;
            var_40 = (edx_24 << 5) + edx;
            result_1 = result;

            if (result >= a4)
                break;

            edi_2 = var_3c_1;
            esi_2 = var_38_1;
            ebp_2 = var_34_1;
            ecx_6 = a2;
        }
    }

    ebx[2] = var_44;
    *ebx = var_28;
    ebx[1] = a2;
    ebx[3] = var_24;
    ebx[4] = var_20;
    ebx[5] = var_1c;
    ebx[6] = var_40;
    ebx[8] = a3;

    if (g_b97df8 > 6)
        g_b97df8 = 6;

    return result;
}
