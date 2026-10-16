#include "0042B040-Train_ReceiveChannels.h"
/* 0x0042b040 Train_ReceiveChannels full linked: callers=0 callees=9 */
float Train_ReceiveChannels(void* a1, int32_t* a2) __location("eax")

{
    int32_t* edx = *a2[1];

    if (edx != 0xbf800000)
        *(a1 + 0x730) = edx;

    if (!*a2)
    {
        *(a2[1] + 4) = 0xc0000000;
        *(a1 + 0x768) = *(a1 + 0x76c);
        sub_4fb700(a1, nullptr);
        sub_4f4600(a1);
        sub_4f4820(a1);
        sub_4f4800(a1);
        Menu_LeaveMenus_21(a1, 1);
        long double x87_r7_2 = *(a1 + 0x754) * *(a1 + 0x758) * 37.9259262f;
        *(a1 + 0x764) = x87_r7_2;
        *(a1 + 0x108) = x87_r7_2;
        *(a1 + 0x10c) = 0;
        *(a1 + 0x110) = 0;
        float result = sub_4ecdb0(a1 + 0xf0);
        long double x87_r7_3 = *(a1 + 0x758);
        *(a1 + 0x730) = x87_r7_3;
        *(a1 + 0x720) = x87_r7_3;
        return result;
    }

    long double x87_r7_4 = *(a1 + 0x720);
    long double temp0 = *(a1 + 0x730);
    x87_r7_4 - temp0;

    if (!(*(&((x87_r7_4 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, temp0) ? 1 : 0) << 0xa
        | (x87_r7_4 == temp0 ? 1 : 0) << 0xe) + 1) & 1))
    {
        long double x87_r7_7 = *(a1 + 0x720);
        long double temp1_1 = *(a1 + 0x730);
        x87_r7_7 - temp1_1;

        if (!(*(&((x87_r7_7 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_7, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_7 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x41))
        {
            long double x87_r7_9 = *(a1 + 0x720) - *(a1 + 0x750);
            *(a1 + 0x720) = x87_r7_9;
            long double temp3_1 = *(a1 + 0x730);
            x87_r7_9 - temp3_1;

            if (*(&((x87_r7_9 < temp3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_9, temp3_1) ? 1 : 0) << 0xa
                    | (x87_r7_9 == temp3_1 ? 1 : 0) << 0xe) + 1) & 1)
                *(a1 + 0x720) = *(a1 + 0x730);
        }
    }
    else
    {
        long double x87_r7_6 = *(a1 + 0x750) + *(a1 + 0x720);
        *(a1 + 0x720) = x87_r7_6;
        long double temp2_1 = *(a1 + 0x730);
        x87_r7_6 - temp2_1;

        if (!(*(&((x87_r7_6 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, temp2_1) ? 1 : 0) << 0xa
                | (x87_r7_6 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            *(a1 + 0x720) = *(a1 + 0x730);
    }

    long double x87_r7_13 = *(a1 + 0x754) * *(a1 + 0x720) * 4096000f * 9.25925906e-06f;
    *(a1 + 0x764) = x87_r7_13;
    *(a1 + 0x108) = x87_r7_13;
    *(a1 + 0x10c) = 0;
    *(a1 + 0x110) = 0;
    sub_4ecdb0(a1 + 0xf0);
    long double x87_r7_14 = *(a1 + 0x764);

    if (*(a1 + 0x880))
        x87_r7_14 = -(x87_r7_14);

    *(a1 + 0x768) = x87_r7_14 + *(a1 + 0x768);
    sub_4f4660(a1);
    return Menu_LeaveMenus_21(a1, 0);
}
