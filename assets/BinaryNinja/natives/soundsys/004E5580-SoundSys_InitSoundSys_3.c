#include "SoundSys_InitSoundSys_3.h"
int32_t SoundSys_InitSoundSys_3(void* a1, int32_t a2, int32_t a3)

{
    int32_t ctxB = 0;
    ctxB = *((((a3 << (*(a1 + 4) & 0x1f)) + (a2 & 0xfffffff8)) >> 3) + a1 + 0xc);
    return ctxB >> (a2 & 7) & 1;
}
