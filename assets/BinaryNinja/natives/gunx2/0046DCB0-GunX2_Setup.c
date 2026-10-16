#include "GunX2_Setup.h"

void* GunX2_Setup(void* pThis)

{
    Qhash_Init(1);
    *(pThis + 0x20) = Sys_CheckHeap_22(pThis + 0x24);
    return Qhash_Reset();
}
