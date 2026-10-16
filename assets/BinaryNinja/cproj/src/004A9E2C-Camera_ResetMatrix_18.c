#include "gi_platform.h"
#include "004A9E2C-Camera_ResetMatrix_18.h"
int32_t Camera_ResetMatrix_18(double a1, int32_t a2, int32_t a3, double* a4)

{
    int32_t objC;
    int32_t v_8 = objC;
    int32_t v_c = objC;
    long double fpu7 = a1;
    long double f0 = 0.0;
    fpu7 - f0;
    long double x87_r7_1 = a1;
    int32_t result = 0;

    if (TEST_BITB(
            *(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
                | (fpu7 == f0 ? 1 : 0) << 0xe | 0x3800) + 1),
            0))
        x87_r7_1 = -(x87_r7_1);

    v_c = x87_r7_1;

    if (a3 == 0x7ff00000)
    {
        if (a2)
            goto label_4a9eb7;

        long double x87_r7_2 = v_c;
        long double f1_1 = 1.0;
        x87_r7_2 - f1_1;
        int16_t valA2 = (x87_r7_2 < f1_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_2, f1_1) ? 1 : 0) << 0xa | (x87_r7_2 == f1_1 ? 1 : 0) << 0xe;

        if (!TEST_BITB(*(&valA2 + 1), 6) && !TEST_BITB(*(&valA2 + 1), 0))
            *a4 = g_544368;
        else
        {
            long double x87_r7_3 = v_c;
            long double f3_1 = 1.0;
            x87_r7_3 - f3_1;

            if (TEST_BITB(
                    *(&((x87_r7_3 < f3_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_3, f3_1) ? 1 : 0) << 0xa
                        | (x87_r7_3 == f3_1 ? 1 : 0) << 0xe) + 1),
                    0))
                *a4 = 0;
            else
            {
                result = 1;
                *a4 = g_544370;
            }
        }
    }
    else if (a3 != 0xfff00000 || a2)
    {
    label_4a9eb7: ;
        if ((*(int32_t*)(uintptr_t)(&a1 + 4)) != 0x7ff00000)
        {
            if ((*(int32_t*)(uintptr_t)(&a1 + 4)) == 0xfff00000 && !a1)
            {
                int32_t v_14_1 = 0xfff00000;
                int32_t v_18_1 = 0xfff00000;
                v_18_1 = a2;
                int32_t valA6 = Camera_UpdateTransform_19(0x7ff00000, 0, 0xfff00000, v_18_1);
                long double x87_r7_10 = a2;
                long double f6_1 = 0.0;
                x87_r7_10 - f6_1;
                int16_t valA7 = (x87_r7_10 < f6_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_10, f6_1) ? 1 : 0) << 0xa
                    | (x87_r7_10 == f6_1 ? 1 : 0) << 0xe;

                if (TEST_BITB(*(&valA7 + 1), 6) || TEST_BITB(*(&valA7 + 1), 0))
                {
                    long double x87_r7_13 = a2;
                    long double f8_1 = 0.0;
                    x87_r7_13 - f8_1;

                    if (!TEST_BITB(
                            *(&((x87_r7_13 < f8_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_13, f8_1) ? 1 : 0) << 0xa
                                | (x87_r7_13 == f8_1 ? 1 : 0) << 0xe) + 1),
                            0))
                        *a4 = 1;
                    else
                    {
                        long double x87_r7_14;

                        if (valA6 != 1)
                            x87_r7_14 = 0;
                        else
                            x87_r7_14 = g_544388;

                        a2 = x87_r7_14;
                        *a4 = a2;
                    }
                }
                else
                {
                    long double x87_r7_11 = g_544368;

                    if (valA6 == 1)
                        x87_r7_11 = -(x87_r7_11);

                    a2 = x87_r7_11;
                    *a4 = a2;
                }
            }
        }
        else if (!a1)
        {
            long double x87_r7_7 = a2;
            long double f4_1 = 0.0;
            x87_r7_7 - f4_1;
            int16_t valA5 = (x87_r7_7 < f4_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_7, f4_1) ? 1 : 0) << 0xa
                | (x87_r7_7 == f4_1 ? 1 : 0) << 0xe;

            if (TEST_BITB(*(&valA5 + 1), 6) || TEST_BITB(*(&valA5 + 1), 0))
            {
                long double x87_r7_8 = a2;
                long double f7_1 = 0.0;
                x87_r7_8 - f7_1;

                if (!TEST_BITB(
                        *(&((x87_r7_8 < f7_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_8, f7_1) ? 1 : 0) << 0xa
                            | (x87_r7_8 == f7_1 ? 1 : 0) << 0xe) + 1),
                        0))
                    *a4 = 1;
                else
                    *a4 = 0;
            }
            else
                *a4 = g_544368;
        }
    }
    else
    {
        long double x87_r7_5 = v_c;
        long double f2_1 = 1.0;
        x87_r7_5 - f2_1;
        int16_t valA4 = (x87_r7_5 < f2_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_5, f2_1) ? 1 : 0) << 0xa | (x87_r7_5 == f2_1 ? 1 : 0) << 0xe;

        if (!TEST_BITB(*(&valA4 + 1), 6) && !TEST_BITB(*(&valA4 + 1), 0))
            *a4 = 0;
        else
        {
            long double x87_r7_6 = v_c;
            long double f5_1 = 1.0;
            x87_r7_6 - f5_1;

            if (!TEST_BITB(
                *(&((x87_r7_6 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, f5_1) ? 1 : 0) << 0xa
                    | (x87_r7_6 == f5_1 ? 1 : 0) << 0xe) + 1),
                0))
            {
                result = 1;
                *a4 = g_544370;
            }
            else
                *a4 = g_544368;
        }
    }

    return result;
}
