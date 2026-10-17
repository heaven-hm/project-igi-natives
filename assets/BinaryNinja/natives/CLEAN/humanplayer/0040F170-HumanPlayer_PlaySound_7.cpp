// IGI native provenance: HumanPlayer_PlaySound_7 - 0x0040F170 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0040F170-HumanPlayer_PlaySound_7.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_PlaySound_7.h"
void* HumanPlayer_PlaySound_7(void* context)

{
    *(context + 0x14) = HumanPlayer_TakeDamage_7;
    return context;
}
