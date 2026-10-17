// Original IGI.EXE function: Physics_SimulateRigidBody_8 (VA 0x005096A0; static CFG gate PASS, CFG score 1.000).
#include "Physics_SimulateRigidBody_8.h"
int32_t Physics_SimulateRigidBody_8()

{
    char result = g_54e83e;

    if (result == 0xff)
    {
        result = QTask_UnableToAllocateEvent(0);
        g_54e83e = result;
    }

    return result;
}
