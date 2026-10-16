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
