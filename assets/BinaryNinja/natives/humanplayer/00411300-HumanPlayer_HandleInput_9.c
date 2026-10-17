// Original IGI.EXE function: HumanPlayer_HandleInput_9 (VA 0x00411300; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_HandleInput_9.h"
void* HumanPlayer_HandleInput_9(void* a1)

{
    void* result = a1;
    int32_t i_1 = 4;
    float* objC = result + 0xdcc;
    int32_t i;

    do
    {
        long double x87_r7_1 = *objC;
        long double f0_1 = 0f;
        x87_r7_1 - f0_1;
        result = (x87_r7_1 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f0_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == f0_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x40))
        {
            long double x87_r7_3 = *objC - 0.0222222228f;
            *objC = x87_r7_3;
            long double f2_1 = 0f;
            x87_r7_3 - f2_1;
            result = (x87_r7_3 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, f2_1) ? 1 : 0) << 0xa
                | (x87_r7_3 == f2_1 ? 1 : 0) << 0xe;

            if (*(&result + 1) & 1)
                *objC = 0f;
        }

        objC = &objC[1];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    return result;
}
