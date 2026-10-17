// IGI native provenance: Display_SetBackgroundColourFn - 0x00491E70 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00491E70-Display_SetBackgroundColourFn.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_SetBackgroundColourFn.h"
uint32_t Display_SetBackgroundColourFn(char context, char param_2, char param_3)

// Sig: void Display_SetBackgroundColourFn(int8_t r, int8_t g, int8_t b)
// Note: Sets the 3D-view BACKGROUND COLOUR (clear colour) - masks each arg to a
// byte into globals 0xBCADF0/R,G,B. Params: r,g,b = 0-255 colour channels. Use
// for custom sky/clear colour effects.
{
    uint32_t result = context;
    g_bcadf0 = result;
    g_bcadf4 = param_2;
    g_bcadf8 = param_3;
    return result;
}
