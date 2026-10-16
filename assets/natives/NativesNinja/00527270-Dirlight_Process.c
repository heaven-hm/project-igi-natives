#include "00527270-Dirlight_Process.h"
/* 0x00527270 Dirlight_Process full linked: callers=0 callees=3 */
int32_t sub_527270(void* a1)

{
    *(a1 + 0x5c) = 0xff7fffff;
    *(a1 + 0x54) = 0x7f7fffff;
    *(a1 + 0x58) = 0xff7fffff;
    int32_t* i_1;
    int32_t edx;
    i_1 = QTask_DeleteTask_2(a1, g_a83d4c);

    for (int32_t* i = i_1; i; i = QTask_TriggerEvent_2(i, edx))
    {
        long double x87_r7_1 = i[0x14];
        long double temp0_1 = *(a1 + 0x58);
        x87_r7_1 - temp0_1;

        if (!(*(&((x87_r7_1 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp0_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp0_1 ? 1 : 0) << 0xe) + 1) & 0x41))
        {
            edx = i[0x14];
            *(a1 + 0x58) = edx;
        }

        long double x87_r7_2 = i[0x14];
        long double temp1_1 = *(a1 + 0x54);
        x87_r7_2 - temp1_1;

        if (*(&((x87_r7_2 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_2 == temp1_1 ? 1 : 0) << 0xe) + 1) & 1)
            *(a1 + 0x54) = i[0x14];

        edx = g_a83d4c;
    }

    return sub_5274d0(0f);
}
