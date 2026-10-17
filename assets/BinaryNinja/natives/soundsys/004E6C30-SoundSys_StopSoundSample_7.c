// Original IGI.EXE function: SoundSys_StopSoundSample_7 (VA 0x004E6C30; static CFG gate FAIL, CFG score 0.667).
#include "SoundSys_StopSoundSample_7.h"
int32_t SoundSys_StopSoundSample_7(void* a1, int32_t a2)

{
    int32_t valA = 0;
    int32_t tmpD = 0;
    valA = g_548816;
    tmpD = *(a1 + 0x1c);
    return (*(((valA * 0x180 + tmpD) << 2) + &g_a96ae0))(a1, a2);
}
