#include "00435BD0-Gear_Setup.h"
/* 0x00435bd0 Gear_Setup full linked: callers=0 callees=5 */
int32_t Gear_Setup(long double a1 @ st0, long double a2 @ st1, long double a3 @ st2, long double a4 @ st3, int32_t* a5 @ 0x8)

{
    float esi = a5[2];
    float* ebx = *a5;
    Profile_ValueSet(a5[1], esi);
    *ebx = a1;
    ebx[1] = sub_4b8a20(a5[1], esi + 1);
    Profile_ValueSet(a5[1], esi + 2);
    ebx[2] = a2;
    Profile_ValueSet(a5[1], esi + 3);
    ebx[3] = a3;
    int32_t result = Profile_ValueSet(a5[1], esi + 4);
    ebx[4] = a4;
    return result;
}
