// Original IGI.EXE function: Weapon_ReloadClip_4 (VA 0x00475340; static CFG gate PASS, CFG score 1.000).
#include "Weapon_ReloadClip_4.h"
int32_t Weapon_ReloadClip_4(void* context)

{
    AI_SelectTarget_23(*(*(context + 0x208) + 0x4ec));
    *(context + 0x208) = 0;
    *(context + 0x21c) = 0;
    return 0;
}
