#include "00445730-Switch_OnEvent.h"
/* 0x00445730 Switch_OnEvent full linked: callers=0 callees=2 */
int32_t sub_445730(double* a1, void* a2)

{
    int16_t result;
    result = *(a1 + 0x1c2);

    if (!result)
    {
        double var_30;
        WeaponType_UpdateAnim(&var_30, a1, 0);
        long double x87_r7_2 = var_30 + a1[4];
        var_30 = x87_r7_2;
        double var_18_1 = *(a2 + 8) - x87_r7_2;
        double var_28;
        double var_10_1 = *(a2 + 0x10) - (var_28 + a1[5]);
        double var_20;
        double var_8_1 = *(a2 + 0x18) - (var_20 + a1[6]);
        long double x87_r7_11 =
            a1[0x11] * var_8_1 + *(a1 + 0x7c) * var_10_1 + a1[0xe] * var_18_1;
        long double x87_r6_14 =
            *(a1 + 0x8c) * var_8_1 + a1[0x10] * var_10_1 + *(a1 + 0x74) * var_18_1;
        long double temp0_1 = 0.0;
        x87_r6_14 - temp0_1;
        result = (x87_r6_14 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_14, temp0_1) ? 1 : 0) << 0xa
            | (x87_r6_14 == temp0_1 ? 1 : 0) << 0xe | 0x3800;

        if (!(*(&result + 1) & 0x41))
        {
            long double temp1_1 = 0.0;
            x87_r7_11 - temp1_1;

            if (*(&((x87_r7_11 < temp1_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_11, temp1_1) ? 1 : 0) << 0xa
                    | (x87_r7_11 == temp1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                x87_r7_11 = -(x87_r7_11);

            long double temp2_1 = 3072.0;
            x87_r7_11 - temp2_1;
            result = (x87_r7_11 < temp2_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_11, temp2_1) ? 1 : 0) << 0xa
                | (x87_r7_11 == temp2_1 ? 1 : 0) << 0xe;
            long double x87_r0;
            long double x87_r1;
            long double x87_r2;
            long double x87_r3;

            if (*(&result + 1) & 1)
                return Level_InitSprites_5(x87_r0, x87_r1, x87_r2, x87_r3, a2, a1, &var_30);
        }
    }

    return result;
}
