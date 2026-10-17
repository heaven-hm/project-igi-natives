// IGI native provenance: Weapon_ReloadClip_4 - 0x00475340 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00475340-Weapon_ReloadClip_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Weapon_ReloadClip_4.h"
int32_t Weapon_ReloadClip_4(void* context)

{
    AI_SelectTarget_23(*(*(context + 0x208) + 0x4ec));
    *(context + 0x208) = 0;
    *(context + 0x21c) = 0;
    return 0;
}
