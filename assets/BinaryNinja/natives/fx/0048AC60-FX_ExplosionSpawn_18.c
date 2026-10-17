// Original IGI.EXE function: FX_ExplosionSpawn_18 (VA 0x0048AC60; static CFG gate PASS, CFG score 1.000).
#include "FX_ExplosionSpawn_18.h"
int32_t FX_ExplosionSpawn_18(void* a1, void* a2)

{
    Patrol_CombatStart(a1, a2);
    *(a2 + 0x18) = sub_48ac90;
    *(a1 + 0x3db0) = 0;
    *(a1 + 0x3db4) = 0;
    return 0;
}
