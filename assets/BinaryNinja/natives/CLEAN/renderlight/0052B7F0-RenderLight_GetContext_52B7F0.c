// IGI native provenance: RenderLight_GetContext_52B7F0 - 0x0052B7F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0052B7F0-RenderLight_GetContext_52B7F0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "RenderLight_GetContext_52B7F0.h"

void* RenderLight_GetContext_52B7F0(void* arg1)

{
    __builtin_memset(arg1 + 0x20, 0, 0x48);
    *(arg1 + 0x68) = 0xc;
    *(arg1 + 0x6c) = 0x10;
    *(arg1 + 0x70) = 0;
    return arg1;
}
