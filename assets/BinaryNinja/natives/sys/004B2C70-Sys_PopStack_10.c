// Original IGI.EXE function: Sys_PopStack_10 (VA 0x004B2C70; static CFG gate PASS, CFG score 1.000).
#include "Sys_PopStack_10.h"
int32_t Sys_PopStack_10(int32_t* context, float* param_2, float* param_3, float* param_4)

{
    long double fpu_val_7_3 = param_3[1] * param_4[1] + *param_3 * *param_4 + param_4[2] * param_3[2];
    long double f0 = 9.99999975e-06.0f;
    fpu_val_7_3 - f0;

    if (*(&((fpu_val_7_3 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_3, f0) ? 1 : 0) << 0xa
        | (fpu_val_7_3 == f0 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double f1_1 = -9.99999975e-06.0f;
        fpu_val_7_3 - f1_1;

        if (!(*(&((fpu_val_7_3 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_3, f1_1) ? 1 : 0) << 0xa
            | (fpu_val_7_3 == f1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        {
            *context = 0;
            context[1] = 0;
            context[2] = 0;
            return 0;
        }
    }

    long double fpu_val_6_7 = param_2[2] * param_4[2] + *param_2 * *param_4 + param_2[1] * param_4[1];
    long double fpu_val_7_5 = fpu_val_6_7 / fpu_val_6_7;
    *context = *param_2 - fpu_val_7_5 * *param_3;
    context[1] = param_2[1] - fpu_val_7_5 * param_3[1];
    context[2] = param_2[2] - fpu_val_7_5 * param_3[2];
    return 1;
}
