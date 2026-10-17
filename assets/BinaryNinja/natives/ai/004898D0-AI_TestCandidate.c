// Original IGI.EXE function: AI_TestCandidate (VA 0x004898D0; static CFG gate PASS, CFG score 1.000).
#include "AI_TestCandidate.h"
int32_t AI_TestCandidate(void* a1, void* a2, double* a3, double* a4, float a5)

{
    if (!*(a2 + 0x10))
    {
        long double fpu0;
        long double fpu1;
        long double fpu2;

        if (!AI_BuildEyeSnapshot(fpu0, fpu1, fpu2, a4, a3))
        {
            *(a2 + 0x28) = 0;
            *(a2 + 0x29) = 0;
        }
        else
            *(a2 + 0x28) = 1;

        *(a2 + 0x10) = *(a1 + 4) + 1;
    }

    if (*(a2 + 0x28))
    {
        if (!*(a2 + 0x14))
        {
            *(a2 + 0x29) = AI_LineOfSight(a5, a4, **(a2 + 8), a3);
            *(a2 + 0x14) = *(a1 + 8) + 1;
        }

        *(a2 + 0x14) -= 1;
    }

    *(a2 + 0x10) -= 1;
🚫🚫    int32_t result = Sys_DispatchOpcode_11(a4, a3);
    /* unimplemented  {call Sys_DispatchOpcode_11} */
🚫🚫🚫    *(a2 + 0x20) =
    /* unimplemented  {fstp qword [srcS+0x20], fp0} */
    return result;
}
