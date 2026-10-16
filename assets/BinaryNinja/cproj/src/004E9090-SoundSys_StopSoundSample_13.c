#include "gi_platform.h"
#include "004E9090-SoundSys_StopSoundSample_13.h"
int32_t* SoundSys_StopSoundSample_13(void* a1)

{
    (*(int32_t*)(uintptr_t)(a1 + 0x20)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x24)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x28)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x2c)) = 0xff;
    return Display_SyncVSync_13(a1 + 0x30, 1);
}
