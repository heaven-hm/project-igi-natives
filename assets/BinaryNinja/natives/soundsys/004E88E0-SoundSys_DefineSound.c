// Original IGI.EXE function: SoundSys_DefineSound (VA 0x004E88E0; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_DefineSound.h"

void* SoundSys_DefineSound(void* pThis)

{
    void* result = pThis;

    if (!*(result + 0xdd))
        result = SoundSys_PlaySoundSample_8(result);

    return result;
}
