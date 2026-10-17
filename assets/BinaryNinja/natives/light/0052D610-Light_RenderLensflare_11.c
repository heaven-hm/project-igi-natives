// IGI native provenance: Light_RenderLensflare_11 - 0x0052D610 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0052D610-Light_RenderLensflare_11.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Light_RenderLensflare_11.h"
int32_t Light_RenderLensflare_11(void* context, char* param_2)

{
    int32_t item_4 = *(context + 0x18);
    return Game_DataSymbolLoad(param_2, "%04d");
}
