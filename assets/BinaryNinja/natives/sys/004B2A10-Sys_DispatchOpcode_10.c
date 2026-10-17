// Original IGI.EXE function: Sys_DispatchOpcode_10 (VA 0x004B2A10; static CFG gate PASS, CFG score 1.000).
#include "Sys_DispatchOpcode_10.h"
long double Sys_DispatchOpcode_10(int32_t* context)

{
    float item_c = *context;
    long double fpu7 = item_c;
    long double f1 = 0.0f;
    fpu7 - f1;
    float item_4 = context[2];
    float item_8 = context[1];

    if (*(&((fpu7 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f1) ? 1 : 0) << 0xa
            | (fpu7 == f1 ? 1 : 0) << 0xe) + 1) & 1)
        item_c = -(item_c);

    long double fpu_val_7_3 = item_8;
    long double f2 = 0.0f;
    fpu_val_7_3 - f2;

    if (*(&((fpu_val_7_3 < f2 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_3, f2) ? 1 : 0) << 0xa
            | (fpu_val_7_3 == f2 ? 1 : 0) << 0xe) + 1) & 1)
        item_8 = -(item_8);

    long double fpu_val_7_6 = item_4;
    long double f3 = 0.0f;
    fpu_val_7_6 - f3;

    if (*(&((fpu_val_7_6 < f3 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_6, f3) ? 1 : 0) << 0xa
            | (fpu_val_7_6 == f3 ? 1 : 0) << 0xe) + 1) & 1)
        item_4 = -(item_4);

    long double fpu_val_7_9 = item_c;
    long double f4 = item_8;
    fpu_val_7_9 - f4;
    long double fpu_val_7_10;
    long double f6_1;

    if (!(*(&((fpu_val_7_9 < f4 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_9, f4) ? 1 : 0) << 0xa
        | (fpu_val_7_9 == f4 ? 1 : 0) << 0xe) + 1) & 0x41))
    {
        fpu_val_7_10 = item_c;
        f6_1 = item_4;
        fpu_val_7_10 - f6_1;
    }

    long double fpu5;
    long double fpu_val_6_1;
    long double fpu_val_7_11;

    if (*(&((fpu_val_7_9 < f4 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_9, f4) ? 1 : 0) << 0xa
        | (fpu_val_7_9 == f4 ? 1 : 0) << 0xe) + 1) & 0x41 || *(&((fpu_val_7_10 < f6_1 ? 1 : 0) << 8
        | (FCMP_UO(fpu_val_7_10, f6_1) ? 1 : 0) << 0xa | (fpu_val_7_10 == f6_1 ? 1 : 0) << 0xe) + 1)
        & 0x41)
    {
        long double fpu_val_7_12 = item_8;
        long double f5_1 = item_4;
        fpu_val_7_12 - f5_1;

        if (*(&((fpu_val_7_12 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_12, f5_1) ? 1 : 0) << 0xa
            | (fpu_val_7_12 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x41)
        {
            fpu_val_7_11 = item_4;
            long double fpu_val_6_3 = item_c;
            long double f7_1 = item_8;
            fpu_val_6_3 - f7_1;

            if (*(&((fpu_val_6_3 < f7_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_3, f7_1) ? 1 : 0) << 0xa
                | (fpu_val_6_3 == f7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
            {
                fpu_val_6_1 = item_8;
                fpu5 = item_c;
            }
            else
            {
                fpu_val_6_1 = item_c;
                fpu5 = item_8;
            }
        }
        else
        {
            fpu_val_7_11 = item_8;
            long double fpu_val_6_2 = item_c;
            long double f8_1 = item_4;
            fpu_val_6_2 - f8_1;

            if (*(&((fpu_val_6_2 < f8_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_2, f8_1) ? 1 : 0) << 0xa
                | (fpu_val_6_2 == f8_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
            {
                fpu_val_6_1 = item_4;
                fpu5 = item_c;
            }
            else
            {
                fpu_val_6_1 = item_c;
                fpu5 = item_4;
            }
        }
    }
    else
    {
        fpu_val_7_11 = item_c;
        long double fpu6 = item_8;
        long double f9_1 = item_4;
        fpu6 - f9_1;

        if (*(&((fpu6 < f9_1 ? 1 : 0) << 8 | (FCMP_UO(fpu6, f9_1) ? 1 : 0) << 0xa
            | (fpu6 == f9_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            fpu_val_6_1 = item_4;
            fpu5 = item_8;
        }
        else
        {
            fpu_val_6_1 = item_8;
            fpu5 = item_4;
        }
    }

    return fpu_val_7_11 + fpu5 * 0.317837238f + fpu_val_6_1 * 0.414213568f;
}
