#include "00475900-ProximityMine_Process.h"
/* 0x00475900 ProximityMine_Process full linked: callers=0 callees=4 */
int32_t sub_475900(long double a1 @ st0, long double a2 @ st1, long double a3 @ st2, long double a4 @ st3, int32_t* a5 @ 0x8)

{
    float esi = a5[2];
    float* ebx = *a5;
    Profile_ValueSet(a5[1], esi);
    *ebx = a1;
    Profile_ValueSet(a5[1], esi + 1);
    ebx[1] = a2;
    Profile_ValueSet(a5[1], esi + 2);
    ebx[2] = a3;
    int32_t result = Profile_ValueSet(a5[1], esi + 3);
    ebx[3] = a4;
    a5[2] = esi + 4;
    return result;
}
