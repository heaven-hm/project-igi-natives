// Original IGI.EXE function: Physics_UpdateForces_4 (VA 0x00505A80; static CFG gate PASS, CFG score 1.000).
#include "Physics_UpdateForces_4.h"
int32_t Physics_UpdateForces_4(void* context)

{
    int32_t item_c = 0;
    int32_t result = 0;
    int32_t item_4 = 0;
    int32_t temp_val;
    Physics_SimulateRigidBody_4(&item_c, temp_val, context, context, sub_505ab0, &item_c);
    return result;
}
