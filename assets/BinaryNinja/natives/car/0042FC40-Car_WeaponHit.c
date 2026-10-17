// Original IGI.EXE function: Car_WeaponHit (VA 0x0042FC40; static CFG gate PASS, CFG score 1.000).
#include "Car_WeaponHit.h"
void* Car_WeaponHit(void* a1)

{
    *(a1 + 0x91c) = 1;
    return a1;
}
