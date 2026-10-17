// Original IGI.EXE function: Sys_PushStack_10 (VA 0x004B2B30; static CFG gate PASS, CFG score 1.000).
#include "Sys_PushStack_10.h"
long double Sys_PushStack_10(float a1, float* a2)

{
    float* tmpD = a1;
    long double fpu7 = *tmpD;
    long double f1 = 0f;
    fpu7 - f1;

    if (*(&((fpu7 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f1) ? 1 : 0) << 0xa
        | (fpu7 == f1 ? 1 : 0) << 0xe) + 1) & 0x40)
    {
        long double x87_r7_1 = tmpD[1];
        long double f3_1 = 0f;
        x87_r7_1 - f3_1;

        if (*(&((x87_r7_1 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f3_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x40)
        {
            long double x87_r7_2 = tmpD[2];
            long double f6_1 = 0f;
            x87_r7_2 - f6_1;

            if (*(&((x87_r7_2 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, f6_1) ? 1 : 0) << 0xa
                    | (x87_r7_2 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                return 0f;
        }
    }

    long double x87_r7_4 = *a2;
    long double f2 = 0f;
    x87_r7_4 - f2;

    if (*(&((x87_r7_4 < f2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, f2) ? 1 : 0) << 0xa
        | (x87_r7_4 == f2 ? 1 : 0) << 0xe) + 1) & 0x40)
    {
        long double x87_r7_5 = a2[1];
        long double f5_1 = 0f;
        x87_r7_5 - f5_1;

        if (*(&((x87_r7_5 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, f5_1) ? 1 : 0) << 0xa
            | (x87_r7_5 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x40)
        {
            long double x87_r7_6 = a2[2];
            long double f8_1 = 0f;
            x87_r7_6 - f8_1;

            if (*(&((x87_r7_6 < f8_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, f8_1) ? 1 : 0) << 0xa
                    | (x87_r7_6 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                return 0f;
        }
    }

    double v_8 = a2[2];
    double v_10 = a2[1];
    double v_18 = *a2;
    long double x87_r7_11 = tmpD[2];
    long double fpu6 = tmpD[1];
    long double fpu5 = *tmpD;
    long double x87_r3_13 = sqrtl(v_18 * v_18 + v_10 * v_10 + v_8 * v_8);
    a1 = x87_r3_13;
    long double x87_r7_15 = (tmpD[2] * a2[2] + tmpD[1] * a2[1] + *tmpD * *a2)
        / (sqrtl(fpu5 * fpu5 + fpu6 * fpu6 + x87_r7_11 * x87_r7_11) * x87_r3_13);
    double v_18_1 = x87_r7_15;
    long double x87_r7_19 = v_18_1;
    long double f4 = 1.0;
    x87_r7_19 - f4;

    if (!(*(&((x87_r7_19 < f4 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_19, f4) ? 1 : 0) << 0xa
            | (x87_r7_19 == f4 ? 1 : 0) << 0xe) + 1) & 1))
        return 0f;

    long double x87_r7_21 = v_18_1;
    long double f7 = -1.0;
    x87_r7_21 - f7;

    if (!(*(&((x87_r7_21 < f7 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_21, f7) ? 1 : 0) << 0xa
            | (x87_r7_21 == f7 ? 1 : 0) << 0xe) + 1) & 0x41))
        return Terrain_ConnectGraphNode_3(v_18_1);

    return 3.14159274f;
}
