// Original IGI.EXE function: Display_ClearSurfaces_10 (VA 0x00496420; static CFG gate PASS, CFG score 1.000).
#include "Display_ClearSurfaces_10.h"
int16_t* Display_ClearSurfaces_10(int16_t* a1, int16_t a2)

{
    *a1 = a2;
    a1[3] = 0;
    a1[1] = 0;
    a1[4] = 0;
    a1[2] = 0;
    a1[5] = 0;
    return a1;
}
