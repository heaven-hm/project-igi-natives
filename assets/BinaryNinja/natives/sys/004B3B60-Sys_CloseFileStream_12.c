#include "Sys_CloseFileStream_12.h"
int32_t* Sys_CloseFileStream_12(int32_t* a1, float a2)

{
    long double fp0;
    bool c1;
    bool c2;
    fp0 = __fsin(a2);
    *a1 = 0x3f800000;
    a1[1] = 0;
    a1[2] = 0;
    a1[3] = 0;
    a1[6] = 0;
    a1[9] = 0;
    long double fp0_1;
    bool c1_1;
    bool c2_1;
    fp0_1 = __fcos(a2);
    a1[4] = fp0_1;
    a1[5] = -(fp0);
    a1[8] = fp0_1;
    a1[7] = fp0;
    return a1;
}
