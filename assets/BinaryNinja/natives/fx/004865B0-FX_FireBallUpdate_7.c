// Original IGI.EXE function: FX_FireBallUpdate_7 (VA 0x004865B0; static CFG gate PASS, CFG score 1.000).
#include "FX_FireBallUpdate_7.h"
int32_t FX_FireBallUpdate_7(int32_t a1, int32_t a2, int32_t a3, float a4)

{
    int32_t i_1 = 3;
    int32_t* srcS = a1 + a2 * 0x102c + 0x30;
    int32_t result;
    int32_t i;

    do
    {
        *(*srcS + 4) = a3;
        *(*srcS + 8) = a4;
        Sys_CloseFileStream_18(*srcS);
        result = Sys_AllocateMemory_22(*srcS);
        srcS = &srcS[1];
        i = i_1;
        i_1 -= 1;
        a4 = result + a4;
    } while (i != 1);
    return result;
}
