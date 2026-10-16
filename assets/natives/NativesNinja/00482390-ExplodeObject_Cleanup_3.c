#include "00482390-ExplodeObject_Cleanup_3.h"
/* 0x00482390 ExplodeObject_Cleanup_3 full linked: callers=0 callees=5 */
int32_t sub_482390(float a1, void* a2)

{
    int32_t* edi = a1;
    long double x87_r7 = edi[0x27];
    long double x87_r6 = edi[0x28];
    x87_r6 - x87_r7;
    long double x87_r7_1;

    if (!(*(&((x87_r6 < x87_r7 ? 1 : 0) << 8 | (FCMP_UO(x87_r6, x87_r7) ? 1 : 0) << 0xa
            | (x87_r6 == x87_r7 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_1 = edi[0x28];
    else
        x87_r7_1 = edi[0x27];

    long double x87_r6_1 = edi[0x26];
    x87_r6_1 - x87_r7_1;
    long double x87_r7_3;

    if (*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_4 = edi[0x27];
        long double x87_r6_2 = edi[0x28];
        x87_r6_2 - x87_r7_4;

        if (!(*(&((x87_r6_2 < x87_r7_4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_3 = edi[0x28];
        else
            x87_r7_3 = edi[0x27];
    }
    else
        x87_r7_3 = edi[0x26];

    long double x87_r7_6 = sub_4d0950(edi[0x1b]) * x87_r7_3;
    sub_4c7140(*(a2 + 4), edi, &edi[8], x87_r7_6, 2);
    double* eax_2 = sub_4c3440(edi);
    int32_t result = sub_4dccb0(*(a2 + 4), edi, eax_2);
    int32_t* i = edi[2];

    if (*i && i)
    {
        int32_t ecx_1 = g_afa7e0;

        do
        {
            int32_t* edx_1 = *i;
            void* eax_7;

            if (!edx_1)
                eax_7 = nullptr;
            else
            {
                int32_t eax_4 = *edx_1;
                int32_t eax_5 = -(eax_4);
                eax_7 = (eax_5 - eax_5) & edx_1;
            }

            *((ecx_1 << 2) + &g_afa6e0) = eax_7;
            g_afa7e0 = ecx_1 + 1;
            uint32_t eax_9 = sub_4cea10();
            int32_t edx_2 = 0;
            edx_2 = i[7];
            result = *(((eax_9 * 0x180 + edx_2) << 2) + &g_a96ae0);

            if (result)
                result = result(i, a2);

            ecx_1 = g_afa7e0 - 1;
            g_afa7e0 = ecx_1;
            i = *((ecx_1 << 2) + &g_afa6e0);
        } while (i);
    }

    edi[0x8d] = 1;
    return result;
}
