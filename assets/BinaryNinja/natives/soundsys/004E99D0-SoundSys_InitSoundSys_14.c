// Original IGI.EXE function: SoundSys_InitSoundSys_14 (VA 0x004E99D0; static CFG gate FAIL, CFG score 0.667).
#include "SoundSys_InitSoundSys_14.h"
void* SoundSys_InitSoundSys_14(void* context)

{
    *(context + 0xb8) = 0x3f800000;
    *(context + 0xbc) = 0x3f800000;
    *(context + 0xc0) = 0x3f800000;
    *(context + 0xc8) = 0x3f800000;
    *(context + 0xcc) = 0x3f800000;
    memset(context + 0x88, 0, 0x30);
    *(context + 0xc4) = 0;
    *(context + 0x12c) = 0xbf800000;
    *(context + 0xd0) = 0xffffffff;
    *(context + 0xd4) = 0xffffffff;
    *(context + 0xd8) = 0xffffffff;
    *(context + 0xdc) = 0xffffffff;
    *(context + 0xe0) = 0;
    *(context + 0xe1) = 0;
    *(context + 0xe2) = 0;
    *(context + 0xe3) = 0;
    *(context + 0x103) = 0;
    *(context + 0x130) = 0;
    *(context + 0x134) = 0;
    return context;
}
