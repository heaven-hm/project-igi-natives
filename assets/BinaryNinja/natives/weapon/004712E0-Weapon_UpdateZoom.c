// IGI native provenance: Weapon_UpdateZoom - 0x004712E0 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004712E0-Weapon_UpdateZoom.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Weapon_UpdateZoom.h"
void* Weapon_UpdateZoom(void* context, int32_t param_2, int32_t param_3)

{
    memset(context, 0, 0x14);
    *(context + 0x10) = param_2;
    *(context + 8) = param_3;
    return context;
}
