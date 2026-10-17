// Original IGI.EXE function: SoundSys_StopSoundSample_13 (VA 0x004E9090; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_StopSoundSample_13.h"
int32_t* SoundSys_StopSoundSample_13(void* context)

{
    *(context + 0x20) = 0;
    *(context + 0x24) = 0;
    *(context + 0x28) = 0;
    *(context + 0x2c) = 0xff;
    return Display_SyncVSync_13(context + 0x30, 1);
}
