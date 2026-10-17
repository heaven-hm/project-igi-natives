// Original IGI.EXE function: Physics_CheckHullCollision_4 (VA 0x005059D0; static CFG gate PASS, CFG score 1.000).
#include "Physics_CheckHullCollision_4.h"
int32_t Physics_CheckHullCollision_4(void* context, int32_t param_2)

{
    int32_t item_c = param_2;
    int32_t result = 0;
    int32_t item_4 = 0;
    Physics_SimulateRigidBody_4(0, context, &item_c, context, sub_505a10, &item_c);
    return result;
}
