#include "00411350-HumanPlayer_ApplyPhysics_9.h"
/* 0x00411350 HumanPlayer_ApplyPhysics_9 full linked: callers=1 callees=0 */
int32_t HumanPlayer_ApplyPhysics_9(void* a1)

{
    long double x87_r7 = *(a1 + 0xddc);
    long double temp0 = 0f;
    x87_r7 - temp0;
    int16_t result = (x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
    {
        long double x87_r7_1 = *(a1 + 0xddc);
        long double temp1_1 = 1f;
        x87_r7_1 - temp1_1;
        long double x87_r7_2 = *(a1 + 0xddc);
        long double x87_r7_3;

        x87_r7_3 = *(&((x87_r7_1 < temp1_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_1, temp1_1) ? 1 : 0) << 0xa | (x87_r7_1 == temp1_1 ? 1 : 0) << 0xe
            | 0x3800) + 1) & 0x41 ? x87_r7_2 - 0.0166666675f : x87_r7_2 - 0.0111111114f;

        *(a1 + 0xddc) = x87_r7_3;
        long double x87_r7_4 = *(a1 + 0xddc);
        long double temp2_1 = 0f;
        x87_r7_4 - temp2_1;
        result = (x87_r7_4 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, temp2_1) ? 1 : 0) << 0xa
            | (x87_r7_4 == temp2_1 ? 1 : 0) << 0xe;

        if (*(&result + 1) & 1)
            *(a1 + 0xddc) = 0;
    }

    return result;
}
