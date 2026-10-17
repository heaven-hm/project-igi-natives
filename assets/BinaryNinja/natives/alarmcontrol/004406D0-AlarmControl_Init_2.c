// Original IGI.EXE function: AlarmControl_Init_2 (VA 0x004406D0; static CFG gate PASS, CFG score 1.000).
#include "AlarmControl_Init_2.h"

int32_t AlarmControl_Init_2(int32_t* pThis @ 0x8)

{
    void* esi = *pThis;
    return FX_FireBallUpdate_9(esi, esi + 0x494);
}
