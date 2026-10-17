// Original IGI.EXE function: Combat_MobileC (VA 0x0048BBD0; static CFG gate PASS, CFG score 1.000).
#include "Combat_MobileC.h"
void* Combat_MobileC(void* context, void* param_2)

{
    *(param_2 + 0x18) = CombatStand;
    *(param_2 + 0x1c) = Combat_MobileC;
    *(context + 0x3e50) = 0;
    return context;
}
