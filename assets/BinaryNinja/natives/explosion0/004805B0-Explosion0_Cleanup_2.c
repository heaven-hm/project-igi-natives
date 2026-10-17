// IGI native provenance: Explosion0_Cleanup_2 - 0x004805B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004805B0-Explosion0_Cleanup_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Explosion0_Cleanup_2.h"
int32_t Explosion0_Cleanup_2(void* context)

{
    if (*(context + 0x104))
        Weapon_UpdateMuzzleFlash_9(context);

    return (*((Physics_SimulateRigidBody_2() << 2) + &g_a970e0))(context);
}
