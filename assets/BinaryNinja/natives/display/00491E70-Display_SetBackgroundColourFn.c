#include "Display_SetBackgroundColourFn.h"
uint32_t Display_SetBackgroundColourFn(char a1, char a2, char a3)

// Sig: void Display_SetBackgroundColourFn(int8_t r, int8_t g, int8_t b)
// Note: Sets the 3D-view BACKGROUND COLOUR (clear colour) - masks each arg to a
// byte into globals 0xBCADF0/R,G,B. Params: r,g,b = 0-255 colour channels. Use
// for custom sky/clear colour effects.
{
    uint32_t result = a1;
    g_bcadf0 = result;
    g_bcadf4 = a2;
    g_bcadf8 = a3;
    return result;
}
