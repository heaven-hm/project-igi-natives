#include "Sys_DispatchOpcode_10.h"
long double Sys_DispatchOpcode_10(int32_t* a1)

{
    float v_c = *a1;
    long double fpu7 = v_c;
    long double f1 = 0f;
    fpu7 - f1;
    float v_4 = a1[2];
    float v_8 = a1[1];

    if (*(&((fpu7 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f1) ? 1 : 0) << 0xa
            | (fpu7 == f1 ? 1 : 0) << 0xe) + 1) & 1)
        v_c = -(v_c);

    long double x87_r7_3 = v_8;
    long double f2 = 0f;
    x87_r7_3 - f2;

    if (*(&((x87_r7_3 < f2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, f2) ? 1 : 0) << 0xa
            | (x87_r7_3 == f2 ? 1 : 0) << 0xe) + 1) & 1)
        v_8 = -(v_8);

    long double x87_r7_6 = v_4;
    long double f3 = 0f;
    x87_r7_6 - f3;

    if (*(&((x87_r7_6 < f3 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, f3) ? 1 : 0) << 0xa
            | (x87_r7_6 == f3 ? 1 : 0) << 0xe) + 1) & 1)
        v_4 = -(v_4);

    long double x87_r7_9 = v_c;
    long double f4 = v_8;
    x87_r7_9 - f4;
    long double x87_r7_10;
    long double f6_1;

    if (!(*(&((x87_r7_9 < f4 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_9, f4) ? 1 : 0) << 0xa
        | (x87_r7_9 == f4 ? 1 : 0) << 0xe) + 1) & 0x41))
    {
        x87_r7_10 = v_c;
        f6_1 = v_4;
        x87_r7_10 - f6_1;
    }

    long double fpu5;
    long double x87_r6_1;
    long double x87_r7_11;

    if (*(&((x87_r7_9 < f4 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_9, f4) ? 1 : 0) << 0xa
        | (x87_r7_9 == f4 ? 1 : 0) << 0xe) + 1) & 0x41 || *(&((x87_r7_10 < f6_1 ? 1 : 0) << 8
        | (FCMP_UO(x87_r7_10, f6_1) ? 1 : 0) << 0xa | (x87_r7_10 == f6_1 ? 1 : 0) << 0xe) + 1)
        & 0x41)
    {
        long double x87_r7_12 = v_8;
        long double f5_1 = v_4;
        x87_r7_12 - f5_1;

        if (*(&((x87_r7_12 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_12, f5_1) ? 1 : 0) << 0xa
            | (x87_r7_12 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x41)
        {
            x87_r7_11 = v_4;
            long double x87_r6_3 = v_c;
            long double f7_1 = v_8;
            x87_r6_3 - f7_1;

            if (*(&((x87_r6_3 < f7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_3, f7_1) ? 1 : 0) << 0xa
                | (x87_r6_3 == f7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
            {
                x87_r6_1 = v_8;
                fpu5 = v_c;
            }
            else
            {
                x87_r6_1 = v_c;
                fpu5 = v_8;
            }
        }
        else
        {
            x87_r7_11 = v_8;
            long double x87_r6_2 = v_c;
            long double f8_1 = v_4;
            x87_r6_2 - f8_1;

            if (*(&((x87_r6_2 < f8_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, f8_1) ? 1 : 0) << 0xa
                | (x87_r6_2 == f8_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
            {
                x87_r6_1 = v_4;
                fpu5 = v_c;
            }
            else
            {
                x87_r6_1 = v_c;
                fpu5 = v_4;
            }
        }
    }
    else
    {
        x87_r7_11 = v_c;
        long double fpu6 = v_8;
        long double f9_1 = v_4;
        fpu6 - f9_1;

        if (*(&((fpu6 < f9_1 ? 1 : 0) << 8 | (FCMP_UO(fpu6, f9_1) ? 1 : 0) << 0xa
            | (fpu6 == f9_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            x87_r6_1 = v_4;
            fpu5 = v_8;
        }
        else
        {
            x87_r6_1 = v_8;
            fpu5 = v_4;
        }
    }

    return x87_r7_11 + fpu5 * 0.317837238f + x87_r6_1 * 0.414213568f;
}
