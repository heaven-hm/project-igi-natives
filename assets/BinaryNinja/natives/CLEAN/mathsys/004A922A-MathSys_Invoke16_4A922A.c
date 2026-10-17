// IGI native provenance: MathSys_Invoke16_4A922A - 0x004A922A - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A922A-MathSys_Invoke16_4A922A.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MathSys_Invoke16_4A922A.h"

int32_t MathSys_Invoke16_4A922A(long double arg1, int80_t arg2)

{
    return_address = arg2;
    int32_t result;
    int16_t x87control;
    int80_t st0;
    st0 = Camera_ApplyLineFilter_16(x87control, return_address, arg1);
    return result;
}
