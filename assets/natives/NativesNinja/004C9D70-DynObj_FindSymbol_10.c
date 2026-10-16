#include "004C9D70-DynObj_FindSymbol_10.h"
/* 0x004c9d70 DynObj_FindSymbol_10 full linked: callers=1 callees=1 */
int32_t sub_4c9d70(int32_t* a1, double* a2, int32_t a3)

{
    void* ebp = a1[6];
    void* ecx = a1[7];
    int32_t edi = a1[2];
    int32_t var_34 = *a1;
    int32_t edx_1 = a1[1];
    double* eax_1 = a2;
    int32_t ebx = *eax_1;
    int32_t ecx_2 = eax_1[1];
    int32_t esi = eax_1[2];
    long double x87_r7_3 = *eax_1;
    long double temp0 = 0.0;
    x87_r7_3 - temp0;

    if (*(&((x87_r7_3 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, temp0) ? 1 : 0) << 0xa
        | (x87_r7_3 == temp0 ? 1 : 0) << 0xe) + 1) & 1)
    {
        long double x87_r7_4 = ebx;
        long double temp2_1 = *a2;
        x87_r7_4 - temp2_1;

        if (!(*(&((x87_r7_4 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, temp2_1) ? 1 : 0) << 0xa
                | (x87_r7_4 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            ebx -= 1;
    }

    long double x87_r7_5 = a2[1];
    long double temp1 = 0.0;
    x87_r7_5 - temp1;

    if (*(&((x87_r7_5 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, temp1) ? 1 : 0) << 0xa
        | (x87_r7_5 == temp1 ? 1 : 0) << 0xe) + 1) & 1)
    {
        long double x87_r7_6 = ecx_2;
        long double temp4_1 = a2[1];
        x87_r7_6 - temp4_1;

        if (!(*(&((x87_r7_6 < temp4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, temp4_1) ? 1 : 0) << 0xa
                | (x87_r7_6 == temp4_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            ecx_2 -= 1;
    }

    long double x87_r7_7 = a2[2];
    long double temp3 = 0.0;
    x87_r7_7 - temp3;

    if (*(&((x87_r7_7 < temp3 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_7, temp3) ? 1 : 0) << 0xa
        | (x87_r7_7 == temp3 ? 1 : 0) << 0xe) + 1) & 1)
    {
        long double x87_r7_8 = esi;
        long double temp5_1 = a2[2];
        x87_r7_8 - temp5_1;

        if (!(*(&((x87_r7_8 < temp5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_8, temp5_1) ? 1 : 0) << 0xa
                | (x87_r7_8 == temp5_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            esi -= 1;
    }

    int32_t ecx_3 = ecx_2 + *(ecx + 0xde4);
    int32_t esi_1 = esi + *(ecx + 0xde8);
    int32_t ebx_1 = ebx + *(ecx + 0xde0);
    int32_t ecx_4 = ecx_3 ^ 0x40000000;
    int32_t esi_2 = esi_1 ^ 0x40000000;
    int32_t ebx_2 = ebx_1 ^ 0x40000000;
    char ecx_5 = edx_1;
    int32_t esi_8 = *(((((ecx_4 >> (ecx_5 & 0x1f) & 1) << 1 | (ebx_2 >> (ecx_5 & 0x1f) & 1))
        + (edi << 3)) << 2) + &g_548060) | (esi_2 >> (ecx_5 & 0x1f) & 1) << 2;

    if (*(ebp + 0x18) & 1 << (esi_8 & 0x1f))
    {
        while (a3 < 0x10)
        {
            int32_t eax_24 = 0;
            eax_24 = *(esi_8 + ebp + 0x10);
            int32_t eax_26;
            int32_t ecx_9;

            if (edi >= 4)
            {
                ecx_9 = (edi - (eax_24 & 3)) & 3;
                eax_26 = (eax_24 ^ edi) & 4;
            }
            else
            {
                ecx_9 = (eax_24 ^ edi) & 4;
                eax_26 = (eax_24 + edi) & 3;
            }

            int32_t eax_30 = 0;
            eax_30 = *(ebp + (esi_8 << 1));
            edi = ecx_9 + eax_26;
            ebp = (eax_30 << 5) + *(ecx + 0xc);
            edx_1 -= 1;
            var_34 s>>= 1;
            char ecx_15 = edx_1;
            esi_8 = (esi_2 >> (ecx_15 & 0x1f) & 1) << 2 | *(((((ecx_4 >> (ecx_15 & 0x1f) & 1) << 1
                | (ebx_2 >> (ecx_15 & 0x1f) & 1)) + (edi << 3)) << 2) + &g_548060);
            a3 += 1;

            if (!(*(ebp + 0x18) & 1 << (esi_8 & 0x1f)))
                break;
        }
    }

    void* ecx_20 = a1[7];
    int32_t eax_42 = ~((0x40000000 >> ((a3 - 1) & 0x1f)) - 1);
    int32_t esi_20 = (eax_42 & ecx_3) - *(ecx_20 + 0xde4) + var_34;
    int32_t esi_24 = (eax_42 & esi_1) - *(ecx_20 + 0xde8) + var_34;
    double* edx_5 = a2;
    int16_t* ecx_22 = *(ebp + 0x1c);
    double var_18 = (eax_42 & ebx_1) - *(ecx_20 + 0xde0) + var_34;
    double var_10 = esi_20;
    double var_8 = esi_24;
    sub_4c9020(ecx_22, &var_18, edx_5, a3, &a2, edi);
    return *(a1[7] + (a2 << 2) + 0xd3c);
}
