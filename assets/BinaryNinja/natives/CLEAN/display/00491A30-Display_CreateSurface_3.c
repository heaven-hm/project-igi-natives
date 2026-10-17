// IGI native provenance: Display_CreateSurface_3 - 0x00491A30 - CFG score 83.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00491A30-Display_CreateSurface_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_CreateSurface_3.h"
int32_t Display_CreateSurface_3()

{
    char result = g_5ca02d;

    if (result)
        result = (*((Display_SetGammaRamp_5() << 2) + &g_a94e84))(0);

    return result;
}
