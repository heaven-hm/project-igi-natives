// Original IGI.EXE function: ComputerLog_Setup (VA 0x00468BC0; static CFG gate PASS, CFG score 1.000).
#include "ComputerLog_Setup.h"
void* ComputerLog_Setup(float a1)

{
    int32_t v_10 = g_c28b44;
    int32_t objC = g_c28b48;
    int32_t v_8 = objC;
    int32_t v_3c = objC;
    int32_t v_40 = objC;
    Sys_CloseFileStream_14(0f, 0f, v_10, v_8, 0f, 0f, 0f, 0x40040000, 0xffffffff, 0x44079eb8);
    Qhash_Init(1);
    int32_t i = 0;
    v_10 = v_10 * 0.14999999999999999;
    v_8 = v_8 * 0.10000000000000001;
    int32_t dstD = v_8;

    if (g_5bdd6c > 0)
    {
        while (i < 0xf)
        {
            void* valA3 = Menu_HandleInput_3(*(g_bc2360 + 0x120), "font1.fnt");
            int32_t v_30_1 = 0x78;
            float valA6 = AI_TakeCover_26(v_10, dstD, 0x44029eb8, 0x190,
                *(((g_5bdd6c - *(a1 + 0x20) - i) << 2) + &g_5bdc98), valA3, 1) + 2;
            float valA7 = valA6;
            float v_50_1 = v_10 + 0x64;
            float v_5c_1 = v_10 + 0x64;
            Sys_ExecuteBytecode_15(v_10, valA7, 0x44029eb8, v_10 + 0x64, valA7, 0x44029eb8, 48f, 96f, 48f,
                0f, 16f, 0f, 0, 0x40040000, 0xffffffff);
            dstD = valA6 + 2;
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
            int32_t objC5 = g_afa7e0;

            do
            {
                int32_t* tmpD3 = *i_1;
                void* valA12;

                if (!tmpD3)
                    valA12 = nullptr;
                else
                {
                    int32_t valA9 = *tmpD3;
                    int32_t valA10 = -(valA9);
                    valA12 = (valA10 - valA10) & tmpD3;
                }

                *((objC5 << 2) + &g_afa6e0) = valA12;
                g_afa7e0 = objC5 + 1;
                int32_t valA13 = StatusScreen_GetEvent();
                int32_t valA14 = 0;
                valA14 = i_1[7];
                result = *(((valA13 * 0x180 + valA14) << 2) + &g_a96ae0);

                if (result)
                    result = result(i_1);

                objC5 = g_afa7e0 - 1;
                g_afa7e0 = objC5;
                i_1 = *((objC5 << 2) + &g_afa6e0);
            } while (i_1);
        }
    }

    return result;
}
