// Original IGI.EXE function: MenuItem_MoveDown (VA 0x00505AB0; static CFG gate PASS, CFG score 1.000).
#include "MenuItem_MoveDown.h"

void* MenuItem_MoveDown(int32_t pThis, void* param)

{
    if (!*(param + 4))
        *(param + 4) = pThis;

    return param;
}
