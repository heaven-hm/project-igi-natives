// IGI native provenance: Qvm_GetContext_4BEC70 - 0x004BEC70 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004BEC70-Qvm_GetContext_4BEC70.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Qvm_GetContext_4BEC70.h"

void* Qvm_GetContext_4BEC70(void* arg1)

{
    *(arg1 + 0x14) += 1;
    return arg1;
}
