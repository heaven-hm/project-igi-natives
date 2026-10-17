// Original IGI.EXE function: SoundSys_PlaySoundSample_13 (VA 0x004E8780; static CFG gate FAIL, CFG score 0.667).
#include "SoundSys_PlaySoundSample_13.h"
void* SoundSys_PlaySoundSample_13(void* context)

{
    *(context + 0xb8) = 0xffffffff;
    *(context + 0xbc) = 0xffffffff;
    *(context + 0xc0) = 0xffffffff;
    memset(context + 0x88, 0, 0x30);
    *(context + 0xc4) = 0x3f800000;
    *(context + 0xc8) = 0x3f800000;
    *(context + 0xcc) = 0x3f800000;
    *(context + 0xd0) = 0;
    *(context + 0xd4) = 0x3f800000;
    *(context + 0xd8) = 0x3f800000;
    *(context + 0x124) = 0xbf800000;
    *(context + 0xdc) = 0;
    *(context + 0xdd) = 0;
    *(context + 0xdf) = 0;
    *(context + 0xff) = 0;
    *(context + 0x128) = 0;
    *(context + 0x12c) = 0;
    return context;
}
