#include "StationaryGun_LoadParameters.h"
uint32_t StationaryGun_LoadParameters(float a1)

{
    uint32_t result = Frames_GetUpdateCounter();

    if (*(a1 + 0x218) != result)
    {
        uint32_t valA = Frames_GetUpdateCounter();
        void* dstD1 = *(a1 + 0x208);
        *(a1 + 0x218) = valA;

        if (!dstD1)
        {
            long double x87_r7_18 = *(a1 + 0x1e4) * 0.0174532924f;
            long double f0_1 = *(a1 + 0x1f8);
            x87_r7_18 - f0_1;

            if (*(&((x87_r7_18 < f0_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_18, f0_1) ? 1 : 0) << 0xa
                | (x87_r7_18 == f0_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
            {
                long double f2_1 = *(a1 + 0x1f8);
                x87_r7_18 - f2_1;

                if (*(&((x87_r7_18 < f2_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_18, f2_1) ? 1 : 0) << 0xa
                    | (x87_r7_18 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                {
                    long double x87_r6_4 = *(a1 + 0x1f8) - 0.0872664675f;
                    *(a1 + 0x1f8) = x87_r6_4;
                    x87_r6_4 - x87_r7_18;

                    if (*(&((x87_r6_4 < x87_r7_18 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r6_4, x87_r7_18) ? 1 : 0) << 0xa
                            | (x87_r6_4 == x87_r7_18 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                        *(a1 + 0x1f8) = x87_r7_18;
                }
            }
            else
            {
                long double x87_r6_2 = *(a1 + 0x1f8) + 0.0872664675f;
                *(a1 + 0x1f8) = x87_r6_2;
                x87_r6_2 - x87_r7_18;

                if (!(*(&((x87_r6_2 < x87_r7_18 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_2, x87_r7_18) ? 1 : 0) << 0xa
                        | (x87_r6_2 == x87_r7_18 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                    *(a1 + 0x1f8) = x87_r7_18;
            }

            Gun_SpawnRound(a1, 0);
        }
        else
        {
            char ctxB1 = 0;
            *(a1 + 0x1f8) = *(dstD1 + 0x1b4) * 3.14159274f + *(a1 + 0x1f8);
            *(a1 + 0x1fc) = -((*(dstD1 + 0x1b0) * 3.14159274f)) + *(a1 + 0x1fc);
            Weapon_EjectShell_3(a1);
            long double x87_r7_8 = *(dstD1 + 0x1c8);
            long double f1_1 = 0f;
            x87_r7_8 - f1_1;

            if (!(*(&((x87_r7_8 < f1_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_8, f1_1) ? 1 : 0) << 0xa
                    | (x87_r7_8 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                ctxB1 = 1;

            *(a1 + 0x200) = *(a1 + 0x1f8) + *(a1 + 0x1f0);
            *(a1 + 0x204) = *(a1 + 0x1fc) + *(a1 + 0x1f4);
            *(a1 + 0x1f0) = *(a1 + 0x1f0) * 0.899999976f;
            *(a1 + 0x1f4) = *(a1 + 0x1f4) * 0.899999976f;
            Gun_SpawnRound(a1, ctxB1);
        }

        int32_t __saved_ebx_1 = a1 + 0x70;
        Weapon_ComputeAccuracy_3(a1);
        uint32_t* i = *(a1 + 8);
        result = *i;

        if (result && i)
        {
            int32_t tmpD1 = g_afa7e0;

            do
            {
                uint32_t srcS1 = *i;
                int32_t valA8;

                if (!srcS1)
                    valA8 = 0;
                else
                {
                    int32_t valA5 = *srcS1;
                    int32_t valA6 = -(valA5);
                    valA8 = (valA6 - valA6) & srcS1;
                }

                *((tmpD1 << 2) + &g_afa6e0) = valA8;
                int32_t tmpD2 = tmpD1 + 1;
                int32_t valA9 = 0;
                g_afa7e0 = tmpD2;
                valA9 = i[7];
                result = *((valA9 << 2) + &g_a970e0);

                if (result)
                {
                    result = result(i);
                    tmpD2 = g_afa7e0;
                }

                i = *((tmpD2 << 2) + &g_afa6dc);
                tmpD1 = tmpD2 - 1;
                g_afa7e0 = tmpD1;
            } while (i);
        }
    }

    return result;
}
