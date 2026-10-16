#include "HumanPlayer_PlaySound_7.h"
void* HumanPlayer_PlaySound_7(void* a1)

{
    *(a1 + 0x14) = HumanPlayer_TakeDamage_7;
    return a1;
}
