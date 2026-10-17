// Original IGI.EXE function: MenuItem_MoveUp (VA 0x00505A60; static CFG gate PASS, CFG score 1.000).
#include "MenuItem_MoveUp.h"

void* MenuItem_MoveUp(void* pThis, void* param)

{
    if (*(pThis + 0x4e))
        *(param + 4) = pThis;

    return pThis;
}
