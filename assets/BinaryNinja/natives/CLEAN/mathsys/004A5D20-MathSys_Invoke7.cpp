// IGI native provenance: MathSys_Invoke7 - 0x004A5D20 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A5D20-MathSys_Invoke7.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MathSys_Invoke7.h"

int32_t MathSys_Invoke7(int32_t arg1, int32_t arg2, int32_t* arg3)

{
    if (!(*(arg1 + 4) & 6))
        return 1;

    *arg3 = arg2;
    return 3;
}
