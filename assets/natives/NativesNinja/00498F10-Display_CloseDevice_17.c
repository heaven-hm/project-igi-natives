#include "00498F10-Display_CloseDevice_17.h"
/* 0x00498f10 Display_CloseDevice_17 full linked: callers=1 callees=4 */
int32_t sub_498f10(float a1)

{
    void* esi_2 = ((*(a1 + 0x5644) + *(a1 + 0x5640) * 0x18 + 0x8b) << 5) + a1;
    double var_30 = (g_bcab18 - 36864.0) * 4.0690104166666664e-05 + 0.5;
    double var_10 = sub_4a55fe(var_30) * 24576f;
    sub_499090(a1);
    int32_t var_38 = *(&var_10 + 4);
    sub_499910(a1, var_10);
    int32_t result_1 = 9;
    int32_t result;
    bool cond:0_1;

    do
    {
        int32_t i_1 = 9;
        int32_t i;

        do
        {
            if ((*(esi_2 + 0x1c) & *(esi_2 + 0x3c) & *(esi_2 + 0x33c) & *(esi_2 + 0x31c)) == 0x20)
            {
                long double x87_r7_6 = *(esi_2 + 0x18);
                long double x87_r6_1 = *(esi_2 + 0x318);
                x87_r6_1 - x87_r7_6;
                long double x87_r7_7;

                if (!(*(&((x87_r6_1 < x87_r7_6 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_1, x87_r7_6) ? 1 : 0) << 0xa
                        | (x87_r6_1 == x87_r7_6 ? 1 : 0) << 0xe) + 1) & 1))
                    x87_r7_7 = *(esi_2 + 0x318);
                else
                    x87_r7_7 = *(esi_2 + 0x18);

                long double x87_r6_2 = *(esi_2 + 0x38);
                long double x87_r5_1 = *(esi_2 + 0x338);
                x87_r5_1 - x87_r6_2;
                long double x87_r6_3;

                if (!(*(&((x87_r5_1 < x87_r6_2 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r5_1, x87_r6_2) ? 1 : 0) << 0xa
                        | (x87_r5_1 == x87_r6_2 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                    x87_r6_3 = *(esi_2 + 0x338);
                else
                    x87_r6_3 = *(esi_2 + 0x38);

                x87_r7_7 - x87_r6_3;
                long double x87_r7_11;

                if (*(&((x87_r7_7 < x87_r6_3 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_7, x87_r6_3) ? 1 : 0) << 0xa
                    | (x87_r7_7 == x87_r6_3 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                {
                    long double x87_r7_12 = *(esi_2 + 0x38);
                    long double x87_r6_6 = *(esi_2 + 0x338);
                    x87_r6_6 - x87_r7_12;

                    if (!(*(&((x87_r6_6 < x87_r7_12 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r6_6, x87_r7_12) ? 1 : 0) << 0xa
                            | (x87_r6_6 == x87_r7_12 ? 1 : 0) << 0xe) + 1) & 1))
                        x87_r7_11 = *(esi_2 + 0x338);
                    else
                        x87_r7_11 = *(esi_2 + 0x38);
                }
                else
                {
                    long double x87_r7_10 = *(esi_2 + 0x18);
                    long double x87_r6_5 = *(esi_2 + 0x318);
                    x87_r6_5 - x87_r7_10;

                    if (!(*(&((x87_r6_5 < x87_r7_10 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r6_5, x87_r7_10) ? 1 : 0) << 0xa
                            | (x87_r6_5 == x87_r7_10 ? 1 : 0) << 0xe) + 1) & 1))
                        x87_r7_11 = *(esi_2 + 0x318);
                    else
                        x87_r7_11 = *(esi_2 + 0x18);
                }

                *(&var_30 + 4) = x87_r7_11;
                var_30 = 0x10;
                void** eax_5 = sub_4b72e0(sub_499430, 0x10);
                eax_5[2] = var_10;
                *eax_5 = a1;
                eax_5[1] = esi_2;
                eax_5[3] = *(&var_10 + 4);
            }

            esi_2 += 0x20;
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
        esi_2 += 0x1e0;
        result = result_1 - 1;
        cond:0_1 = result_1 != 1;
        result_1 = result;
    } while (cond:0_1);
    return result;
}
