#include "gi_platform.h"
#include "004E8250-SoundSys_StopSoundSample_12.h"
int32_t SoundSys_StopSoundSample_12(void* a1, char a2)

{
    int32_t result = a2;
    (*(int32_t*)(uintptr_t)(a1 + 0xc0)) = result;
    return result;
}
