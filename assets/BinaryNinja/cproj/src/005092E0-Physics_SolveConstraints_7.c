#include "gi_platform.h"
#include "005092E0-Physics_SolveConstraints_7.h"
void Physics_SolveConstraints_7(void* a1)

{
    Qhash_Init(1);
    void* valA = (*(int32_t*)(uintptr_t)(a1 + 0xb8));

    if (valA)
    {
        Sys_ExecuteBytecode_2(valA);
        (*(int32_t*)(uintptr_t)(a1 + 0xb8)) = 0;
    }

    int32_t valA1 = (*(int32_t*)(uintptr_t)(a1 + 0x58));

    if (valA1 > 1)
    {
        (*(int32_t*)(uintptr_t)(a1 + 0xb8)) = Mem_Alloc((valA1 * valA1) << 3, 4);
        Physics_CalculateSplineLength_8(a1);
    }

    Qhash_Reset();
    return;
}
