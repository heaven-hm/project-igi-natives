#include "PhysicsObj_Setup.h"
void* PhysicsObj_Setup(int32_t* a1 @ 0x8)

{
    void* result = *(*a1 + 0x2d4);

    if (result)
    {
        result = Sys_ExecuteBytecode_2(result);
        *(*a1 + 0x2d4) = 0;
    }

    return result;
}
