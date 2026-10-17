// Original IGI.EXE function: Camera_ApplyPostProcess_15 (VA 0x004A8C0D; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyPostProcess_15.h"
long double Camera_ApplyPostProcess_15(void* a1 @ flagP, long double a2 @ fp0, int80_t a3 @ fp1)

{
    *(a1 - 0x9e) = a3;
    long double x87_r0_1 = *(a1 - 0x9e);

    if (!(*(a1 - 0x97) & 0x40))
        *(a1 - 0x90) = 1;
    else
        *(a1 - 0x90) = 7;

    return a2 + x87_r0_1;
}
