// Original IGI.EXE function: Display_CreateSurface_6 (VA 0x00494690; static CFG gate FAIL, CFG score 0.667).
#include "Display_CreateSurface_6.h"
int32_t __stdcall Display_CreateSurface_6(void* a1, void* a2)

{
    int32_t valA = *(a1 + 0xc);

    if (*(a2 + 0xc) < valA && *(a1 + 4) == 0x400 && valA <= *(a2 + 0x20))
        memcpy(a2, a1, 0x20);

    return 1;
}
