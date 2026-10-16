#include "gi_platform.h"
#include "0045FCD0-Human_Cleanup_3.h"
int32_t Human_Cleanup_3(void* a1, void* a2)

{
    void* flagP = (*(int32_t*)(uintptr_t)(a1 + 0x4ec));
    AI_FireWeapon_23(a2, flagP);
    AI_TakeCover_23(a2 + 0x18, (*(int32_t*)(uintptr_t)(a1 + 0x4ec)));
    (*(int32_t*)(uintptr_t)(a2 + 0x40)) = *(flagP + 0x1e4);
    memcpy(a2 + 0x44, a1 + 0x78, 0x28);
    int32_t result = *(flagP + 0x1e8);
    (*(int32_t*)(uintptr_t)(a2 + 0x6c)) = result;
    (*(int32_t*)(uintptr_t)(a2 + 0x70)) = (*(int32_t*)(uintptr_t)(a1 + 0x4f0));
    result = *(flagP + 0x13a);

    if (result)
    {
        memcpy(a2, flagP + 0x140, 0x18);
        memcpy(a2 + 0x18, flagP + 0x158, 0x28);
        (*(int32_t*)(uintptr_t)(a2 + 0x70)) = 4;
    }

    long double fpu7 = (*(int32_t*)(uintptr_t)(a1 + 0x1fc));
    long double f0 = 0.0f;
    fpu7 - f0;
    result = (fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
    {
        long double x87_r7_1 = (*(int32_t*)(uintptr_t)(a1 + 0x15c));
        long double f1_1 = 0.0f;
        x87_r7_1 - f1_1;
        result = (x87_r7_1 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f1_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == f1_1 ? 1 : 0) << 0xe;

        if (*(&result + 1) & 0x40)
            (*(int32_t*)(uintptr_t)(a1 + 0x4f4)) ^= 1;
    }

    result = (*(int32_t*)(uintptr_t)(a1 + 0x4f4));

    if (result)
        (*(int32_t*)(uintptr_t)(a2 + 0x70)) = 2;

    return result;
}
