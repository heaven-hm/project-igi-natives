// Original IGI.EXE function: Physics_SolveConstraints_7 (VA 0x005092E0; static CFG gate PASS, CFG score 1.000).
#include "Physics_SolveConstraints_7.h"
void* Physics_SolveConstraints_7(void* context)

{
    Qhash_Init(1);
    void* data_val = *(context + 0xb8);

    if (data_val)
    {
        Sys_ExecuteBytecode_2(data_val);
        *(context + 0xb8) = 0;
    }

    int32_t data_1 = *(context + 0x58);

    if (data_1 > 1)
    {
        *(context + 0xb8) = Mem_Alloc((data_1 * data_1) << 3, 4);
        Physics_CalculateSplineLength_8(context);
    }

    return Qhash_Reset();
}
