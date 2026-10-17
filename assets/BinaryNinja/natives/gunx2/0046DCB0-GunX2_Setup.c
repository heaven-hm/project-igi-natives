// Original IGI.EXE function: GunX2_Setup (VA 0x0046DCB0; static CFG gate PASS, CFG score 1.000).
#include "GunX2_Setup.h"

void* GunX2_Setup(void* pThis)

{
    Qhash_Init(1);
    *(pThis + 0x20) = Sys_CheckHeap_22(pThis + 0x24);
    return Qhash_Reset();
}
