// IGI native provenance: Display_SetDisplayMode_4 - 0x00491CC0 - CFG score 83.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00491CC0-Display_SetDisplayMode_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_SetDisplayMode_4.h"
int32_t Display_SetDisplayMode_4()

{
    char result = g_5ca02d;

    if (result)
        result = (*((Display_CheckCapabilities_5() << 2) + &g_a94e84))(0);

    g_c10380 += 1;
    return result;
}
