// Original IGI.EXE function: HumanPlayer_LoadParameters_14 (VA 0x00413730; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_LoadParameters_14.h"

int32_t HumanPlayer_LoadParameters_14(void* pThis, float param)

{
    *(param + 0xc) = pThis + 0x20;
    *(param + 0x10) = pThis + 0x78;
    *(param + 0x14) = *(pThis + 0xa0);
    *(param + 0x1c) = 2;
    *(param + 0x20) = 3;
    return AI_UpdateOrders_25(param);
}
