#include "004B3C50-Sys_Atan2UndefinedInOrig.h"
/* 0x004b3c50 Sys_Atan2UndefinedInOrig full linked: callers=23 callees=5 */
float* sub_4b3c50(float* a1, float* a2, float* a3, float* a4)

{
    long double x87_r7 = *a1;
    long double x87_r6 = a1[3];
    long double x87_r5_3 = sqrtl(x87_r6 * x87_r6 + x87_r7 * x87_r7);
    long double temp1 = 0.0001;
    x87_r5_3 - temp1;
    int32_t var_18;
    double var_10;
    long double x87_r7_4;

    if (*(&((x87_r5_3 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_3, temp1) ? 1 : 0) << 0xa
        | (x87_r5_3 == temp1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r6_18 = a1[4];
        long double temp2_1 = 0.0;
        x87_r6_18 - temp2_1;
        long double x87_r6_20 = -(a1[5]);
        long double x87_r6_21;

        if (*(&((x87_r6_18 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_18, temp2_1) ? 1 : 0) << 0xa
            | (x87_r6_18 == temp2_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40)
        {
            long double temp5_1 = 0.0;
            x87_r6_20 - temp5_1;

            if (!(*(&((x87_r6_20 < temp5_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_20, temp5_1) ? 1 : 0) << 0xa
                | (x87_r6_20 == temp5_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
            {
                long double temp7_1 = 0f;
                x87_r6_20 - temp7_1;
                long double x87_r6_23;

                x87_r6_23 = !(*(&((x87_r6_20 < temp7_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_20, temp7_1) ? 1 : 0) << 0xa
                    | (x87_r6_20 == temp7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 1.0 : -1.0;

                x87_r6_21 = x87_r6_23 * 1.5707963267948972;
            }
            else
            {
                Error_Show("Atan2 undefined in origo");

                while (true)
                    /* nop */
            }
        }
        else
        {
            long double st1_4;
            bool c1_4;
            st1_4 = __fpatan(a1[4], x87_r6_20);
            x87_r6_21 = st1_4;
        }

        var_10 = x87_r6_21;
        long double temp8_1 = 0.0;
        x87_r5_3 - temp8_1;

        if (*(&((x87_r5_3 < temp8_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_3, temp8_1) ? 1 : 0) << 0xa
            | (x87_r5_3 == temp8_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40)
        {
            long double x87_r7_15 = -(a1[6]);
            long double temp11_1 = 0.0;
            x87_r7_15 - temp11_1;

            if (!(*(&((x87_r7_15 < temp11_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_15, temp11_1) ? 1 : 0) << 0xa
                | (x87_r7_15 == temp11_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            {
                long double temp13_1 = 0f;
                x87_r7_15 - temp13_1;
                long double x87_r7_17;

                x87_r7_17 = !(*(&((x87_r7_15 < temp13_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_15, temp13_1) ? 1 : 0) << 0xa
                    | (x87_r7_15 == temp13_1 ? 1 : 0) << 0xe) + 1) & 1) ? 1.0 : -1.0;

                x87_r7_4 = x87_r7_17 * 1.5707963267948972;
            }
            else
            {
                Error_Show("Atan2 undefined in origo");

                while (true)
                    /* nop */
            }
        }
        else
        {
            long double st1_5;
            bool c1_5;
            st1_5 = __fpatan(x87_r5_3, -(a1[6]));
            x87_r7_4 = st1_5;
        }

        var_18 = 0;
        int32_t var_14_1 = 0;
    }
    else
    {
        long double x87_r6_2 = a1[8];
        long double temp4_1 = 0.0;
        x87_r6_2 - temp4_1;
        long double x87_r6_3 = a1[7];
        long double x87_r6_4;

        if (*(&((x87_r6_2 < temp4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, temp4_1) ? 1 : 0) << 0xa
            | (x87_r6_2 == temp4_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40)
        {
            long double temp6_1 = 0.0;
            x87_r6_3 - temp6_1;

            if (!(*(&((x87_r6_3 < temp6_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_3, temp6_1) ? 1 : 0) << 0xa
                | (x87_r6_3 == temp6_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            {
                long double x87_r6_5 = a1[7];
                long double temp9_1 = 0f;
                x87_r6_5 - temp9_1;
                long double x87_r6_6;

                x87_r6_6 = !(*(&((x87_r6_5 < temp9_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_5, temp9_1) ? 1 : 0) << 0xa
                    | (x87_r6_5 == temp9_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 1.0 : -1.0;

                x87_r6_4 = x87_r6_6 * 1.5707963267948972;
            }
            else
            {
                Error_Show("Atan2 undefined in origo");

                while (true)
                    /* nop */
            }
        }
        else
        {
            long double st1_1;
            bool c1_1;
            st1_1 = __fpatan(a1[8], x87_r6_3);
            x87_r6_4 = st1_1;
        }

        var_10 = x87_r6_4;
        long double temp10_1 = 0.0;
        x87_r5_3 - temp10_1;

        if (*(&((x87_r5_3 < temp10_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_3, temp10_1) ? 1 : 0) << 0xa
            | (x87_r5_3 == temp10_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40)
        {
            long double x87_r7_7 = -(a1[6]);
            long double temp12_1 = 0.0;
            x87_r7_7 - temp12_1;

            if (!(*(&((x87_r7_7 < temp12_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_7, temp12_1) ? 1 : 0) << 0xa
                | (x87_r7_7 == temp12_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            {
                long double temp14_1 = 0f;
                x87_r7_7 - temp14_1;
                long double x87_r7_9;

                x87_r7_9 = !(*(&((x87_r7_7 < temp14_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_7, temp14_1) ? 1 : 0) << 0xa
                    | (x87_r7_7 == temp14_1 ? 1 : 0) << 0xe) + 1) & 1) ? 1.0 : -1.0;

                x87_r7_4 = x87_r7_9 * 1.5707963267948972;
            }
            else
            {
                Error_Show("Atan2 undefined in origo");

                while (true)
                    /* nop */
            }
        }
        else
        {
            long double st1_2;
            bool c1_2;
            st1_2 = __fpatan(x87_r5_3, -(a1[6]));
            x87_r7_4 = st1_2;
        }

        long double x87_r6_10 = *a1;
        long double temp15_1 = 0.0;
        x87_r6_10 - temp15_1;
        long double x87_r6_11 = a1[3];

        if (*(&((x87_r6_10 < temp15_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_10, temp15_1) ? 1 : 0) << 0xa
            | (x87_r6_10 == temp15_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40)
        {
            long double temp17_1 = 0.0;
            x87_r6_11 - temp17_1;

            if (!(*(&((x87_r6_11 < temp17_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_11, temp17_1) ? 1 : 0) << 0xa
                | (x87_r6_11 == temp17_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            {
                long double x87_r6_13 = a1[3];
                long double temp19_1 = 0f;
                x87_r6_13 - temp19_1;

                if (!(*(&((x87_r6_13 < temp19_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_13, temp19_1) ? 1 : 0) << 0xa
                        | (x87_r6_13 == temp19_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                    var_18 = 1.0 * 1.5707963267948972;
                else
                    var_18 = -1.0 * 1.5707963267948972;
            }
            else
            {
                Error_Show("Atan2 undefined in origo");

                while (true)
                    /* nop */
            }
        }
        else
        {
            long double st1_3;
            bool c1_3;
            st1_3 = __fpatan(*a1, x87_r6_11);
            var_18 = st1_3;
        }
    }

    long double x87_r6_27 = var_10;
    long double temp16 = 0.0;
    x87_r6_27 - temp16;

    if (*(&((x87_r6_27 < temp16 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_27, temp16) ? 1 : 0) << 0xa
            | (x87_r6_27 == temp16 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
        x87_r6_27 = x87_r6_27 + 6.2831853071795889;

    long double temp18 = 0.0;
    x87_r7_4 - temp18;

    if (*(&((x87_r7_4 < temp18 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, temp18) ? 1 : 0) << 0xa
            | (x87_r7_4 == temp18 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
        x87_r7_4 = x87_r7_4 + 6.2831853071795889;

    long double x87_r5_8 = var_18;
    long double temp20 = 0.0;
    x87_r5_8 - temp20;

    if (*(&((x87_r5_8 < temp20 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_8, temp20) ? 1 : 0) << 0xa
            | (x87_r5_8 == temp20 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
        var_18 = var_18 + 6.2831853071795889;

    *a2 = x87_r6_27;
    *a3 = x87_r7_4;
    *a4 = var_18;
    return a2;
}
