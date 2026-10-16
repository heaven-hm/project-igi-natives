#include "0046E7F0-AIStationaryGunHolder_Process.h"
/* 0x0046e7f0 AIStationaryGunHolder_Process full linked: callers=0 callees=14 */
char* sub_46e7f0(float a1)

{
    sub_4c48d0(a1, sub_4cec10(a1 + 0x25d8));
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

    float var_10_2 = sub_4d0950(*(a1 + 0x6c)) * x87_r7_3;
    sub_4c6940(Level_StartMission_4(), a1, a1 + 0x2598, var_10_2);
    int32_t* eax_5 = *(a1 + 0xe8);
    memcpy(a1 + 0x70, a1 + 0x25b0, 0x28);

    if (eax_5)
        QTask_FindType(eax_5);

    struct status_msg* eax_6 = sub_4e0930(nullptr, a1);
    *(a1 + 0xe8) = eax_6;
    sub_4c4950(eax_6, a1, a1);
    int32_t* i = *(*(a1 + 0xe8) + 8);

    if (*i && i)
    {
        int32_t ecx_1 = g_afa7e0;

        do
        {
            int32_t* edx_1 = *i;
            void* eax_11;

            if (!edx_1)
                eax_11 = nullptr;
            else
            {
                int32_t eax_8 = *edx_1;
                int32_t eax_9 = -(eax_8);
                eax_11 = (eax_9 - eax_9) & edx_1;
            }

            *((ecx_1 << 2) + &g_afa6e0) = eax_11;
            g_afa7e0 = ecx_1 + 1;
            uint32_t eax_13 = sub_4f1a70();
            int32_t edx_2 = 0;
            edx_2 = i[7];
            int32_t eax_14 = *(((eax_13 * 0x180 + edx_2) << 2) + &g_a96ae0);

            if (eax_14)
                eax_14(i, 0);

            ecx_1 = g_afa7e0 - 1;
            g_afa7e0 = ecx_1;
            i = *((ecx_1 << 2) + &g_afa6e0);
        } while (i);
    }

    sub_4f1400(a1 + 0x25f4, a1);
    sub_4f1400(a1 + 0x2644, a1);
    *(a1 + 0x130) = *(a1 + 0x25e8) * 0.0174532924f;
    *(a1 + 0x138) = *(a1 + 0x25ec) * 0.0174532924f;
    *(a1 + 0x140) = *(a1 + 0x25f0) * 4096f;
    return sub_4896c0(a1 + 0x168, 1, 4, sub_464250(), 4, 8);
}
