// Original IGI.EXE function: BoneMagicObj_Update (VA 0x00531CD0; static CFG gate PASS, CFG score 1.000).
#include "BoneMagicObj_Update.h"
int32_t BoneMagicObj_Update(int32_t* a1 @ 0x8)

{
    int32_t valA = a1[2];
    int16_t* dstD = *a1;
    a1[2] = valA + 1;
    *dstD = Script_GetArg(a1[1], valA);
    int32_t valA2 = a1[2];
    a1[2] = valA2 + 1;
    int32_t result = Script_GetArg(a1[1], valA2);
    *(dstD + 4) = result;
    return result;
}
