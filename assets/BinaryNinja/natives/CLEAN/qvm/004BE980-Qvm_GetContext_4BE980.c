// IGI native provenance: Qvm_GetContext_4BE980 - 0x004BE980 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004BE980-Qvm_GetContext_4BE980.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Qvm_GetContext_4BE980.h"

int32_t* Qvm_GetContext_4BE980(int32_t* arg1)

{
    int32_t context_val = arg1[5];
    arg1[5] = context_val + *(*arg1 + context_val + 1) + 5;
    return arg1;
}
