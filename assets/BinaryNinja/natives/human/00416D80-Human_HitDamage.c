// Original IGI.EXE function: Human_HitDamage (VA 0x00416D80; static CFG gate PASS, CFG score 1.000).
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
