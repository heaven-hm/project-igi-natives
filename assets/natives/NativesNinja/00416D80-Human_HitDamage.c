#include "00416D80-Human_HitDamage.h"
/* 0x00416d80 Human_HitDamage full linked: callers=9 callees=0 */
void* Human_HitDamage()

// Sig: uint Human_HitDamage(void)
// Note: Reads the player XP/hit byte: returns byte [PlayerPtr+0xE1]. Takes no
// args. Documented alias of HUMAN_HIT_DAMAGE - same address.
{
    void* result = g_57babc;
    result = *(result + 0xe1);
    return result;
}
