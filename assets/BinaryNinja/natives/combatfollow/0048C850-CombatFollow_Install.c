// Original IGI.EXE function: CombatFollow_Install (VA 0x0048C850; static CFG gate PASS, CFG score 1.000).
#include "CombatFollow_Install.h"
void* CombatFollow_Install(void* context )

{
    *(context + 0x18) = Combat_Follow;
    return context;
}
