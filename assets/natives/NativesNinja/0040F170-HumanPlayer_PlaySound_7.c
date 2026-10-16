#include "0040F170-HumanPlayer_PlaySound_7.h"
/* 0x0040f170 HumanPlayer_PlaySound_7 full linked: callers=0 callees=0 */
void* HumanPlayer_PlaySound_7(void* a1)

{
    *(a1 + 0x14) = HumanPlayer_TakeDamage_7;
    return a1;
}
