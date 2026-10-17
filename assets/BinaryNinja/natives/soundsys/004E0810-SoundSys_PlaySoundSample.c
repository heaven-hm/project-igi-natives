// Original IGI.EXE function: SoundSys_PlaySoundSample (VA 0x004E0810; static CFG gate FAIL, CFG score 0.667).
#include "SoundSys_PlaySoundSample.h"
int32_t SoundSys_PlaySoundSample(int32_t a1, int32_t a2)

{
    memcpy(a1 + 0x70, a2, 0x28);
    return a1;
}
