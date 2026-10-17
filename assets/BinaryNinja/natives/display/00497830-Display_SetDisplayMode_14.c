// Original IGI.EXE function: Display_SetDisplayMode_14 (VA 0x00497830; static CFG gate FAIL, CFG score 0.667).
#include "Display_SetDisplayMode_14.h"
void Display_SetDisplayMode_14(void** a1)

{
    for (void** i = a1; i; i = *i)
    {
        int32_t valA = i[1];

        if (valA != 0xffffffff)
            (*((valA << 2) + &g_a94e84))(i);
    }
}
