// Original IGI.EXE function: PhysicsObj_DefineType (VA 0x004EDBD0; static CFG gate PASS, CFG score 1.000).
#include "PhysicsObj_DefineType.h"

void* PhysicsObj_DefineType(void* pThis)

{
    void* result = DynObj_Missing(pThis + 0x20);

    if (result)
        *(result + 0x24) = 0;

    return result;
}
