// IGI native provenance: MathSys_Invoke16_4A8EF6 - 0x004A8EF6 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A8EF6-MathSys_Invoke16_4A8EF6.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MathSys_Invoke16_4A8EF6.h"

long double MathSys_Invoke16_4A8EF6(long double arg1, int80_t arg2)

{
    return_address = arg2;
    int16_t x87control;
    Camera_ApplyLineFilter_16(x87control, return_address, arg1);
    return arg1;
}
