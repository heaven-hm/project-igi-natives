// Original IGI.EXE function: Sys_PushStack_11 (VA 0x004B32F0; static CFG gate PASS, CFG score 1.000).
#include "Sys_PushStack_11.h"
long double Sys_PushStack_11(double* context, double* param_2)

{
    long double fpu_val_7_1 = *context - *param_2;
    long double fpu_val_6_1 = context[1] - param_2[1];
    long double fpu_val_5_1 = context[2] - param_2[2];
    return fpu_val_5_1 * fpu_val_5_1 + fpu_val_6_1 * fpu_val_6_1 + fpu_val_7_1 * fpu_val_7_1;
}
