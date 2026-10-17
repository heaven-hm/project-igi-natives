// IGI native provenance: AI_FireWeapon_20 - 0x004635B0 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004635B0-AI_FireWeapon_20.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_FireWeapon_20.h"
int32_t AI_FireWeapon_20(void* context)

{
    memset(context + 0x110, 0, 0xa0);
    memset(context + 0x1b0, 0, 0xa0);
    *(context + 0x250) = 1;
    return 0;
}
