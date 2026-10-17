// IGI native provenance: AIFunction_SetSecondaryViewGamma - 0x0044DF40 - CFG score 83.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 0044DF40-AIFunction_SetSecondaryViewGamma.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AIFunction_SetSecondaryViewGamma.h"
int32_t AIFunction_SetSecondaryViewGamma(long double context , int32_t param_2, float param_3 )

// Sig: void AIFunction_SetSecondaryViewGamma(int gamma)
// Note: Sets secondary-view gamma shaping factor. Param: gamma = engine factor.
{
    Profile_ValueSet(param_3, 0.0f);
    *(g_5bda58 + 0xc8) = context * 0.0174532924f;
    int32_t item_18 = 1;
    int32_t item_10 = 0;
    int32_t item_c = 0x3ff00000;
    char* item_8 = &g_567c74;
    memcpy(param_2, &item_18, 0x18);
    return param_2;
}
