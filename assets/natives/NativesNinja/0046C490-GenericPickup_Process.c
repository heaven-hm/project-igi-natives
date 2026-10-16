#include "0046C490-GenericPickup_Process.h"
/* 0x0046c490 GenericPickup_Process full linked: callers=0 callees=8 */
void* sub_46c490(float a1)

{
    void* result = sub_4cec10(a1 + 0x108);

    if (result)
        result = sub_4c48d0(a1, result);

    result = *(a1 + 0x11a);

    if (!result)
        return result;

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

        if (!(*(&((x87_r6_3 < x87_r7_5 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_3, x87_r7_5) ? 1 : 0) << 0xa
                | (x87_r6_3 == x87_r7_5 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_4 = *(a1 + 0xa0);
        else
            x87_r7_4 = *(a1 + 0x9c);
    }
    else
        x87_r7_4 = *(a1 + 0x98);

    float var_8_3 = sub_4d0950(*(a1 + 0x6c)) * x87_r7_4;
    sub_4c6940(Level_StartMission_4(), a1, a1 + 0xf0, var_8_3);
    double* eax_3 = sub_4c3440(a1);
    return sub_4dcf00(Level_StartMission_4(), a1, eax_3);
}
