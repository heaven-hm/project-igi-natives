// IGI native provenance: Display_SetGammaRamp_14 - 0x004978F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004978F0-Display_SetGammaRamp_14.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_SetGammaRamp_14.h"
int32_t Display_SetGammaRamp_14(int32_t context, int32_t param_2)

{
    int32_t item_8 = context;
    int32_t item_4 = param_2;
    return Sys_AllocateMemory_3(sub_497920, &item_8);
}
