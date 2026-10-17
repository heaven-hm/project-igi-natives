// Original IGI.EXE function: Display_CreateSurface_11 (VA 0x00496D80; static CFG gate PASS, CFG score 1.000).
#include "Display_CreateSurface_11.h"
int32_t Display_CreateSurface_11(int32_t a1, void* a2, int32_t a3, int32_t a4)

{
    if (a3 <= 0)
        return a3;

    Resource_Unpack(*(a2 + 0x18), a1, a3 * a4);
    return Sys_ResolveSymbol_4(*(a2 + 0x18));
}
