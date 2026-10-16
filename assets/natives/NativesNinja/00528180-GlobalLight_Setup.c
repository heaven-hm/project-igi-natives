#include "00528180-GlobalLight_Setup.h"
/* 0x00528180 GlobalLight_Setup full linked: callers=0 callees=6 */
int32_t sub_528180(void* a1)

{
    if (*(a1 + 0x1b4))
    {
        sub_4b2740(a1 + 0x198);
        *(a1 + 0x1b5) = 1;
        *(a1 + 0x1b4) = 0;
    }

    if (*(a1 + 0x1b5))
    {
        sub_4b2720(a1 + 0x198);
        sub_4b26c0();
        *(a1 + 0x1b5) = 0;
    }

    *(a1 + 0x18c) = 0x7f7fffff;
    *(a1 + 0x194) = 0xff7fffff;
    *(a1 + 0x190) = 0xff7fffff;
    int32_t* i_1 = QTask_DeleteTask_2(a1, g_a84374);

    for (int32_t* i = i_1; i; i = i_1)
    {
        long double x87_r7_1 = i[0x12];
        long double temp0_1 = *(a1 + 0x190);
        x87_r7_1 - temp0_1;
        i_1 = (x87_r7_1 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp0_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp0_1 ? 1 : 0) << 0xe;

        if (!(*(&i_1 + 1) & 0x41))
        {
            i_1 = i[0x12];
            *(a1 + 0x190) = i_1;
        }

        long double x87_r7_2 = i[0x12];
        long double temp1_1 = *(a1 + 0x18c);
        x87_r7_2 - temp1_1;
        i_1 = (x87_r7_2 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_2 == temp1_1 ? 1 : 0) << 0xe;

        if (*(&i_1 + 1) & 1)
            *(a1 + 0x18c) = i[0x12];

        i_1 = g_a84374;
        i_1 = QTask_TriggerEvent_2(i, i_1);
    }

    return sub_528460(0f);
}
