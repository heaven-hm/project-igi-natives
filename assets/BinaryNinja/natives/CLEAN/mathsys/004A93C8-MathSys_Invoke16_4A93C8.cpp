// IGI native provenance: MathSys_Invoke16_4A93C8 - 0x004A93C8 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A93C8-MathSys_Invoke16_4A93C8.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MathSys_Invoke16_4A93C8.h"

long double __stdcall MathSys_Invoke16_4A93C8(long double arg1, double arg2, int32_t arg3)

{
    int32_t eax_1 = arg3 & 0x7ff00000;

    if (eax_1 == 0x7ff00000)
        return arg2 / arg1;

    bool c0;
    bool c1;
    bool c2;
    bool c3;
    eax_1 = (c0 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9 | (c2 ? 1 : 0) << 0xa | (c3 ? 1 : 0) << 0xe;
    return Camera_ApplyWideScreen_16(arg2, arg1);
}
