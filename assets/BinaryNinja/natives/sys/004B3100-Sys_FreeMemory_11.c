// Original IGI.EXE function: Sys_FreeMemory_11 (VA 0x004B3100; static CFG gate PASS, CFG score 1.000).
#include "Sys_FreeMemory_11.h"
int32_t Sys_FreeMemory_11(double* context)

{
    int32_t result;
    long double fp0;
    fp0 = Sys_OpenFileStream_11(context);
    long double fpu_val_7_1 = 1.0 / fp0;
    *context = fpu_val_7_1 * *context;
    context[1] = fpu_val_7_1 * context[1];
    context[2] = fpu_val_7_1 * context[2];
    return result;
}
