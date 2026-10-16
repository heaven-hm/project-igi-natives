#include "004A9CA0-Camera_ResetMatrix_17.h"
/* 0x004a9ca0 Camera_ResetMatrix_17 full linked: callers=1 callees=0 */
🌐  long double __twoToTOS(long double a1 @ st0)

{
    long double x87_r7 = roundl(a1);
    long double st0;
    bool c1;
    st0 = __f2xm1(-((x87_r7 - a1)));
    long double result;
    bool c1_1;
    result = __fscale(st0 + 1, x87_r7);
    return result;
}
