// IGI native provenance: MathSys_Invoke16_4A90CE - 0x004A90CE - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A90CE-MathSys_Invoke16_4A90CE.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MathSys_Invoke16_4A90CE.h"

int32_t MathSys_Invoke16_4A90CE(int80_t arg1, long double arg2)

{
    return_address = arg1;
    int32_t result;
    int16_t x87control;
    int80_t st0;
    st0 = Camera_ApplyLineFilter_16(x87control, return_address, arg2);
    return result;
}
