// Original IGI.EXE function: Menu_TaskNew (VA 0x00418AA0; static CFG gate PASS, CFG score 1.000).
#include "Menu_TaskNew.h"

void* Menu_TaskNew(void* pThis)

{
    if (*(pThis + 0x26bd))
        *(pThis + 0x26bd) = 0;

    return pThis;
}
