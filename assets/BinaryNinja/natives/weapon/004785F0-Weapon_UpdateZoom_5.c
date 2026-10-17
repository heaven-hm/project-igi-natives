// IGI native provenance: Weapon_UpdateZoom_5 - 0x004785F0 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004785F0-Weapon_UpdateZoom_5.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Weapon_UpdateZoom_5.h"
void* Weapon_UpdateZoom_5(void* context)

{
    *(context + 0xf0) = 0;
    *(context + 0x134) = 0;
    *(context + 0x13c) = 0;
    *(context + 0x140) = 0;
    *(context + 0x148) = 0;
    memset(context + 0x198, 0, 0x18);
    return context;
}
