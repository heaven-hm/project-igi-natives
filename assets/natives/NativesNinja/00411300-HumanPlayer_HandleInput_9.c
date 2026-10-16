#include "00411300-HumanPlayer_HandleInput_9.h"
/* 0x00411300 HumanPlayer_HandleInput_9 full linked: callers=1 callees=0 */
void* HumanPlayer_HandleInput_9(void* a1)

{
    void* result = a1;
    int32_t i_1 = 4;
    float* ecx = result + 0xdcc;
    int32_t i;

    do
    {
        long double x87_r7_1 = *ecx;
        long double temp0_1 = 0f;
        x87_r7_1 - temp0_1;
        result = (x87_r7_1 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp0_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp0_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x40))
        {
            long double x87_r7_3 = *ecx - 0.0222222228f;
            *ecx = x87_r7_3;
            long double temp2_1 = 0f;
            x87_r7_3 - temp2_1;
            result = (x87_r7_3 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, temp2_1) ? 1 : 0) << 0xa
                | (x87_r7_3 == temp2_1 ? 1 : 0) << 0xe;

            if (*(&result + 1) & 1)
                *ecx = 0f;
        }

        ecx = &ecx[1];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    return result;
}
