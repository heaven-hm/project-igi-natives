#include "00416260-Game_Setup.h"
/* 0x00416260 Game_Setup full linked: callers=0 callees=19 */
int32_t Game_Setup(int32_t* a1)

{
    Level_TimeSpentRedrawing2F();

    if (!sub_489450())
    {
        int32_t result = DEBUG_KEYSENABLEINVALID(0x58);

        if (!result)
        {
            result = a1[0x38];

            if (!result)
            {
                int32_t* i = a1[2];

                if (*i && i)
                {
                    int32_t edx_2 = g_afa7e0;

                    do
                    {
                        int32_t* esi_2 = *i;
                        void* eax_12;

                        if (!esi_2)
                            eax_12 = nullptr;
                        else
                        {
                            int32_t eax_9 = *esi_2;
                            int32_t eax_10 = -(eax_9);
                            eax_12 = (eax_10 - eax_10) & esi_2;
                        }

                        *((edx_2 << 2) + &g_afa6e0) = eax_12;
                        int32_t edx_3 = edx_2 + 1;
                        int32_t eax_13 = 0;
                        g_afa7e0 = edx_3;
                        eax_13 = i[7];
                        result = *((eax_13 << 2) + &g_a970e0);

                        if (result)
                        {
                            result = result(i);
                            edx_3 = g_afa7e0;
                        }

                        i = *((edx_3 << 2) + &g_afa6dc);
                        edx_2 = edx_3 - 1;
                        g_afa7e0 = edx_2;
                    } while (i);
                }
            }

            result = g_57bac0;

            if (result)
                return sub_4e6d60(&a1[0x3c]);

            a1[0x3e] = 0;
            return result;
        }
    }

    Qhash_Init(1);
    int32_t* eax_1 = LoadingScreen_Show(1);
    Qhash_Reset();
    g_539560 = *(sub_485170(g_539560) + 0x4a4);
    int32_t* eax_4 = File_Open(".\ymbe.afp", "rb");

    if (eax_4)
    {
        sub_4a52a4(eax_4, nullptr, FILE_BEGIN);
        int32_t edx_1 = 0;
        edx_1 = sub_4a528a(eax_4) == 0x40;
        sub_4a5234(eax_4);

        if (edx_1)
        {
            int32_t eax_6 = g_539560;

            if (eax_6 == 0xffffffff)
                Flow_SetState(7);
            else
            {
                Config_SetGamma_2(eax_6);
                Config_Write("LOCAL:config.qsc");
                Flow_SetState(4);
            }

            QTask_FindType(a1);
            return sub_48a5d0(eax_1);
        }
    }

    Error_Show("EXCEPTION FAULT: 0x000000");

    while (true)
        /* nop */
}
