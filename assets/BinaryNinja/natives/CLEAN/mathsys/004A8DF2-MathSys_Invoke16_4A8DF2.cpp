// IGI native provenance: MathSys_Invoke16_4A8DF2 - 0x004A8DF2 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A8DF2-MathSys_Invoke16_4A8DF2.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MathSys_Invoke16_4A8DF2.h"

int32_t MathSys_Invoke16_4A8DF2(long double arg1, int80_t arg2) __location("st0")

{
    return_address = arg2;
    int16_t x87control;
    return Camera_ApplyLineFilter_16(x87control, return_address, arg1);
}
