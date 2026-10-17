// IGI native provenance: GO_GfxGamma - 0x00404080 - CFG score 83.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00404080-GO_GfxGamma.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "GO_GfxGamma.h"
int32_t GO_GfxGamma(long double context , int32_t param_2, float param_3 )

// Sig: int GO_GfxGamma(float gamma)
// Note: Sets gamma for the current profile. Param: gamma = float, retail
// default 1.0 (range ~0.5-3.0 clamped elsewhere). Use in config scripts.
// Returns 1.
{
    Profile_ValueSet(param_3, 0.0f);
    int32_t entity_val = g_bc2380;
    int32_t item_18 = 0;
    int32_t item_10 = 0;
    int32_t item_c = 0;
    char* item_8 = &g_567c74;
    *(entity_val * 0x564 + &g_bc2044) = context;
    memcpy(param_2, &item_18, 0x18);
    return param_2;
}
