// Original IGI.EXE function: HumanPlayer_GetTeam (VA 0x0040FD70; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_GetTeam.h"

void* HumanPlayer_GetTeam(void* pThis, int32_t param)

{
    if (!(*(pThis + 8) & 1))
        return pThis;

    int32_t edx_1 = *(pThis + 0x10);
    *(pThis + 0x10) = 1;
    void* ecx_1 = *(pThis + 4);
    *(pThis + 0xc) = edx_1;
    int32_t ecx_2 = *(ecx_1 + 4);
    *(pThis + 0x14) = ecx_2;
    return ecx_2(pThis, param);
}
