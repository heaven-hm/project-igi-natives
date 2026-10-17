// Original IGI.EXE function: Display_CreateSurface_6 (VA 0x00494690; static CFG gate FAIL, CFG score 0.667).
#include "Display_CreateSurface_6.h"
int32_t __stdcall Display_CreateSurface_6(void* context, void* param_2)

{
    int32_t data_val = *(context + 0xc);

    if (*(param_2 + 0xc) < data_val && *(context + 4) == 0x400 && data_val <= *(param_2 + 0x20))
        memcpy(param_2, context, 0x20);

    return 1;
}
