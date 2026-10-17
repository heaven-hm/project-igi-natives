// Original IGI.EXE function: GenericTBA_OnEvent (VA 0x00443C80; static CFG gate PASS, CFG score 1.000).
#include "GenericTBA_OnEvent.h"
int32_t GenericTBA_OnEvent(double* a1, void* a2)

{
    int16_t result;
    result = a1[0x48];

    if (result)
    {
        double v_30;
        WeaponType_UpdateAnim(&v_30, a1, 1);
        long double x87_r7_2 = v_30 + a1[4];
        v_30 = x87_r7_2;
        double v_18_1 = *(a2 + 8) - x87_r7_2;
        double v_28;
        double v_10_1 = *(a2 + 0x10) - (v_28 + a1[5]);
        double v_20;
        double v_8_1 = *(a2 + 0x18) - (v_20 + a1[6]);
        long double x87_r7_11 =
            a1[0x11] * v_8_1 + *(a1 + 0x7c) * v_10_1 + a1[0xe] * v_18_1;
        long double x87_r6_14 =
            *(a1 + 0x8c) * v_8_1 + a1[0x10] * v_10_1 + *(a1 + 0x74) * v_18_1;
        long double f0_1 = 0.0;
        x87_r6_14 - f0_1;
        result = (x87_r6_14 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_14, f0_1) ? 1 : 0) << 0xa
            | (x87_r6_14 == f0_1 ? 1 : 0) << 0xe | 0x3800;

        if (!(*(&result + 1) & 0x41))
        {
            long double f1_1 = 0.0;
            x87_r7_11 - f1_1;

            if (*(&((x87_r7_11 < f1_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_11, f1_1) ? 1 : 0) << 0xa
                    | (x87_r7_11 == f1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                x87_r7_11 = -(x87_r7_11);

            long double f2_1 = 3072.0;
            x87_r7_11 - f2_1;
            result = (x87_r7_11 < f2_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_11, f2_1) ? 1 : 0) << 0xa
                | (x87_r7_11 == f2_1 ? 1 : 0) << 0xe;
            long double fpu0;
            long double fpu1;
            long double fpu2;
            long double fpu3;

            if (*(&result + 1) & 1)
                return Level_InitSprites_5(fpu0, fpu1, fpu2, fpu3, a2, a1, &v_30);
        }
    }

    return result;
}
