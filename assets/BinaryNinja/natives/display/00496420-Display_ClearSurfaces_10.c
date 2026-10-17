// Original IGI.EXE function: Display_ClearSurfaces_10 (VA 0x00496420; static CFG gate PASS, CFG score 1.000).
#include "Display_ClearSurfaces_10.h"
int16_t* Display_ClearSurfaces_10(int16_t* context, int16_t param_2)

{
    *context = param_2;
    context[3] = 0;
    context[1] = 0;
    context[4] = 0;
    context[2] = 0;
    context[5] = 0;
    return context;
}
