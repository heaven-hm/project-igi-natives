#include "gi_platform.h"
#include "00435BD0-Gear_Setup.h"
int32_t Gear_Setup(long double a1 , long double a2 , long double a3 , long double a4 , int32_t* a5 )

{
    float srcS = a5[2];
    float* ctxB = *a5;
    Profile_ValueSet(a5[1], srcS);
    *ctxB = a1;
    ctxB[1] = Script_GetArg(a5[1], srcS + 1);
    Profile_ValueSet(a5[1], srcS + 2);
    ctxB[2] = a2;
    Profile_ValueSet(a5[1], srcS + 3);
    ctxB[3] = a3;
    int32_t result = Profile_ValueSet(a5[1], srcS + 4);
    ctxB[4] = a4;
    return result;
}
