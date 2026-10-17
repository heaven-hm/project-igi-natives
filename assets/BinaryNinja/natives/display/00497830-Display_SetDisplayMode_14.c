// Original IGI.EXE function: Display_SetDisplayMode_14 (VA 0x00497830; static CFG gate FAIL, CFG score 0.667).
#include "Display_SetDisplayMode_14.h"
void Display_SetDisplayMode_14(void** context)

{
    for (void** i = context; i; i = *i)
    {
        int32_t data_val = i[1];

        if (data_val != 0xffffffff)
            (*((data_val << 2) + &g_a94e84))(i);
    }
}
