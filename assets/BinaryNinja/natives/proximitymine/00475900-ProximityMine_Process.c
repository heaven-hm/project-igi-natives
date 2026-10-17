// Original IGI.EXE function: ProximityMine_Process (VA 0x00475900; static CFG gate PASS, CFG score 1.000).
#include "ProximityMine_Process.h"
int32_t ProximityMine_Process(long double a1 @ fp0, long double a2 @ fp1, long double a3 @ fp2, long double a4 @ fp3, int32_t* a5 @ 0x8)

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
