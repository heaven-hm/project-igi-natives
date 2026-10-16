#include "Cabinet_Open.h"

int32_t Cabinet_Open(int32_t* pThis @ 0x8)

{
    void* eax = *pThis;
    return FX_FireBallUpdate_9(eax, eax + 0x404);
}
