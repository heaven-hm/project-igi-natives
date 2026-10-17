// IGI native provenance: DisplayRender_GetContext_49FAF0 - 0x0049FAF0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0049FAF0-DisplayRender_GetContext_49FAF0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DisplayRender_GetContext_49FAF0.h"

void* DisplayRender_GetContext_49FAF0(void* arg1)

{
    int32_t data_val = *(arg1 + 0xc);
    *(arg1 + 0x10) = *(arg1 + 8);
    *(arg1 + 0x14) = data_val;
    return arg1;
}
