// Original IGI.EXE function: Sys_CloseFileStream_10 (VA 0x004B29D0; static CFG gate PASS, CFG score 1.000).
#include "Sys_CloseFileStream_10.h"
long double Sys_CloseFileStream_10(double* context)

{
    long double fpu7 = context[1];
    long double fpu6 = *context;
    return sqrtl(fpu6 * fpu6 + fpu7 * fpu7);
}
