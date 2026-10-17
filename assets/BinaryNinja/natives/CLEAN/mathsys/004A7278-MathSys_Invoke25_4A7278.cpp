// IGI native provenance: MathSys_Invoke25_4A7278 - 0x004A7278 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A7278-MathSys_Invoke25_4A7278.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MathSys_Invoke25_4A7278.h"

int32_t MathSys_Invoke25_4A7278(double* arg1)

{
    long double x87_r7 = *arg1;
    long double temp0 = 0.0f;
    x87_r7 - temp0;

    if (TEST_BITB(
            *(&((x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
                | (x87_r7 == temp0 ? 1 : 0) << 0xe) + 1),
            0))
        return 0;

    return 1;
}
