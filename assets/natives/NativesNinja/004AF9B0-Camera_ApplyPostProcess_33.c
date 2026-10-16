#include "004AF9B0-Camera_ApplyPostProcess_33.h"
/* 0x004af9b0 Camera_ApplyPostProcess_33 full linked: callers=4 callees=0 */
int32_t sub_4af9b0(int32_t* a1)

{
    int32_t result = 0;
    int32_t* i = **a1;

    while (i)
    {
        i = *i;
        result += 1;
    }

    return result;
}
