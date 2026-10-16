#include "004395D0-RotatingObject_Process.h"
/* 0x004395d0 RotatingObject_Process full linked: callers=0 callees=12 */
int32_t RotatingObject_Process(float a1)

{
    memcpy(a1 + 0x160, a1 + 0x70, 0x28);
    sub_4c48d0(a1, sub_4cec10(a1 + 0x110));
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

    float var_14_2 = sub_4d0950(*(a1 + 0x6c)) * x87_r7_3;
    sub_4c6940(Level_StartMission_4(), a1, a1 + 0x188, var_14_2);
    int32_t eax_5 = *(a1 + 0x120);
    int32_t edx_1 = *(a1 + 0x128);
    *(a1 + 0x13c) = eax_5;
    memcpy(a1 + 0x70, a1 + 0x160, 0x28);
    int32_t ecx_1 = *(a1 + 0x124);
    *(a1 + 0x148) = eax_5;
    int32_t* eax_6 = *(a1 + 0x1a0);
    *(a1 + 0x140) = ecx_1;
    *(a1 + 0x144) = edx_1;
    *(a1 + 0x14c) = ecx_1;
    *(a1 + 0x150) = edx_1;
    *(a1 + 0x154) = 0;
    *(a1 + 0x158) = 0;
    *(a1 + 0x15c) = 0;

    if (eax_6)
    {
        int32_t* eax_7 = *eax_6;

        if (eax_7)
            QTask_FindType(eax_7);

        Qtask_UpdateList(*(a1 + 0x1a0));
        *(a1 + 0x1a0) = 0;
    }

    struct status_msg* eax_9 = sub_4e6b00(a1, a1 + 0xf0);

    if (eax_9)
        *(a1 + 0x1a0) = QTask_LinkEventHandler_2(eax_9);

    sub_4f1400(a1 + 0x1ac, a1);
    return 0;
}
