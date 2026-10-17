// Original IGI.EXE function: Game_Setup (VA 0x00416260; static CFG gate PASS, CFG score 1.000).
#include "Game_Setup.h"
int32_t Game_Setup(int32_t* a1)

{
    Level_TimeSpentRedrawing2F();

    if (!FX_SmokeEmit_11())
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
                    int32_t tmpD2 = g_afa7e0;

                    do
                    {
                        int32_t* srcS2 = *i;
                        void* valA12;

                        if (!srcS2)
                            valA12 = nullptr;
                        else
                        {
                            int32_t valA9 = *srcS2;
                            int32_t valA10 = -(valA9);
                            valA12 = (valA10 - valA10) & srcS2;
                        }

                        *((tmpD2 << 2) + &g_afa6e0) = valA12;
                        int32_t tmpD3 = tmpD2 + 1;
                        int32_t valA13 = 0;
                        g_afa7e0 = tmpD3;
                        valA13 = i[7];
                        result = *((valA13 << 2) + &g_a970e0);

                        if (result)
                        {
                            result = result(i);
                            tmpD3 = g_afa7e0;
                        }

                        i = *((tmpD3 << 2) + &g_afa6dc);
                        tmpD2 = tmpD3 - 1;
                        g_afa7e0 = tmpD2;
                    } while (i);
                }
            }

            result = g_57bac0;

            if (result)
                return SoundSys_Update3DPosition_8(&a1[0x3c]);

            a1[0x3e] = 0;
            return result;
        }
    }

    Qhash_Init(1);
    int32_t* valA1 = LoadingScreen_Show(1);
    Qhash_Reset();
    g_539560 = *(FX_ExplosionSpawn_6(g_539560) + 0x4a4);
    int32_t* valA4 = File_Open(".\ymbe.afp", "rb");

    if (valA4)
    {
        Camera_ApplyLineFilter_4(valA4, nullptr, FILE_BEGIN);
        int32_t tmpD1 = 0;
        tmpD1 = Camera_SetFieldOfView_4(valA4) == 0x40;
        Camera_UpdateTransform_4(valA4);

        if (tmpD1)
        {
            int32_t valA6 = g_539560;

            if (valA6 == 0xffffffff)
                Flow_SetState(7);
            else
            {
                Config_SetGamma_2(valA6);
                Config_Write("LOCAL:config.qsc");
                Flow_SetState(4);
            }

            QTask_FindType(a1);
            return FX_FireBallUpdate_16(valA1);
        }
    }

    Error_Show("EXCEPTION FAULT: 0x000000");

    while (true)
        /* nop */
}
