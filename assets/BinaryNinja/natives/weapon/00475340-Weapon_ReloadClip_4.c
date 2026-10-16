#include "Weapon_ReloadClip_4.h"
int32_t Weapon_ReloadClip_4(void* a1)

{
    AI_SelectTarget_23(*(*(a1 + 0x208) + 0x4ec));
    *(a1 + 0x208) = 0;
    *(a1 + 0x21c) = 0;
    return 0;
}
