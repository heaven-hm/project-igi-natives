// Original IGI.EXE function: Camera_ResetMatrix_15 (VA 0x004A8C37; static CFG gate PASS, CFG score 1.000).
#include "Camera_ResetMatrix_15.h"
long double Camera_ResetMatrix_15(void* a1 @ flagP, int80_t a2 @ fp0, long double a3 @ fp1)

{
    *(a1 - 0x9e) = a2;
    long double fpu0 = *(a1 - 0x9e);

    if (*(a1 - 0x97) & 0x40)
    {
        long double x87_r0_1 = a3;
        a3 = fpu0;
        *(a1 - 0x9e) = x87_r0_1;
        fpu0 = *(a1 - 0x9e);
    }

    if (!(*(a1 - 0x97) & 0x40) || !(*(a1 - 0x97) & 0x40))
        *(a1 - 0x90) = 1;
    else
        *(a1 - 0x90) = 7;

    return a3 + fpu0;
}
