#include "00474E30-StationaryGun_Process.h"
/* 0x00474e30 StationaryGun_Process full linked: callers=0 callees=2 */
int32_t sub_474e30(double* a1, void* a2)

{
    int16_t result;
    result = *(a1 + 0x21c);

    if (!result)
    {
        double var_18;
        WeaponType_UpdateAnim(&var_18, a1, 0);
        long double x87_r7_2 = var_18 + a1[4];
        var_18 = x87_r7_2;
        double var_10;
        double var_8;
        long double x87_r4_3 = *(a1 + 0x8c) * (*(a2 + 0x18) - (var_8 + a1[6]))
            + a1[0x10] * (*(a2 + 0x10) - (var_10 + a1[5]));
        long double x87_r3_4 = *(a1 + 0x74) * (*(a2 + 8) - x87_r7_2);
        long double x87_r4_4 = x87_r4_3 + x87_r3_4;
        long double temp0_1 = 0.0;
        x87_r4_4 - temp0_1;
        result = (x87_r4_4 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r4_4, temp0_1) ? 1 : 0) << 0xa
            | (x87_r4_4 == temp0_1 ? 1 : 0) << 0xe;
        long double x87_r0;
        long double x87_r1;
        long double x87_r2;

        if (!(*(&result + 1) & 1))
            return Level_InitSprites_5(x87_r0, x87_r1, x87_r2, x87_r3_4, a2, a1, &var_18);
    }

    return result;
}
