// IGI native provenance: MathSys_Invoke17 - 0x004A9A1F - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A9A1F-MathSys_Invoke17.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MathSys_Invoke17.h"

int32_t MathSys_Invoke17() __location("st0")

{
    int16_t x87control;
    long double x87_r0;
    long double x87_r1;
    return Camera_SetFieldOfView_17(x87control, x87_r0, x87_r1);
}
