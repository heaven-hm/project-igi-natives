#include "004CFF70-DynObj_ParseConfigFile_16.h"
/* 0x004cff70 DynObj_ParseConfigFile_16 full linked: callers=2 callees=0 */
int32_t sub_4cff70(float a1)

{
    int32_t* ecx = *(a1 + 0x74);

    if (!ecx)
        return 0;

    long double x87_r7_1 = *(a1 + 0x20) - g_bcab08;
    void* edx = *ecx;
    float var_10 = *(a1 + 0x28) - g_bcab10;
    void* edx_2 = *(*(edx + 0xc) + 0xc);
    int32_t esi = ecx[0xf];
    long double x87_r4_2 = g_bcab00 * (*(a1 + 0x30) - g_bcab18 + *(edx_2 + 0x38))
        + g_bcaafc * (var_10 + *(edx_2 + 0x34));
    long double x87_r4_3 = x87_r4_2 + g_bcaaf8 * (x87_r7_1 + *(edx_2 + 0x30));
    long double x87_r6_7 = *(a1 + 0xa0);
    int32_t eax_1 = ecx[9];

    if (eax_1)
    {
        int32_t i = 0;
        a1 = g_bcab20 * (x87_r4_3 - x87_r6_7);
        long double x87_r7_21 = a1;
        long double temp1 = ecx[0xe];
        x87_r7_21 - temp1;
        eax_1 = (x87_r7_21 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_21, temp1) ? 1 : 0) << 0xa
            | (x87_r7_21 == temp1 ? 1 : 0) << 0xe;

        if (!(*(&eax_1 + 1) & 0x41))
            return eax_1 | 0xffffffff;

        long double x87_r7_22 = ecx[0xa];
        long double temp3 = 0f;
        x87_r7_22 - temp3;

        if (*(&((x87_r7_22 < temp3 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_22, temp3) ? 1 : 0) << 0xa
            | (x87_r7_22 == temp3 ? 1 : 0) << 0xe) + 1) & 0x40)
        {
            i = esi - 1;

            if (i > 1)
                i = 1;
        }

        long double x87_r7_23 = a1;
        long double temp4 = ecx[i + 0xa];
        x87_r7_23 - temp4;
        void* ecx_2 = &ecx[i + 0xa];

        if (!(*(&((x87_r7_23 < temp4 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_23, temp4) ? 1 : 0) << 0xa
            | (x87_r7_23 == temp4 ? 1 : 0) << 0xe) + 1) & 0x41))
        {
            while (i < esi - 1)
            {
                long double x87_r7_24 = a1;
                long double temp7_1 = *(ecx_2 + 4);
                x87_r7_24 - temp7_1;
                ecx_2 += 4;
                i += 1;

                if (*(&((x87_r7_24 < temp7_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_24, temp7_1) ? 1 : 0) << 0xa
                        | (x87_r7_24 == temp7_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                    break;
            }
        }

        return i;
    }

    int32_t i_2 = 0;
    float var_20 = (g_a4ee98 - x87_r6_7) * (1f - g_54835c) + x87_r6_7;
    long double x87_r7_4 = x87_r4_3 - var_20;
    a1 = x87_r7_4;
    long double temp2 = 0f;
    x87_r7_4 - temp2;

    if (!(*(&((x87_r7_4 < temp2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, temp2) ? 1 : 0) << 0xa
        | (x87_r7_4 == temp2 ? 1 : 0) << 0xe) + 1) & 0x41))
    {
        float var_18_1 = 1f / a1;
        float var_1c_1 = 1f / (g_a4ee84 * var_20);
        int32_t* eax_3 = var_1c_1;
        int32_t* var_14 = eax_3;

        if (esi > 1)
        {
            long double x87_r7_10 = *(edx_2 + 0x60);
            eax_3 = &ecx[1];
            float* edx_3 = &var_10;
            int32_t i_3 = esi - 1;
            int32_t i_1;

            do
            {
                void* ebx_1 = *eax_3;
                eax_3 = &eax_3[1];
                edx_3 = &edx_3[1];
                i_1 = i_3;
                i_3 -= 1;
                long double x87_r6_10 = *(*(*(ebx_1 + 0xc) + 0xc) + 0x60) / x87_r7_10;
                edx_3[-1] = x87_r6_10 * x87_r6_10 * var_1c_1;
            } while (i_1 != 1);
        }

        long double x87_r7_13 = g_bcab20 * var_14;
        long double temp5_1 = var_18_1;
        x87_r7_13 - temp5_1;
        eax_3 = (x87_r7_13 < temp5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_13, temp5_1) ? 1 : 0) << 0xa
            | (x87_r7_13 == temp5_1 ? 1 : 0) << 0xe;

        if (!(*(&eax_3 + 1) & 0x41))
        {
            void** ecx_1 = &var_14;

            while (i_2 < esi - 1)
            {
                long double x87_r7_15 = g_bcab20 * ecx_1[1];
                ecx_1 = &ecx_1[1];
                i_2 += 1;
                long double temp8_1 = var_18_1;
                x87_r7_15 - temp8_1;
                eax_3 = (x87_r7_15 < temp8_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_15, temp8_1) ? 1 : 0) << 0xa
                    | (x87_r7_15 == temp8_1 ? 1 : 0) << 0xe;

                if (*(&eax_3 + 1) & 0x41)
                    break;
            }
        }

        if (i_2 == esi - 1)
        {
            long double x87_r7_17 = g_bcab20 * a1;
            long double x87_r6_13 = g_a4ee90 * var_20;
            x87_r6_13 - x87_r7_17;
            eax_3 = (x87_r6_13 < x87_r7_17 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_13, x87_r7_17) ? 1 : 0) << 0xa
                | (x87_r6_13 == x87_r7_17 ? 1 : 0) << 0xe;

            if (*(&eax_3 + 1) & 1)
                return eax_3 | 0xffffffff;
        }
    }

    return i_2;
}
