#include "gi_platform.h"
#include "004B4660-Sys_PushStack_13.h"
float* Sys_PushStack_13(float* a1, float* a2, float a3)

{
    long double fpu7 = a3 * 0.5.0f;
    long double fp0;
    bool c1;
    bool c2;
    fp0 = __fsin(fpu7);
    *a1 = fp0 * *a2;
    a1[1] = fp0 * a2[1];
    long double x87_r6_2 = fp0 * a2[2];
    a1[4] = 0;
    a1[2] = x87_r6_2;
    long double fp0_1;
    bool c1_1;
    bool c2_1;
    fp0_1 = __fcos(fpu7);
    a1[3] = fp0_1;
    return a1;
}
