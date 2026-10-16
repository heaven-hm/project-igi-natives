#include "004E5580-SoundSys_InitSoundSys_3.h"
/* 0x004e5580 SoundSys_InitSoundSys_3 full linked: callers=3 callees=0 */
int32_t sub_4e5580(void* a1, int32_t a2, int32_t a3)

{
    int32_t ebx = 0;
    ebx = *((((a3 << (*(a1 + 4) & 0x1f)) + (a2 & 0xfffffff8)) >> 3) + a1 + 0xc);
    return ebx >> (a2 & 7) & 1;
}
