#include "004D2840-Render_ClosestZ2F.h"
/* 0x004d2840 Render_ClosestZ2F full linked: callers=1 callees=9 */
int32_t sub_4d2840(void* a1, char* a2)

{
    char* edi = g_b16c98;
    float var_14 = 409.600006f;
    int32_t result_1 = 0;

    if (*((sub_498070() << 2) + &g_a94e84))
        (*((sub_498070() << 2) + &g_a94e84))(&var_14);

    int32_t result = result_1;

    if (result)
    {
        result = g_543a64;

        if (result)
        {
            int32_t i = 0;
            int32_t esi;
            int32_t var_20_1 = esi;
            bool cond:0_1 = g_b12c20 <= 0;
            int32_t var_c = 0;
            int32_t var_8_1 = 0;
            float var_4_1 = 20480f;

            if (!cond:0_1)
            {
                do
                {
                    if (*edi == 4)
                    {
                        void* esi_1 = *(edi + 4);
                        uint32_t eax_4 = sub_4d14d0();
                        int32_t eax_5 = 0;
                        eax_5 = *(esi_1 + 0x1c);
                        int32_t eax_6 = *(((eax_4 * 0x180 + eax_5) << 2) + &g_a96ae0);

                        if (eax_6)
                            eax_6(esi_1, &var_c);
                    }

                    edi = &edi[8];
                    i += 1;
                } while (i < g_b12c20);
            }

            if (*a2)
            {
                for (void* i_1 = *(a1 + 0xd18); i_1; i_1 = *(i_1 + 0x58))
                {
                    uint32_t eax_9 = sub_4d14d0();
                    int32_t ecx = 0;
                    ecx = *(i_1 + 0x1c);
                    int32_t eax_13 = *(((eax_9 * 0x180 + ecx) << 2) + &g_a96ae0);

                    if (eax_13)
                        eax_13(i_1, &var_c);
                }
            }

            int32_t i_2 = 0;
            int32_t* ebp_2 = a1 + 0xd1c;

            do
            {
                if (a2[i_2 + 1])
                {
                    for (void* j = *ebp_2; j; j = *(j + 0x58))
                    {
                        uint32_t eax_16 = sub_4d14d0();
                        int32_t edx_5 = 0;
                        edx_5 = *(j + 0x1c);
                        int32_t eax_17 = *(((eax_16 * 0x180 + edx_5) << 2) + &g_a96ae0);

                        if (eax_17)
                            eax_17(j, &var_c);
                    }
                }

                i_2 += 1;
                ebp_2 = &ebp_2[1];
            } while (i_2 < 8);

            sub_50f770(&var_c);
            long double x87_r7_2 = var_4_1 * 0.99000001f;
            int32_t var_10 = 0;
            float var_4_2 = x87_r7_2;
            var_14 = x87_r7_2;

            if (*((sub_498070() << 2) + &g_a94e84))
                (*((sub_498070() << 2) + &g_a94e84))(&var_14);

            var_20_1 = var_4_2;
            return Game_DataSymbolLoad(0xc103a0, "Closest Z: %.2f");
        }
    }

    return result;
}
