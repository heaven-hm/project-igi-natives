// Original IGI.EXE function: Game_Setup (VA 0x00416260; static CFG gate PASS, CFG score 1.000).
#include "Game_Setup.h"
int32_t Game_Setup(int32_t* context)

{
    Level_TimeSpentRedrawing2F();

    if (!FX_SmokeEmit_11())
    {
        int32_t result = DEBUG_KEYSENABLEINVALID(0x58);

        if (!result)
        {
            result = context[0x38];

            if (!result)
            {
                int32_t* i = context[2];

                if (*i && i)
                {
                    int32_t temp_2 = g_afa7e0;

                    do
                    {
                        int32_t* source_2 = *i;
                        void* data_12;

                        if (!source_2)
                            data_12 = nullptr;
                        else
                        {
                            int32_t data_9 = *source_2;
                            int32_t data_10 = -(data_9);
                            data_12 = (data_10 - data_10) & source_2;
                        }

                        *((temp_2 << 2) + &g_afa6e0) = data_12;
                        int32_t temp_3 = temp_2 + 1;
                        int32_t data_13 = 0;
                        g_afa7e0 = temp_3;
                        data_13 = i[7];
                        result = *((data_13 << 2) + &g_a970e0);

                        if (result)
                        {
                            result = result(i);
                            temp_3 = g_afa7e0;
                        }

                        i = *((temp_3 << 2) + &g_afa6dc);
                        temp_2 = temp_3 - 1;
                        g_afa7e0 = temp_2;
                    } while (i);
                }
            }

            result = g_57bac0;

            if (result)
                return SoundSys_Update3DPosition_8(&context[0x3c]);

            context[0x3e] = 0;
            return result;
        }
    }

    Qhash_Init(1);
    int32_t* data_1 = LoadingScreen_Show(1);
    Qhash_Reset();
    g_539560 = *(FX_ExplosionSpawn_6(g_539560) + 0x4a4);
    int32_t* data_4 = File_Open(".\ymbe.afp", "rb");

    if (data_4)
    {
        Camera_ApplyLineFilter_4(data_4, nullptr, FILE_BEGIN);
        int32_t temp_1 = 0;
        temp_1 = Camera_SetFieldOfView_4(data_4) == 0x40;
        Camera_UpdateTransform_4(data_4);

        if (temp_1)
        {
            int32_t data_6 = g_539560;

            if (data_6 == 0xffffffff)
                Flow_SetState(7);
            else
            {
                Config_SetGamma_2(data_6);
                Config_Write("LOCAL:config.qsc");
                Flow_SetState(4);
            }

            QTask_FindType(context);
            return FX_FireBallUpdate_16(data_1);
        }
    }

    Error_Show("EXCEPTION FAULT: 0x000000");

    while (true)
        /* nop */
}
