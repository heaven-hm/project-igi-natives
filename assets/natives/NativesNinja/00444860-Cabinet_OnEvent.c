#include "00444860-Cabinet_OnEvent.h"
/* 0x00444860 Cabinet_OnEvent full linked: callers=0 callees=2 */
int32_t sub_444860(double* a1, void* a2)

{
    double var_30;
    WeaponType_UpdateAnim(&var_30, a1, 0);
    long double x87_r7_1 = var_30 + a1[4];
    var_30 = x87_r7_1;
    double var_18 = *(a2 + 8) - x87_r7_1;
    double var_28;
    double var_10 = *(a2 + 0x10) - (var_28 + a1[5]);
    double var_20;
    double var_8 = *(a2 + 0x18) - (var_20 + a1[6]);
    long double x87_r7_10 = a1[0x11] * var_8 + *(a1 + 0x7c) * var_10 + a1[0xe] * var_18;
    long double x87_r6_13 = *(a1 + 0x8c) * var_8 + a1[0x10] * var_10 + *(a1 + 0x74) * var_18;
    long double temp0 = 0.0;
    x87_r6_13 - temp0;
    int16_t result = (x87_r6_13 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_13, temp0) ? 1 : 0) << 0xa
        | (x87_r6_13 == temp0 ? 1 : 0) << 0xe | 0x3800;

    if (!(*(&result + 1) & 0x41))
    {
        long double temp1_1 = 0.0;
        x87_r7_10 - temp1_1;

        if (*(&((x87_r7_10 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_10, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_10 == temp1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
            x87_r7_10 = -(x87_r7_10);

        long double temp2_1 = 3072.0;
        x87_r7_10 - temp2_1;
        result = (x87_r7_10 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_10, temp2_1) ? 1 : 0) << 0xa
            | (x87_r7_10 == temp2_1 ? 1 : 0) << 0xe;
        long double x87_r0;
        long double x87_r1;
        long double x87_r2;
        long double x87_r3;

        if (*(&result + 1) & 1)
            return Level_InitSprites_5(x87_r0, x87_r1, x87_r2, x87_r3, a2, a1, &var_30);
    }

    return result;
}
