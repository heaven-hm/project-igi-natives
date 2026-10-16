#include "004EA7B0-SoundSys_SetFrequency_14.h"
/* 0x004ea7b0 SoundSys_SetFrequency_14 full linked: callers=2 callees=1 */
void* sub_4ea7b0(void* a1)

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
    int32_t* edx = a1 + 0x114;
    int32_t i_1 = 0xb;
    int32_t i;

    do
    {
        edx[-0xb] = 0x3f800000;
        *edx = 0x3f800000;
        edx = &edx[1];
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
