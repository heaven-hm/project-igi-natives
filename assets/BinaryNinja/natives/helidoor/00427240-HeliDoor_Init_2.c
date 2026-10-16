#include "HeliDoor_Init_2.h"

int32_t HeliDoor_Init_2(long double pThis @ st0, long double param @ st1, int32_t* flags @ 0x8)

{
    float edi = flags[2];
    float* ebx = *flags;
    Profile_ValueSet(flags[1], edi);
    ebx[1] = pThis * 4096f;
    int32_t result = Profile_ValueSet(flags[1], edi + 1);
    *ebx = param * 4096f;
    return result;
}
