// IGI native provenance: MathSys_Invoke16_4A8EE2 - 0x004A8EE2 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A8EE2-MathSys_Invoke16_4A8EE2.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MathSys_Invoke16_4A8EE2.h"

int32_t MathSys_Invoke16_4A8EE2(int80_t arg1, int80_t arg2, long double arg3) __location("st0")

{
    return_address = arg1;
    int16_t x87control;
    Camera_ApplyLineFilter_16(x87control, return_address, arg3);
    return arg2;
}
