#include "004F7C20-Script_ParseEnumReal32_20.h"
/* 0x004f7c20 Script_ParseEnumReal32_20 full linked: callers=1 callees=0 */
int32_t sub_4f7c20(void* a1)

{
    int32_t result = 0;
    long double x87_r7_1 = *(a1 + 0x2c7c) * 0.5f;
    double* ecx = a1 + 0x78;
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
                long double x87_r6_3 = fabsl(ecx[-2] - *(a1 + 0x2c08));
                x87_r7_1 - x87_r6_3;

                if (!(*(&((x87_r7_1 < x87_r6_3 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_1, x87_r6_3) ? 1 : 0) << 0xa
                    | (x87_r7_1 == x87_r6_3 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                {
                    long double x87_r6_5 = fabsl(ecx[-1] - *(a1 + 0x2c10));
                    x87_r7_1 - x87_r6_5;

                    if (!(*(&((x87_r7_1 < x87_r6_5 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_1, x87_r6_5) ? 1 : 0) << 0xa
                        | (x87_r7_1 == x87_r6_5 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                    {
                        long double x87_r6_7 = fabsl(*ecx - *(a1 + 0x2c18));
                        x87_r7_1 - x87_r6_7;

                        if (!(*(&((x87_r7_1 < x87_r6_7 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_1, x87_r6_7) ? 1 : 0) << 0xa
                                | (x87_r7_1 == x87_r6_7 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                            result |= *(ecx + 0xc);
                    }
                }

                ecx = &ecx[4];
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
