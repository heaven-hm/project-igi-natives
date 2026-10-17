// Original IGI.EXE function: ExplodeObject_Cleanup_3 (VA 0x00482390; static CFG gate PASS, CFG score 1.000).
#include "ExplodeObject_Cleanup_3.h"
int32_t ExplodeObject_Cleanup_3(float a1, void* a2)

{
    int32_t* dstD = a1;
    long double fpu7 = dstD[0x27];
    long double fpu6 = dstD[0x28];
    fpu6 - fpu7;
    long double x87_r7_1;

    if (!(*(&((fpu6 < fpu7 ? 1 : 0) << 8 | (FCMP_UO(fpu6, fpu7) ? 1 : 0) << 0xa
            | (fpu6 == fpu7 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_1 = dstD[0x28];
    else
        x87_r7_1 = dstD[0x27];

    long double x87_r6_1 = dstD[0x26];
    x87_r6_1 - x87_r7_1;
    long double x87_r7_3;

    if (*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_4 = dstD[0x27];
        long double x87_r6_2 = dstD[0x28];
        x87_r6_2 - x87_r7_4;

        if (!(*(&((x87_r6_2 < x87_r7_4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_3 = dstD[0x28];
        else
            x87_r7_3 = dstD[0x27];
    }
    else
        x87_r7_3 = dstD[0x26];

    long double x87_r7_6 = Render_ComputeNormals(dstD[0x1b]) * x87_r7_3;
    DynObj_LinkDynamicCube_8(*(a2 + 4), dstD, &dstD[8], x87_r7_6, 2);
    double* valA2 = DynObj_UpdateDynTree_4(dstD);
    int32_t result = Render_ComputeNormals_14(*(a2 + 4), dstD, valA2);
    int32_t* i = dstD[2];

    if (*i && i)
    {
        int32_t objC1 = g_afa7e0;

        do
        {
            int32_t* tmpD1 = *i;
            void* valA7;

            if (!tmpD1)
                valA7 = nullptr;
            else
            {
                int32_t valA4 = *tmpD1;
                int32_t valA5 = -(valA4);
                valA7 = (valA5 - valA5) & tmpD1;
            }

            *((objC1 << 2) + &g_afa6e0) = valA7;
            g_afa7e0 = objC1 + 1;
            uint32_t valA9 = DynObj_UpdateDynTree_12();
            int32_t tmpD2 = 0;
            tmpD2 = i[7];
            result = *(((valA9 * 0x180 + tmpD2) << 2) + &g_a96ae0);

            if (result)
                result = result(i, a2);

            objC1 = g_afa7e0 - 1;
            g_afa7e0 = objC1;
            i = *((objC1 << 2) + &g_afa6e0);
        } while (i);
    }

    dstD[0x8d] = 1;
    return result;
}
