#include "004389E0-PlaceExplosiveTBA_LoadParameters.h"
/* 0x004389e0 PlaceExplosiveTBA_LoadParameters full linked: callers=0 callees=15 */
int32_t PlaceExplosiveTBA_LoadParameters(long double a1 @ st0, long double a2 @ st1, long double a3 @ st2, long double a4 @ st3, float a5, void* a6)

{
    float ebp = a5;
    int32_t result;
    result = *(ebp + 0x240);

    if (result)
    {
        int32_t var_5c_1 = 1;
        double* var_60 = ebp;
        double var_30;
        WeaponType_UpdateAnim(&var_30, var_60, var_5c_1);
        double var_48;
        double* var_68_1 = &var_48;
        var_30 = var_30 + *(ebp + 0x20);
        double var_28;
        double var_28_1 = var_28 + *(ebp + 0x28);
        double var_20;
        double var_20_1 = var_20 + *(ebp + 0x30);
        var_48 = var_30 - *(a6 + 8);
        double var_40_1 = var_28_1 - *(a6 + 0x10);
        double var_38_1 = var_20_1 - *(a6 + 0x18);
        long double st0_1;
        st0_1 = sub_4b3130(var_68_1);
        long double x87_r6_2 = *(ebp + 0x2a8) * 4096f;
        st0_1 - x87_r6_2;
        result = (st0_1 < x87_r6_2 ? 1 : 0) << 8 | (FCMP_UO(st0_1, x87_r6_2) ? 1 : 0) << 0xa
            | (st0_1 == x87_r6_2 ? 1 : 0) << 0xe;

        if (*(&result + 1) & 1)
        {
            result = *(a6 + 0x80);

            if (!result)
            {
                double var_18 =
                    *(a6 + 0x38) * var_38_1 + *(a6 + 0x2c) * var_40_1 + *(a6 + 0x20) * var_48;
                long double x87_r7_22 =
                    *(a6 + 0x3c) * var_38_1 + *(a6 + 0x30) * var_40_1 + *(a6 + 0x24) * var_48;
                double var_10_1 = x87_r7_22;
                double var_8_1 =
                    *(a6 + 0x40) * var_38_1 + *(a6 + 0x34) * var_40_1 + *(a6 + 0x28) * var_48;
                memcpy(&var_48, &var_18, 0x18);
                long double temp1_1 = 0.0;
                x87_r7_22 - temp1_1;
                result = (x87_r7_22 < temp1_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_22, temp1_1) ? 1 : 0) << 0xa
                    | (x87_r7_22 == temp1_1 ? 1 : 0) << 0xe;

                if (!(*(&result + 1) & 0x41))
                {
                    void var_70;
                    memcpy(&var_70, &var_18, 0x18);
                    WeaponType_InitType();
                    long double temp2_1 = 0f;
                    a1 - temp2_1;

                    if (!(*(&((a1 < temp2_1 ? 1 : 0) << 8
                        | (FCMP_UO(a1, temp2_1) ? 1 : 0) << 0xa
                        | (a1 == temp2_1 ? 1 : 0) << 0xe | 0x800) + 1) & 1))
                    {
                        memcpy(&var_70, &var_48, 0x18);
                        WeaponType_InitType();
                    }
                    else
                    {
                        memcpy(&var_70, &var_48, 0x18);
                        WeaponType_InitType();
                        a2 = -(a2);
                    }

                    a5 = a2;
                    memcpy(&var_70, &var_48, 0x18);
                    WeaponType_GetConfig();
                    long double temp3_1 = 0f;
                    a3 - temp3_1;

                    if (!(*(&((a3 < temp3_1 ? 1 : 0) << 8
                        | (FCMP_UO(a3, temp3_1) ? 1 : 0) << 0xa
                        | (a3 == temp3_1 ? 1 : 0) << 0xe | 0x1800) + 1) & 1))
                    {
                        memcpy(&var_70, &var_48, 0x18);
                        result = WeaponType_GetConfig();
                    }
                    else
                    {
                        memcpy(&var_70, &var_48, 0x18);
                        result = WeaponType_GetConfig();
                        a4 = -(a4);
                    }

                    long double x87_r2 = a5;
                    long double temp4_1 = *(a6 + 0x70);
                    x87_r2 - temp4_1;
                    result = (x87_r2 < temp4_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r2, temp4_1) ? 1 : 0) << 0xa
                        | (x87_r2 == temp4_1 ? 1 : 0) << 0xe | 0x1800;

                    if (*(&result + 1) & 1)
                    {
                        long double temp5_1 = *(a6 + 0x74);
                        a4 - temp5_1;
                        result = (a4 < temp5_1 ? 1 : 0) << 8
                            | (FCMP_UO(a4, temp5_1) ? 1 : 0) << 0xa
                            | (a4 == temp5_1 ? 1 : 0) << 0xe | 0x1800;

                        if (*(&result + 1) & 1)
                        {
                            *(a6 + 0x80) = ebp;
                            *(a6 + 0x74) = a4;
                            *(a6 + 0x70) = a5;
                        }
                    }
                }
            }
        }
    }

    return result;
}
