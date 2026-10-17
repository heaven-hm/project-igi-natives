// Original IGI.EXE function: SoundSys_PlaySoundSample (VA 0x004E0810; static CFG gate FAIL, CFG score 0.667).
#include "SoundSys_PlaySoundSample.h"
int32_t SoundSys_PlaySoundSample(int32_t context, int32_t param_2)

{
    memcpy(context + 0x70, param_2, 0x28);
    return context;
}
