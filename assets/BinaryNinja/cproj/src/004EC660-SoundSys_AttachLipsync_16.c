#include "gi_platform.h"
#include "004EC660-SoundSys_AttachLipsync_16.h"
void* SoundSys_AttachLipsync_16(void* a1)

{
    __builtin_memset(a1 + 0x18, 0, 0x3c);
    (*(int32_t*)(uintptr_t)(a1 + 8)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x5c)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x60)) = 0;
    return a1;
}
