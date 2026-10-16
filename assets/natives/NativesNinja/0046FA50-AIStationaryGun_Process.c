#include "0046FA50-AIStationaryGun_Process.h"
/* 0x0046fa50 AIStationaryGun_Process full linked: callers=0 callees=10 */
int32_t sub_46fa50(long double a1 @ st0, long double a2 @ st1, long double a3 @ st2, long double a4 @ st3, long double a5 @ st4, long double a6 @ st5, long double a7 @ st6, int32_t* a8 @ 0x8)

{
    int32_t esi = a8[2];
    char* ebx = *a8;
    sub_4b8a80(a8[1], esi, ebx, 0x20);
    Profile_ValueSet(a8[1], esi + 1);
    *(ebx + 0x28) = a1 * 0.0174532924f;
    Profile_ValueSet(a8[1], esi + 2);
    *(ebx + 0x20) = a2 * 0.0174532924f;
    Profile_ValueSet(a8[1], esi + 3);
    *(ebx + 0x24) = a3 * 0.0174532924f;
    *(ebx + 0x2c) = sub_4b8a20(a8[1], esi + 4);
    Profile_ValueSet(a8[1], esi + 5);
    *(ebx + 0x30) = a4 * 0.0174532924f * 0.0333333351f;
    Profile_ValueSet(a8[1], esi + 6);
    *(ebx + 0x34) = a5 * 0.0174532924f * 0.0333333351f;
    sub_4b8a80(a8[1], esi + 7, &ebx[0x38], 0x20);
    Profile_ValueSet(a8[1], esi + 8);
    *(ebx + 0x58) = a6 * 0.0174532924f * 0.0333333351f;
    int32_t result = Profile_ValueSet(a8[1], esi + 9);
    *(ebx + 0x5c) = a7 * 4096f;
    return result;
}
