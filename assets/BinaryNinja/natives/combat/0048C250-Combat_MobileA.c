// Original IGI.EXE function: Combat_MobileA (VA 0x0048C250; static CFG gate PASS, CFG score 1.000).
#include "Combat_MobileA.h"
void* Combat_MobileA(void* context, void* param_2)

{
    *(context + 0x3e50) = 0;
    *(param_2 + 0x18) = CombatKneel;
    *(param_2 + 0x1c) = Combat_MobileA;
    return param_2;
}
