#include "AlarmControl_Init_2.h"

int32_t AlarmControl_Init_2(int32_t* pThis @ 0x8)

{
    void* esi = *pThis;
    return FX_FireBallUpdate_9(esi, esi + 0x494);
}
