// IGI native provenance: Human_HitDamage - 0x00416D80 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00416D80-Human_HitDamage.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Human_HitDamage.h"
void* Human_HitDamage()

// Sig: uint32_t Human_HitDamage(void)
// Note: Reads the player XP/hit byte: returns byte [PlayerPtr+0xE1]. Takes no
// args. Documented alias of HUMAN_HIT_DAMAGE - same address.
{
    void* result = g_57babc;
    result = *(result + 0xe1);
    return result;
}
