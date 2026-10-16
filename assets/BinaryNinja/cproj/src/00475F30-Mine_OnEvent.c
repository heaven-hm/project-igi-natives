#include "gi_platform.h"
#include "00475F30-Mine_OnEvent.h"
int32_t Mine_OnEvent(float a1, int32_t a2)

{
    (*(int32_t*)(uintptr_t)(a2 + 0xc)) = a1 + 0x20;
    (*(int32_t*)(uintptr_t)(a2 + 0x10)) = a1 + 0x70;
    long double fpu7 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
    long double fpu6 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
    fpu6 - fpu7;
    long double x87_r7_1;

    if (!(*(&((fpu6 < fpu7 ? 1 : 0) << 8 | (FCMP_UO(fpu6, fpu7) ? 1 : 0) << 0xa
            | (fpu6 == fpu7 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_1 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
    else
        x87_r7_1 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));

    long double x87_r6_1 = (*(int32_t*)(uintptr_t)(a1 + 0x98));
    x87_r6_1 - x87_r7_1;
    long double x87_r7_3;

    if (*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_4 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
        long double x87_r6_2 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
        x87_r6_2 - x87_r7_4;

        if (!(*(&((x87_r6_2 < x87_r7_4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_3 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
        else
            x87_r7_3 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
    }
    else
        x87_r7_3 = (*(int32_t*)(uintptr_t)(a1 + 0x98));

    long double x87_r7_6 = Render_ComputeNormals((*(int32_t*)(uintptr_t)(a1 + 0x6c))) * x87_r7_3;
    (*(int32_t*)(uintptr_t)(a2 + 0x18)) = 0;
    (*(int32_t*)(uintptr_t)(a2 + 0x14)) = x87_r7_6;
    char result = (*(int32_t*)(uintptr_t)(a1 + 0x190));

    if (!result)
    {
        result = (*(int32_t*)(uintptr_t)(a1 + 0x249));

        if (result)
        {
            (*(int32_t*)(uintptr_t)(a2 + 0x18)) = &g_5be110;
            result = AI_TakeCover_25(a2);
            (*(int32_t*)(uintptr_t)(a2 + 0x18)) = 0;
        }
    }

    return result;
}
