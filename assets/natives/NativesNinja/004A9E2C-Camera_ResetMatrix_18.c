#include "004A9E2C-Camera_ResetMatrix_18.h"
/* 0x004a9e2c Camera_ResetMatrix_18 full linked: callers=2 callees=1 */
int32_t sub_4a9e2c(double a1, int32_t a2, int32_t a3, double* a4)

{
    int32_t ecx;
    int32_t var_8 = ecx;
    int32_t var_c = ecx;
    long double x87_r7 = a1;
    long double temp0 = 0.0;
    x87_r7 - temp0;
    long double x87_r7_1 = a1;
    int32_t result = 0;

    if (TEST_BITB(
            *(&((x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
                | (x87_r7 == temp0 ? 1 : 0) << 0xe | 0x3800) + 1),
            0))
        x87_r7_1 = -(x87_r7_1);

    var_c = x87_r7_1;

    if (a3 == 0x7ff00000)
    {
        if (a2)
            goto label_4a9eb7;

        long double x87_r7_2 = var_c;
        long double temp1_1 = 1.0;
        x87_r7_2 - temp1_1;
        int16_t eax_2 = (x87_r7_2 < temp1_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_2, temp1_1) ? 1 : 0) << 0xa | (x87_r7_2 == temp1_1 ? 1 : 0) << 0xe;

        if (!TEST_BITB(*(&eax_2 + 1), 6) && !TEST_BITB(*(&eax_2 + 1), 0))
            *a4 = g_544368;
        else
        {
            long double x87_r7_3 = var_c;
            long double temp3_1 = 1.0;
            x87_r7_3 - temp3_1;

            if (TEST_BITB(
                    *(&((x87_r7_3 < temp3_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_3, temp3_1) ? 1 : 0) << 0xa
                        | (x87_r7_3 == temp3_1 ? 1 : 0) << 0xe) + 1),
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
    label_4a9eb7:

        if (*(&a1 + 4) != 0x7ff00000)
        {
            if (*(&a1 + 4) == 0xfff00000 && !a1)
            {
                int32_t var_14_1 = 0xfff00000;
                int32_t var_18_1 = 0xfff00000;
                var_18_1 = a2;
                int32_t eax_6 = sub_4a9f5c(0x7ff00000, 0, 0xfff00000, var_18_1);
                long double x87_r7_10 = a2;
                long double temp6_1 = 0.0;
                x87_r7_10 - temp6_1;
                int16_t eax_7 = (x87_r7_10 < temp6_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_10, temp6_1) ? 1 : 0) << 0xa
                    | (x87_r7_10 == temp6_1 ? 1 : 0) << 0xe;

                if (TEST_BITB(*(&eax_7 + 1), 6) || TEST_BITB(*(&eax_7 + 1), 0))
                {
                    long double x87_r7_13 = a2;
                    long double temp8_1 = 0.0;
                    x87_r7_13 - temp8_1;

                    if (!TEST_BITB(
                            *(&((x87_r7_13 < temp8_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_13, temp8_1) ? 1 : 0) << 0xa
                                | (x87_r7_13 == temp8_1 ? 1 : 0) << 0xe) + 1),
                            0))
                        *a4 = 1;
                    else
                    {
                        long double x87_r7_14;

                        if (eax_6 != 1)
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

                    if (eax_6 == 1)
                        x87_r7_11 = -(x87_r7_11);

                    a2 = x87_r7_11;
                    *a4 = a2;
                }
            }
        }
        else if (!a1)
        {
            long double x87_r7_7 = a2;
            long double temp4_1 = 0.0;
            x87_r7_7 - temp4_1;
            int16_t eax_5 = (x87_r7_7 < temp4_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_7, temp4_1) ? 1 : 0) << 0xa
                | (x87_r7_7 == temp4_1 ? 1 : 0) << 0xe;

            if (TEST_BITB(*(&eax_5 + 1), 6) || TEST_BITB(*(&eax_5 + 1), 0))
            {
                long double x87_r7_8 = a2;
                long double temp7_1 = 0.0;
                x87_r7_8 - temp7_1;

                if (!TEST_BITB(
                        *(&((x87_r7_8 < temp7_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_8, temp7_1) ? 1 : 0) << 0xa
                            | (x87_r7_8 == temp7_1 ? 1 : 0) << 0xe) + 1),
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
        long double x87_r7_5 = var_c;
        long double temp2_1 = 1.0;
        x87_r7_5 - temp2_1;
        int16_t eax_4 = (x87_r7_5 < temp2_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_5, temp2_1) ? 1 : 0) << 0xa | (x87_r7_5 == temp2_1 ? 1 : 0) << 0xe;

        if (!TEST_BITB(*(&eax_4 + 1), 6) && !TEST_BITB(*(&eax_4 + 1), 0))
            *a4 = 0;
        else
        {
            long double x87_r7_6 = var_c;
            long double temp5_1 = 1.0;
            x87_r7_6 - temp5_1;

            if (!TEST_BITB(
                *(&((x87_r7_6 < temp5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, temp5_1) ? 1 : 0) << 0xa
                    | (x87_r7_6 == temp5_1 ? 1 : 0) << 0xe) + 1),
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
