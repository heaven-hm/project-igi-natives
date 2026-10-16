#include "Combat_MobileC.h"
void* Combat_MobileC(void* a1, void* a2)

{
    *(a2 + 0x18) = CombatStand;
    *(a2 + 0x1c) = Combat_MobileC;
    *(a1 + 0x3e50) = 0;
    return a1;
}
