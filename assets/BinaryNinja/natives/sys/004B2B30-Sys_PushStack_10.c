// Original IGI.EXE function: Sys_PushStack_10 (VA 0x004B2B30; static CFG gate PASS, CFG score 1.000).
#include "Sys_PushStack_10.h"
long double Sys_PushStack_10(float context, float* param_2)

{
    float* temp_val = context;
    long double fpu7 = *temp_val;
    long double f1 = 0.0f;
    fpu7 - f1;

    if (*(&((fpu7 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f1) ? 1 : 0) << 0xa
        | (fpu7 == f1 ? 1 : 0) << 0xe) + 1) & 0x40)
    {
        long double fpu_val_7_1 = temp_val[1];
        long double f3_1 = 0.0f;
        fpu_val_7_1 - f3_1;

        if (*(&((fpu_val_7_1 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f3_1) ? 1 : 0) << 0xa
            | (fpu_val_7_1 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x40)
        {
            long double fpu_val_7_2 = temp_val[2];
            long double f6_1 = 0.0f;
            fpu_val_7_2 - f6_1;

            if (*(&((fpu_val_7_2 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_2, f6_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_2 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                return 0.0f;
        }
    }

    long double fpu_val_7_4 = *param_2;
    long double f2 = 0.0f;
    fpu_val_7_4 - f2;

    if (*(&((fpu_val_7_4 < f2 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_4, f2) ? 1 : 0) << 0xa
        | (fpu_val_7_4 == f2 ? 1 : 0) << 0xe) + 1) & 0x40)
    {
        long double fpu_val_7_5 = param_2[1];
        long double f5_1 = 0.0f;
        fpu_val_7_5 - f5_1;

        if (*(&((fpu_val_7_5 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_5, f5_1) ? 1 : 0) << 0xa
            | (fpu_val_7_5 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x40)
        {
            long double fpu_val_7_6 = param_2[2];
            long double f8_1 = 0.0f;
            fpu_val_7_6 - f8_1;

            if (*(&((fpu_val_7_6 < f8_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_6, f8_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_6 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                return 0.0f;
        }
    }

    double item_8 = param_2[2];
    double item_10 = param_2[1];
    double item_18 = *param_2;
    long double fpu_val_7_11 = temp_val[2];
    long double fpu6 = temp_val[1];
    long double fpu5 = *temp_val;
    long double fpu_val_3_13 = sqrtl(item_18 * item_18 + item_10 * item_10 + item_8 * item_8);
    context = fpu_val_3_13;
    long double fpu_val_7_15 = (temp_val[2] * param_2[2] + temp_val[1] * param_2[1] + *temp_val * *param_2)
        / (sqrtl(fpu5 * fpu5 + fpu6 * fpu6 + fpu_val_7_11 * fpu_val_7_11) * fpu_val_3_13);
    double item_18_1 = fpu_val_7_15;
    long double fpu_val_7_19 = item_18_1;
    long double f4 = 1.0;
    fpu_val_7_19 - f4;

    if (!(*(&((fpu_val_7_19 < f4 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_19, f4) ? 1 : 0) << 0xa
            | (fpu_val_7_19 == f4 ? 1 : 0) << 0xe) + 1) & 1))
        return 0.0f;

    long double fpu_val_7_21 = item_18_1;
    long double f7 = -1.0;
    fpu_val_7_21 - f7;

    if (!(*(&((fpu_val_7_21 < f7 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_21, f7) ? 1 : 0) << 0xa
            | (fpu_val_7_21 == f7 ? 1 : 0) << 0xe) + 1) & 0x41))
        return Terrain_ConnectGraphNode_3(item_18_1);

    return 3.14159274f;
}
