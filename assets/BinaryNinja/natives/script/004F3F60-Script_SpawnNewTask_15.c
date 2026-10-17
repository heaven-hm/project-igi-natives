// Original IGI.EXE function: Script_SpawnNewTask_15 (VA 0x004F3F60; static CFG gate PASS, CFG score 1.000).
#include "Script_SpawnNewTask_15.h"
void* Script_SpawnNewTask_15(int32_t context)

{
    if (*(context + 0xf0) < *(context + 0x20150))
    {
        long double fpu_val_7_1 = *(context + 0xec);
        long double f0_1 = 0.0f;
        fpu_val_7_1 - f0_1;

        if (!(*(&((fpu_val_7_1 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f0_1) ? 1 : 0) << 0xa
            | (fpu_val_7_1 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
            long double fpu_val_7_3 = *(context + 0xec) - 1.0f;
            *(context + 0xec) = fpu_val_7_3;
            long double f2_1 = 0.0f;
            fpu_val_7_3 - f2_1;

            if (*(&((fpu_val_7_3 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_3, f2_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_3 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                *(context + 0xf0) = *(context + 0xf0) + 1.0f;
        }

        long double fpu_val_7_6 = *(context + 0xec);
        long double f1_1 = 0.0f;
        fpu_val_7_6 - f1_1;

        if (*(&((fpu_val_7_6 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_6, f1_1) ? 1 : 0) << 0xa
            | (fpu_val_7_6 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40)
        {
            long double fpu_val_7_12;
            long double f4_1;

            do
            {
                int32_t item_8_1 = *(context + 0xf0);

                if (item_8_1 >= *(context + 0x20150))
                    break;

                int32_t temp_2 = *(context + (item_8_1 << 3) + 0xf4);
                long double fpu_val_7_8 = *(context + (item_8_1 << 3) + 0xf8);

                if (temp_2 == 0x20)
                    fpu_val_7_8 = fpu_val_7_8;

                *(context + (temp_2 << 2) + 0x6c) = fpu_val_7_8;
                long double fpu_val_7_9 = *(context + 0xec);
                long double f3_1 = 0.0f;
                fpu_val_7_9 - f3_1;

                if (*(&((fpu_val_7_9 < f3_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_9, f3_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_9 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                    *(context + 0xf0) = *(context + 0xf0) + 1.0f;

                fpu_val_7_12 = *(context + 0xec);
                f4_1 = 0.0f;
                fpu_val_7_12 - f4_1;
            } while (*(&((fpu_val_7_12 < f4_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_12, f4_1) ? 1 : 0) << 0xa
                | (fpu_val_7_12 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x40);
        }
    }

    return AnimTask_SendChannels(context);
}
