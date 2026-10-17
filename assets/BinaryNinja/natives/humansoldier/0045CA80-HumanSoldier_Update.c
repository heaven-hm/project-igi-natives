// Original IGI.EXE function: HumanSoldier_Update (VA 0x0045CA80; static CFG gate PASS, CFG score 1.000).
#include "HumanSoldier_Update.h"

void* HumanSoldier_Update(void* pThis, int32_t param)

{
    if (!(*(pThis + 8) & 1))
        return pThis;

    int32_t* edx_1 = *(pThis + 4);
    *(pThis + 0xc) = *(pThis + 0x10);
    *(pThis + 0x10) = 0;
    int32_t ecx_2 = *edx_1;
    *(pThis + 0x14) = ecx_2;
    return ecx_2(pThis, param);
}
