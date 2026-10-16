#include "gi_platform.h"
#include "00527270-Dirlight_Process.h"
int32_t Dirlight_Process(void* a1)

{
    (*(int32_t*)(uintptr_t)(a1 + 0x5c)) = 0xff7fffff;
    (*(int32_t*)(uintptr_t)(a1 + 0x54)) = 0x7f7fffff;
    (*(int32_t*)(uintptr_t)(a1 + 0x58)) = 0xff7fffff;
    int32_t* i_1;
    int32_t tmpD;
    i_1 = QTask_DeleteTask_2(a1, g_a83d4c);

    for (int32_t* i = i_1; i; i = QTask_TriggerEvent_2(i, tmpD))
    {
        long double x87_r7_1 = i[0x14];
        long double f0_1 = (*(int32_t*)(uintptr_t)(a1 + 0x58));
        x87_r7_1 - f0_1;

        if (!(*(&((x87_r7_1 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f0_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x41))
        {
            tmpD = i[0x14];
            (*(int32_t*)(uintptr_t)(a1 + 0x58)) = tmpD;
        }

        long double x87_r7_2 = i[0x14];
        long double f1_1 = (*(int32_t*)(uintptr_t)(a1 + 0x54));
        x87_r7_2 - f1_1;

        if (*(&((x87_r7_2 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, f1_1) ? 1 : 0) << 0xa
                | (x87_r7_2 == f1_1 ? 1 : 0) << 0xe) + 1) & 1)
            (*(int32_t*)(uintptr_t)(a1 + 0x54)) = i[0x14];

        tmpD = g_a83d4c;
    }

    return Light_ComputeDirectionalLight_6(0.0f);
}
