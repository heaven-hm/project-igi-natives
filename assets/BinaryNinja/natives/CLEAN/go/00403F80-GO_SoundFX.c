// IGI native provenance: GO_SoundFX - 0x00403F80 - CFG score 88.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 00403F80-GO_SoundFX.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "GO_SoundFX.h"
int32_t GO_SoundFX(long double context , int32_t param_2, float param_3 )

// Sig: int GO_SoundFX(float volume)
// Note: Sets sound-effects volume for the current profile. Param: volume =
// float 0.0-1.0. Use in config scripts. Returns 1.
{
    char data_val = Script_GetArg(param_3, 0);
    int32_t temp_val = g_bc2380;
    float item_2c = 1.40129846e-45.0f;
    float item_30 = param_3;
    *(temp_val * 0x564 + &g_bc2054) = data_val;
    Profile_ValueSet(item_30, item_2c);
    int32_t entity_5 = g_bc2380;
    int32_t item_18 = 0;
    int32_t item_10 = 0;
    int32_t item_c = 0;
    char* item_8 = &g_567c74;
    *(entity_5 * 0x564 + &g_bc2048) = context;
    memcpy(param_2, &item_18, 0x18);
    return param_2;
}
