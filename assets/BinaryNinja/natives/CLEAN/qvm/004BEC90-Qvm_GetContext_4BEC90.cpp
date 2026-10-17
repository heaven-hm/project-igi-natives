// IGI native provenance: Qvm_GetContext_4BEC90 - 0x004BEC90 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004BEC90-Qvm_GetContext_4BEC90.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Qvm_GetContext_4BEC90.h"

void* Qvm_GetContext_4BEC90(void* arg1)

{
    int32_t context_val = *(arg1 + 0x14);
    *(arg1 + 0x20) = 5;
    *(arg1 + 0x10) = context_val;
    return arg1;
}
