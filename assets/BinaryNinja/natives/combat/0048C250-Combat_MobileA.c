#include "Combat_MobileA.h"
void* Combat_MobileA(void* a1, void* a2)

{
    *(a1 + 0x3e50) = 0;
    *(a2 + 0x18) = CombatKneel;
    *(a2 + 0x1c) = Combat_MobileA;
    return a2;
}
