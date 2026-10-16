#include "gi_platform.h"
#include "004F3F60-Script_SpawnNewTask_15.h"
void* Script_SpawnNewTask_15(int32_t a1)

{
    if ((*(int32_t*)(uintptr_t)(a1 + 0xf0)) < (*(int32_t*)(uintptr_t)(a1 + 0x20150)))
    {
        long double x87_r7_1 = (*(int32_t*)(uintptr_t)(a1 + 0xec));
        long double f0_1 = 0.0f;
        x87_r7_1 - f0_1;

        if (!(*(&((x87_r7_1 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f0_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
            long double x87_r7_3 = (*(int32_t*)(uintptr_t)(a1 + 0xec)) - 1.0f;
            (*(int32_t*)(uintptr_t)(a1 + 0xec)) = x87_r7_3;
            long double f2_1 = 0.0f;
            x87_r7_3 - f2_1;

            if (*(&((x87_r7_3 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, f2_1) ? 1 : 0) << 0xa
                    | (x87_r7_3 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                (*(int32_t*)(uintptr_t)(a1 + 0xf0)) = (*(int32_t*)(uintptr_t)(a1 + 0xf0)) + 1.0f;
        }

        long double x87_r7_6 = (*(int32_t*)(uintptr_t)(a1 + 0xec));
        long double f1_1 = 0.0f;
        x87_r7_6 - f1_1;

        if (*(&((x87_r7_6 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, f1_1) ? 1 : 0) << 0xa
            | (x87_r7_6 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40)
        {
            long double x87_r7_12;
            long double f4_1;

            do
            {
                int32_t v_8_1 = (*(int32_t*)(uintptr_t)(a1 + 0xf0));

                if (v_8_1 >= (*(int32_t*)(uintptr_t)(a1 + 0x20150)))
                    break;

                int32_t tmpD2 = (*(int32_t*)(uintptr_t)(a1 + (v_8_1 << 3) + 0xf4));
                long double x87_r7_8 = (*(int32_t*)(uintptr_t)(a1 + (v_8_1 << 3) + 0xf8));

                if (tmpD2 == 0x20)
                    x87_r7_8 = x87_r7_8;

                (*(int32_t*)(uintptr_t)(a1 + (tmpD2 << 2) + 0x6c)) = x87_r7_8;
                long double x87_r7_9 = (*(int32_t*)(uintptr_t)(a1 + 0xec));
                long double f3_1 = 0.0f;
                x87_r7_9 - f3_1;

                if (*(&((x87_r7_9 < f3_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_9, f3_1) ? 1 : 0) << 0xa
                        | (x87_r7_9 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                    (*(int32_t*)(uintptr_t)(a1 + 0xf0)) = (*(int32_t*)(uintptr_t)(a1 + 0xf0)) + 1.0f;

                x87_r7_12 = (*(int32_t*)(uintptr_t)(a1 + 0xec));
                f4_1 = 0.0f;
                x87_r7_12 - f4_1;
            } while (*(&((x87_r7_12 < f4_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_12, f4_1) ? 1 : 0) << 0xa
                | (x87_r7_12 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x40);
        }
    }

    return AnimTask_SendChannels(a1);
}
