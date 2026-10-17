// IGI native provenance: ExplosionObj_GetContext_43C2B0 - 0x0043C2B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0043C2B0-ExplosionObj_GetContext_43C2B0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ExplosionObj_GetContext_43C2B0.h"

void* ExplosionObj_GetContext_43C2B0(void* arg1, void* arg2)

{
    *(arg1 + 0x13c) = *(arg2 + 4) + *(arg1 + 0x13c);
    return arg1;
}
