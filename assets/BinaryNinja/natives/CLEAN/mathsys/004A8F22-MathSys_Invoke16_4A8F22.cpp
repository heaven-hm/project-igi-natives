// IGI native provenance: MathSys_Invoke16_4A8F22 - 0x004A8F22 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A8F22-MathSys_Invoke16_4A8F22.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MathSys_Invoke16_4A8F22.h"

int32_t MathSys_Invoke16_4A8F22(long double arg1, int80_t arg2) __location("st0")

{
    return_address = arg2;
    int16_t x87control;
    return Camera_ApplyLineFilter_16(x87control, return_address, arg1);
}
