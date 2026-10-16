#include "ExplodeMagicObj_LoadParameters.h"
int32_t ExplodeMagicObj_LoadParameters(long double a1 @ fp0, long double a2 @ fp1, long double a3 @ fp2, long double a4 @ fp3, long double a5 @ fp4, int32_t* a6 @ 0x8)

{
    int32_t srcS = a6[2];
    char* ctxB = *a6;
    Sys_ResolveSymbol_23(a6[1], srcS, ctxB, 0x10);
    Sys_ResolveSymbol_23(a6[1], srcS + 1, &ctxB[0x2c], 0x10);
    Profile_ValueSet(a6[1], srcS + 2);
    *(ctxB + 0x10) = a1;
    *(ctxB + 0x28) = Script_GetArg(a6[1], srcS + 3);
    *(ctxB + 0x24) = Script_GetArg(a6[1], srcS + 4);
    Profile_ValueSet(a6[1], srcS + 5);
    *(ctxB + 0x20) = a2;
    Profile_ValueSet(a6[1], srcS + 6);
    *(ctxB + 0x18) = a3;
    Profile_ValueSet(a6[1], srcS + 7);
    *(ctxB + 0x1c) = a4;
    int32_t result = Profile_ValueSet(a6[1], srcS + 8);
    *(ctxB + 0x14) = a5;
    return result;
}
