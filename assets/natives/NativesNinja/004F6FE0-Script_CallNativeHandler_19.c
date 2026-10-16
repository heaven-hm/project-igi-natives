#include "004F6FE0-Script_CallNativeHandler_19.h"
/* 0x004f6fe0 Script_CallNativeHandler_19 full linked: callers=1 callees=0 */
int32_t sub_4f6fe0(void* a1)

{
    long double x87_r7 = *(a1 + 0x2c38);
    long double temp0 = 0.0;
    x87_r7 - temp0;

    if (*(&((x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
            | (x87_r7 == temp0 ? 1 : 0) << 0xe) + 1) & 1)
        return 0;

    long double x87_r7_3 = *(a1 + 0x2c18) + *(a1 + 0x2c08) + *(a1 + 0x2c10);
    long double temp1 = 0.0;
    x87_r7_3 - temp1;

    if (!(*(&((x87_r7_3 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, temp1) ? 1 : 0) << 0xa
        | (x87_r7_3 == temp1 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
        double var_8_1 = *(a1 + 0x2c38) * 2048.0;
        long double x87_r7_7 = *(a1 + 0x2c20) - var_8_1;
        long double temp2_1 = *(a1 + 0x2c08);
        x87_r7_7 - temp2_1;

        if (*(&((x87_r7_7 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_7, temp2_1) ? 1 : 0) << 0xa
            | (x87_r7_7 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x41)
        {
            long double x87_r7_9 = *(a1 + 0x2c40) * 2048.0;
            long double x87_r6_2 = *(a1 + 0x2c28) - x87_r7_9;
            long double temp3_1 = *(a1 + 0x2c10);
            x87_r6_2 - temp3_1;

            if (*(&((x87_r6_2 < temp3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, temp3_1) ? 1 : 0) << 0xa
                | (x87_r6_2 == temp3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
            {
                long double x87_r6_4 = var_8_1 + *(a1 + 0x2c20);
                long double temp4_1 = *(a1 + 0x2c08);
                x87_r6_4 - temp4_1;

                if (!(*(&((x87_r6_4 < temp4_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_4, temp4_1) ? 1 : 0) << 0xa
                    | (x87_r6_4 == temp4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                {
                    long double x87_r7_10 = x87_r7_9 + *(a1 + 0x2c28);
                    long double temp5_1 = *(a1 + 0x2c10);
                    x87_r7_10 - temp5_1;

                    if (!(*(&((x87_r7_10 < temp5_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_10, temp5_1) ? 1 : 0) << 0xa
                            | (x87_r7_10 == temp5_1 ? 1 : 0) << 0xe) + 1) & 1))
                        return 0;
                }
            }
        }
    }

    return 1;
}
