// Original IGI.EXE function: Sys_PopStack_11 (VA 0x004B3320; static CFG gate PASS, CFG score 1.000).
#include "Sys_PopStack_11.h"
int32_t Sys_PopStack_11(double* context)

{
    long double fpu7 = *context;
    long double f0 = 0.0;
    fpu7 - f0;

    if (*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 0x40)
    {
        long double fpu_val_7_1 = context[1];
        long double f1_1 = 0.0;
        fpu_val_7_1 - f1_1;

        if (*(&((fpu_val_7_1 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f1_1) ? 1 : 0) << 0xa
            | (fpu_val_7_1 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40)
        {
            long double fpu_val_7_2 = context[2];
            long double f2_1 = 0.0;
            fpu_val_7_2 - f2_1;

            if (*(&((fpu_val_7_2 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_2, f2_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_2 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                return 1;
        }
    }

    return 0;
}
