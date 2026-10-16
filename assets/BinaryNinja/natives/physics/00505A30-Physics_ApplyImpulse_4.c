#include "Physics_ApplyImpulse_4.h"
int32_t Physics_ApplyImpulse_4(void* a1)

{
    int32_t v_c = 0;
    int32_t result = 0;
    int32_t v_4 = 0;
    int32_t tmpD;
    Physics_SimulateRigidBody_4(&v_c, tmpD, a1, a1, sub_505a60, &v_c);
    return result;
}
