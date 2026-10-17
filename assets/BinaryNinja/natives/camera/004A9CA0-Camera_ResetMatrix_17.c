// Original IGI.EXE function: Camera_ResetMatrix_17 (VA 0x004A9CA0; static CFG gate PASS, CFG score 1.000).
#include "Camera_ResetMatrix_17.h"
long double __twoToTOS(long double context )

{
    long double fpu7 = roundl(context);
    long double fp0;
    bool c1;
    fp0 = __f2xm1(-((fpu7 - context)));
    long double result;
    bool c1_1;
    result = __fscale(fp0 + 1, fpu7);
    return result;
}
