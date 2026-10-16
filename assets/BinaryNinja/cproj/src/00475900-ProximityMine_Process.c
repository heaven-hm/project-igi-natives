#include "gi_platform.h"
#include "00475900-ProximityMine_Process.h"
int32_t ProximityMine_Process(long double a1 , long double a2 , long double a3 , long double a4 , int32_t* a5 )

{
    float srcS = a5[2];
    float* ctxB = *a5;
    Profile_ValueSet(a5[1], srcS);
    *ctxB = a1;
    Profile_ValueSet(a5[1], srcS + 1);
    ctxB[1] = a2;
    Profile_ValueSet(a5[1], srcS + 2);
    ctxB[2] = a3;
    int32_t result = Profile_ValueSet(a5[1], srcS + 3);
    ctxB[3] = a4;
    a5[2] = srcS + 4;
    return result;
}
