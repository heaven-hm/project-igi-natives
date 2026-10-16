#include "gi_platform.h"
#include "004FC7B0-Script_ParseEnumReal32_29.h"
int32_t Script_ParseEnumReal32_29(void* a1)

{
    int32_t valA = (*(int32_t*)(uintptr_t)(a1 + 0x690));
    bool cond_0 = (*(int32_t*)(uintptr_t)(a1 + 0x1b8)) <= 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x690)) = 0;

    if (!cond_0 && !valA && !(*(int32_t*)(uintptr_t)(a1 + 0x14c)))
    {
        void* tmpD1 = (*(int32_t*)(uintptr_t)(a1 + 0x1b4));
        long double x87_r7_1 = (*(int32_t*)(uintptr_t)(a1 + 0xf8));
        long double f0_1 = *(tmpD1 + 0x2cc);
        x87_r7_1 - f0_1;

        if (*(&((x87_r7_1 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f0_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == f0_1 ? 1 : 0) << 0xe) + 1) & 1)
        {
            long double x87_r7_2 = (*(int32_t*)(uintptr_t)(a1 + 0x140));
            long double x87_r6_1 = (*(int32_t*)(uintptr_t)(a1 + 0x13c));
            long double x87_r5_1 = (*(int32_t*)(uintptr_t)(a1 + 0x138));
            long double x87_r4_4 = x87_r5_1 * x87_r5_1 + x87_r6_1 * x87_r6_1 + x87_r7_2 * x87_r7_2;
            long double f1_1 = *(tmpD1 + 0x2d0);
            x87_r4_4 - f1_1;

            if (*(&((x87_r4_4 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r4_4, f1_1) ? 1 : 0) << 0xa
                    | (x87_r4_4 == f1_1 ? 1 : 0) << 0xe) + 1) & 1)
                return 1;
        }
    }

    return 0;
}
