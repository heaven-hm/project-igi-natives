// Original IGI.EXE function: PatrolPath_OnTick (VA 0x00453730; static CFG gate PASS, CFG score 1.000).
#include "PatrolPath_OnTick.h"
int32_t* PatrolPath_OnTick(int32_t* a1)

{
    int32_t* result = *a1[1];

    if (!result || !*result || !result)
    {
        result = a1[2];

        if (!result)
        {
            int32_t* objC1 = *(*a1 + 8);
            int32_t valA1 = *objC1;
            int32_t valA2 = -(valA1);
            return (valA2 - valA2) & objC1;
        }
    }

    return result;
}
