#include "gi_platform.h"
#include "004F66A0-Script_ParseEnumInt32_19.h"
int32_t Script_ParseEnumInt32_19(void* a1, int32_t* a2, int32_t* a3)

{
    int32_t result = (*(int32_t*)(uintptr_t)(a1 + 0x2ca8));
    int32_t* srcS = (*(int32_t*)(uintptr_t)(a1 + (result << 2) + 0x2b4c));

    if (result < 0x14)
    {
        *srcS = *a2;
        srcS[1] = a2[1];
        srcS[2] = a2[2];
        srcS[3] = *a3;
        srcS[4] = a3[1];
        srcS[5] = a3[2];
        srcS[6] = *a3;
        srcS[7] = a3[1];
        srcS[8] = a3[2];
        srcS[6] = (*(int32_t*)(uintptr_t)(a1 + 0x2c80)) * srcS[6];
        srcS[7] = (*(int32_t*)(uintptr_t)(a1 + 0x2c80)) * srcS[7];
        srcS[8] = (*(int32_t*)(uintptr_t)(a1 + 0x2c80)) * srcS[8];
        long double fp0_1;
        fp0_1 = Sys_AllocateMemory_14(0xa76c90);
        srcS[9] = fp0_1 * 0.300000012.0f + 0.699999988.0f;
        (*(int32_t*)(uintptr_t)(a1 + 0x2ca8)) += 1;
    }

    return result;
}
