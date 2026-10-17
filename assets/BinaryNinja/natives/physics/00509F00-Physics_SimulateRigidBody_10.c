// Original IGI.EXE function: Physics_SimulateRigidBody_10 (VA 0x00509F00; static CFG gate PASS, CFG score 1.000).
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
