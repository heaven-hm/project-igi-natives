// Original IGI.EXE function: Door_Cleanup_2 (VA 0x00446470; static CFG gate PASS, CFG score 1.000).
#include "Door_Cleanup_2.h"
int32_t Door_Cleanup_2(void* context, double* param_2)

{
    long double fp0 = Sys_PushStack_11(param_2, context + 0x20);
    long double fpu6 = param_2[3];
    long double f0 = 0.0;
    fpu6 - f0;
    int16_t result = (fpu6 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu6, f0) ? 1 : 0) << 0xa
        | (fpu6 == f0 ? 1 : 0) << 0xe | 0x3800;

    if (!(*(&result + 1) & 1))
    {
        long double f1_1 = param_2[3];
        fp0 - f1_1;
        result = (fp0 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fp0, f1_1) ? 1 : 0) << 0xa
            | (fp0 == f1_1 ? 1 : 0) << 0xe | 0x3800;

        if (!(*(&result + 1) & 1))
            return result;
    }

    param_2[3] = fp0;
    param_2[4] = context;
    return result;
}
