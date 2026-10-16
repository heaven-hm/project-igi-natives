#include "004E99D0-SoundSys_InitSoundSys_14.h"
/* 0x004e99d0 SoundSys_InitSoundSys_14 full linked: callers=2 callees=1 */
void* sub_4e99d0(void* a1)

{
    *(a1 + 0xb8) = 0x3f800000;
    *(a1 + 0xbc) = 0x3f800000;
    *(a1 + 0xc0) = 0x3f800000;
    *(a1 + 0xc8) = 0x3f800000;
    *(a1 + 0xcc) = 0x3f800000;
    __builtin_memset(a1 + 0x88, 0, 0x30);
    *(a1 + 0xc4) = 0;
    *(a1 + 0x12c) = 0xbf800000;
    *(a1 + 0xd0) = 0xffffffff;
    *(a1 + 0xd4) = 0xffffffff;
    *(a1 + 0xd8) = 0xffffffff;
    *(a1 + 0xdc) = 0xffffffff;
    *(a1 + 0xe0) = 0;
    *(a1 + 0xe1) = 0;
    *(a1 + 0xe2) = 0;
    *(a1 + 0xe3) = 0;
    *(a1 + 0x103) = 0;
    *(a1 + 0x130) = 0;
    *(a1 + 0x134) = 0;
    return a1;
}
