#include "Sys_Atan2UndefinedInOrig.h"
float* Sys_Atan2UndefinedInOrig(float* a1, float* a2, float* a3, float* a4)

{
    long double fpu7 = *a1;
    long double fpu6 = a1[3];
    long double x87_r5_3 = sqrtl(fpu6 * fpu6 + fpu7 * fpu7);
    long double f1 = 0.0001;
    x87_r5_3 - f1;
    int32_t v_18;
    double v_10;
    long double x87_r7_4;

    if (*(&((x87_r5_3 < f1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_3, f1) ? 1 : 0) << 0xa
        | (x87_r5_3 == f1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r6_18 = a1[4];
        long double f2_1 = 0.0;
        x87_r6_18 - f2_1;
        long double x87_r6_20 = -(a1[5]);
        long double x87_r6_21;

        if (*(&((x87_r6_18 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_18, f2_1) ? 1 : 0) << 0xa
            | (x87_r6_18 == f2_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40)
        {
            long double f5_1 = 0.0;
            x87_r6_20 - f5_1;

            if (!(*(&((x87_r6_20 < f5_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_20, f5_1) ? 1 : 0) << 0xa
                | (x87_r6_20 == f5_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
            {
                long double f7_1 = 0f;
                x87_r6_20 - f7_1;
                long double x87_r6_23;

                x87_r6_23 = !(*(&((x87_r6_20 < f7_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_20, f7_1) ? 1 : 0) << 0xa
                    | (x87_r6_20 == f7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 1.0 : -1.0;

                x87_r6_21 = x87_r6_23 * 1.5707963267948972;
            }
            else
            {
                Error_Show("Atan2 uint32_t in origo");

                while (true)
                    /* nop */
            }
        }
        else
        {
            long double fp1_4;
            bool c1_4;
            fp1_4 = __fpatan(a1[4], x87_r6_20);
            x87_r6_21 = fp1_4;
        }

        v_10 = x87_r6_21;
        long double f8_1 = 0.0;
        x87_r5_3 - f8_1;

        if (*(&((x87_r5_3 < f8_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_3, f8_1) ? 1 : 0) << 0xa
            | (x87_r5_3 == f8_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40)
        {
            long double x87_r7_15 = -(a1[6]);
            long double f11_1 = 0.0;
            x87_r7_15 - f11_1;

            if (!(*(&((x87_r7_15 < f11_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_15, f11_1) ? 1 : 0) << 0xa
                | (x87_r7_15 == f11_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            {
                long double f13_1 = 0f;
                x87_r7_15 - f13_1;
                long double x87_r7_17;

                x87_r7_17 = !(*(&((x87_r7_15 < f13_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_15, f13_1) ? 1 : 0) << 0xa
                    | (x87_r7_15 == f13_1 ? 1 : 0) << 0xe) + 1) & 1) ? 1.0 : -1.0;

                x87_r7_4 = x87_r7_17 * 1.5707963267948972;
            }
            else
            {
                Error_Show("Atan2 uint32_t in origo");

                while (true)
                    /* nop */
            }
        }
        else
        {
            long double fp1_5;
            bool c1_5;
            fp1_5 = __fpatan(x87_r5_3, -(a1[6]));
            x87_r7_4 = fp1_5;
        }

        v_18 = 0;
        int32_t v_14_1 = 0;
    }
    else
    {
        long double x87_r6_2 = a1[8];
        long double f4_1 = 0.0;
        x87_r6_2 - f4_1;
        long double x87_r6_3 = a1[7];
        long double x87_r6_4;

        if (*(&((x87_r6_2 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, f4_1) ? 1 : 0) << 0xa
            | (x87_r6_2 == f4_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40)
        {
            long double f6_1 = 0.0;
            x87_r6_3 - f6_1;

            if (!(*(&((x87_r6_3 < f6_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_3, f6_1) ? 1 : 0) << 0xa
                | (x87_r6_3 == f6_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            {
                long double x87_r6_5 = a1[7];
                long double f9_1 = 0f;
                x87_r6_5 - f9_1;
                long double x87_r6_6;

                x87_r6_6 = !(*(&((x87_r6_5 < f9_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_5, f9_1) ? 1 : 0) << 0xa
                    | (x87_r6_5 == f9_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 1.0 : -1.0;

                x87_r6_4 = x87_r6_6 * 1.5707963267948972;
            }
            else
            {
                Error_Show("Atan2 uint32_t in origo");

                while (true)
                    /* nop */
            }
        }
        else
        {
            long double fp1_1;
            bool c1_1;
            fp1_1 = __fpatan(a1[8], x87_r6_3);
            x87_r6_4 = fp1_1;
        }

        v_10 = x87_r6_4;
        long double f10_1 = 0.0;
        x87_r5_3 - f10_1;

        if (*(&((x87_r5_3 < f10_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_3, f10_1) ? 1 : 0) << 0xa
            | (x87_r5_3 == f10_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40)
        {
            long double x87_r7_7 = -(a1[6]);
            long double f12_1 = 0.0;
            x87_r7_7 - f12_1;

            if (!(*(&((x87_r7_7 < f12_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_7, f12_1) ? 1 : 0) << 0xa
                | (x87_r7_7 == f12_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            {
                long double f14_1 = 0f;
                x87_r7_7 - f14_1;
                long double x87_r7_9;

                x87_r7_9 = !(*(&((x87_r7_7 < f14_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_7, f14_1) ? 1 : 0) << 0xa
                    | (x87_r7_7 == f14_1 ? 1 : 0) << 0xe) + 1) & 1) ? 1.0 : -1.0;

                x87_r7_4 = x87_r7_9 * 1.5707963267948972;
            }
            else
            {
                Error_Show("Atan2 uint32_t in origo");

                while (true)
                    /* nop */
            }
        }
        else
        {
            long double fp1_2;
            bool c1_2;
            fp1_2 = __fpatan(x87_r5_3, -(a1[6]));
            x87_r7_4 = fp1_2;
        }

        long double x87_r6_10 = *a1;
        long double f15_1 = 0.0;
        x87_r6_10 - f15_1;
        long double x87_r6_11 = a1[3];

        if (*(&((x87_r6_10 < f15_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_10, f15_1) ? 1 : 0) << 0xa
            | (x87_r6_10 == f15_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40)
        {
            long double f17_1 = 0.0;
            x87_r6_11 - f17_1;

            if (!(*(&((x87_r6_11 < f17_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_11, f17_1) ? 1 : 0) << 0xa
                | (x87_r6_11 == f17_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            {
                long double x87_r6_13 = a1[3];
                long double f19_1 = 0f;
                x87_r6_13 - f19_1;

                if (!(*(&((x87_r6_13 < f19_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_13, f19_1) ? 1 : 0) << 0xa
                        | (x87_r6_13 == f19_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                    v_18 = 1.0 * 1.5707963267948972;
                else
                    v_18 = -1.0 * 1.5707963267948972;
            }
            else
            {
                Error_Show("Atan2 uint32_t in origo");

                while (true)
                    /* nop */
            }
        }
        else
        {
            long double fp1_3;
            bool c1_3;
            fp1_3 = __fpatan(*a1, x87_r6_11);
            v_18 = fp1_3;
        }
    }

    long double x87_r6_27 = v_10;
    long double f16 = 0.0;
    x87_r6_27 - f16;

    if (*(&((x87_r6_27 < f16 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_27, f16) ? 1 : 0) << 0xa
            | (x87_r6_27 == f16 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
        x87_r6_27 = x87_r6_27 + 6.2831853071795889;

    long double f18 = 0.0;
    x87_r7_4 - f18;

    if (*(&((x87_r7_4 < f18 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, f18) ? 1 : 0) << 0xa
            | (x87_r7_4 == f18 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
        x87_r7_4 = x87_r7_4 + 6.2831853071795889;

    long double x87_r5_8 = v_18;
    long double f20 = 0.0;
    x87_r5_8 - f20;

    if (*(&((x87_r5_8 < f20 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_8, f20) ? 1 : 0) << 0xa
            | (x87_r5_8 == f20 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
        v_18 = v_18 + 6.2831853071795889;

    *a2 = x87_r6_27;
    *a3 = x87_r7_4;
    *a4 = v_18;
    return a2;
}
