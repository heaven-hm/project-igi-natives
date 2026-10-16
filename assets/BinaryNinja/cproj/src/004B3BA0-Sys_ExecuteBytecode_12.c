#include "gi_platform.h"
#include "004B3BA0-Sys_ExecuteBytecode_12.h"
float* Sys_ExecuteBytecode_12(float* a1, float a2)

{
    long double fp0;
    bool c1;
    bool c2;
    fp0 = __fsin(a2);
    a1[1] = 0;
    a1[3] = 0;
    a1[4] = 0x3f800000;
    a1[5] = 0;
    a1[7] = 0;
    a1[9] = 0;
    long double fp0_1;
    bool c1_1;
    bool c2_1;
    fp0_1 = __fcos(a2);
    *a1 = fp0_1;
    a1[2] = fp0;
    a1[6] = -(fp0);
    a1[8] = fp0_1;
    return a1;
}
