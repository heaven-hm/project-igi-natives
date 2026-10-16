#include "0043A450-AlarmLight_Parsed.h"
/* 0x0043a450 AlarmLight_Parsed full linked: callers=0 callees=12 */
int32_t AlarmLight_Parsed(float a1, char* a2)

{
    sub_4c48d0(a1, sub_4cec10(a1 + 0x140));
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

    long double x87_r7_6 = sub_4d0950(*(a1 + 0x6c)) * x87_r7_3;
    sub_4c6940(*(a1 + 0x68), a1, a1 + 0xf0, x87_r7_6);
    double* eax_5 = sub_4c3440(a1);
    sub_4dcf00(*(a1 + 0x68), a1, eax_5);
    int32_t* eax_6 = *(a1 + 0xe8);
    memcpy(a1 + 0x70, a1 + 0x108, 0x28);

    if (eax_6)
        QTask_FindType(eax_6);

    struct status_msg* eax_7 = sub_4e0930(nullptr, a1);
    *(a1 + 0xe8) = eax_7;
    sub_4c4950(eax_7, a1, a1);

    if (!a2 || !*a2)
    {
        int32_t* i = *(*(a1 + 0xe8) + 8);

        if (*i && i)
        {
            int32_t ecx_2 = g_afa7e0;

            do
            {
                int32_t* edx_2 = *i;
                void* eax_12;

                if (!edx_2)
                    eax_12 = nullptr;
                else
                {
                    int32_t eax_9 = *edx_2;
                    int32_t eax_10 = -(eax_9);
                    eax_12 = (eax_10 - eax_10) & edx_2;
                }

                *((ecx_2 << 2) + &g_afa6e0) = eax_12;
                g_afa7e0 = ecx_2 + 1;
                uint32_t eax_14 = sub_4f1a70();
                int32_t ecx_4 = 0;
                ecx_4 = i[7];
                int32_t eax_18 = *(((eax_14 * 0x180 + ecx_4) << 2) + &g_a96ae0);

                if (eax_18)
                    eax_18(i, 0);

                ecx_2 = g_afa7e0 - 1;
                g_afa7e0 = ecx_2;
                i = *((ecx_2 << 2) + &g_afa6e0);
            } while (i);
        }
    }

    sub_4f1400(a1 + 0x1a4, a1);
    return 0;
}
