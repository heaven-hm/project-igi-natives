// Original IGI.EXE function: Building_OnEvent (VA 0x00448950; static CFG gate PASS, CFG score 1.000).
#include "Building_OnEvent.h"
int32_t Building_OnEvent(float a1, void* a2)

{
    long double fpu7 = *(a1 + 0x9c);
    long double fpu6 = *(a1 + 0xa0);
    fpu6 - fpu7;
    long double x87_r7_1;

    if (!(*(&((fpu6 < fpu7 ? 1 : 0) << 8 | (FCMP_UO(fpu6, fpu7) ? 1 : 0) << 0xa
            | (fpu6 == fpu7 ? 1 : 0) << 0xe) + 1) & 1))
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

    long double x87_r7_6 = Render_ComputeNormals(*(a1 + 0x6c)) * x87_r7_3;
    DynObj_LinkDynamicCube_8(*(a2 + 4), a1, a1 + 0x1d8, x87_r7_6, 8);
    (*(((DynObj_UpdateDynTree_12() * 0x180 + Render_ComputeNormals_15()) << 2) + &g_a96ae0))(a1, a2);
    int32_t* i = *(a1 + 8);
    int32_t result = *i;

    if (result && i)
    {
        int32_t objC1 = g_afa7e0;

        do
        {
            int32_t* tmpD1 = *i;
            void* valA10;

            if (!tmpD1)
                valA10 = nullptr;
            else
            {
                int32_t valA7 = *tmpD1;
                int32_t valA8 = -(valA7);
                valA10 = (valA8 - valA8) & tmpD1;
            }

            *((objC1 << 2) + &g_afa6e0) = valA10;
            g_afa7e0 = objC1 + 1;
            uint32_t valA12 = DynObj_UpdateDynTree_12();
            int32_t objC3 = 0;
            objC3 = i[7];
            result = *(((valA12 * 0x180 + objC3) << 2) + &g_a96ae0);

            if (result)
                result = result(i, a2);

            objC1 = g_afa7e0 - 1;
            g_afa7e0 = objC1;
            i = *((objC1 << 2) + &g_afa6e0);
        } while (i);
    }

    return result;
}
