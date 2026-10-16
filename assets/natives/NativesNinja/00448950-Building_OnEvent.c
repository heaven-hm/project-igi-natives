#include "00448950-Building_OnEvent.h"
/* 0x00448950 Building_OnEvent full linked: callers=0 callees=5 */
int32_t sub_448950(float a1, void* a2)

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

    long double x87_r7_6 = sub_4d0950(*(a1 + 0x6c)) * x87_r7_3;
    sub_4c7140(*(a2 + 4), a1, a1 + 0x1d8, x87_r7_6, 8);
    (*(((sub_4cea10() * 0x180 + sub_4dee80()) << 2) + &g_a96ae0))(a1, a2);
    int32_t* i = *(a1 + 8);
    int32_t result = *i;

    if (result && i)
    {
        int32_t ecx_1 = g_afa7e0;

        do
        {
            int32_t* edx_1 = *i;
            void* eax_10;

            if (!edx_1)
                eax_10 = nullptr;
            else
            {
                int32_t eax_7 = *edx_1;
                int32_t eax_8 = -(eax_7);
                eax_10 = (eax_8 - eax_8) & edx_1;
            }

            *((ecx_1 << 2) + &g_afa6e0) = eax_10;
            g_afa7e0 = ecx_1 + 1;
            uint32_t eax_12 = sub_4cea10();
            int32_t ecx_3 = 0;
            ecx_3 = i[7];
            result = *(((eax_12 * 0x180 + ecx_3) << 2) + &g_a96ae0);

            if (result)
                result = result(i, a2);

            ecx_1 = g_afa7e0 - 1;
            g_afa7e0 = ecx_1;
            i = *((ecx_1 << 2) + &g_afa6e0);
        } while (i);
    }

    return result;
}
