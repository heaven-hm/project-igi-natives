// Original IGI.EXE function: GenericPickup_Cleanup (VA 0x0046C750; static CFG gate PASS, CFG score 1.000).
#include "GenericPickup_Cleanup.h"
int32_t GenericPickup_Cleanup(float a1, int32_t a2)

{
    int32_t* srcS = a1;
    int32_t result;
    result = *(srcS + 0x11a);

    if (!result)
    {
        result = *(srcS + 0x119);

        if (!result)
        {
            long double x87_r7_1 = srcS[0x27];
            long double x87_r6_1 = srcS[0x28];
            x87_r6_1 - x87_r7_1;
            long double x87_r7_2;

            if (!(*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                    | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe) + 1) & 1))
                x87_r7_2 = srcS[0x28];
            else
                x87_r7_2 = srcS[0x27];

            long double x87_r6_2 = srcS[0x26];
            x87_r6_2 - x87_r7_2;
            long double x87_r7_4;

            if (*(&((x87_r6_2 < x87_r7_2 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
            {
                long double x87_r7_5 = srcS[0x27];
                long double x87_r6_3 = srcS[0x28];
                x87_r6_3 - x87_r7_5;

                if (!(*(&((x87_r6_3 < x87_r7_5 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_3, x87_r7_5) ? 1 : 0) << 0xa
                        | (x87_r6_3 == x87_r7_5 ? 1 : 0) << 0xe) + 1) & 1))
                    x87_r7_4 = srcS[0x28];
                else
                    x87_r7_4 = srcS[0x27];
            }
            else
                x87_r7_4 = srcS[0x26];

            float v_c_2 = Render_ComputeNormals(srcS[0x1b]) * x87_r7_4;
            DynObj_LinkDynamicCube_8(Level_StartMission_4(), srcS, &srcS[0x3c], v_c_2, 2);
            double* valA3 = DynObj_UpdateDynTree_4(srcS);
            result = Render_ComputeNormals_14(Level_StartMission_4(), srcS, valA3);
            *(srcS + 0x11a) = 1;
        }
    }

    int32_t* i = srcS[2];

    if (*i && i)
    {
        int32_t objC2 = g_afa7e0;

        do
        {
            int32_t* tmpD1 = *i;
            void* valA8;

            if (!tmpD1)
                valA8 = nullptr;
            else
            {
                int32_t valA5 = *tmpD1;
                int32_t valA6 = -(valA5);
                valA8 = (valA6 - valA6) & tmpD1;
            }

            *((objC2 << 2) + &g_afa6e0) = valA8;
            g_afa7e0 = objC2 + 1;
            uint32_t valA10 = DynObj_UpdateDynTree_12();
            int32_t valA11 = 0;
            valA11 = i[7];
            result = *(((valA10 * 0x180 + valA11) << 2) + &g_a96ae0);

            if (result)
                result = result(i, a2);

            objC2 = g_afa7e0 - 1;
            g_afa7e0 = objC2;
            i = *((objC2 << 2) + &g_afa6e0);
        } while (i);
    }

    return result;
}
