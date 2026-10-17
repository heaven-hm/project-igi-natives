// IGI native provenance: AI_CombatTarget_21 - 0x004636E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004636E0-AI_CombatTarget_21.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_CombatTarget_21.h"
int32_t AI_CombatTarget_21(void* context)

{
    int32_t* entity_val = *(context + 0x7b4);

    if (!entity_val)
        return 0;

    return *entity_val;
}
