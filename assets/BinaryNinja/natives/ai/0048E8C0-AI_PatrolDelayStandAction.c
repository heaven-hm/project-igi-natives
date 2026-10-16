#include "AI_PatrolDelayStandAction.h"

int32_t* AI_PatrolDelayStandAction(int32_t pThis, void* param)

{
    void* ebx = *(param + 0x28);
    AI_AlertAllies_3(pThis);
    *(param + 0x18) = Patrol_Tick;
    *(param + 0x20) = 0x48eb30;
    int32_t eax = *(pThis + 0x1514);
    *(pThis + 0x1514) = eax + 1;
    return PatrolCursor_Start(pThis + eax * 0x1c + 0x1518, *(ebx + 8), *(ebx + 0xc));
}
