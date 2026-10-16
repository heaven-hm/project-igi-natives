#include "gi_platform.h"
#include "0042DA70-PhysicsObj_Setup.h"
void* PhysicsObj_Setup(int32_t* a1 )

{
    void* result = (*(int32_t*)(uintptr_t)(*a1 + 0x2d4));

    if (result)
    {
        result = Sys_ExecuteBytecode_2(result);
        (*(int32_t*)(uintptr_t)(*a1 + 0x2d4)) = 0;
    }

    return result;
}
