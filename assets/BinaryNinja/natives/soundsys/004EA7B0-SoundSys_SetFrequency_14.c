// Original IGI.EXE function: SoundSys_SetFrequency_14 (VA 0x004EA7B0; static CFG gate FAIL, CFG score 0.667).
#include "SoundSys_SetFrequency_14.h"
void* SoundSys_SetFrequency_14(void* a1)

{
    __builtin_memset(a1 + 0x88, 0, 0x30);
    *(a1 + 0xd8) = 0xffffffff;
    *(a1 + 0xdc) = 0xffffffff;
    *(a1 + 0xe0) = 0xffffffff;
    *(a1 + 0xe4) = 0xffffffff;
    *(a1 + 0xb8) = 0x3f800000;
    *(a1 + 0xbc) = 0x3f800000;
    *(a1 + 0xc0) = 0x3f800000;
    *(a1 + 0xc8) = 0;
    *(a1 + 0xcc) = 0x3f800000;
    *(a1 + 0xd0) = 0x3f800000;
    int32_t* tmpD = a1 + 0x114;
    int32_t i_1 = 0xb;
    int32_t i;

    do
    {
        tmpD[-0xb] = 0x3f800000;
        *tmpD = 0x3f800000;
        tmpD = &tmpD[1];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    *(a1 + 0x140) = 0;
    *(a1 + 0x160) = 0;
    *(a1 + 0xd4) = 0;
    *(a1 + 0x180) = 0;
    *(a1 + 0x184) = 0;
    return a1;
}
