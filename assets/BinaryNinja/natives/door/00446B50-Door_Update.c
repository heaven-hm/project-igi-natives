// Original IGI.EXE function: Door_Update (VA 0x00446B50; static CFG gate PASS, CFG score 1.000).
#include "Door_Update.h"
int32_t Door_Update(double* a1, void* a2)

{
    int16_t result;

    if (!Env_InitLadder_9(a1))
    {
    label_446b90:
        double v_48;
        WeaponType_UpdateAnim(&v_48, a1, 0);
        long double x87_r7_2 = v_48 + a1[4];
        v_48 = x87_r7_2;
        double v_40;
        double v_40_1 = v_40 + a1[5];
        double v_38;
        double v_38_1 = v_38 + a1[6];
        long double x87_r7_3 = *(a2 + 8) - x87_r7_2;
        long double x87_r6_6 = *(a2 + 0x10) - v_40_1;
        long double x87_r5_2 = *(a2 + 0x18) - v_38_1;
        double v_30_1 = *(a1 + 0x7c) * x87_r6_6 + a1[0x11] * x87_r5_2 + a1[0xe] * x87_r7_3;
        long double x87_r3_8 = a1[0xf] * x87_r7_3;
        long double x87_r4_8 = *(a1 + 0x84) * x87_r6_6 + a1[0x12] * x87_r5_2 + x87_r3_8;
        double v_20_1 = x87_r4_8;
        long double x87_r7_5 = v_30_1;
        long double f0_1 = -4096.0;
        x87_r7_5 - f0_1;
        result = (x87_r7_5 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, f0_1) ? 1 : 0) << 0xa
            | (x87_r7_5 == f0_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x41))
        {
            long double x87_r7_6 = v_30_1;
            long double f1_1 = 1843.2;
            x87_r7_6 - f1_1;
            result = (x87_r7_6 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, f1_1) ? 1 : 0) << 0xa
                | (x87_r7_6 == f1_1 ? 1 : 0) << 0xe;

            if (*(&result + 1) & 1)
            {
                long double x87_r7_7 = v_20_1;
                long double f2_1 = -4096.0;
                x87_r7_7 - f2_1;
                result = (x87_r7_7 < f2_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_7, f2_1) ? 1 : 0) << 0xa
                    | (x87_r7_7 == f2_1 ? 1 : 0) << 0xe;

                if (!(*(&result + 1) & 0x41))
                {
                    long double x87_r7_8 = v_20_1;
                    long double f3_1 = 4096.0;
                    x87_r7_8 - f3_1;
                    result = (x87_r7_8 < f3_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_8, f3_1) ? 1 : 0) << 0xa
                        | (x87_r7_8 == f3_1 ? 1 : 0) << 0xe;

                    if (*(&result + 1) & 1)
                    {
                        long double fpu0;
                        long double fpu1;
                        long double fpu2;
                        Level_InitSprites_5(fpu0, fpu1, fpu2, x87_r3_8, a2, a1, &v_48);
                        double v_10_1 = *(a1 + 0x84) * v_20_1 + *(a1 + 0x7c) * v_30_1;
                        double v_8_1 = a1[0x12] * v_20_1 + a1[0x11] * v_30_1;
                        v_48 = a1[0xf] * v_20_1 + a1[0xe] * v_30_1 + v_48;
                        double v_40_2 = v_10_1 + v_40_1;
                        double v_38_2 = v_8_1 + v_38_1;
                        return Level_InitSprites_5(x87_r4_8, x87_r5_2, x87_r6_6, x87_r7_8, a2,
                            a1, &v_48);
                    }
                }
            }
        }
    }
    else
    {
        result = Env_InitLadder_9(a1);

        if (result)
        {
            result = Env_TriggerAlarm_9(a1);

            if (result)
                goto label_446b90;
        }
    }

    return result;
}
