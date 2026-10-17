// IGI native provenance: Qvm_GetContext_4BEC80 - 0x004BEC80 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004BEC80-Qvm_GetContext_4BEC80.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Qvm_GetContext_4BEC80.h"

void* Qvm_GetContext_4BEC80(void* arg1)

{
    *(arg1 + 0x2c) = 1;
    return arg1;
}
