// IGI native provenance: MathSys_Invoke16_4A8E5A - 0x004A8E5A - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A8E5A-MathSys_Invoke16_4A8E5A.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MathSys_Invoke16_4A8E5A.h"

long double MathSys_Invoke16_4A8E5A(long double arg1, int80_t arg2)

{
    return_address = arg2;
    int16_t x87control;
    Camera_ApplyLineFilter_16(x87control, return_address, arg1);
    return arg1;
}
