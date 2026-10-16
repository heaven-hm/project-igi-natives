#include "HumanPlayer_SetTeam.h"

void HumanPlayer_SetTeam(void* pThis, void* param)

{
    if (*(param + 0x2fc) == 0x2d)
        return;

    *(param + 0x4d0) = 1;
    int32_t esi_1 = *(pThis + 0x10);
    *(pThis + 0x10) = 1;
    void* ecx_1 = *(pThis + 4);
    *(pThis + 0xc) = esi_1;
    int32_t ecx_2 = *(ecx_1 + 4);
    *(pThis + 0x14) = ecx_2;
    ecx_2(pThis, param);
}
