#include "004422F0-SCamera_Cleanup_4.h"
/* 0x004422f0 SCamera_Cleanup_4 full linked: callers=0 callees=2 */
void* sub_4422f0(float a1, float a2)

{
    void* result = *(a1 + 0x25d0);

    if (!*(result + 0x170))
    {
        long double x87_r7_1 = *(a1 + 0x9c);
        long double x87_r6_1 = *(a1 + 0xa0);
        x87_r6_1 - x87_r7_1;
        long double x87_r7_2;

        if (!(*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_2 = *(a1 + 0xa0);
        else
            x87_r7_2 = *(a1 + 0x9c);

        long double x87_r6_2 = *(a1 + 0x98);
        x87_r6_2 - x87_r7_2;
        long double x87_r7_4;

        if (*(&((x87_r6_2 < x87_r7_2 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
            | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double x87_r7_5 = *(a1 + 0x9c);
            long double x87_r6_3 = *(a1 + 0xa0);
            x87_r6_3 - x87_r7_5;

            if (!(*(&((x87_r6_3 < x87_r7_5 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_3, x87_r7_5) ? 1 : 0) << 0xa
                    | (x87_r6_3 == x87_r7_5 ? 1 : 0) << 0xe) + 1) & 1))
                x87_r7_4 = *(a1 + 0xa0);
            else
                x87_r7_4 = *(a1 + 0x9c);
        }
        else
            x87_r7_4 = *(a1 + 0x98);

        int32_t var_8_1 = 1;
        float var_14_1 = a1;
        long double st0_2;
        st0_2 = Level_CheckQTaskID_5(a2, a1 + 0x20, sub_4d0950(*(a1 + 0x6c)) * x87_r7_4);
        long double x87_r7_9 = st0_2 + *(a1 + 0x104);
        *(a1 + 0x104) = x87_r7_9;
        long double temp0_1 = *(a1 + 0x108);
        x87_r7_9 - temp0_1;
        result = (x87_r7_9 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_9, temp0_1) ? 1 : 0) << 0xa
            | (x87_r7_9 == temp0_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 1))
            *(a1 + 0x25cc) = 1;
    }

    return result;
}
