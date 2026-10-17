// IGI native provenance: AI_CombatTarget_17 - 0x0045ECD0 - CFG score 75.0% (FAIL; structural only); runtime behavior not verified.
// Evidence: 0045ECD0-AI_CombatTarget_17.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_CombatTarget_17.h"
int32_t AI_CombatTarget_17(void* context)

{
    memset(context + 0x110, 0, 0xa0);
    memset(context + 0x1b0, 0, 0xa0);
    *(context + 0x250) = 0;
    *(context + 0x33c) = 0;
    *(context + 0x33d) = 0;
    Weapon_ComputeAccuracy_8(context + 0x340);
    *(context + 0x4f0) = 1;
    *(context + 0x4f4) = 0;
    memset(context + 0x4f8, 0, 0x19);
    memset(context + 0x514, 0, 0x19);
    *(context + 0x530) = 0x3f800000;
    *(context + 0x538) = 0xffffffff;
    *(context + 0x64c) = 1;
    memset(context + 0x664, 0, 0x31);
    *(context + 0x695) = 1;
    *(context + 0x696) = 0;
    *(context + 0x697) = 0;
    *(context + 0x698) = 0;
    memset(context + 0x6a0, 0, 0x70);
    AI_CombatTarget_20(context);
    *(context + 0x710) = 0;
    *(context + 0x720) = 0;
    *(context + 0x714) = 0x41d00000;
    *(context + 0x718) = 0;
    *(context + 0x724) = 0x41d00000;
    *(context + 0x768) = 0;
    *(context + 0x76c) = 0;
    *(context + 0x7b0) = 0;
    *(context + 0x7b4) = 0;
    *(context + 0x7b8) = 0;
    *(context + 0x7b9) = 0;
    *(context + 0x7bc) = 0;
    *(context + 0x838) = 0;
    *(context + 0x83c) = 0;
    *(context + 0x840) = 0;
    *(context + 0x844) = 0xffffffff;
    *(context + 0x848) = 0xffffffff;
    *(context + 0x84c) = 0;
    *(context + 0xcf5) = 0;
    *(context + 0xcf6) = 1;
    return 0x41d00000;
}
