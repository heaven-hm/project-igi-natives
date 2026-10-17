// Original IGI.EXE function: HumanAI_ProcessAnimFrame (VA 0x0045C700; static CFG gate PASS, CFG score 1.000).
#include "HumanAI_ProcessAnimFrame.h"

void* HumanAI_ProcessAnimFrame(void* pThis, void* param)

{
    *(param + 0x20) = *(param + 0xd38) + *(param + 0x20);
    *(param + 0x28) = *(param + 0xd40) + *(param + 0x28);
    *(param + 0x30) = *(param + 0xd48) + *(param + 0x30);

    if (*(pThis + 8) & 1)
        *(pThis + 0x14) = HumanAI_CompleteAnimation;

    return pThis;
}
