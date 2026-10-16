#include "004B3B60-Sys_CloseFileStream_12.h"
/* 0x004b3b60 Sys_CloseFileStream_12 full linked: callers=24 callees=0 */
int32_t* sub_4b3b60(int32_t* a1, float a2)

{
    long double st0;
    bool c1;
    bool c2;
    st0 = __fsin(a2);
    *a1 = 0x3f800000;
    a1[1] = 0;
    a1[2] = 0;
    a1[3] = 0;
    a1[6] = 0;
    a1[9] = 0;
    long double st0_1;
    bool c1_1;
    bool c2_1;
    st0_1 = __fcos(a2);
    a1[4] = st0_1;
    a1[5] = -(st0);
    a1[8] = st0_1;
    a1[7] = st0;
    return a1;
}
