// Original IGI.EXE function: GunX2_Open (VA 0x0046DC20; static CFG gate PASS, CFG score 1.000).
#include "GunX2_Open.h"

void* GunX2_Open(void* pThis)

{
    *(pThis + 0x20) = 0;
    *(pThis + 0x24) = 0;
    *(pThis + 0x44) = 0;
    return pThis;
}
