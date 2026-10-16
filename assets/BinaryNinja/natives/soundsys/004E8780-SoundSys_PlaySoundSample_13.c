#include "SoundSys_PlaySoundSample_13.h"
void* SoundSys_PlaySoundSample_13(void* a1)

{
    *(a1 + 0xb8) = 0xffffffff;
    *(a1 + 0xbc) = 0xffffffff;
    *(a1 + 0xc0) = 0xffffffff;
    __builtin_memset(a1 + 0x88, 0, 0x30);
    *(a1 + 0xc4) = 0x3f800000;
    *(a1 + 0xc8) = 0x3f800000;
    *(a1 + 0xcc) = 0x3f800000;
    *(a1 + 0xd0) = 0;
    *(a1 + 0xd4) = 0x3f800000;
    *(a1 + 0xd8) = 0x3f800000;
    *(a1 + 0x124) = 0xbf800000;
    *(a1 + 0xdc) = 0;
    *(a1 + 0xdd) = 0;
    *(a1 + 0xdf) = 0;
    *(a1 + 0xff) = 0;
    *(a1 + 0x128) = 0;
    *(a1 + 0x12c) = 0;
    return a1;
}
