// IGI native provenance: AIFunction_SetViewLength - 0x0044DC40 - CFG score 83.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 0044DC40-AIFunction_SetViewLength.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AIFunction_SetViewLength.h"
int32_t AIFunction_SetViewLength(long double context , int32_t param_2, float param_3 )

// Sig: void AIFunction_SetViewLength(int length)
// Note: Sets this AI's VIEW LENGTH - how far it can see. Param: length = view
// distance in engine units. Use in AI init (AIEVENT_CREATE) to buff/nerf
// vision.
{
    Profile_ValueSet(param_3, 0.0f);
    *(g_5bda58 + 0xb0) = context * 4096.0;
    void* data_val = g_5bda58;
    long double fpu_val_0_1 = *(data_val + 0xb0);
    long double f0 = *(data_val + 0xb8);
    fpu_val_0_1 - f0;

    if (!(*(&((fpu_val_0_1 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_0_1, f0) ? 1 : 0) << 0xa
        | (fpu_val_0_1 == f0 ? 1 : 0) << 0xe | 0x800) + 1) & 0x41))
    {
        *(data_val + 0xb8) = *(data_val + 0xb0);
        *(data_val + 0xbc) = *(data_val + 0xb4);
    }

    int32_t item_18 = 1;
    int32_t item_10 = 0;
    int32_t item_c = 0x3ff00000;
    char* item_8 = &g_567c74;
    memcpy(param_2, &item_18, 0x18);
    return param_2;
}
