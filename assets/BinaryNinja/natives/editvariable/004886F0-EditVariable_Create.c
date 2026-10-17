// Original IGI.EXE function: EditVariable_Create (VA 0x004886F0; static CFG gate PASS, CFG score 1.000).
#include "EditVariable_Create.h"

void* EditVariable_Create(void* pThis)

{
    *(pThis + 0x20) = 0;
    return pThis;
}
