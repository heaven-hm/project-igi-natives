// IGI native provenance: MathSys_Invoke16_4A8E4A - 0x004A8E4A - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A8E4A-MathSys_Invoke16_4A8E4A.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MathSys_Invoke16_4A8E4A.h"

int32_t MathSys_Invoke16_4A8E4A(int80_t arg1, long double arg2) __location("st0")

{
    return_address = arg1;
    int16_t x87control;
    return Camera_ApplyLineFilter_16(x87control, return_address, arg2);
}
