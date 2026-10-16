#include "CombatFollow_Install.h"
void* CombatFollow_Install(void* a1 @ 0x8)

{
    *(a1 + 0x18) = Combat_Follow;
    return a1;
}
