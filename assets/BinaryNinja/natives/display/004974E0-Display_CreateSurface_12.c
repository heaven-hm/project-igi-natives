// Original IGI.EXE function: Display_CreateSurface_12 (VA 0x004974E0; static CFG gate PASS, CFG score 1.000).
#include "Display_CreateSurface_12.h"
int32_t* Display_CreateSurface_12(int32_t* context)

{
    context[4] = 0;
    context[6] = 0;
    *context = 0x3f800000;
    context[1] = 0x3f800000;
    context[2] = 0;
    context[5] = 0;
    context[7] = 0x3ff00000;
    return context;
}
