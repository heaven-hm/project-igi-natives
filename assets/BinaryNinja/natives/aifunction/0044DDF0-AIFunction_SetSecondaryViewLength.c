// IGI native provenance: AIFunction_SetSecondaryViewLength - 0x0044DDF0 - CFG score 83.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 0044DDF0-AIFunction_SetSecondaryViewLength.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AIFunction_SetSecondaryViewLength.h"
int32_t AIFunction_SetSecondaryViewLength(long double context , int32_t param_2, float param_3 )

// Sig: void AIFunction_SetSecondaryViewLength(int length)
// Note: Sets SECONDARY view length (peripheral/short-range channel). Param:
// length = distance in engine units.
{
    Profile_ValueSet(param_3, 0.0f);
    *(g_5bda58 + 0xd0) = context * 4096.0;
    void* data_val = g_5bda58;
    long double fpu_val_0_1 = *(data_val + 0xd0);
    long double f0 = *(data_val + 0xd8);
    fpu_val_0_1 - f0;

    if (!(*(&((fpu_val_0_1 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_0_1, f0) ? 1 : 0) << 0xa
        | (fpu_val_0_1 == f0 ? 1 : 0) << 0xe | 0x800) + 1) & 0x41))
    {
        *(data_val + 0xd8) = *(data_val + 0xd0);
        *(data_val + 0xdc) = *(data_val + 0xd4);
    }

    int32_t item_18 = 1;
    int32_t item_10 = 0;
    int32_t item_c = 0x3ff00000;
    char* item_8 = &g_567c74;
    memcpy(param_2, &item_18, 0x18);
    return param_2;
}
