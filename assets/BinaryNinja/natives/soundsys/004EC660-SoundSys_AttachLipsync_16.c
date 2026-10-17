// Original IGI.EXE function: SoundSys_AttachLipsync_16 (VA 0x004EC660; static CFG gate FAIL, CFG score 0.667).
#include "SoundSys_AttachLipsync_16.h"
void* SoundSys_AttachLipsync_16(void* context)

{
    memset(context + 0x18, 0, 0x3c);
    *(context + 8) = 0;
    *(context + 0x5c) = 0;
    *(context + 0x60) = 0;
    return context;
}
