#include "gi_platform.h"
#include "004E75C0-SoundSys_LoadSoundDef_9.h"
void* SoundSys_LoadSoundDef_9(void* a1, int32_t a2, int32_t a3)

{
    (*(int32_t*)(uintptr_t)(a1 + 0x18)) = a2;
    (*(int32_t*)(uintptr_t)(a1 + 0x1c)) = a3;
    return a1;
}
