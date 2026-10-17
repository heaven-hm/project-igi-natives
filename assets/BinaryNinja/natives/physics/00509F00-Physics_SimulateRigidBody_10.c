// IGI native provenance: Physics_SimulateRigidBody_10 - 0x00509F00 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00509F00-Physics_SimulateRigidBody_10.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Physics_SimulateRigidBody_10.h"
int32_t Physics_SimulateRigidBody_10(int32_t context)

{
    int32_t result = context * 0x28;
    *(result + 0xbcaa00) = *((context << 2) + &g_a7b4e0);
    *(result + 0xbcaa01) = 1;
    *(result + 0xbcaa03) = 1;
    *(result + 0xbcaa04) = 1;
    *(result + 0xbcaa07) = *(context * 0x2c + &g_a7b440);
    return result;
}
