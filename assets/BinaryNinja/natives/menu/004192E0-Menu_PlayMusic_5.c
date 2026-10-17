// Original IGI.EXE function: Menu_PlayMusic_5 (VA 0x004192E0; static CFG gate PASS, CFG score 1.000).
#include "Menu_PlayMusic_5.h"
float* Menu_PlayMusic_5(float* a1, float a2, float a3, int32_t a4, int32_t a5)

{
    long double fp0;
    bool c1;
    bool c2;
    fp0 = __fcos(a2);
    a1[4] = a4;
    a1[5] = a5;
    a1[6] = a3;
    long double x87_r7_1 = fp0 * a3;
    *a1 = x87_r7_1;
    long double fp0_1;
    bool c1_1;
    bool c2_1;
    fp0_1 = __fsin(a2);
    a1[1] = fp0_1 * a3;
    a1[2] = -(fp0_1) * a3;
    a1[3] = x87_r7_1;
    return a1;
}
