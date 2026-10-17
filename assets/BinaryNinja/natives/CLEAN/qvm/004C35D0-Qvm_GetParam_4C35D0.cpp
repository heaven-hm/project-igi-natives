// IGI native provenance: Qvm_GetParam_4C35D0 - 0x004C35D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004C35D0-Qvm_GetParam_4C35D0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Qvm_GetParam_4C35D0.h"

bool* Qvm_GetParam_4C35D0(int32_t arg1, bool* arg2)

{
    *arg2 = arg1 != *(arg2 + 4);
    return arg2;
}
