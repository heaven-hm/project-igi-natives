// IGI native provenance: MathSys_Invoke16_4A9242 - 0x004A9242 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A9242-MathSys_Invoke16_4A9242.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MathSys_Invoke16_4A9242.h"

int32_t MathSys_Invoke16_4A9242(long double arg1, int80_t arg2)

{
    return_address = arg2;
    int32_t result;
    int16_t x87control;
    int80_t st0;
    st0 = Camera_ApplyLineFilter_16(x87control, return_address, arg1);
    return result;
}
