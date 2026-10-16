#include "00473790-GunM16A2_Process.h"
/* 0x00473790 GunM16A2_Process full linked: callers=0 callees=3 */
int32_t sub_473790(long double a1 @ st0, long double a2 @ st1, long double a3 @ st2, int32_t* a4 @ 0x8)

{
    float esi = a4[2];
    float* ebx = *a4;
    Profile_ValueSet(a4[1], esi);
    *ebx = a1;
    Profile_ValueSet(a4[1], esi + 1);
    ebx[1] = a2;
    int32_t result = Profile_ValueSet(a4[1], esi + 2);
    ebx[2] = a3;
    a4[2] = esi + 3;
    return result;
}
