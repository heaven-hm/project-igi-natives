// Original IGI.EXE function: AlarmLight_Init_2 (VA 0x00439750; static CFG gate PASS, CFG score 1.000).
#include "AlarmLight_Init_2.h"

void* AlarmLight_Init_2(void* pThis)

{
    if (*(pThis + 0x138))
        *(pThis + 0x1a8) = 1;

    return pThis;
}
