// Original IGI.EXE function: Physics_UpdateForces_6 (VA 0x00507EC0; static CFG gate PASS, CFG score 1.000).
#include "Physics_UpdateForces_6.h"
int16_t* Physics_UpdateForces_6(int32_t* a1, int32_t a2)

{
    a1[6] = a1[7];
    int32_t valA1 = *a1;

    if (valA1)
        valA1(a1, a2);

    int32_t tmpD = a1[7];
    int32_t i = 0;
    a1[5] = ~a1[6] & tmpD;
    int16_t* result = &a1[8];

    do
    {
        if (!(tmpD & 1 << (i & 0x1f)))
            *result = 0;
        else
            *result += 1;

        i += 1;
        result = &result[1];
    } while (i < 0x20);

    return result;
}
