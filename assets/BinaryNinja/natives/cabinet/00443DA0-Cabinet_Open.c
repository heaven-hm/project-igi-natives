// Original IGI.EXE function: Cabinet_Open (VA 0x00443DA0; static CFG gate PASS, CFG score 1.000).
#include "Cabinet_Open.h"

int32_t Cabinet_Open(int32_t* pThis @ 0x8)

{
    void* eax = *pThis;
    return FX_FireBallUpdate_9(eax, eax + 0x404);
}
