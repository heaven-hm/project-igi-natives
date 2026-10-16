#include "0047B290-Weapon_CheckAmmo_6.h"
/* 0x0047b290 Weapon_CheckAmmo_6 full linked: callers=1 callees=3 */
int32_t sub_47b290(double* a1, int32_t a2, void* a3, double* a4)

{
    int32_t result = 0;
    int32_t result_1 = 0;
    int32_t var_80 = 0;

    if (*(a3 + 0x94) > 0)
    {
        int32_t* esi_1 = a3 + 0xa4;
        int32_t* var_7c_1 = esi_1;

        while (result < a2)
        {
            int32_t* eax = *esi_1;

            if (*eax)
            {
                long double x87_r7_2 = eax[8] * eax[0xd];
                long double x87_r6_2 = eax[9] * eax[0xd];
                float var_54_2 = eax[0xa] * eax[0xd];
                double var_50 = x87_r7_2;
                double var_48_1 = x87_r6_2;
                double var_40_1 = var_54_2;
                long double x87_r7_3 = x87_r7_2 * 0.5f;
                long double x87_r6_5 = x87_r6_2 * 0.5f;
                long double x87_r5_5 = var_54_2 * 0.5f;
                double var_20 = x87_r7_3 + *(eax + 8);
                double var_18_1 = x87_r6_5 + *(eax + 0x10);
                double var_10_1 = x87_r5_5 + *(eax + 0x18);
                double var_68_1 = x87_r5_5;
                double var_70_1 = x87_r6_5;
                double var_78_1 = x87_r7_3;
                long double st0_1 = sub_4b32f0(a4, &var_20);
                long double x87_r6_9 =
                    var_78_1 * var_78_1 + var_70_1 * var_70_1 + var_68_1 * var_68_1;
                var_78_1 = x87_r6_9;
                long double x87_r6_10 = x87_r6_9 + 268435456.0;
                x87_r6_10 - st0_1;

                if (!(*(&((x87_r6_10 < st0_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_10, st0_1) ? 1 : 0) << 0xa
                    | (x87_r6_10 == st0_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                {
                    long double x87_r7_5 = var_40_1;
                    long double x87_r6_11 = a4[2];
                    double var_38;
                    memcpy(&var_38, *esi_1 + 8, 0x18);
                    double var_30;
                    double var_28;
                    long double x87_r6_16 = ((x87_r6_11 - var_28) * x87_r7_5
                        + (a4[1] - var_30) * var_48_1 + (*a4 - var_38) * var_50)
                        / (x87_r7_5 * x87_r7_5 + var_48_1 * var_48_1 + var_50 * var_50);
                    long double temp0_1 = 0.0;
                    x87_r6_16 - temp0_1;
                    long double temp2_1;

                    if (*(&((x87_r6_16 < temp0_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_16, temp0_1) ? 1 : 0) << 0xa
                        | (x87_r6_16 == temp0_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
                    {
                        temp2_1 = 1.0;
                        x87_r6_16 - temp2_1;
                    }

                    if (!(*(&((x87_r6_16 < temp0_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_16, temp0_1) ? 1 : 0) << 0xa
                        | (x87_r6_16 == temp0_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1) || *(&(
                        (x87_r6_16 < temp2_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_16, temp2_1) ? 1 : 0) << 0xa
                        | (x87_r6_16 == temp2_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41)
                    {
                        var_50 = x87_r6_16 * var_50;
                        double var_48_2 = x87_r6_16 * var_48_1;
                        *a1 = var_38 + var_50;
                        a1[1] = var_30 + var_48_2;
                        a1[2] = var_28 + x87_r7_5 * x87_r6_16;
                        long double st0_2 = sub_4b32b0(a1, a4);
                        long double temp1_1 = 16384.0;
                        st0_2 - temp1_1;

                        if (*(&((st0_2 < temp1_1 ? 1 : 0) << 8
                            | (FCMP_UO(st0_2, temp1_1) ? 1 : 0) << 0xa
                            | (st0_2 == temp1_1 ? 1 : 0) << 0xe) + 1) & 1)
                        {
                            a1 = &a1[3];
                            result_1 += 1;
                        }
                    }
                }
            }

            int32_t eax_8 = var_80 + 1;
            esi_1 = &var_7c_1[1];
            var_80 = eax_8;
            result = result_1;
            var_7c_1 = esi_1;

            if (eax_8 >= *(a3 + 0x94))
                break;
        }
    }

    return result;
}
