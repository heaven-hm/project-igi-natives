// Original IGI.EXE function: Display_CloseDevice_6 (VA 0x00491EF0; static CFG gate PASS, CFG score 1.000).
#include "Display_CloseDevice_6.h"
HRESULT Display_CloseDevice_6(int32_t context)

{
    return DirectDrawEnumerateExA(Display_SetDisplayMode_6, context, 7);
}
