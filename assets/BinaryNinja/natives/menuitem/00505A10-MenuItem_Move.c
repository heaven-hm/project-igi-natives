// Original IGI.EXE function: MenuItem_Move (VA 0x00505A10; static CFG gate PASS, CFG score 1.000).
#include "MenuItem_Move.h"

void* MenuItem_Move(void* pThis, int32_t* param)

{
    if (*(pThis + 0x38) == *param)
        param[1] = pThis;

    return pThis;
}
