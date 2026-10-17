// Original IGI.EXE function: Sys_OpenFileStream_11 (VA 0x004B3130; static CFG gate PASS, CFG score 1.000).
#include "Sys_OpenFileStream_11.h"
long double Sys_OpenFileStream_11(double* a1)

{
    long double fpu7 = a1[2];
    long double fpu6 = a1[1];
    long double fpu5 = *a1;
    return sqrtl(fpu5 * fpu5 + fpu6 * fpu6 + fpu7 * fpu7);
}
