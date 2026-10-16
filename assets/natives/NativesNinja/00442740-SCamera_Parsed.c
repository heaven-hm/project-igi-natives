#include "00442740-SCamera_Parsed.h"
/* 0x00442740 SCamera_Parsed full linked: callers=0 callees=9 */
char* sub_442740(float a1, char* a2)

{
    sub_4c48d0(a1, sub_4cec10(a1 + 0x10c));
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
    double* eax_4 = sub_4c3440(a1);
    sub_4dcf00(*(a1 + 0x68), a1, eax_4);
    sub_4b3be0(a1 + 0x70, *(a1 + 0x108));
    sub_4f1400(a1 + 0x174, a1);
    char* result = a2;

    if (!result || !*result)
    {
        int32_t* i = *(a1 + 8);

        if (*i && i)
        {
            int32_t ecx_2 = g_afa7e0;

            do
            {
                int32_t* edx_2 = *i;
                void* eax_10;

                if (!edx_2)
                    eax_10 = nullptr;
                else
                {
                    int32_t eax_7 = *edx_2;
                    int32_t eax_8 = -(eax_7);
                    eax_10 = (eax_8 - eax_8) & edx_2;
                }

                *((ecx_2 << 2) + &g_afa6e0) = eax_10;
                g_afa7e0 = ecx_2 + 1;
                uint32_t eax_12 = sub_4f1a70();
                int32_t edx_3 = 0;
                edx_3 = i[7];
                result = *(((eax_12 * 0x180 + edx_3) << 2) + &g_a96ae0);

                if (result)
                    result = result(i, 0);

                ecx_2 = g_afa7e0 - 1;
                g_afa7e0 = ecx_2;
                i = *((ecx_2 << 2) + &g_afa6e0);
            } while (i);
        }
    }

    return result;
}
