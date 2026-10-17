// Original IGI.EXE function: SoundSys_LoadSoundDef_9 (VA 0x004E75C0; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_LoadSoundDef_9.h"
void* SoundSys_LoadSoundDef_9(void* a1, int32_t a2, int32_t a3)

{
    *(a1 + 0x18) = a2;
    *(a1 + 0x1c) = a3;
    return a1;
}
