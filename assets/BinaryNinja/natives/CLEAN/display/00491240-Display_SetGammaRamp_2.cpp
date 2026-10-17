// IGI native provenance: Display_SetGammaRamp_2 - 0x00491240 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00491240-Display_SetGammaRamp_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_SetGammaRamp_2.h"
void Display_SetGammaRamp_2(int32_t context, int32_t param_2, int32_t* param_3)

{
    if (param_2 >= 0 && param_2 < 4 && param_3 && context && !*(context + (param_2 << 2) + 0x1b8))
        *(context + (param_2 << 2) + 0x1b8) = Sys_DispatchOpcode_18(param_3);
}
