#include "00448E30-RadarDish_LoadParameters.h"
/* 0x00448e30 RadarDish_LoadParameters full linked: callers=0 callees=2 */
void* sub_448e30(void* a1)

{
    int32_t* i = *(a1 + 8);

    if (*i && i)
    {
        int32_t edx_1 = g_afa7e0;

        do
        {
            int32_t* esi_1 = *i;
            void* eax_4;

            if (!esi_1)
                eax_4 = nullptr;
            else
            {
                int32_t eax_1 = *esi_1;
                int32_t eax_2 = -(eax_1);
                eax_4 = (eax_2 - eax_2) & esi_1;
            }

            *((edx_1 << 2) + &g_afa6e0) = eax_4;
            int32_t edx_2 = edx_1 + 1;
            int32_t eax_5 = 0;
            g_afa7e0 = edx_2;
            eax_5 = i[7];
            int32_t eax = *((eax_5 << 2) + &g_a970e0);

            if (eax)
            {
                eax(i);
                edx_2 = g_afa7e0;
            }

            i = *((edx_2 << 2) + &g_afa6dc);
            edx_1 = edx_2 - 1;
            g_afa7e0 = edx_1;
        } while (i);
    }

    long double x87_r7 = *(a1 + 0x140);
    long double temp0 = *(a1 + 0x13c);
    x87_r7 - temp0;

    if (!(*(&((x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
        long double x87_r7_1 = *(a1 + 0x140);
        long double temp2_1 = *(a1 + 0x13c);
        x87_r7_1 - temp2_1;

        if (!(*(&((x87_r7_1 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp2_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp2_1 ? 1 : 0) << 0xe) + 1) & 1))
        {
            long double x87_r7_5 = *(a1 + 0x140);
            long double temp4_1 = *(a1 + 0x13c);
            x87_r7_5 - temp4_1;

            if (!(*(&((x87_r7_5 < temp4_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_5, temp4_1) ? 1 : 0) << 0xa
                | (x87_r7_5 == temp4_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            {
                long double x87_r7_8 = *(a1 + 0x140) - *(*(a1 + 0x138) + 0x24) * 0.0333333351f;
                *(a1 + 0x140) = x87_r7_8;
                long double temp6_1 = *(a1 + 0x13c);
                x87_r7_8 - temp6_1;

                if (*(&((x87_r7_8 < temp6_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_8, temp6_1) ? 1 : 0) << 0xa
                    | (x87_r7_8 == temp6_1 ? 1 : 0) << 0xe) + 1) & 1)
                {
                    i = *(a1 + 0x13c);
                    *(a1 + 0x140) = i;
                }
            }
        }
        else
        {
            i = *(a1 + 0x138);
            long double x87_r7_4 = i[9] * 0.0333333351f + *(a1 + 0x140);
            *(a1 + 0x140) = x87_r7_4;
            long double temp5_1 = *(a1 + 0x13c);
            x87_r7_4 - temp5_1;

            if (!(*(&((x87_r7_4 < temp5_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_4, temp5_1) ? 1 : 0) << 0xa
                    | (x87_r7_4 == temp5_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                *(a1 + 0x140) = *(a1 + 0x13c);
        }
    }

    long double x87_r7_11 = *(a1 + 0x140) * 0.0333333351f + *(a1 + 0x144);
    *(a1 + 0x144) = x87_r7_11;
    long double temp1 = 360f;
    x87_r7_11 - temp1;

    if (!(*(&((x87_r7_11 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_11, temp1) ? 1 : 0) << 0xa
        | (x87_r7_11 == temp1 ? 1 : 0) << 0xe) + 1) & 1))
    {
        long double x87_r7_13;
        long double temp3_1;

        do
        {
            x87_r7_13 = *(a1 + 0x144) - 360f;
            *(a1 + 0x144) = x87_r7_13;
            temp3_1 = 360f;
            x87_r7_13 - temp3_1;
        } while (!(*(&((x87_r7_13 < temp3_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_13, temp3_1) ? 1 : 0) << 0xa | (x87_r7_13 == temp3_1 ? 1 : 0) << 0xe)
            + 1) & 1));
    }

    int32_t* i_1 = i;
    float var_50;
    sub_4b3be0(&var_50, *(a1 + 0x144) * 0.0174532924f);
    float var_44;
    float var_38;
    float var_28 = var_44 * *(a1 + 0x14c) + var_38 * *(a1 + 0x150) + var_50 * *(a1 + 0x148);
    float var_4c;
    float var_40;
    float var_34;
    float var_24 = var_40 * *(a1 + 0x14c) + var_34 * *(a1 + 0x150) + var_4c * *(a1 + 0x148);
    float var_48;
    float var_3c;
    float var_30;
    float var_20 = var_3c * *(a1 + 0x14c) + var_30 * *(a1 + 0x150) + var_48 * *(a1 + 0x148);
    float var_1c = var_38 * *(a1 + 0x15c) + var_50 * *(a1 + 0x154) + var_44 * *(a1 + 0x158);
    float var_18 = var_34 * *(a1 + 0x15c) + var_4c * *(a1 + 0x154) + var_40 * *(a1 + 0x158);
    float var_14 = var_30 * *(a1 + 0x15c) + var_48 * *(a1 + 0x154) + var_3c * *(a1 + 0x158);
    float var_10 = var_44 * *(a1 + 0x164) + var_38 * *(a1 + 0x168) + var_50 * *(a1 + 0x160);
    void* result = *(a1 + 0x178);
    int32_t var_2c;
    int32_t var_4 = *(a1 + 0x16c) + var_2c + 1;
    float var_c = var_40 * *(a1 + 0x164) + var_34 * *(a1 + 0x168) + var_4c * *(a1 + 0x160);
    float var_8 = var_3c * *(a1 + 0x164) + var_30 * *(a1 + 0x168) + var_48 * *(a1 + 0x160);
    memcpy(a1 + 0x70, &var_28, 0x28);

    if (result)
    {
        *(result + 4) = *(a1 + 0x140) / *(*(a1 + 0x138) + 0x20);
        void* ebx_1 = *(a1 + 0x178);
        long double x87_r7_54 = *(ebx_1 + 4);
        long double temp8_1 = 0f;
        x87_r7_54 - temp8_1;
        result = (x87_r7_54 < temp8_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_54, temp8_1) ? 1 : 0) << 0xa
            | (x87_r7_54 == temp8_1 ? 1 : 0) << 0xe;

        if (*(&result + 1) & 1)
        {
            *(ebx_1 + 4) = 0;
            return result;
        }

        long double x87_r7_55 = *(ebx_1 + 4);
        long double temp9_1 = 1f;
        x87_r7_55 - temp9_1;
        result = (x87_r7_55 < temp9_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_55, temp9_1) ? 1 : 0) << 0xa
            | (x87_r7_55 == temp9_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x41))
            *(ebx_1 + 4) = 0x3f800000;
    }

    return result;
}
