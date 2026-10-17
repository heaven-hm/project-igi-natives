// Original IGI.EXE function: StationaryGun_Process (VA 0x00474E30; static CFG gate PASS, CFG score 1.000).
#include "StationaryGun_Process.h"
int32_t StationaryGun_Process(double* context, void* param_2)

{
    int16_t result;
    result = *(context + 0x21c);

    if (!result)
    {
        double item_18;
        WeaponType_UpdateAnim(&item_18, context, 0);
        long double fpu_val_7_2 = item_18 + context[4];
        item_18 = fpu_val_7_2;
        double item_10;
        double item_8;
        long double fpu_val_4_3 = *(context + 0x8c) * (*(param_2 + 0x18) - (item_8 + context[6]))
            + context[0x10] * (*(param_2 + 0x10) - (item_10 + context[5]));
        long double fpu_val_3_4 = *(context + 0x74) * (*(param_2 + 8) - fpu_val_7_2);
        long double fpu_val_4_4 = fpu_val_4_3 + fpu_val_3_4;
        long double f0_1 = 0.0;
        fpu_val_4_4 - f0_1;
        result = (fpu_val_4_4 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_4_4, f0_1) ? 1 : 0) << 0xa
            | (fpu_val_4_4 == f0_1 ? 1 : 0) << 0xe;
        long double fpu0;
        long double fpu1;
        long double fpu2;

        if (!(*(&result + 1) & 1))
            return Level_InitSprites_5(fpu0, fpu1, fpu2, fpu_val_3_4, param_2, context, &item_18);
    }

    return result;
}
