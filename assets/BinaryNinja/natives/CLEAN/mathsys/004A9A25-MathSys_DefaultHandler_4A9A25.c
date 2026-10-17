// IGI native provenance: MathSys_DefaultHandler_4A9A25 - 0x004A9A25 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A9A25-MathSys_DefaultHandler_4A9A25.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MathSys_DefaultHandler_4A9A25.h"

long double MathSys_DefaultHandler_4A9A25(long double arg1, long double arg2)

{
    long double result;
    bool c1;
    result = __fpatan(arg1, arg2);
    return result;
}
