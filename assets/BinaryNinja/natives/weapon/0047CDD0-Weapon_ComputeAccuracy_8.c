// Original IGI.EXE function: Weapon_ComputeAccuracy_8 (VA 0x0047CDD0; static CFG gate PASS, CFG score 1.000).
#include "Weapon_ComputeAccuracy_8.h"
int32_t* Weapon_ComputeAccuracy_8(int32_t* a1)

{
    int32_t i_1 = 0x20;
    *a1 = 0;
    int32_t* result = &a1[3];
    int32_t i;

    do
    {
        result[-2] = 0xffffffff;
        result[-1] = 0;
        *result = 0xffffffff;
        result = &result[3];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    return result;
}
