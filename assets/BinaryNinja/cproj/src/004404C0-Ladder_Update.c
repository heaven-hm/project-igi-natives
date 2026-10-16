#include "gi_platform.h"
#include "004404C0-Ladder_Update.h"
int32_t Ladder_Update(double* a1, int32_t* a2)

{
    long double x87_r7_1 = (*(int32_t*)(uintptr_t)(a2 + 8)) - a1[4];
    long double x87_r6_1 = (*(int32_t*)(uintptr_t)(a2 + 0x10)) - a1[5];
    long double x87_r5_1 = (*(int32_t*)(uintptr_t)(a2 + 0x18)) - a1[6];
    void* ctxB = *a2;
    double v_38 = a1[0x11] * x87_r5_1 + (*(int32_t*)(uintptr_t)(a1 + 0x7c)) * x87_r6_1 + a1[0xe] * x87_r7_1;
    long double x87_r7_2 =
        (*(int32_t*)(uintptr_t)(a1 + 0x8c)) * x87_r5_1 + (*(int32_t*)(uintptr_t)(a1 + 0x74)) * x87_r7_1 + a1[0x10] * x87_r6_1;
    long double f0 = 0.0;
    x87_r7_2 - f0;
    long double x87_r6_3 = x87_r7_2;

    if (*(&((x87_r7_2 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, f0) ? 1 : 0) << 0xa
            | (x87_r7_2 == f0 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
        x87_r6_3 = -(x87_r6_3);

    long double f1 = (*(int32_t*)(uintptr_t)(a2 + 0x78));
    x87_r6_3 - f1;

    if (*(&((x87_r6_3 < f1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_3, f1) ? 1 : 0) << 0xa
        | (x87_r6_3 == f1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
    {
        long double x87_r6_4 = v_38;
        long double f2_1 = -2867.1999999999998;
        x87_r6_4 - f2_1;

        if (!(*(&((x87_r6_4 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_4, f2_1) ? 1 : 0) << 0xa
            | (x87_r6_4 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
        {
            long double x87_r6_5 = v_38;
            long double f4_1 = 2867.1999999999998;
            x87_r6_5 - f4_1;

            if (*(&((x87_r6_5 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_5, f4_1) ? 1 : 0) << 0xa
                | (x87_r6_5 == f4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
            {
                int32_t objC1 = a2[0xc];
                long double f5_1 = 0.0;
                x87_r7_2 - f5_1;
                int32_t tmpD1 = a2[0xf];
                int32_t v_44 = a2[9];
                int32_t v_40_1 = objC1;
                float objC2 = a1[0x10];
                float v_50 = (*(int32_t*)(uintptr_t)(a1 + 0x74));
                int32_t v_3c_1 = tmpD1;
                float tmpD2 = (*(int32_t*)(uintptr_t)(a1 + 0x8c));

                if (!(*(&((x87_r7_2 < f5_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_2, f5_1) ? 1 : 0) << 0xa
                    | (x87_r7_2 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                {
                    v_50 = -(v_50);
                    float v_4c_2 = -(objC2);
                    float v_48_2 = -(tmpD2);
                }

                float v_54_1 = Sys_PushStack_10(&v_44, &v_50);
                double v_20[0x2];
                WeaponType_UpdateAnim(&v_20, a1, 1);
                double v_10;
                x87_r7_2 = v_10 + a1[6];
                long double x87_r6_6 = v_54_1;
                long double f6_1 = 0.785398185.0f;
                x87_r6_6 - f6_1;

                if (*(&((x87_r6_6 < f6_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_6, f6_1) ? 1 : 0) << 0xa
                    | (x87_r6_6 == f6_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                {
                    long double f7_1 = (*(int32_t*)(uintptr_t)(a2 + 0x18));
                    x87_r7_2 - f7_1;

                    if (!(*(&((x87_r7_2 < f7_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_2, f7_1) ? 1 : 0) << 0xa
                        | (x87_r7_2 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    {
                        long double x87_r7_11 = (*(int32_t*)(uintptr_t)(a2 + 0x18));
                        long double f8_1 = a1[6];
                        x87_r7_11 - f8_1;

                        if (!(*(&((x87_r7_11 < f8_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_11, f8_1) ? 1 : 0) << 0xa
                            | (x87_r7_11 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                        {
                            a2[0x20] = a1;
                            a2[0x1c] = 0;
                            a2[0x1d] = 0;
                            (*(int32_t*)(uintptr_t)(ctxB + 0xd7b)) = 0;
                        }
                    }
                }
            }
        }
    }

    WeaponType_UpdateAnim(&v_38, a1, 1);
    long double x87_r7_14 = v_38 + a1[4];
    v_38 = x87_r7_14;
    double v_28;
    long double x87_r4_10 = (*(int32_t*)(uintptr_t)(a1 + 0x8c)) * ((*(int32_t*)(uintptr_t)(a2 + 0x18)) - (v_28 + a1[6]))
        + (*(int32_t*)(uintptr_t)(a1 + 0x74)) * ((*(int32_t*)(uintptr_t)(a2 + 8)) - x87_r7_14);
    double v_30;
    long double x87_r3_11 = a1[0x10] * ((*(int32_t*)(uintptr_t)(a2 + 0x10)) - (v_30 + a1[5]));
    long double x87_r4_11 = x87_r4_10 + x87_r3_11;
    long double f3 = 0.0;
    x87_r4_11 - f3;
    int16_t result = (x87_r4_11 < f3 ? 1 : 0) << 8 | (FCMP_UO(x87_r4_11, f3) ? 1 : 0) << 0xa
        | (x87_r4_11 == f3 ? 1 : 0) << 0xe;

    if (*(&result + 1) & 1)
    {
        long double fpu0;
        long double fpu1;
        long double fpu2;
        result = Level_InitSprites_5(fpu0, fpu1, fpu2, x87_r3_11, a2, a1, &v_38);

        if (result)
            (*(int32_t*)(uintptr_t)(ctxB + 0xd7b)) = 1;
    }

    return result;
}
