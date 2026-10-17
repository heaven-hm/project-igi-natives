// Original IGI.EXE function: SoundSys_EvaluateTrigger_6 (VA 0x004E6830; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_EvaluateTrigger_6.h"
int32_t* SoundSys_EvaluateTrigger_6(int32_t* context)

{
    int32_t* i_1 = g_a5e5f4;
    void item_400;
    Display_SoundInvalidFilename(&item_400, *context);
    int32_t data_1 = Display_RestoreDevice_12(&item_400);

    if (i_1)
    {
        int32_t* i;

        do
        {
            i = i_1[1];

            if (i_1[4] == data_1)
            {
                void* data_3 = i_1[7];

                if (data_3)
                {
                    Display_SetDisplayMode_12(data_3);
                    Display_CloseDevice_11(i_1[7]);
                }

                SoundSys_AttachLipsync_4(i_1, &g_a5e5f4);
                SoundSys_LoadSoundDef_4(i_1, &g_a5e5ec);
            }

            i_1 = i;
        } while (i);
    }

    return Display_CreateSurface_10(*context);
}
