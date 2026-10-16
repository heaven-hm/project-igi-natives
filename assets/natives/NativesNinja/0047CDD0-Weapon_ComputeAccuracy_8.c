#include "0047CDD0-Weapon_ComputeAccuracy_8.h"
/* 0x0047cdd0 Weapon_ComputeAccuracy_8 full linked: callers=1 callees=0 */
int32_t* sub_47cdd0(int32_t* a1)

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
