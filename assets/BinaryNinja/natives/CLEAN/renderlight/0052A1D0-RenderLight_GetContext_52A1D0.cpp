// IGI native provenance: RenderLight_GetContext_52A1D0 - 0x0052A1D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0052A1D0-RenderLight_GetContext_52A1D0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "RenderLight_GetContext_52A1D0.h"

int32_t RenderLight_GetContext_52A1D0(int32_t arg1, int32_t* arg2)

{
    __builtin_memcpy(*arg2, arg1 + 0x100, 0xa8);
    return arg1;
}
