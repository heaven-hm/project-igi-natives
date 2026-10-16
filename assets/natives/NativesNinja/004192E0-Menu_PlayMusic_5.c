#include "004192E0-Menu_PlayMusic_5.h"
/* 0x004192e0 Menu_PlayMusic_5 full linked: callers=3 callees=0 */
float* Menu_PlayMusic_5(float* a1, float a2, float a3, int32_t a4, int32_t a5)

{
    long double st0;
    bool c1;
    bool c2;
    st0 = __fcos(a2);
    a1[4] = a4;
    a1[5] = a5;
    a1[6] = a3;
    long double x87_r7_1 = st0 * a3;
    *a1 = x87_r7_1;
    long double st0_1;
    bool c1_1;
    bool c2_1;
    st0_1 = __fsin(a2);
    a1[1] = st0_1 * a3;
    a1[2] = -(st0_1) * a3;
    a1[3] = x87_r7_1;
    return a1;
}
