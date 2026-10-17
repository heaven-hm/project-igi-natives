// IGI native provenance: Camera_ResetMatrix_17 - 0x004A9CA0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A9CA0-Camera_ResetMatrix_17.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
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
