#include "gi_platform.h"
#include "004A38A0-BandFilter_Cleanup_5.h"
int32_t BandFilter_Cleanup_5(int32_t a1)

{
    int32_t srcS = a1;
    int32_t objC = (*(int32_t*)(uintptr_t)(srcS + 0x54));
    long double x87_r7_1 = -((*(int32_t*)(uintptr_t)(srcS + 0x24)));
    a1 = -4.0f / objC;
    long double f0 = a1;
    x87_r7_1 - f0;

    if (*(&((x87_r7_1 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f0) ? 1 : 0) << 0xa
            | (x87_r7_1 == f0 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        x87_r7_1 = a1;

    int32_t valA1 = (*(int32_t*)(uintptr_t)(srcS + 0x50));
    (*(int32_t*)(uintptr_t)(srcS + 0x24)) = x87_r7_1 + (*(int32_t*)(uintptr_t)(srcS + 0x24));

    if (valA1 >= objC)
        (*(int32_t*)(uintptr_t)(srcS + 0x50)) = 0;
    else
        (*(int32_t*)(uintptr_t)(srcS + 0x50)) = valA1 + 1;

    int32_t valA3 = (*(int32_t*)(uintptr_t)(srcS + 0x58));

    if (valA3 < (*(int32_t*)(uintptr_t)(srcS + 0x5c)))
    {
        (*(int32_t*)(uintptr_t)(srcS + 0x58)) = valA3 + 1;
        return valA3 + 1;
    }

    (*(int32_t*)(uintptr_t)(srcS + 0x58)) = Sys_AllocateMemory_14(0x935bf0) * (*(int32_t*)(uintptr_t)(srcS + 0x5c)) * 0.699999988.0f;
    int32_t result;
    long double fp0_1;
    fp0_1 = Sys_AllocateMemory_14(0x935bf0);
    (*(int32_t*)(uintptr_t)(srcS + 0x24)) = fp0_1 * (*(int32_t*)(uintptr_t)(srcS + 0x28));
    return result;
}
