// IGI native provenance: RenderLight_GetContext_528FF0 - 0x00528FF0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00528FF0-RenderLight_GetContext_528FF0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "RenderLight_GetContext_528FF0.h"

void* RenderLight_GetContext_528FF0(void* arg1)

{
    *(arg1 + 0xd4) = 0;
    *(arg1 + 0x19f) = 0;
    return arg1;
}
