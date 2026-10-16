#include "004CFCB0-DynObj_CreateMagicObject_16.h"
/* 0x004cfcb0 DynObj_CreateMagicObject_16 full linked: callers=3 callees=1 */
int32_t sub_4cfcb0(float a1)

{
    int32_t* ebx = *(a1 + 0x6c);

    if (!ebx)
        return 0;

    void* edx = *ebx;
    void* ecx = *(*(edx + 0xc) + 0xc);
    long double x87_r4_2 = g_bcab00 * (*(a1 + 0x30) - g_bcab18 + *(ecx + 0x38))
        + g_bcaafc * (*(a1 + 0x28) - g_bcab10 + *(ecx + 0x34));
    long double x87_r4_3 = x87_r4_2 + g_bcaaf8 * (*(a1 + 0x20) - g_bcab08 + *(ecx + 0x30));
    long double x87_r6_7 = *(a1 + 0x98);
    long double x87_r5_3 = *(a1 + 0x9c);
    x87_r5_3 - x87_r6_7;
    long double x87_r6_8;

    if (!(*(&((x87_r5_3 < x87_r6_7 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_3, x87_r6_7) ? 1 : 0) << 0xa
            | (x87_r5_3 == x87_r6_7 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        x87_r6_8 = *(a1 + 0x9c);
    else
        x87_r6_8 = *(a1 + 0x98);

    long double x87_r5_4 = *(a1 + 0xa0);
    x87_r6_8 - x87_r5_4;
    long double x87_r6_11;

    if (*(&((x87_r6_8 < x87_r5_4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_8, x87_r5_4) ? 1 : 0) << 0xa
            | (x87_r6_8 == x87_r5_4 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        x87_r6_11 = *(a1 + 0xa0);
    else
    {
        long double x87_r6_10 = *(a1 + 0x98);
        long double x87_r5_6 = *(a1 + 0x9c);
        x87_r5_6 - x87_r6_10;

        if (!(*(&((x87_r5_6 < x87_r6_10 ? 1 : 0) << 8
                | (FCMP_UO(x87_r5_6, x87_r6_10) ? 1 : 0) << 0xa
                | (x87_r5_6 == x87_r6_10 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
            x87_r6_11 = *(a1 + 0x9c);
        else
            x87_r6_11 = *(a1 + 0x98);
    }

    int32_t eax_16 = ebx[9];
    int32_t ebp = ebx[0xf];
    long double x87_r6_12 = x87_r6_11 * *(ecx + 0x3c);

    if (eax_16)
    {
        int32_t i = 0;
        a1 = g_bcab20 * (x87_r4_3 - x87_r6_12) * g_548370;
        long double x87_r7_23 = a1;
        long double temp1 = ebx[0xe];
        x87_r7_23 - temp1;
        eax_16 = (x87_r7_23 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_23, temp1) ? 1 : 0) << 0xa
            | (x87_r7_23 == temp1 ? 1 : 0) << 0xe;

        if (!(*(&eax_16 + 1) & 0x41))
            return eax_16 | 0xffffffff;

        long double x87_r7_24 = ebx[0xa];
        long double temp3 = 0f;
        x87_r7_24 - temp3;

        if (*(&((x87_r7_24 < temp3 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_24, temp3) ? 1 : 0) << 0xa
            | (x87_r7_24 == temp3 ? 1 : 0) << 0xe) + 1) & 0x40)
        {
            i = ebp - 1;

            if (i > 1)
                i = 1;
        }

        long double x87_r7_25 = a1;
        long double temp4 = ebx[i + 0xa];
        x87_r7_25 - temp4;
        void* edx_2 = &ebx[i + 0xa];

        if (!(*(&((x87_r7_25 < temp4 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_25, temp4) ? 1 : 0) << 0xa
            | (x87_r7_25 == temp4 ? 1 : 0) << 0xe) + 1) & 0x41))
        {
            while (i < ebp - 1)
            {
                long double x87_r7_26 = a1;
                long double temp6_1 = *(edx_2 + 4);
                x87_r7_26 - temp6_1;
                edx_2 += 4;
                i += 1;

                if (*(&((x87_r7_26 < temp6_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_26, temp6_1) ? 1 : 0) << 0xa
                        | (x87_r7_26 == temp6_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                    break;
            }
        }

        return i;
    }

    int32_t i_1 = 0;
    float var_28 = (g_a4ee98 - x87_r6_12) * (1f - g_54835c) + x87_r6_12;
    long double x87_r7_5 = (x87_r4_3 - var_28) * g_548370;
    a1 = x87_r7_5;
    long double temp2 = 0f;
    x87_r7_5 - temp2;

    if (!(*(&((x87_r7_5 < temp2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, temp2) ? 1 : 0) << 0xa
        | (x87_r7_5 == temp2 ? 1 : 0) << 0xe) + 1) & 0x41))
    {
        int32_t edi_1 = 1;
        float var_20_1 = 1f / a1;
        float var_24_1 = 1f / (g_a4ee80 * var_28);
        float eax_4 = var_24_1;
        float var_14 = eax_4;

        if (ebp > 1)
        {
            int32_t* esi_1 = &ebx[1];

            do
            {
                if (*(*(*(*esi_1 + 0xc) + 0xc) + 0x60) > *(ecx + 0x60))
                {
                    int32_t var_3c_1 = *(edx + 8);
                    int32_t var_40_1 = edi_1;
                    Warning_Show("Detail level %d is more complex than level 0 for model %s.");
                }

                edx = *ebx;
                edi_1 += 1;
                esi_1 = &esi_1[1];
                ecx = *(*(edx + 0xc) + 0xc);
                eax_4 = &var_14 - ebx;
                long double x87_r7_12 = *(*(*(esi_1[-1] + 0xc) + 0xc) + 0x60) / *(ecx + 0x60);
                *(eax_4 + esi_1 - 4) = x87_r7_12 * x87_r7_12 * var_24_1;
            } while (edi_1 < ebp);

            i_1 = 0;
        }

        long double x87_r7_15 = g_bcab20 * var_14;
        long double temp5_1 = var_20_1;
        x87_r7_15 - temp5_1;
        eax_4 = (x87_r7_15 < temp5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_15, temp5_1) ? 1 : 0) << 0xa
            | (x87_r7_15 == temp5_1 ? 1 : 0) << 0xe;

        if (!(*(&eax_4 + 1) & 0x41))
        {
            float* ecx_2 = &var_14;

            while (i_1 < ebp - 1)
            {
                long double x87_r7_17 = g_bcab20 * ecx_2[1];
                ecx_2 = &ecx_2[1];
                i_1 += 1;
                long double temp7_1 = var_20_1;
                x87_r7_17 - temp7_1;
                eax_4 = (x87_r7_17 < temp7_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_17, temp7_1) ? 1 : 0) << 0xa
                    | (x87_r7_17 == temp7_1 ? 1 : 0) << 0xe;

                if (*(&eax_4 + 1) & 0x41)
                    break;
            }
        }

        if (i_1 == ebp - 1)
        {
            long double x87_r7_19 = g_bcab20 * a1;
            long double x87_r6_18 = g_a4ee8c * var_28;
            x87_r6_18 - x87_r7_19;
            eax_4 = (x87_r6_18 < x87_r7_19 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_18, x87_r7_19) ? 1 : 0) << 0xa
                | (x87_r6_18 == x87_r7_19 ? 1 : 0) << 0xe;

            if (*(&eax_4 + 1) & 1)
                return eax_4 | 0xffffffff;
        }
    }

    return i_1;
}
