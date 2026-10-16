#include "gi_platform.h"
#include "00474E30-StationaryGun_Process.h"
int32_t StationaryGun_Process(double* a1, void* a2)

{
    int16_t result;
    result = (*(int32_t*)(uintptr_t)(a1 + 0x21c));

    if (!result)
    {
        double v_18;
        WeaponType_UpdateAnim(&v_18, a1, 0);
        long double x87_r7_2 = v_18 + a1[4];
        v_18 = x87_r7_2;
        double v_10;
        double v_8;
        long double x87_r4_3 = (*(int32_t*)(uintptr_t)(a1 + 0x8c)) * ((*(int32_t*)(uintptr_t)(a2 + 0x18)) - (v_8 + a1[6]))
            + a1[0x10] * ((*(int32_t*)(uintptr_t)(a2 + 0x10)) - (v_10 + a1[5]));
        long double x87_r3_4 = (*(int32_t*)(uintptr_t)(a1 + 0x74)) * ((*(int32_t*)(uintptr_t)(a2 + 8)) - x87_r7_2);
        long double x87_r4_4 = x87_r4_3 + x87_r3_4;
        long double f0_1 = 0.0;
        x87_r4_4 - f0_1;
        result = (x87_r4_4 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r4_4, f0_1) ? 1 : 0) << 0xa
            | (x87_r4_4 == f0_1 ? 1 : 0) << 0xe;
        long double fpu0;
        long double fpu1;
        long double fpu2;

        if (!(*(&result + 1) & 1))
            return Level_InitSprites_5(fpu0, fpu1, fpu2, x87_r3_4, a2, a1, &v_18);
    }

    return result;
}
