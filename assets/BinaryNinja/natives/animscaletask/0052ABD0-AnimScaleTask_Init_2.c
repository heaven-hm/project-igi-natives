// Original IGI.EXE function: AnimScaleTask_Init_2 (VA 0x0052ABD0; static CFG gate PASS, CFG score 1.000).
#include "AnimScaleTask_Init_2.h"

int32_t AnimScaleTask_Init_2(int32_t* pThis )

{
    int32_t result = *pThis;

    if (result >= 0 && result < 0x16)
    {
        pThis[1] = (result << 4) + 0x54f4a0;
        return (result << 4) + 0x54f4a0;
    }

    pThis[1] = 0;
    return result;
}
