// IGI native provenance: MathSys_Invoke16_4A8F0E - 0x004A8F0E - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A8F0E-MathSys_Invoke16_4A8F0E.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MathSys_Invoke16_4A8F0E.h"

int32_t MathSys_Invoke16_4A8F0E(long double arg1, int80_t arg2, int80_t arg3) __location("st0")

{
    return_address = arg3;
    int16_t x87control;
    Camera_ApplyLineFilter_16(x87control, return_address, arg1);
    return arg2;
}
