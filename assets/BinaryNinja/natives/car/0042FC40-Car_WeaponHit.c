#include "Car_WeaponHit.h"
void* Car_WeaponHit(void* a1)

{
    *(a1 + 0x91c) = 1;
    return a1;
}
