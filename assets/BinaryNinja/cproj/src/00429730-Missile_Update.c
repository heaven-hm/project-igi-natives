#include "gi_platform.h"
#include "00429730-Missile_Update.h"
char* Missile_Update(long double a1 , long double a2 , long double a3 , long double a4 , long double a5 , long double a6 , long double a7 , int32_t a8, int32_t* a9)

{
    void* dstD = *a9;
    float ctxB = a9[1];
    ((int(*)())(uintptr_t)(*(((SoundSys_Update3DPosition_18() * 0x180 + Script_ExecuteLevelScript_16()) << 2) + &g_a96ae0)))(a8, a9);
    int32_t valA5 = a9[2];
    a9[2] = valA5 + 1;
    (*(int32_t*)(uintptr_t)(dstD + 0x118)) = Script_GetArg(ctxB, valA5);
    int32_t valA7 = a9[2];
    a9[2] = valA7 + 1;
    (*(int32_t*)(uintptr_t)(dstD + 0x11c)) = Script_GetArg(ctxB, valA7);
    float valA9 = a9[2];
    a9[2] = valA9 + 1;
    Profile_ValueSet(ctxB, valA9);
    (*(int32_t*)(uintptr_t)(dstD + 0x120)) = a1;
    float valA10 = a9[2];
    a9[2] = valA10 + 1;
    Profile_ValueSet(ctxB, valA10);
    (*(int32_t*)(uintptr_t)(dstD + 0x124)) = a2 * 0.0333333351.0f;
    float valA11 = a9[2];
    a9[2] = valA11 + 1;
    Profile_ValueSet(ctxB, valA11);
    (*(int32_t*)(uintptr_t)(dstD + 0x128)) = a3;
    float valA12 = a9[2];
    a9[2] = valA12 + 1;
    Profile_ValueSet(ctxB, valA12);
    (*(int32_t*)(uintptr_t)(dstD + 0x12c)) = a4 * 4096.0f;
    float valA13 = a9[2];
    a9[2] = valA13 + 1;
    Profile_ValueSet(ctxB, valA13);
    (*(int32_t*)(uintptr_t)(dstD + 0x130)) = a5 * 4096.0f;
    float valA14 = a9[2];
    a9[2] = valA14 + 1;
    Profile_ValueSet(ctxB, valA14);
    (*(int32_t*)(uintptr_t)(dstD + 0x134)) = a6;
    float valA15 = a9[2];
    a9[2] = valA15 + 1;
    Profile_ValueSet(ctxB, valA15);
    (*(int32_t*)(uintptr_t)(dstD + 0x138)) = a7;
    int32_t valA16 = a9[2];
    a9[2] = valA16 + 1;
    Sys_ResolveSymbol_23(ctxB, valA16, dstD + 0x13c, 0x100);
    int32_t valA17 = a9[2];
    a9[2] = valA17 + 1;
    Sys_ResolveSymbol_23(ctxB, valA17, dstD + 0x23c, 0x10);
    char* result = Level_LoadObjects_6(dstD + 0x13c);
    (*(int32_t*)(uintptr_t)(dstD + 0x24c)) = result;
    return result;
}
