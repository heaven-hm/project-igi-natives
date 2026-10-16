#include "0046F9D0-AI_TakeCover_30.h"
/* 0x0046f9d0 AI_TakeCover_30 full linked: callers=1 callees=0 */
int32_t sub_46f9d0(void* a1)

{
    void* ecx = *(a1 + 0x1b8);
    long double x87_r7 = *(a1 + 0x1bc);
    long double x87_r6 = *(ecx + 0x24);
    x87_r6 - x87_r7;

    if (*(&((x87_r6 < x87_r7 ? 1 : 0) << 8 | (FCMP_UO(x87_r6, x87_r7) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7 ? 1 : 0) << 0xe) + 1) & 0x41)
    {
        long double x87_r7_2 = *(a1 + 0x1bc);
        long double x87_r6_1 = *(ecx + 0x20);
        x87_r6_1 - x87_r7_2;

        if (*(&((x87_r6_1 < x87_r7_2 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_2) ? 1 : 0) << 0xa
                | (x87_r6_1 == x87_r7_2 ? 1 : 0) << 0xe) + 1) & 1)
            *(a1 + 0x1bc) = *(ecx + 0x20);
    }
    else
        *(a1 + 0x1bc) = *(ecx + 0x24);

    long double x87_r7_3 = *(ecx + 0x28);
    long double temp0 = 6.2831853071795889;
    x87_r7_3 - temp0;
    int16_t result = (x87_r7_3 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, temp0) ? 1 : 0) << 0xa
        | (x87_r7_3 == temp0 ? 1 : 0) << 0xe;

    if (*(&result + 1) & 1)
    {
        long double x87_r7_5 = -(*(ecx + 0x28));
        long double x87_r6_2 = *(a1 + 0x1c0);
        x87_r6_2 - x87_r7_5;
        result = (x87_r6_2 < x87_r7_5 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_5) ? 1 : 0) << 0xa
            | (x87_r6_2 == x87_r7_5 ? 1 : 0) << 0xe | 0x3800;

        if (*(&result + 1) & 1)
            *(a1 + 0x1c0) = x87_r7_5;
        else
        {
            long double x87_r7_7 = *(a1 + 0x1c0);
            long double x87_r6_3 = *(ecx + 0x28);
            x87_r6_3 - x87_r7_7;
            result = (x87_r6_3 < x87_r7_7 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_3, x87_r7_7) ? 1 : 0) << 0xa
                | (x87_r6_3 == x87_r7_7 ? 1 : 0) << 0xe;

            if (*(&result + 1) & 1)
                *(a1 + 0x1c0) = *(ecx + 0x28);
        }
    }

    return result;
}
