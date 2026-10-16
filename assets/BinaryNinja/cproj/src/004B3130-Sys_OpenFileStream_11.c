#include "gi_platform.h"
#include "004B3130-Sys_OpenFileStream_11.h"
long double Sys_OpenFileStream_11(double* a1)

{
    long double fpu7 = a1[2];
    long double fpu6 = a1[1];
    long double fpu5 = *a1;
    return sqrtl(fpu5 * fpu5 + fpu6 * fpu6 + fpu7 * fpu7);
}
