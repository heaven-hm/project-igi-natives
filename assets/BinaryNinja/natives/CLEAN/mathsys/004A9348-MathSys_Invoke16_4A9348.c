// IGI native provenance: MathSys_Invoke16_4A9348 - 0x004A9348 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A9348-MathSys_Invoke16_4A9348.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MathSys_Invoke16_4A9348.h"

int32_t __stdcall MathSys_Invoke16_4A9348(long double arg1, int32_t arg2) __location("st0")

{
    int32_t result_val;
    bool c0;
    bool c1;
    bool c2;
    bool c3;
    result_val = (c0 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9 | (c2 ? 1 : 0) << 0xa | (c3 ? 1 : 0) << 0xe;
    return Camera_ApplyHandiCam_16(arg2, arg1);
}
