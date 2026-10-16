#include "SoundSys_StopSoundSample_13.h"
int32_t* SoundSys_StopSoundSample_13(void* a1)

{
    *(a1 + 0x20) = 0;
    *(a1 + 0x24) = 0;
    *(a1 + 0x28) = 0;
    *(a1 + 0x2c) = 0xff;
    return Display_SyncVSync_13(a1 + 0x30, 1);
}
