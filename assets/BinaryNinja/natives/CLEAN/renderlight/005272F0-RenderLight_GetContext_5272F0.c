// IGI native provenance: RenderLight_GetContext_5272F0 - 0x005272F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 005272F0-RenderLight_GetContext_5272F0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "RenderLight_GetContext_5272F0.h"

void* RenderLight_GetContext_5272F0(void* arg1)

{
    *(arg1 + 0x34) = 0x3f800000;
    *(arg1 + 0x38) = 0x3f800000;
    *(arg1 + 0x3c) = 0x3f800000;
    __builtin_memset(arg1 + 0x40, 0, 0x14);
    *(arg1 + 0x28) = 0;
    *(arg1 + 0x2c) = 0;
    *(arg1 + 0x30) = 0x3f800000;
    return arg1;
}
