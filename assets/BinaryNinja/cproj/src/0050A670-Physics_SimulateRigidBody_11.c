#include "gi_platform.h"
#include "0050A670-Physics_SimulateRigidBody_11.h"
void* Physics_SimulateRigidBody_11(int32_t* a1)

{
    void* dstD = *a1;
    void* result = Mem_Alloc(0x400, 4);
    (*(int32_t*)(uintptr_t)(dstD + 8)) = result;
    int32_t srcS1 = a1[2];

    if (srcS1)
        memcpy(result, srcS1, 0x400);

    return result;
}
