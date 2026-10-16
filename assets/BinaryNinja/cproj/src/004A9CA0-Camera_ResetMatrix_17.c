#include "gi_platform.h"
#include "004A9CA0-Camera_ResetMatrix_17.h"
🌐  long double __twoToTOS(long double a1 )

{
    long double fpu7 = roundl(a1);
    long double fp0;
    bool c1;
    fp0 = __f2xm1(-((fpu7 - a1)));
    long double result;
    bool c1_1;
    result = __fscale(fp0 + 1, fpu7);
    return result;
}
