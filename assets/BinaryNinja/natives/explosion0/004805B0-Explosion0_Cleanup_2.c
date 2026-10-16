#include "Explosion0_Cleanup_2.h"
int32_t Explosion0_Cleanup_2(void* a1)

{
    if (*(a1 + 0x104))
        Weapon_UpdateMuzzleFlash_9(a1);

    return (*((Physics_SimulateRigidBody_2() << 2) + &g_a970e0))(a1);
}
