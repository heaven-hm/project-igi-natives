// Original IGI.EXE function: RigidDynCubeObj_Cleanup_2 (VA 0x004C4660; static CFG gate PASS, CFG score 1.000).
#include "RigidDynCubeObj_Cleanup_2.h"
void RigidDynCubeObj_Cleanup_2(int32_t* a1, float a2)

{
    int32_t* dstD = a2;

    if (!*dstD)
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

        int32_t valA2 = dstD[2];
        long double x87_r7_7 = Render_ComputeNormals(a1[0x1b]) * x87_r7_4;
        DynObj_LinkDynamicCube_8(dstD[1], a1, &a1[8], x87_r7_7, valA2);
    }

    int32_t* i = a1[2];

    if (!*i || !i)
        return;

    int32_t objC2 = g_afa7e0;

    do
    {
        int32_t* tmpD2 = *i;
        void* valA7;

        if (!tmpD2)
            valA7 = nullptr;
        else
        {
            int32_t valA4 = *tmpD2;
            int32_t valA5 = -(valA4);
            valA7 = (valA5 - valA5) & tmpD2;
        }

        *((objC2 << 2) + &g_afa6e0) = valA7;
        g_afa7e0 = objC2 + 1;
        uint32_t valA9 = DynObj_UpdateDynTree_12();
        int32_t tmpD3 = 0;
        tmpD3 = i[7];
        int32_t valA = *(((valA9 * 0x180 + tmpD3) << 2) + &g_a96ae0);

        if (valA)
            valA(i, dstD);

        objC2 = g_afa7e0 - 1;
        g_afa7e0 = objC2;
        i = *((objC2 << 2) + &g_afa6e0);
    } while (i);
}
