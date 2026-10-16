#include "00446B50-Door_Update.h"
/* 0x00446b50 Door_Update full linked: callers=0 callees=6 */
int32_t sub_446b50(double* a1, void* a2)

{
    int16_t result;

    if (!sub_447d40(a1))
    {
    label_446b90:
        double var_48;
        WeaponType_UpdateAnim(&var_48, a1, 0);
        long double x87_r7_2 = var_48 + a1[4];
        var_48 = x87_r7_2;
        double var_40;
        double var_40_1 = var_40 + a1[5];
        double var_38;
        double var_38_1 = var_38 + a1[6];
        long double x87_r7_3 = *(a2 + 8) - x87_r7_2;
        long double x87_r6_6 = *(a2 + 0x10) - var_40_1;
        long double x87_r5_2 = *(a2 + 0x18) - var_38_1;
        double var_30_1 = *(a1 + 0x7c) * x87_r6_6 + a1[0x11] * x87_r5_2 + a1[0xe] * x87_r7_3;
        long double x87_r3_8 = a1[0xf] * x87_r7_3;
        long double x87_r4_8 = *(a1 + 0x84) * x87_r6_6 + a1[0x12] * x87_r5_2 + x87_r3_8;
        double var_20_1 = x87_r4_8;
        long double x87_r7_5 = var_30_1;
        long double temp0_1 = -4096.0;
        x87_r7_5 - temp0_1;
        result = (x87_r7_5 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, temp0_1) ? 1 : 0) << 0xa
            | (x87_r7_5 == temp0_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x41))
        {
            long double x87_r7_6 = var_30_1;
            long double temp1_1 = 1843.2;
            x87_r7_6 - temp1_1;
            result = (x87_r7_6 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_6 == temp1_1 ? 1 : 0) << 0xe;

            if (*(&result + 1) & 1)
            {
                long double x87_r7_7 = var_20_1;
                long double temp2_1 = -4096.0;
                x87_r7_7 - temp2_1;
                result = (x87_r7_7 < temp2_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_7, temp2_1) ? 1 : 0) << 0xa
                    | (x87_r7_7 == temp2_1 ? 1 : 0) << 0xe;

                if (!(*(&result + 1) & 0x41))
                {
                    long double x87_r7_8 = var_20_1;
                    long double temp3_1 = 4096.0;
                    x87_r7_8 - temp3_1;
                    result = (x87_r7_8 < temp3_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_8, temp3_1) ? 1 : 0) << 0xa
                        | (x87_r7_8 == temp3_1 ? 1 : 0) << 0xe;

                    if (*(&result + 1) & 1)
                    {
                        long double x87_r0;
                        long double x87_r1;
                        long double x87_r2;
                        Level_InitSprites_5(x87_r0, x87_r1, x87_r2, x87_r3_8, a2, a1, &var_48);
                        double var_10_1 = *(a1 + 0x84) * var_20_1 + *(a1 + 0x7c) * var_30_1;
                        double var_8_1 = a1[0x12] * var_20_1 + a1[0x11] * var_30_1;
                        var_48 = a1[0xf] * var_20_1 + a1[0xe] * var_30_1 + var_48;
                        double var_40_2 = var_10_1 + var_40_1;
                        double var_38_2 = var_8_1 + var_38_1;
                        return Level_InitSprites_5(x87_r4_8, x87_r5_2, x87_r6_6, x87_r7_8, a2,
                            a1, &var_48);
                    }
                }
            }
        }
    }
    else
    {
        result = sub_447d40(a1);

        if (result)
        {
            result = sub_447d50(a1);

            if (result)
                goto label_446b90;
        }
    }

    return result;
}
