#include "00509F00-Physics_SimulateRigidBody_10.h"
/* 0x00509f00 Physics_SimulateRigidBody_10 full linked: callers=1 callees=0 */
int32_t sub_509f00(int32_t a1)

{
    int32_t result = a1 * 0x28;
    *(result + 0xbcaa00) = *((a1 << 2) + &g_a7b4e0);
    *(result + 0xbcaa01) = 1;
    *(result + 0xbcaa03) = 1;
    *(result + 0xbcaa04) = 1;
    *(result + 0xbcaa07) = *(a1 * 0x2c + &g_a7b440);
    return result;
}
