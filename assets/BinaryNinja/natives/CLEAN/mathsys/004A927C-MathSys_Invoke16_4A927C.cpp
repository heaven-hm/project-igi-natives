// IGI native provenance: MathSys_Invoke16_4A927C - 0x004A927C - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A927C-MathSys_Invoke16_4A927C.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MathSys_Invoke16_4A927C.h"

long double __stdcall MathSys_Invoke16_4A927C(long double arg1, float arg2)

{
    int32_t eax_1 = arg2 & 0x7f800000;

    if (eax_1 == 0x7f800000)
        return arg1 / arg2;

    bool c0;
    bool c1;
    bool c2;
    bool c3;
    eax_1 = (c0 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9 | (c2 ? 1 : 0) << 0xa | (c3 ? 1 : 0) << 0xe;
    return Camera_ApplyHandiCam_16(arg2, arg1);
}
