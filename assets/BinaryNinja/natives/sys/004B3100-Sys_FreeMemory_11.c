// Original IGI.EXE function: Sys_FreeMemory_11 (VA 0x004B3100; static CFG gate PASS, CFG score 1.000).
#include "Sys_FreeMemory_11.h"
int32_t Sys_FreeMemory_11(double* a1)

{
    int32_t result;
    long double fp0;
    fp0 = Sys_OpenFileStream_11(a1);
    long double x87_r7_1 = 1.0 / fp0;
    *a1 = x87_r7_1 * *a1;
    a1[1] = x87_r7_1 * a1[1];
    a1[2] = x87_r7_1 * a1[2];
    return result;
}
