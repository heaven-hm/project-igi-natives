#include "004C4660-RigidDynCubeObj_Cleanup_2.h"
/* 0x004c4660 RigidDynCubeObj_Cleanup_2 full linked: callers=0 callees=3 */
void sub_4c4660(int32_t* a1, float a2)

{
    int32_t* edi = a2;

    if (!*edi)
    {
        long double x87_r7_1 = a1[0x27];
        long double x87_r6_1 = a1[0x28];
        x87_r6_1 - x87_r7_1;
        long double x87_r7_2;

        if (!(*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_2 = a1[0x28];
        else
            x87_r7_2 = a1[0x27];

        long double x87_r6_2 = a1[0x26];
        x87_r6_2 - x87_r7_2;
        long double x87_r7_4;

        if (*(&((x87_r6_2 < x87_r7_2 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
            | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double x87_r7_5 = a1[0x27];
            long double x87_r6_3 = a1[0x28];
            x87_r6_3 - x87_r7_5;

            if (!(*(&((x87_r6_3 < x87_r7_5 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_3, x87_r7_5) ? 1 : 0) << 0xa
                    | (x87_r6_3 == x87_r7_5 ? 1 : 0) << 0xe) + 1) & 1))
                x87_r7_4 = a1[0x28];
            else
                x87_r7_4 = a1[0x27];
        }
        else
            x87_r7_4 = a1[0x26];

        int32_t eax_2 = edi[2];
        long double x87_r7_7 = sub_4d0950(a1[0x1b]) * x87_r7_4;
        sub_4c7140(edi[1], a1, &a1[8], x87_r7_7, eax_2);
    }

    int32_t* i = a1[2];

    if (!*i || !i)
        return;

    int32_t ecx_2 = g_afa7e0;

    do
    {
        int32_t* edx_2 = *i;
        void* eax_7;

        if (!edx_2)
            eax_7 = nullptr;
        else
        {
            int32_t eax_4 = *edx_2;
            int32_t eax_5 = -(eax_4);
            eax_7 = (eax_5 - eax_5) & edx_2;
        }

        *((ecx_2 << 2) + &g_afa6e0) = eax_7;
        g_afa7e0 = ecx_2 + 1;
        uint32_t eax_9 = sub_4cea10();
        int32_t edx_3 = 0;
        edx_3 = i[7];
        int32_t eax = *(((eax_9 * 0x180 + edx_3) << 2) + &g_a96ae0);

        if (eax)
            eax(i, edi);

        ecx_2 = g_afa7e0 - 1;
        g_afa7e0 = ecx_2;
        i = *((ecx_2 << 2) + &g_afa6e0);
    } while (i);
}
