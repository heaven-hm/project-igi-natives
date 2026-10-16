#include "00411240-HumanPlayer_Earcandy.h"
/* 0x00411240 HumanPlayer_Earcandy full linked: callers=1 callees=3 */
void* HumanPlayer_Earcandy(void* a1)

{
    long double x87_r7_1 = *(a1 + 0xdc8) - 0.00666666683f;
    long double temp0 = 0f;
    x87_r7_1 - temp0;
    *(a1 + 0xdc8) = x87_r7_1;
    bool c1 = /* bool c1 = unknown  {fst dword [esi+0xdc8], st0} */;

    if (!(*(&((x87_r7_1 < temp0 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9
        | (FCMP_UO(x87_r7_1, temp0) ? 1 : 0) << 0xa | (x87_r7_1 == temp0 ? 1 : 0) << 0xe | 0x3800) + 1)
        & 1))
    {
        long double temp1_1 = 1f;
        x87_r7_1 - temp1_1;

        if (!(*(&((x87_r7_1 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_1 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            *(a1 + 0xdc8) = 0x3f800000;
    }
    else
        *(a1 + 0xdc8) = 0;

    long double x87_r7_3 = *(a1 + 0xdc8);
    long double temp2 = 0f;
    x87_r7_3 - temp2;
    void* eax_1 = *(a1 + 0xdc4);

    if (*(&((x87_r7_3 < temp2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, temp2) ? 1 : 0) << 0xa
        | (x87_r7_3 == temp2 ? 1 : 0) << 0xe) + 1) & 0x40)
    {
        if (eax_1)
        {
            sub_4e6c00(eax_1);
            *(a1 + 0xdc4) = 0;
        }
    }
    else if (!eax_1)
        *(a1 + 0xdc4) = sub_4e6b00(*(a1 + 0x4ec), "earcandy");

    void* result = *(a1 + 0xdc4);

    if (!result)
        return result;

    return sub_4e6c60(result, 0xbf800000, *(a1 + 0xdc8));
}
