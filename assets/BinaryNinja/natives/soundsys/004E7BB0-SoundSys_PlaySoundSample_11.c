// Original IGI.EXE function: SoundSys_PlaySoundSample_11 (VA 0x004E7BB0; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_PlaySoundSample_11.h"
int32_t SoundSys_PlaySoundSample_11()

{
    char result = g_a5ea75;

    if (result)
        result = SoundSys_EvaluateTrigger_9(g_a5ebd0);

    return result;
}
