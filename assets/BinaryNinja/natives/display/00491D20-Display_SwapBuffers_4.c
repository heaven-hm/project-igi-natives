// Original IGI.EXE function: Display_SwapBuffers_4 (VA 0x00491D20; static CFG gate PASS, CFG score 1.000).
#include "Display_SwapBuffers_4.h"
int32_t Display_SwapBuffers_4()

{
    Display_SetGammaRamp_13();
    return Display_CloseDevice_4(g_bcadfc);
}
