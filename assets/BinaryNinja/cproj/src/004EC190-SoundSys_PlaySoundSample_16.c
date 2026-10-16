#include "gi_platform.h"
#include "004EC190-SoundSys_PlaySoundSample_16.h"
int32_t SoundSys_PlaySoundSample_16(int32_t* a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6)

{
    *a1 = a2;
    a1[1] = a3;
    a1[2] = 0;
    a1[3] = 0xffffffff;
    a1[4] = a4;
    a1[5] = (*(int32_t*)(uintptr_t)(a3 + (a4 << 2)));
    a1[6] = a5;
    a1[8] = a6;
    a1[7] = 0xffffffff;
    __builtin_memset(&a1[9], 0, 0x28);
    return 0;
}
