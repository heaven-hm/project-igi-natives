// Original IGI.EXE function: Display_ClearSurfaces_16 (VA 0x00498460; static CFG gate PASS, CFG score 1.000).
#include "Display_ClearSurfaces_16.h"
int32_t Display_ClearSurfaces_16(int16_t context )

{
    int16_t x87status;
    int16_t f0;
    f0 = __fnstcw_memmem16(context);
    g_6e5bc4 = f0;
    g_6e5bc4 |= 0xc00;
    int16_t fpu_control;
    int16_t x87status_1;
    fpu_control = __fldcw_memmem16(g_6e5bc4);
}
