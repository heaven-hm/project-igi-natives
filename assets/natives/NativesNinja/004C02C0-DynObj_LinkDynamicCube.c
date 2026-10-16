#include "004C02C0-DynObj_LinkDynamicCube.h"
/* 0x004c02c0 DynObj_LinkDynamicCube full linked: callers=1 callees=1 */
int32_t sub_4c02c0(int32_t* a1, int32_t a2, int32_t a3)

{
    int32_t i_2;
    int32_t i_1 = i_2;
    int32_t eax = g_a44314;
    int32_t ebx = 0;

    if (!eax)
        return sub_4c0260(a1, a2, a3);

    i_1 = 0;

    if (a1[1] <= 0)
        return eax;

    int32_t i;

    do
    {
        int32_t* j_1 = *(*a1 + ebx);

        for (int32_t* j = *j_1; j; j = *j)
        {
            if (g_a44314(j_1[2], j_1[3], g_a44318))
                a2(j_1[2], j_1[3], a3);

            j_1 = j;
        }

        i = i_1 + 1;
        ebx += 0xc;
        i_1 = i;
    } while (i < a1[1]);

    return i;
}
