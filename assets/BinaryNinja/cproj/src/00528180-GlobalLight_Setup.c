#include "gi_platform.h"
#include "00528180-GlobalLight_Setup.h"
int32_t GlobalLight_Setup(void* a1)

{
    if ((*(int32_t*)(uintptr_t)(a1 + 0x1b4)))
    {
        Sys_ExecuteBytecode_9(a1 + 0x198);
        (*(int32_t*)(uintptr_t)(a1 + 0x1b5)) = 1;
        (*(int32_t*)(uintptr_t)(a1 + 0x1b4)) = 0;
    }

    if ((*(int32_t*)(uintptr_t)(a1 + 0x1b5)))
    {
        Sys_CloseFileStream_9(a1 + 0x198);
        Sys_CheckHeap_8();
        (*(int32_t*)(uintptr_t)(a1 + 0x1b5)) = 0;
    }

    (*(int32_t*)(uintptr_t)(a1 + 0x18c)) = 0x7f7fffff;
    (*(int32_t*)(uintptr_t)(a1 + 0x194)) = 0xff7fffff;
    (*(int32_t*)(uintptr_t)(a1 + 0x190)) = 0xff7fffff;
    int32_t* i_1 = QTask_DeleteTask_2(a1, g_a84374);

    for (int32_t* i = i_1; i; i = i_1)
    {
        long double x87_r7_1 = i[0x12];
        long double f0_1 = (*(int32_t*)(uintptr_t)(a1 + 0x190));
        x87_r7_1 - f0_1;
        i_1 = (x87_r7_1 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f0_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == f0_1 ? 1 : 0) << 0xe;

        if (!(*(&i_1 + 1) & 0x41))
        {
            i_1 = i[0x12];
            (*(int32_t*)(uintptr_t)(a1 + 0x190)) = i_1;
        }

        long double x87_r7_2 = i[0x12];
        long double f1_1 = (*(int32_t*)(uintptr_t)(a1 + 0x18c));
        x87_r7_2 - f1_1;
        i_1 = (x87_r7_2 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, f1_1) ? 1 : 0) << 0xa
            | (x87_r7_2 == f1_1 ? 1 : 0) << 0xe;

        if (*(&i_1 + 1) & 1)
            (*(int32_t*)(uintptr_t)(a1 + 0x18c)) = i[0x12];

        i_1 = g_a84374;
        i_1 = QTask_TriggerEvent_2(i, i_1);
    }

    return (Light_UpdateGlobalLight_6(0.0f), 0);
}
