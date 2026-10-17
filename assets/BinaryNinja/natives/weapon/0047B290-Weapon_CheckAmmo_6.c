// Original IGI.EXE function: Weapon_CheckAmmo_6 (VA 0x0047B290; static CFG gate PASS, CFG score 0.889).
#include "Weapon_CheckAmmo_6.h"
int32_t Weapon_CheckAmmo_6(double* a1, int32_t a2, void* a3, double* a4)

{
    int32_t result = 0;
    int32_t result_1 = 0;
    int32_t v_80 = 0;

    if (*(a3 + 0x94) > 0)
    {
        int32_t* srcS1 = a3 + 0xa4;
        int32_t* v_7c_1 = srcS1;

        while (result < a2)
        {
            int32_t* valA = *srcS1;

            if (*valA)
            {
                long double x87_r7_2 = valA[8] * valA[0xd];
                long double x87_r6_2 = valA[9] * valA[0xd];
                float v_54_2 = valA[0xa] * valA[0xd];
                double v_50 = x87_r7_2;
                double v_48_1 = x87_r6_2;
                double v_40_1 = v_54_2;
                long double x87_r7_3 = x87_r7_2 * 0.5f;
                long double x87_r6_5 = x87_r6_2 * 0.5f;
                long double x87_r5_5 = v_54_2 * 0.5f;
                double v_20 = x87_r7_3 + *(valA + 8);
                double v_18_1 = x87_r6_5 + *(valA + 0x10);
                double v_10_1 = x87_r5_5 + *(valA + 0x18);
                double v_68_1 = x87_r5_5;
                double v_70_1 = x87_r6_5;
                double v_78_1 = x87_r7_3;
                long double fp0_1 = Sys_PushStack_11(a4, &v_20);
                long double x87_r6_9 =
                    v_78_1 * v_78_1 + v_70_1 * v_70_1 + v_68_1 * v_68_1;
                v_78_1 = x87_r6_9;
                long double x87_r6_10 = x87_r6_9 + 268435456.0;
                x87_r6_10 - fp0_1;

                if (!(*(&((x87_r6_10 < fp0_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_10, fp0_1) ? 1 : 0) << 0xa
                    | (x87_r6_10 == fp0_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                {
                    long double x87_r7_5 = v_40_1;
                    long double x87_r6_11 = a4[2];
                    double v_38;
                    memcpy(&v_38, *srcS1 + 8, 0x18);
                    double v_30;
                    double v_28;
                    long double x87_r6_16 = ((x87_r6_11 - v_28) * x87_r7_5
                        + (a4[1] - v_30) * v_48_1 + (*a4 - v_38) * v_50)
                        / (x87_r7_5 * x87_r7_5 + v_48_1 * v_48_1 + v_50 * v_50);
                    long double f0_1 = 0.0;
                    x87_r6_16 - f0_1;
                    long double f2_1;

                    if (*(&((x87_r6_16 < f0_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_16, f0_1) ? 1 : 0) << 0xa
                        | (x87_r6_16 == f0_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
                    {
                        f2_1 = 1.0;
                        x87_r6_16 - f2_1;
                    }

                    if (!(*(&((x87_r6_16 < f0_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_16, f0_1) ? 1 : 0) << 0xa
                        | (x87_r6_16 == f0_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1) || *(&(
                        (x87_r6_16 < f2_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_16, f2_1) ? 1 : 0) << 0xa
                        | (x87_r6_16 == f2_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41)
                    {
                        v_50 = x87_r6_16 * v_50;
                        double v_48_2 = x87_r6_16 * v_48_1;
                        *a1 = v_38 + v_50;
                        a1[1] = v_30 + v_48_2;
                        a1[2] = v_28 + x87_r7_5 * x87_r6_16;
                        long double fp0_2 = Sys_DispatchOpcode_11(a1, a4);
                        long double f1_1 = 16384.0;
                        fp0_2 - f1_1;

                        if (*(&((fp0_2 < f1_1 ? 1 : 0) << 8
                            | (FCMP_UO(fp0_2, f1_1) ? 1 : 0) << 0xa
                            | (fp0_2 == f1_1 ? 1 : 0) << 0xe) + 1) & 1)
                        {
                            a1 = &a1[3];
                            result_1 += 1;
                        }
                    }
                }
            }

            int32_t valA8 = v_80 + 1;
            srcS1 = &v_7c_1[1];
            v_80 = valA8;
            result = result_1;
            v_7c_1 = srcS1;

            if (valA8 >= *(a3 + 0x94))
                break;
        }
    }

    return result;
}
