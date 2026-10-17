// Original IGI.EXE function: Script_ParseEnumReal32_20 (VA 0x004F7C20; static CFG gate PASS, CFG score 1.000).
#include "Script_ParseEnumReal32_20.h"
int32_t Script_ParseEnumReal32_20(void* a1)

{
    int32_t result = 0;
    long double x87_r7_1 = *(a1 + 0x2c7c) * 0.5f;
    double* objC = a1 + 0x78;
    int32_t i_1 = 7;
    int32_t i;

    do
    {
        int32_t j_1 = 7;
        int32_t j;

        do
        {
            int32_t k_1 = 7;
            int32_t k;

            do
            {
                long double x87_r6_3 = fabsl(objC[-2] - *(a1 + 0x2c08));
                x87_r7_1 - x87_r6_3;

                if (!(*(&((x87_r7_1 < x87_r6_3 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_1, x87_r6_3) ? 1 : 0) << 0xa
                    | (x87_r7_1 == x87_r6_3 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                {
                    long double x87_r6_5 = fabsl(objC[-1] - *(a1 + 0x2c10));
                    x87_r7_1 - x87_r6_5;

                    if (!(*(&((x87_r7_1 < x87_r6_5 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_1, x87_r6_5) ? 1 : 0) << 0xa
                        | (x87_r7_1 == x87_r6_5 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                    {
                        long double x87_r6_7 = fabsl(*objC - *(a1 + 0x2c18));
                        x87_r7_1 - x87_r6_7;

                        if (!(*(&((x87_r7_1 < x87_r6_7 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_1, x87_r6_7) ? 1 : 0) << 0xa
                                | (x87_r7_1 == x87_r6_7 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                            result |= *(objC + 0xc);
                    }
                }

                objC = &objC[4];
                k = k_1;
                k_1 -= 1;
            } while (k != 1);
            j = j_1;
            j_1 -= 1;
        } while (j != 1);
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    return result;
}
