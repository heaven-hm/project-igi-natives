// Original IGI.EXE function: Explosion0_Cleanup_2 (VA 0x004805B0; static CFG gate PASS, CFG score 1.000).
#include "Explosion0_Cleanup_2.h"
int32_t Explosion0_Cleanup_2(void* context)

{
    if (*(context + 0x104))
        Weapon_UpdateMuzzleFlash_9(context);

    return (*((Physics_SimulateRigidBody_2() << 2) + &g_a970e0))(context);
}
