// Original IGI.EXE function: AI_PatrolDelayStandAction (VA 0x0048E8C0; static CFG gate PASS, CFG score 1.000).
#include "AI_PatrolDelayStandAction.h"

int32_t* AI_PatrolDelayStandAction(int32_t pThis, void* param)

{
    void* base_ptr = *(param + 0x28);
    AI_AlertAllies_3(pThis);
    *(param + 0x18) = Patrol_Tick;
    *(param + 0x20) = 0x48eb30;
    int32_t result_val = *(pThis + 0x1514);
    *(pThis + 0x1514) = result_val + 1;
    return PatrolCursor_Start(pThis + result_val * 0x1c + 0x1518, *(base_ptr + 8), *(base_ptr + 0xc));
}
