#include "005096A0-Physics_SimulateRigidBody_8.h"
/* 0x005096a0 Physics_SimulateRigidBody_8 full linked: callers=2 callees=1 */
int32_t sub_5096a0()

{
    char result = g_54e83e;

    if (result == 0xff)
    {
        result = QTask_UnableToAllocateEven(0);
        g_54e83e = result;
    }

    return result;
}
