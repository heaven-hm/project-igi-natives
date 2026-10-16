#include "0043C1F0-ExplodeMagicObj_LoadParameters.h"
/* 0x0043c1f0 ExplodeMagicObj_LoadParameters full linked: callers=0 callees=9 */
int32_t ExplodeMagicObj_LoadParameters(long double a1 @ st0, long double a2 @ st1, long double a3 @ st2, long double a4 @ st3, long double a5 @ st4, int32_t* a6 @ 0x8)

{
    int32_t esi = a6[2];
    char* ebx = *a6;
    sub_4b8a80(a6[1], esi, ebx, 0x10);
    sub_4b8a80(a6[1], esi + 1, &ebx[0x2c], 0x10);
    Profile_ValueSet(a6[1], esi + 2);
    *(ebx + 0x10) = a1;
    *(ebx + 0x28) = sub_4b8a20(a6[1], esi + 3);
    *(ebx + 0x24) = sub_4b8a20(a6[1], esi + 4);
    Profile_ValueSet(a6[1], esi + 5);
    *(ebx + 0x20) = a2;
    Profile_ValueSet(a6[1], esi + 6);
    *(ebx + 0x18) = a3;
    Profile_ValueSet(a6[1], esi + 7);
    *(ebx + 0x1c) = a4;
    int32_t result = Profile_ValueSet(a6[1], esi + 8);
    *(ebx + 0x14) = a5;
    return result;
}
