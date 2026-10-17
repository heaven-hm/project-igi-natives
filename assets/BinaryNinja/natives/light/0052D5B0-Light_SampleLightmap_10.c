// IGI native provenance: Light_SampleLightmap_10 - 0x0052D5B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0052D5B0-Light_SampleLightmap_10.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Light_SampleLightmap_10.h"
int32_t Light_SampleLightmap_10(int32_t* context, char* param_2)

{
    int32_t item_4 = context[2];
    int32_t item_8 = context[1];
    int32_t item_c = *context;
    return Game_DataSymbolLoad(param_2, "%04d-%02d-%02d");
}
