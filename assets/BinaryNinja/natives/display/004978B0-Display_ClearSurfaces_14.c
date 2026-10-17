// Original IGI.EXE function: Display_ClearSurfaces_14 (VA 0x004978B0; static CFG gate PASS, CFG score 1.000).
#include "Display_ClearSurfaces_14.h"
int32_t** Display_ClearSurfaces_14(int32_t a1, int32_t* a2)

{
    int32_t objC = g_bcabe4;
    int32_t valA = a1 * 3;
    int32_t** result = objC + (valA << 2);
    *a2 = *(objC + (valA << 2));
    *result = a2;
    return result;
}
