// IGI native provenance: MathSys_Invoke16_4A919E - 0x004A919E - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A919E-MathSys_Invoke16_4A919E.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MathSys_Invoke16_4A919E.h"

int32_t MathSys_Invoke16_4A919E(long double arg1, int80_t arg2)

{
    return_address = arg2;
    int32_t result;
    int16_t x87control;
    int80_t st0;
    st0 = Camera_ApplyLineFilter_16(x87control, return_address, arg1);
    return result;
}
