// Original IGI.EXE function: Sys_Atan2UndefinedInOrig (VA 0x004B3C50; static CFG gate PASS, CFG score 1.000).
#include "Sys_Atan2UndefinedInOrig.h"
float* Sys_Atan2UndefinedInOrig(float* context, float* param_2, float* param_3, float* param_4)

{
    long double fpu7 = *context;
    long double fpu6 = context[3];
    long double fpu_val_5_3 = sqrtl(fpu6 * fpu6 + fpu7 * fpu7);
    long double f1 = 0.0001;
    fpu_val_5_3 - f1;
    int32_t item_18;
    double item_10;
    long double fpu_val_7_4;

    if (*(&((fpu_val_5_3 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_5_3, f1) ? 1 : 0) << 0xa
        | (fpu_val_5_3 == f1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double fpu_val_6_18 = context[4];
        long double f2_1 = 0.0;
        fpu_val_6_18 - f2_1;
        long double fpu_val_6_20 = -(context[5]);
        long double fpu_val_6_21;

        if (*(&((fpu_val_6_18 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_18, f2_1) ? 1 : 0) << 0xa
            | (fpu_val_6_18 == f2_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40)
        {
            long double f5_1 = 0.0;
            fpu_val_6_20 - f5_1;

            if (!(*(&((fpu_val_6_20 < f5_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_20, f5_1) ? 1 : 0) << 0xa
                | (fpu_val_6_20 == f5_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
            {
                long double f7_1 = 0.0f;
                fpu_val_6_20 - f7_1;
                long double fpu_val_6_23;

                fpu_val_6_23 = !(*(&((fpu_val_6_20 < f7_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_20, f7_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_20 == f7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 1.0 : -1.0;

                fpu_val_6_21 = fpu_val_6_23 * 1.5707963267948972;
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
            fp1_4 = __fpatan(context[4], fpu_val_6_20);
            fpu_val_6_21 = fp1_4;
        }

        item_10 = fpu_val_6_21;
        long double f8_1 = 0.0;
        fpu_val_5_3 - f8_1;

        if (*(&((fpu_val_5_3 < f8_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_5_3, f8_1) ? 1 : 0) << 0xa
            | (fpu_val_5_3 == f8_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40)
        {
            long double fpu_val_7_15 = -(context[6]);
            long double f11_1 = 0.0;
            fpu_val_7_15 - f11_1;

            if (!(*(&((fpu_val_7_15 < f11_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_15, f11_1) ? 1 : 0) << 0xa
                | (fpu_val_7_15 == f11_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            {
                long double f13_1 = 0.0f;
                fpu_val_7_15 - f13_1;
                long double fpu_val_7_17;

                fpu_val_7_17 = !(*(&((fpu_val_7_15 < f13_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_15, f13_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_15 == f13_1 ? 1 : 0) << 0xe) + 1) & 1) ? 1.0 : -1.0;

                fpu_val_7_4 = fpu_val_7_17 * 1.5707963267948972;
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
            fp1_5 = __fpatan(fpu_val_5_3, -(context[6]));
            fpu_val_7_4 = fp1_5;
        }

        item_18 = 0;
        int32_t item_14_1 = 0;
    }
    else
    {
        long double fpu_val_6_2 = context[8];
        long double f4_1 = 0.0;
        fpu_val_6_2 - f4_1;
        long double fpu_val_6_3 = context[7];
        long double fpu_val_6_4;

        if (*(&((fpu_val_6_2 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_2, f4_1) ? 1 : 0) << 0xa
            | (fpu_val_6_2 == f4_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40)
        {
            long double f6_1 = 0.0;
            fpu_val_6_3 - f6_1;

            if (!(*(&((fpu_val_6_3 < f6_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_3, f6_1) ? 1 : 0) << 0xa
                | (fpu_val_6_3 == f6_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            {
                long double fpu_val_6_5 = context[7];
                long double f9_1 = 0.0f;
                fpu_val_6_5 - f9_1;
                long double fpu_val_6_6;

                fpu_val_6_6 = !(*(&((fpu_val_6_5 < f9_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_5, f9_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_5 == f9_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 1.0 : -1.0;

                fpu_val_6_4 = fpu_val_6_6 * 1.5707963267948972;
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
            fp1_1 = __fpatan(context[8], fpu_val_6_3);
            fpu_val_6_4 = fp1_1;
        }

        item_10 = fpu_val_6_4;
        long double f10_1 = 0.0;
        fpu_val_5_3 - f10_1;

        if (*(&((fpu_val_5_3 < f10_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_5_3, f10_1) ? 1 : 0) << 0xa
            | (fpu_val_5_3 == f10_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40)
        {
            long double fpu_val_7_7 = -(context[6]);
            long double f12_1 = 0.0;
            fpu_val_7_7 - f12_1;

            if (!(*(&((fpu_val_7_7 < f12_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_7, f12_1) ? 1 : 0) << 0xa
                | (fpu_val_7_7 == f12_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            {
                long double f14_1 = 0.0f;
                fpu_val_7_7 - f14_1;
                long double fpu_val_7_9;

                fpu_val_7_9 = !(*(&((fpu_val_7_7 < f14_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_7, f14_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_7 == f14_1 ? 1 : 0) << 0xe) + 1) & 1) ? 1.0 : -1.0;

                fpu_val_7_4 = fpu_val_7_9 * 1.5707963267948972;
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
            fp1_2 = __fpatan(fpu_val_5_3, -(context[6]));
            fpu_val_7_4 = fp1_2;
        }

        long double fpu_val_6_10 = *context;
        long double f15_1 = 0.0;
        fpu_val_6_10 - f15_1;
        long double fpu_val_6_11 = context[3];

        if (*(&((fpu_val_6_10 < f15_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_10, f15_1) ? 1 : 0) << 0xa
            | (fpu_val_6_10 == f15_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40)
        {
            long double f17_1 = 0.0;
            fpu_val_6_11 - f17_1;

            if (!(*(&((fpu_val_6_11 < f17_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_11, f17_1) ? 1 : 0) << 0xa
                | (fpu_val_6_11 == f17_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            {
                long double fpu_val_6_13 = context[3];
                long double f19_1 = 0.0f;
                fpu_val_6_13 - f19_1;

                if (!(*(&((fpu_val_6_13 < f19_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_13, f19_1) ? 1 : 0) << 0xa
                        | (fpu_val_6_13 == f19_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                    item_18 = 1.0 * 1.5707963267948972;
                else
                    item_18 = -1.0 * 1.5707963267948972;
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
            fp1_3 = __fpatan(*context, fpu_val_6_11);
            item_18 = fp1_3;
        }
    }

    long double fpu_val_6_27 = item_10;
    long double f16 = 0.0;
    fpu_val_6_27 - f16;

    if (*(&((fpu_val_6_27 < f16 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_27, f16) ? 1 : 0) << 0xa
            | (fpu_val_6_27 == f16 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
        fpu_val_6_27 = fpu_val_6_27 + 6.2831853071795889;

    long double f18 = 0.0;
    fpu_val_7_4 - f18;

    if (*(&((fpu_val_7_4 < f18 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_4, f18) ? 1 : 0) << 0xa
            | (fpu_val_7_4 == f18 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
        fpu_val_7_4 = fpu_val_7_4 + 6.2831853071795889;

    long double fpu_val_5_8 = item_18;
    long double f20 = 0.0;
    fpu_val_5_8 - f20;

    if (*(&((fpu_val_5_8 < f20 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_5_8, f20) ? 1 : 0) << 0xa
            | (fpu_val_5_8 == f20 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
        item_18 = item_18 + 6.2831853071795889;

    *param_2 = fpu_val_6_27;
    *param_3 = fpu_val_7_4;
    *param_4 = item_18;
    return param_2;
}
