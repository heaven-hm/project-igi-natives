#include "gi_platform.h"
#include "004805B0-Explosion0_Cleanup_2.h"
int32_t Explosion0_Cleanup_2(void* a1)

{
    if ((*(int32_t*)(uintptr_t)(a1 + 0x104)))
        Weapon_UpdateMuzzleFlash_9(a1);

    return ((int(*)())(uintptr_t)(*((Physics_SimulateRigidBody_2() << 2) + &g_a970e0)))(a1);
}
