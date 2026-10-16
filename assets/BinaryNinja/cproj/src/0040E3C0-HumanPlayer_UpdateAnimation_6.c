#include "gi_platform.h"
#include "0040E3C0-HumanPlayer_UpdateAnimation_6.h"
int32_t HumanPlayer_UpdateAnimation_6(void* a1, void* a2)

{
    long double fpu7 = (*(int32_t*)(uintptr_t)(a2 + 0x230));
    long double f0 = 0.0f;
    fpu7 - f0;
    int32_t ctxB = (*(int32_t*)(uintptr_t)(a1 + 8));
    int16_t result = (fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe;

    if (*(&result + 1) & 0x40)
    {
    label_40e3f4: ;
        if (!(ctxB & 0x20000))
            return result;
    }
    else
    {
        long double x87_r7_1 = (*(int32_t*)(uintptr_t)(a2 + 0x190));
        long double f1_1 = 0.0f;
        x87_r7_1 - f1_1;
        result = (x87_r7_1 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f1_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == f1_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x40))
            goto label_40e3f4;
    }

    AI_UpdatePatrol_29();
    AI_TakeCover_22((*(int32_t*)(uintptr_t)(a2 + 0x4ec)));
    AI_UpdateOrders_20(a2);
    (*(int32_t*)(uintptr_t)(a2 + 0x670)) = 0;
    (*(int32_t*)(uintptr_t)(a2 + 0x674)) = 0;
    (*(int32_t*)(uintptr_t)(a2 + 0x678)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0xc)) = (*(int32_t*)(uintptr_t)(a1 + 0x10));

    if (!(ctxB & 0x20000))
    {
        int32_t* tmpD2 = (*(int32_t*)(uintptr_t)(a1 + 4));
        (*(int32_t*)(uintptr_t)(a1 + 0x10)) = 0;
        int32_t valA3 = *tmpD2;
        (*(int32_t*)(uintptr_t)(a1 + 0x14)) = valA3;
        return valA3(a1, a2);
    }

    void* tmpD1 = (*(int32_t*)(uintptr_t)(a1 + 4));
    (*(int32_t*)(uintptr_t)(a1 + 0x10)) = 0x2f;
    int32_t valA1 = *(tmpD1 + 0xbc);
    (*(int32_t*)(uintptr_t)(a1 + 0x14)) = valA1;
    return valA1(a1, a2);
}
