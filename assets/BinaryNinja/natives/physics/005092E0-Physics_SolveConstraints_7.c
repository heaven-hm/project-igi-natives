// Original IGI.EXE function: Physics_SolveConstraints_7 (VA 0x005092E0; static CFG gate PASS, CFG score 1.000).
#include "Physics_SolveConstraints_7.h"
void* Physics_SolveConstraints_7(void* a1)

{
    Qhash_Init(1);
    void* valA = *(a1 + 0xb8);

    if (valA)
    {
        Sys_ExecuteBytecode_2(valA);
        *(a1 + 0xb8) = 0;
    }

    int32_t valA1 = *(a1 + 0x58);

    if (valA1 > 1)
    {
        *(a1 + 0xb8) = Mem_Alloc((valA1 * valA1) << 3, 4);
        Physics_CalculateSplineLength_8(a1);
    }

    return Qhash_Reset();
}
