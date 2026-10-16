#include "AIStationaryGun_Process.h"
int32_t AIStationaryGun_Process(long double a1 @ fp0, long double a2 @ fp1, long double a3 @ fp2, long double a4 @ fp3, long double a5 @ fp4, long double a6 @ fp5, long double a7 @ fp6, int32_t* a8 @ 0x8)

{
    int32_t srcS = a8[2];
    char* ctxB = *a8;
    Sys_ResolveSymbol_23(a8[1], srcS, ctxB, 0x20);
    Profile_ValueSet(a8[1], srcS + 1);
    *(ctxB + 0x28) = a1 * 0.0174532924f;
    Profile_ValueSet(a8[1], srcS + 2);
    *(ctxB + 0x20) = a2 * 0.0174532924f;
    Profile_ValueSet(a8[1], srcS + 3);
    *(ctxB + 0x24) = a3 * 0.0174532924f;
    *(ctxB + 0x2c) = Script_GetArg(a8[1], srcS + 4);
    Profile_ValueSet(a8[1], srcS + 5);
    *(ctxB + 0x30) = a4 * 0.0174532924f * 0.0333333351f;
    Profile_ValueSet(a8[1], srcS + 6);
    *(ctxB + 0x34) = a5 * 0.0174532924f * 0.0333333351f;
    Sys_ResolveSymbol_23(a8[1], srcS + 7, &ctxB[0x38], 0x20);
    Profile_ValueSet(a8[1], srcS + 8);
    *(ctxB + 0x58) = a6 * 0.0174532924f * 0.0333333351f;
    int32_t result = Profile_ValueSet(a8[1], srcS + 9);
    *(ctxB + 0x5c) = a7 * 4096f;
    return result;
}
