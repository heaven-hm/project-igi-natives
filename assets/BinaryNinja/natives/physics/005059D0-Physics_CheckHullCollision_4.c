// Original IGI.EXE function: Physics_CheckHullCollision_4 (VA 0x005059D0; static CFG gate PASS, CFG score 1.000).
#include "Physics_CheckHullCollision_4.h"
int32_t Physics_CheckHullCollision_4(void* a1, int32_t a2)

{
    int32_t v_c = a2;
    int32_t result = 0;
    int32_t v_4 = 0;
    Physics_SimulateRigidBody_4(0, a1, &v_c, a1, sub_505a10, &v_c);
    return result;
}
