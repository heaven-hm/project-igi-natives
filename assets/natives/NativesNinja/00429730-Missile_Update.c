#include "00429730-Missile_Update.h"
/* 0x00429730 Missile_Update full linked: callers=0 callees=14 */
char* Missile_Update(long double a1 @ st0, long double a2 @ st1, long double a3 @ st2, long double a4 @ st3, long double a5 @ st4, long double a6 @ st5, long double a7 @ st6, int32_t a8, int32_t* a9)

{
    void* edi = *a9;
    float ebx = a9[1];
    (*(((sub_4ee0e0() * 0x180 + sub_4f45f0()) << 2) + &g_a96ae0))(a8, a9);
    int32_t eax_5 = a9[2];
    a9[2] = eax_5 + 1;
    *(edi + 0x118) = sub_4b8a20(ebx, eax_5);
    int32_t eax_7 = a9[2];
    a9[2] = eax_7 + 1;
    *(edi + 0x11c) = sub_4b8a20(ebx, eax_7);
    float eax_9 = a9[2];
    a9[2] = eax_9 + 1;
    Profile_ValueSet(ebx, eax_9);
    *(edi + 0x120) = a1;
    float eax_10 = a9[2];
    a9[2] = eax_10 + 1;
    Profile_ValueSet(ebx, eax_10);
    *(edi + 0x124) = a2 * 0.0333333351f;
    float eax_11 = a9[2];
    a9[2] = eax_11 + 1;
    Profile_ValueSet(ebx, eax_11);
    *(edi + 0x128) = a3;
    float eax_12 = a9[2];
    a9[2] = eax_12 + 1;
    Profile_ValueSet(ebx, eax_12);
    *(edi + 0x12c) = a4 * 4096f;
    float eax_13 = a9[2];
    a9[2] = eax_13 + 1;
    Profile_ValueSet(ebx, eax_13);
    *(edi + 0x130) = a5 * 4096f;
    float eax_14 = a9[2];
    a9[2] = eax_14 + 1;
    Profile_ValueSet(ebx, eax_14);
    *(edi + 0x134) = a6;
    float eax_15 = a9[2];
    a9[2] = eax_15 + 1;
    Profile_ValueSet(ebx, eax_15);
    *(edi + 0x138) = a7;
    int32_t eax_16 = a9[2];
    a9[2] = eax_16 + 1;
    sub_4b8a80(ebx, eax_16, edi + 0x13c, 0x100);
    int32_t eax_17 = a9[2];
    a9[2] = eax_17 + 1;
    sub_4b8a80(ebx, eax_17, edi + 0x23c, 0x10);
    char* result = Level_LoadObjects_6(edi + 0x13c);
    *(edi + 0x24c) = result;
    return result;
}
