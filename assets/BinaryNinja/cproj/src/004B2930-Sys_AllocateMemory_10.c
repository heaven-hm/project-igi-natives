#include "gi_platform.h"
#include "004B2930-Sys_AllocateMemory_10.h"
long double Sys_AllocateMemory_10(float* a1)

{
    long double fpu7 = a1[1];
    long double fpu6 = *a1;
    return sqrtl(fpu6 * fpu6 + fpu7 * fpu7);
}
