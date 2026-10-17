// Original IGI.EXE function: Vehicle_InitHeli_3 (VA 0x00433030; static CFG gate PASS, CFG score 1.000).
#include "Vehicle_InitHeli_3.h"
int32_t Vehicle_InitHeli_3(float* a1, int32_t* a2, int32_t* a3)

{
    float ctxB = a3;
    long double fpu0;
    long double fpu1;
    long double fpu2;
    long double fpu3;
    long double fpu4;
    long double fpu5;
    long double fpu6;
    long double fpu7;
    Physics_InterpolateWaypoint_2(fpu0, fpu1, fpu2, fpu3, fpu4, fpu5, fpu6, fpu7, a1, a2, ctxB);
    int32_t valA = *a2;
    *a2 = valA + 1;
    int32_t valA1 = Script_GetArg(ctxB, valA);
    int32_t i = 0;
    a1[0x46] = valA1;

    if (valA1 > 0)
    {
        a3 = &a1[0x47];

        do
        {
            int32_t valA2 = *a2;
            *a2 = valA2 + 1;
            i += 1;
            *a3 = Script_GetArg(ctxB, valA2);
            a3 = &a3[1];
        } while (i < a1[0x46]);
    }

    int32_t valA5 = *a2;
    *a2 = valA5 + 1;
    int32_t result = Script_GetArg(ctxB, valA5);
    int32_t flagP = 0;
    a1[0x54] = result;

    if (result > 0)
    {
        a3 = &a1[0x4a];

        do
        {
            int32_t valA7 = *a2;
            *a2 = valA7 + 1;
            flagP += 1;
            *a3 = Script_GetArg(ctxB, valA7);
            result = a1[0x54];
            a3 = &a3[1];
        } while (flagP < result);
    }

    return result;
}
