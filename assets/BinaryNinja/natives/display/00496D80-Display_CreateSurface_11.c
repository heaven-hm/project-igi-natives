// Original IGI.EXE function: Display_CreateSurface_11 (VA 0x00496D80; static CFG gate PASS, CFG score 1.000).
#include "Display_CreateSurface_11.h"
int32_t Display_CreateSurface_11(int32_t context, void* param_2, int32_t param_3, int32_t param_4)

{
    if (param_3 <= 0)
        return param_3;

    Resource_Unpack(*(param_2 + 0x18), context, param_3 * param_4);
    return Sys_ResolveSymbol_4(*(param_2 + 0x18));
}
