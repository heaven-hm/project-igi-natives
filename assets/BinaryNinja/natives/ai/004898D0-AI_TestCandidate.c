// Original IGI.EXE function: AI_TestCandidate (VA 0x004898D0; static CFG gate PASS, CFG score 1.000).
#include "AI_TestCandidate.h"
int32_t AI_TestCandidate(void* context, void* param_2, double* param_3, double* param_4, float param_5)

{
    if (!*(param_2 + 0x10))
    {
        long double fpu0;
        long double fpu1;
        long double fpu2;

        if (!AI_BuildEyeSnapshot(fpu0, fpu1, fpu2, param_4, param_3))
        {
            *(param_2 + 0x28) = 0;
            *(param_2 + 0x29) = 0;
        }
        else
            *(param_2 + 0x28) = 1;

        *(param_2 + 0x10) = *(context + 4) + 1;
    }

    if (*(param_2 + 0x28))
    {
        if (!*(param_2 + 0x14))
        {
            *(param_2 + 0x29) = AI_LineOfSight(param_5, param_4, **(param_2 + 8), param_3);
            *(param_2 + 0x14) = *(context + 8) + 1;
        }

        *(param_2 + 0x14) -= 1;
    }

    *(param_2 + 0x10) -= 1;
🚫🚫    int32_t result = Sys_DispatchOpcode_11(param_4, param_3);
    /* unimplemented  {call Sys_DispatchOpcode_11} */
🚫🚫🚫    *(param_2 + 0x20) =
    /* unimplemented  {fstp qword [source_val+0x20], fp0} */
    return result;
}
