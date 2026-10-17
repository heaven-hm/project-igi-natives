// Original IGI.EXE function: SmoothQTask_Create (VA 0x0051EE80; static CFG gate PASS, CFG score 1.000).
#include "SmoothQTask_Create.h"

void* SmoothQTask_Create(void* pThis)

{
    *(pThis + 0x20) = data_bc79f0;
    *(pThis + 0x24) = data_bc79e8;
    *(pThis + 0x28) = data_bc79ec;
    *(pThis + 0x2c) = data_bc79ed;
    return pThis;
}
