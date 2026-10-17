// Original IGI.EXE function: SoundSys_StopSoundSample_16 (VA 0x004EC5B0; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_StopSoundSample_16.h"
void* SoundSys_StopSoundSample_16(void* a1, int32_t a2)

{
    *(a1 + 0x58) = a2;

    if (a2 <= 0)
    {
        *(a1 + 0x54) = 0;
        return a2;
    }

    void* valA2 = Mem_Alloc(a2 * 0x18, 4);
    *(a1 + 0x54) = valA2;
    return valA2;
}
