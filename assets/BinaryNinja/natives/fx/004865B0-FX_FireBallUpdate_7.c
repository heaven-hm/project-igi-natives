// Original IGI.EXE function: FX_FireBallUpdate_7 (VA 0x004865B0; static CFG gate PASS, CFG score 1.000).
#include "FX_FireBallUpdate_7.h"
int32_t FX_FireBallUpdate_7(int32_t context, int32_t param_2, int32_t param_3, float param_4)

{
    int32_t i_1 = 3;
    int32_t* source_val = context + param_2 * 0x102c + 0x30;
    int32_t result;
    int32_t i;

    do
    {
        *(*source_val + 4) = param_3;
        *(*source_val + 8) = param_4;
        Sys_CloseFileStream_18(*source_val);
        result = Sys_AllocateMemory_22(*source_val);
        source_val = &source_val[1];
        i = i_1;
        i_1 -= 1;
        param_4 = result + param_4;
    } while (i != 1);
    return result;
}
