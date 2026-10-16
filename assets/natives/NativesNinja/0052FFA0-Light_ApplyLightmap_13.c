#include "0052FFA0-Light_ApplyLightmap_13.h"
/* 0x0052ffa0 Light_ApplyLightmap_13 full linked: callers=4 callees=3 */
uint32_t sub_52ffa0(void* a1, double* a2)

{
    double* edi = a2;
    int32_t ebp = 0;
    int32_t edx = edi[4];
    int32_t var_24 = 0;
    int32_t var_34 = 0;
    uint32_t ecx_1 = edx >> 1;
    int32_t var_30 = 0;
    long double x87_r7 = ecx_1;
    uint32_t var_2c = ecx_1;
    int64_t var_18 = fabsl(x87_r7 + *edi - *(a1 + 0x4870));

    if (var_18 > edx)
    {
    label_53003e:

        if (*(edi + 0x1c) > 0)
        {
            uint32_t eax_2 = sub_52fe60(a1, edi);
            edi[5] = 0;
            return eax_2;
        }
    }
    else
    {
        var_18 = fabsl(x87_r7 + edi[1] - *(a1 + 0x4878));

        if (var_18 > edx)
            goto label_53003e;

        int32_t var_24_1 = 0;
        long double x87_r7_4 = edx;
        long double temp0_1 = 131072.0;
        x87_r7_4 - temp0_1;

        if (*(&((x87_r7_4 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, temp0_1) ? 1 : 0) << 0xa
                | (x87_r7_4 == temp0_1 ? 1 : 0) << 0xe) + 1) & 0x41)
            goto label_53003e;

        int32_t var_24_2 = 0;
        long double x87_r7_6 = edx * 1.5f;
        long double temp1_1 = *(a1 + 0x4a78);
        x87_r7_6 - temp1_1;

        if (*(&((x87_r7_6 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_6 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x41)
            goto label_53003e;
    }

    int32_t edx_1 = *(edi + 0x1c);
    edi[5] = 1;
    int32_t eax_3 = *((edx_1 << 2) + &g_a84584);

    if (eax_3 > 3)
        goto label_5300d3;

    double* edx_2;

    switch (eax_3)
    {
        case 0:
        {
            var_34 = 0;
            *((edx_1 << 2) + &g_a84584) = eax_3 + 1;
            edx_2 = nullptr;
            var_30 = 0;
            a2 = nullptr;
            break;
        }
        case 1:
        {
            var_34 = 0;
            *((edx_1 << 2) + &g_a84584) = eax_3 + 1;
            edx_2 = nullptr;
            var_30 = 2;
            a2 = nullptr;
            break;
        }
        case 2:
        {
            var_34 = 2;
            *((edx_1 << 2) + &g_a84584) = eax_3 + 1;
            edx_2 = nullptr;
            var_30 = 0;
            a2 = nullptr;
            break;
        }
        case 3:
        {
            var_34 = 2;
            var_30 = 2;
        label_5300d3:
            *((edx_1 << 2) + &g_a84584) = eax_3 + 1;
            edx_2 = nullptr;
            a2 = nullptr;
            break;
        }
    }

    double* eax_25;

    while (true)
    {
        int32_t var_24_3 = 0;
        double var_10_1 = (edx_2 * ecx_1);

        while (true)
        {
            int32_t var_1c_1 = 0;
            int32_t eax_14 = ebp + ((edx_2 + (*(edi + 0x1c) << 2) + var_34) << 2) + var_30;
            *(eax_14 * 0x30 + a1 + 0xc6c) = edi;
            int32_t eax_18 = *(edi + 0x1c) + 1;
            *(eax_14 * 0x30 + a1 + 0xc60) = ecx_1;
            *(eax_14 * 0x30 + a1 + 0xc5c) = eax_18;
            *(eax_14 * 0x30 + a1 + 0xc54) = 0;
            int32_t ecx_2 = *(eax_14 * 0x30 + a1 + 0xc5c);
            *(eax_14 * 0x30 + a1 + 0xc40) = var_10_1 + *edi;
            *(eax_14 * 0x30 + a1 + 0xc48) = (ebp * ecx_1) + edi[1];
            int32_t eax_21 = *(a1 + 0x4abc);

            if (eax_21 <= ecx_2)
                eax_21 = ecx_2;

            *(a1 + 0x4abc) = eax_21;
            int32_t eax_22 = *(eax_14 * 0x30 + a1 + 0xc54);

            if (!edx_2)
                eax_22 |= 0x10;
            else
                eax_22 |= 8;

            *(eax_14 * 0x30 + a1 + 0xc54) = eax_22;

            if (!ebp)
                eax_22 |= 4;
            else
                eax_22 |= 2;

            *(&var_18 + 4) = 0;
            var_18 = *(eax_14 * 0x30 + a1 + 0xc60);
            *(eax_14 * 0x30 + a1 + 0xc54) = eax_22;
            long double x87_r7_13 = var_18;
            long double temp2_1 = 131072.0;
            x87_r7_13 - temp2_1;

            if (!(*(&((x87_r7_13 < temp2_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_13, temp2_1) ? 1 : 0) << 0xa
                    | (x87_r7_13 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                sub_52ffa0(a1, eax_14 * 0x30 + a1 + 0xc40);
            else
            {
                sub_52fe60(a1, eax_14 * 0x30 + a1 + 0xc40);
                *(eax_14 * 0x30 + a1 + 0xc68) = 0;
            }

            ebp += 1;

            if (ebp >= 2)
                break;

            ecx_1 = var_2c;
            edx_2 = a2;
        }

        eax_25 = a2 + 1;
        a2 = eax_25;

        if (eax_25 >= 2)
            break;

        ecx_1 = var_2c;
        edx_2 = a2;
        ebp = 0;
    }

    return eax_25;
}
