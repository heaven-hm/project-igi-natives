// IGI native provenance: Physics_ApplyImpulse_5 - 0x00506C60 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00506C60-Physics_ApplyImpulse_5.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Physics_ApplyImpulse_5.h"
int32_t Physics_ApplyImpulse_5(int32_t context) {
    if (context >= 0x100)
        return 0x100;

    if (context >= 0x80)
        return 0x80;

    if (context >= 0x40)
        return 0x40;

    if (context >= 0x20)
        return 0x20;

    int32_t entity_val = 0;
    entity_val = context < 0x10;
    return ((entity_val - 1) & 8) + 8;
}
