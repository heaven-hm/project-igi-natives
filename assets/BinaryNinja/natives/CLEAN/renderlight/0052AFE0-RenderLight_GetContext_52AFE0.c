// IGI native provenance: RenderLight_GetContext_52AFE0 - 0x0052AFE0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0052AFE0-RenderLight_GetContext_52AFE0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "RenderLight_GetContext_52AFE0.h"

void* RenderLight_GetContext_52AFE0(void* arg1)

{
    __builtin_memset(arg1 + 0x28, 0, 0x4c);
    *(arg1 + 0x78) = 0;
    *(arg1 + 0x80) = 0;
    *(arg1 + 0x74) = 0x42c80000;
    *(arg1 + 0x7c) = 0;
    *(arg1 + 0x84) = 0;
    *(arg1 + 0x20) = 0;
    return arg1;
}
