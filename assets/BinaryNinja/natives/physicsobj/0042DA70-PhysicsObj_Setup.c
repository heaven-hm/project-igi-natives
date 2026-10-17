// Original IGI.EXE function: PhysicsObj_Setup (VA 0x0042DA70; static CFG gate PASS, CFG score 1.000).
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
