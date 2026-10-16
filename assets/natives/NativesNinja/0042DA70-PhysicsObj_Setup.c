#include "0042DA70-PhysicsObj_Setup.h"
/* 0x0042da70 PhysicsObj_Setup full linked: callers=0 callees=1 */
void* PhysicsObj_Setup(int32_t* a1 @ 0x8)

{
    void* result = *(*a1 + 0x2d4);

    if (result)
    {
        result = sub_4b0d10(result);
        *(*a1 + 0x2d4) = 0;
    }

    return result;
}
