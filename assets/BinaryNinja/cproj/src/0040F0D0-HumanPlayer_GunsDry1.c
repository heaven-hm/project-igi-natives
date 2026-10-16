#include "gi_platform.h"
#include "0040F0D0-HumanPlayer_GunsDry1.h"
struct status_msg* HumanPlayer_GunsDry1(void* a1, void* a2)

{
    HumanPlayer_CheckCollision_9(a2, 1.40129846e-45.0f);
    struct status_msg* result = SoundSys_SetMasterVolume_7((*(int32_t*)(uintptr_t)(a2 + 0x4ec)), "guns_dry_1");
    (*(int32_t*)(uintptr_t)(a1 + 0x14)) = sub_40f100;
    return result;
}
