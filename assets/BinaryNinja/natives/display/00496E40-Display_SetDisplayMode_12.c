// Original IGI.EXE function: Display_SetDisplayMode_12 (VA 0x00496E40; static CFG gate PASS, CFG score 1.000).
#include "Display_SetDisplayMode_12.h"
int32_t Display_SetDisplayMode_12(void* a1)

{
    char result = g_6840e9;

    if (!result)
        return result;

    int32_t* valA1 = *(a1 + 0x10);
    return (*(*valA1 + 0x48))(valA1);
}
