#include "gi_platform.h"
#include "004E6CE0-SoundSys_AttachLipsync_7.h"
int32_t SoundSys_AttachLipsync_7(void* a1, char a2)

{
    int32_t tmpD = 0;
    a2 = a2;
    int32_t valA = 0;
    valA = g_54881b;
    tmpD = (*(int32_t*)(uintptr_t)(a1 + 0x1c));
    return ((int(*)())(uintptr_t)((*(int32_t*)(uintptr_t)(((valA * 0x180 + tmpD) << 2) + &g_a96ae0))))(a1, &a2);
}
