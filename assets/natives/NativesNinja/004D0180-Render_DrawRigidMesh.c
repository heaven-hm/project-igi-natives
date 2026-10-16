#include "004D0180-Render_DrawRigidMesh.h"
/* 0x004d0180 Render_DrawRigidMesh full linked: callers=1 callees=0 */
int32_t sub_4d0180(float a1)

{
    int32_t* edx = *(a1 + 0x6c);

    if (!edx)
        return 0;

    float* ecx = *(a1 + 0x5a0);
    long double x87_r7_1 = *(a1 + 0x20) - g_bcab08;
    long double x87_r6_1 = *(a1 + 0x28) - g_bcab10;
    float var_10;
    long double x87_r6_7;
    long double x87_r7_3;

    if (!ecx)
    {
        x87_r7_3 = g_bcab00 * (*(a1 + 0x30) - g_bcab18) + g_bcaafc * x87_r6_1
            + g_bcaaf8 * x87_r7_1;
        x87_r6_7 = *(a1 + 0x44);
    }
    else
    {
        var_10 = x87_r6_1;
        x87_r7_3 = g_bcab00 * (*(a1 + 0x30) - g_bcab18 + ecx[2])
            + g_bcaafc * (var_10 + ecx[1]) + g_bcaaf8 * (x87_r7_1 + *ecx);
        x87_r6_7 = ecx[3];
    }

    int32_t eax_1 = edx[9];
    int32_t esi = edx[0xf];

    if (eax_1)
    {
        int32_t i = 0;
        a1 = g_bcab20 * (x87_r7_3 - x87_r6_7);
        long double x87_r7_21 = a1;
        long double temp1 = edx[0xe];
        x87_r7_21 - temp1;
        eax_1 = (x87_r7_21 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_21, temp1) ? 1 : 0) << 0xa
            | (x87_r7_21 == temp1 ? 1 : 0) << 0xe;

        if (!(*(&eax_1 + 1) & 0x41))
            return eax_1 | 0xffffffff;

        long double x87_r7_22 = edx[0xa];
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
        long double temp4 = edx[i + 0xa];
        x87_r7_23 - temp4;
        void* edx_2 = &edx[i + 0xa];

        if (!(*(&((x87_r7_23 < temp4 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_23, temp4) ? 1 : 0) << 0xa
            | (x87_r7_23 == temp4 ? 1 : 0) << 0xe) + 1) & 0x41))
        {
            while (i < esi - 1)
            {
                long double x87_r7_24 = a1;
                long double temp7_1 = *(edx_2 + 4);
                x87_r7_24 - temp7_1;
                edx_2 += 4;
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
    long double x87_r7_4 = x87_r7_3 - var_20;
    a1 = x87_r7_4;
    long double temp2 = 0f;
    x87_r7_4 - temp2;

    if (!(*(&((x87_r7_4 < temp2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, temp2) ? 1 : 0) << 0xa
        | (x87_r7_4 == temp2 ? 1 : 0) << 0xe) + 1) & 0x41))
    {
        float var_18_1 = 1f / a1;
        float var_1c_1 = 1f / (g_a4ee88 * var_20);
        float eax_3 = var_1c_1;
        float var_14 = eax_3;

        if (esi > 1)
        {
            eax_3 = &edx[1];
            int32_t i_3 = esi - 1;
            long double x87_r7_10 = *(*(*(*edx + 0xc) + 0xc) + 0x60);
            float* ecx_3 = &var_10;
            int32_t i_1;

            do
            {
                void* ebx_1 = *eax_3;
                eax_3 += 4;
                ecx_3 = &ecx_3[1];
                i_1 = i_3;
                i_3 -= 1;
                long double x87_r6_11 = *(*(*(ebx_1 + 0xc) + 0xc) + 0x60) / x87_r7_10;
                ecx_3[-1] = x87_r6_11 * x87_r6_11 * var_1c_1;
            } while (i_1 != 1);
        }

        long double x87_r7_13 = g_bcab20 * var_14;
        long double temp5_1 = var_18_1;
        x87_r7_13 - temp5_1;
        eax_3 = (x87_r7_13 < temp5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_13, temp5_1) ? 1 : 0) << 0xa
            | (x87_r7_13 == temp5_1 ? 1 : 0) << 0xe;

        if (!(*(&eax_3 + 1) & 0x41))
        {
            float* ecx_4 = &var_14;

            while (i_2 < esi - 1)
            {
                long double x87_r7_15 = g_bcab20 * ecx_4[1];
                ecx_4 = &ecx_4[1];
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
            long double x87_r6_14 = g_a4ee94 * var_20;
            x87_r6_14 - x87_r7_17;
            eax_3 = (x87_r6_14 < x87_r7_17 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_14, x87_r7_17) ? 1 : 0) << 0xa
                | (x87_r6_14 == x87_r7_17 ? 1 : 0) << 0xe;

            if (*(&eax_3 + 1) & 1)
                return eax_3 | 0xffffffff;
        }
    }

    return i_2;
}
