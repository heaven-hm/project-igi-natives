#include "gi_platform.h"
#include "00475340-Weapon_ReloadClip_4.h"
int32_t Weapon_ReloadClip_4(void* a1)

{
    AI_SelectTarget_23((*(int32_t*)(uintptr_t)(*(a1 + 0x208) + 0x4ec)));
    (*(int32_t*)(uintptr_t)(a1 + 0x208)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x21c)) = 0;
    return 0;
}
