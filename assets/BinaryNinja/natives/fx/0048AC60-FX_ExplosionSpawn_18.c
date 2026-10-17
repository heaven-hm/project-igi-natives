// Original IGI.EXE function: FX_ExplosionSpawn_18 (VA 0x0048AC60; static CFG gate PASS, CFG score 1.000).
#include "FX_ExplosionSpawn_18.h"
int32_t FX_ExplosionSpawn_18(void* context, void* param_2)

{
    Patrol_CombatStart(context, param_2);
    *(param_2 + 0x18) = sub_48ac90;
    *(context + 0x3db0) = 0;
    *(context + 0x3db4) = 0;
    return 0;
}
