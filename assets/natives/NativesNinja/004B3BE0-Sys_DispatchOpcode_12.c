#include "004B3BE0-Sys_DispatchOpcode_12.h"
/* 0x004b3be0 Sys_DispatchOpcode_12 full linked: callers=26 callees=0 */
float* sub_4b3be0(float* a1, float a2)

{
    long double st0;
    bool c1;
    bool c2;
    st0 = __fsin(a2);
    a1[2] = 0;
    a1[5] = 0;
    a1[6] = 0;
    a1[7] = 0;
    a1[8] = 0x3f800000;
    a1[9] = 0;
    long double st0_1;
    bool c1_1;
    bool c2_1;
    st0_1 = __fcos(a2);
    *a1 = st0_1;
    a1[1] = -(st0);
    a1[4] = st0_1;
    a1[3] = st0;
    return a1;
}
