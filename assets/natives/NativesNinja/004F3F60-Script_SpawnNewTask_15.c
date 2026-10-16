#include "004F3F60-Script_SpawnNewTask_15.h"
/* 0x004f3f60 Script_SpawnNewTask_15 full linked: callers=2 callees=1 */
void* sub_4f3f60(int32_t a1)

{
    if (*(a1 + 0xf0) < *(a1 + 0x20150))
    {
        long double x87_r7_1 = *(a1 + 0xec);
        long double temp0_1 = 0f;
        x87_r7_1 - temp0_1;

        if (!(*(&((x87_r7_1 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp0_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp0_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
            long double x87_r7_3 = *(a1 + 0xec) - 1f;
            *(a1 + 0xec) = x87_r7_3;
            long double temp2_1 = 0f;
            x87_r7_3 - temp2_1;

            if (*(&((x87_r7_3 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, temp2_1) ? 1 : 0) << 0xa
                    | (x87_r7_3 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                *(a1 + 0xf0) = *(a1 + 0xf0) + 1f;
        }

        long double x87_r7_6 = *(a1 + 0xec);
        long double temp1_1 = 0f;
        x87_r7_6 - temp1_1;

        if (*(&((x87_r7_6 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_6 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x40)
        {
            long double x87_r7_12;
            long double temp4_1;

            do
            {
                int32_t var_8_1 = *(a1 + 0xf0);

                if (var_8_1 >= *(a1 + 0x20150))
                    break;

                int32_t edx_2 = *(a1 + (var_8_1 << 3) + 0xf4);
                long double x87_r7_8 = *(a1 + (var_8_1 << 3) + 0xf8);

                if (edx_2 == 0x20)
                    x87_r7_8 = x87_r7_8;

                *(a1 + (edx_2 << 2) + 0x6c) = x87_r7_8;
                long double x87_r7_9 = *(a1 + 0xec);
                long double temp3_1 = 0f;
                x87_r7_9 - temp3_1;

                if (*(&((x87_r7_9 < temp3_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_9, temp3_1) ? 1 : 0) << 0xa
                        | (x87_r7_9 == temp3_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                    *(a1 + 0xf0) = *(a1 + 0xf0) + 1f;

                x87_r7_12 = *(a1 + 0xec);
                temp4_1 = 0f;
                x87_r7_12 - temp4_1;
            } while (*(&((x87_r7_12 < temp4_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_12, temp4_1) ? 1 : 0) << 0xa
                | (x87_r7_12 == temp4_1 ? 1 : 0) << 0xe) + 1) & 0x40);
        }
    }

    return sub_4f4060(a1);
}
