// Original IGI.EXE function: AI_CombatTarget_21 (VA 0x004636E0; static CFG gate PASS, CFG score 1.000).
#include "AI_CombatTarget_21.h"
int32_t AI_CombatTarget_21(void* context)

{
    int32_t* entity_val = *(context + 0x7b4);

    if (!entity_val)
        return 0;

    return *entity_val;
}
