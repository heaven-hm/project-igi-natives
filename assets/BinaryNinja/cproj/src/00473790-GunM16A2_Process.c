#include "gi_platform.h"
#include "00473790-GunM16A2_Process.h"
int32_t GunM16A2_Process(long double a1 , long double a2 , long double a3 , int32_t* a4 )

{
    float srcS = a4[2];
    float* ctxB = *a4;
    Profile_ValueSet(a4[1], srcS);
    *ctxB = a1;
    Profile_ValueSet(a4[1], srcS + 1);
    ctxB[1] = a2;
    int32_t result = Profile_ValueSet(a4[1], srcS + 2);
    ctxB[2] = a3;
    a4[2] = srcS + 3;
    return result;
}
