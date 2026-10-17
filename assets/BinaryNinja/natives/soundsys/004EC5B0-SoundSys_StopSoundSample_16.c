// Original IGI.EXE function: SoundSys_StopSoundSample_16 (VA 0x004EC5B0; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_StopSoundSample_16.h"
void* SoundSys_StopSoundSample_16(void* context, int32_t param_2)

{
    *(context + 0x58) = param_2;

    if (param_2 <= 0)
    {
        *(context + 0x54) = 0;
        return param_2;
    }

    void* data_2 = Mem_Alloc(param_2 * 0x18, 4);
    *(context + 0x54) = data_2;
    return data_2;
}
