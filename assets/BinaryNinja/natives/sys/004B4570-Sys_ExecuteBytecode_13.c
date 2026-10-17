// Original IGI.EXE function: Sys_ExecuteBytecode_13 (VA 0x004B4570; static CFG gate PASS, CFG score 1.000).
#include "Sys_ExecuteBytecode_13.h"
long double Sys_ExecuteBytecode_13(float* context, float* param_2)

{
    return context[3] * param_2[3] + context[2] * param_2[2] + context[1] * param_2[1] + *context * *param_2;
}
