#include "0043A660-AlarmLight_Update.h"
/* 0x0043a660 AlarmLight_Update full linked: callers=0 callees=3 */
int32_t AlarmLight_Update(float a1, float a2)

{
    long double x87_r7 = *(a1 + 0x9c);
    long double x87_r6 = *(a1 + 0xa0);
    x87_r6 - x87_r7;
    long double x87_r7_1;

    if (!(*(&((x87_r6 < x87_r7 ? 1 : 0) << 8 | (FCMP_UO(x87_r6, x87_r7) ? 1 : 0) << 0xa
            | (x87_r6 == x87_r7 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_1 = *(a1 + 0xa0);
    else
        x87_r7_1 = *(a1 + 0x9c);

    long double x87_r6_1 = *(a1 + 0x98);
    x87_r6_1 - x87_r7_1;
    long double x87_r7_3;

    if (*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_4 = *(a1 + 0x9c);
        long double x87_r6_2 = *(a1 + 0xa0);
        x87_r6_2 - x87_r7_4;

        if (!(*(&((x87_r6_2 < x87_r7_4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_3 = *(a1 + 0xa0);
        else
            x87_r7_3 = *(a1 + 0x9c);
    }
    else
        x87_r7_3 = *(a1 + 0x98);

    int32_t var_8 = 1;
    float var_14 = a1;
    long double st0_1 =
        Level_CheckQTaskID_5(a2, a1 + 0x20, sub_4d0950(*(a1 + 0x6c)) * x87_r7_3);
    long double temp0 = 0f;
    st0_1 - temp0;
    int16_t result = (st0_1 < temp0 ? 1 : 0) << 8 | (FCMP_UO(st0_1, temp0) ? 1 : 0) << 0xa
        | (st0_1 == temp0 ? 1 : 0) << 0xe;

    if (*(&result + 1) & 0x40)
        return result;

    return Vehicle_1009011(a1);
}
