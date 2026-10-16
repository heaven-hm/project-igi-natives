#include "gi_platform.h"
#include "00505A80-Physics_UpdateForces_4.h"
int32_t Physics_UpdateForces_4(void* a1)

{
    int32_t v_c = 0;
    int32_t result = 0;
    int32_t v_4 = 0;
    int32_t tmpD;
    Physics_SimulateRigidBody_4(&v_c, tmpD, a1, a1, sub_505ab0, &v_c);
    return result;
}
