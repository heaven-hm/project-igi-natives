// Original IGI.EXE function: DynObj_LinkDynamicCube (VA 0x004C02C0; static CFG gate FAIL, CFG score 0.833).
#include "DynObj_LinkDynamicCube.h"
int32_t DynObj_LinkDynamicCube(int32_t* a1, int32_t a2, int32_t a3)

{
    int32_t i_2;
    int32_t i_1 = i_2;
    int32_t valA = g_a44314;
    int32_t ctxB = 0;

    if (!valA)
        return DynObj_UpdateDynTree(a1, a2, a3);

    i_1 = 0;

    if (a1[1] <= 0)
        return valA;

    int32_t i;

    do
    {
        int32_t* j_1 = *(*a1 + ctxB);

        for (int32_t* j = *j_1; j; j = *j)
        {
            if (g_a44314(j_1[2], j_1[3], g_a44318))
                a2(j_1[2], j_1[3], a3);

            j_1 = j;
        }

        i = i_1 + 1;
        ctxB += 0xc;
        i_1 = i;
    } while (i < a1[1]);

    return i;
}
