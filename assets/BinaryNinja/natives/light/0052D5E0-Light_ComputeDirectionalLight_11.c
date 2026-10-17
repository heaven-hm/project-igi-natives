// IGI native provenance: Light_ComputeDirectionalLight_11 - 0x0052D5E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0052D5E0-Light_ComputeDirectionalLight_11.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Light_ComputeDirectionalLight_11.h"
int32_t Light_ComputeDirectionalLight_11(void* context, char* param_2)

{
    int32_t item_4 = *(context + 0x14);
    int32_t item_8 = *(context + 0x10);
    int32_t item_c = *(context + 0xc);
    return Game_DataSymbolLoad(param_2, "%02d-%02d-%02d");
}
