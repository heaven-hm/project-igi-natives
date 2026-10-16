#include "00468BC0-ComputerLog_Setup.h"
/* 0x00468bc0 ComputerLog_Setup full linked: callers=0 callees=10 */
void* sub_468bc0(float a1)

{
    int32_t var_10 = g_c28b44;
    int32_t ecx = g_c28b48;
    int32_t var_8 = ecx;
    int32_t var_3c = ecx;
    int32_t var_40 = ecx;
    sub_4b4910(0f, 0f, var_10, var_8, 0f, 0f, 0f, 0x40040000, 0xffffffff, 0x44079eb8);
    Qhash_Init(1);
    int32_t i = 0;
    var_10 = var_10 * 0.14999999999999999;
    var_8 = var_8 * 0.10000000000000001;
    int32_t edi = var_8;

    if (g_5bdd6c > 0)
    {
        while (i < 0xf)
        {
            void* eax_3 = Menu_HandleInput_3(*(g_bc2360 + 0x120), "font1.fnt");
            int32_t var_30_1 = 0x78;
            float eax_6 = sub_469450(var_10, edi, 0x44029eb8, 0x190,
                *(((g_5bdd6c - *(a1 + 0x20) - i) << 2) + &g_5bdc98), eax_3, 1) + 2;
            float eax_7 = eax_6;
            float var_50_1 = var_10 + 0x64;
            float var_5c_1 = var_10 + 0x64;
            sub_4b5730(var_10, eax_7, 0x44029eb8, var_10 + 0x64, eax_7, 0x44029eb8, 48f, 96f, 48f,
                0f, 16f, 0f, 0, 0x40040000, 0xffffffff);
            edi = eax_6 + 2;
            i += 1;

            if (i >= g_5bdd6c)
                break;
        }
    }

    void* result = Qhash_Reset();
    int32_t* i_2 = *(a1 + 8);

    if (*i_2)
    {
        int32_t* i_1 = i_2;

        if (i_1)
        {
            int32_t ecx_5 = g_afa7e0;

            do
            {
                int32_t* edx_3 = *i_1;
                void* eax_12;

                if (!edx_3)
                    eax_12 = nullptr;
                else
                {
                    int32_t eax_9 = *edx_3;
                    int32_t eax_10 = -(eax_9);
                    eax_12 = (eax_10 - eax_10) & edx_3;
                }

                *((ecx_5 << 2) + &g_afa6e0) = eax_12;
                g_afa7e0 = ecx_5 + 1;
                int32_t eax_13 = sub_4e7530();
                int32_t eax_14 = 0;
                eax_14 = i_1[7];
                result = *(((eax_13 * 0x180 + eax_14) << 2) + &g_a96ae0);

                if (result)
                    result = result(i_1);

                ecx_5 = g_afa7e0 - 1;
                g_afa7e0 = ecx_5;
                i_1 = *((ecx_5 << 2) + &g_afa6e0);
            } while (i_1);
        }
    }

    return result;
}
