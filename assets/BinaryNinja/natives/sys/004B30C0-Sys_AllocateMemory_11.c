// Original IGI.EXE function: Sys_AllocateMemory_11 (VA 0x004B30C0; static CFG gate PASS, CFG score 1.000).
#include "Sys_AllocateMemory_11.h"
int32_t Sys_AllocateMemory_11(double* context, double param_2)

{
    int32_t result;
    long double fp0;
    fp0 = Sys_OpenFileStream_11(context);
    long double fpu_val_7_1 = 1.0 / fp0;
    *context = fpu_val_7_1 * *context * param_2;
    context[1] = fpu_val_7_1 * context[1] * param_2;
    context[2] = fpu_val_7_1 * context[2] * param_2;
    return result;
}
