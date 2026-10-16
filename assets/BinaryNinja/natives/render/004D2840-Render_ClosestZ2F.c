#include "Render_ClosestZ2F.h"
int32_t Render_ClosestZ2F(void* a1, char* a2)

{
    char* dstD = g_b16c98;
    float v_14 = 409.600006f;
    int32_t result_1 = 0;

    if (*((Display_CreateSurface_15() << 2) + &g_a94e84))
        (*((Display_CreateSurface_15() << 2) + &g_a94e84))(&v_14);

    int32_t result = result_1;

    if (result)
    {
        result = g_543a64;

        if (result)
        {
            int32_t i = 0;
            int32_t srcS;
            int32_t v_20_1 = srcS;
            bool cond_0_1 = g_b12c20 <= 0;
            int32_t v_c = 0;
            int32_t v_8_1 = 0;
            float v_4_1 = 20480f;

            if (!cond_0_1)
            {
                do
                {
                    if (*dstD == 4)
                    {
                        void* srcS1 = *(dstD + 4);
                        uint32_t valA4 = Render_DrawSplineMesh_4();
                        int32_t valA5 = 0;
                        valA5 = *(srcS1 + 0x1c);
                        int32_t valA6 = *(((valA4 * 0x180 + valA5) << 2) + &g_a96ae0);

                        if (valA6)
                            valA6(srcS1, &v_c);
                    }

                    dstD = &dstD[8];
                    i += 1;
                } while (i < g_b12c20);
            }

            if (*a2)
            {
                for (void* i_1 = *(a1 + 0xd18); i_1; i_1 = *(i_1 + 0x58))
                {
                    uint32_t valA9 = Render_DrawSplineMesh_4();
                    int32_t objC = 0;
                    objC = *(i_1 + 0x1c);
                    int32_t valA13 = *(((valA9 * 0x180 + objC) << 2) + &g_a96ae0);

                    if (valA13)
                        valA13(i_1, &v_c);
                }
            }

            int32_t i_2 = 0;
            int32_t* flagP2 = a1 + 0xd1c;

            do
            {
                if (a2[i_2 + 1])
                {
                    for (void* j = *flagP2; j; j = *(j + 0x58))
                    {
                        uint32_t valA16 = Render_DrawSplineMesh_4();
                        int32_t tmpD5 = 0;
                        tmpD5 = *(j + 0x1c);
                        int32_t valA17 = *(((valA16 * 0x180 + tmpD5) << 2) + &g_a96ae0);

                        if (valA17)
                            valA17(j, &v_c);
                    }
                }

                i_2 += 1;
                flagP2 = &flagP2[1];
            } while (i_2 < 8);

            Physics_SimulateRigidBody_14(&v_c);
            long double x87_r7_2 = v_4_1 * 0.99000001f;
            int32_t v_10 = 0;
            float v_4_2 = x87_r7_2;
            v_14 = x87_r7_2;

            if (*((Display_CreateSurface_15() << 2) + &g_a94e84))
                (*((Display_CreateSurface_15() << 2) + &g_a94e84))(&v_14);

            v_20_1 = v_4_2;
            return Game_DataSymbolLoad(0xc103a0, "Closest Z: %.2f");
        }
    }

    return result;
}
