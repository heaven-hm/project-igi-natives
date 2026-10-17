// Original IGI.EXE function: Display_CreateSurface_12 (VA 0x004974E0; static CFG gate PASS, CFG score 1.000).
#include "Display_CreateSurface_12.h"
int32_t* Display_CreateSurface_12(int32_t* a1)

{
    a1[4] = 0;
    a1[6] = 0;
    *a1 = 0x3f800000;
    a1[1] = 0x3f800000;
    a1[2] = 0;
    a1[5] = 0;
    a1[7] = 0x3ff00000;
    return a1;
}
