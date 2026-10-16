#include "Sys_DispatchOpcode_12.h"
float* Sys_DispatchOpcode_12(float* a1, float a2)

{
    long double fp0;
    bool c1;
    bool c2;
    fp0 = __fsin(a2);
    a1[2] = 0;
    a1[5] = 0;
    a1[6] = 0;
    a1[7] = 0;
    a1[8] = 0x3f800000;
    a1[9] = 0;
    long double fp0_1;
    bool c1_1;
    bool c2_1;
    fp0_1 = __fcos(a2);
    *a1 = fp0_1;
    a1[1] = -(fp0);
    a1[4] = fp0_1;
    a1[3] = fp0;
    return a1;
}
