// IGI native provenance: Display_SwapBuffers_4 - 0x00491D20 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00491D20-Display_SwapBuffers_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_SwapBuffers_4.h"
int32_t Display_SwapBuffers_4()

{
    Display_SetGammaRamp_13();
    return Display_CloseDevice_4(g_bcadfc);
}
