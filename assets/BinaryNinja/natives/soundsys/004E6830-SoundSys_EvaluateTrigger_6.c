#include "SoundSys_EvaluateTrigger_6.h"
int32_t* SoundSys_EvaluateTrigger_6(int32_t* a1)

{
    int32_t* i_1 = g_a5e5f4;
    void v_400;
    Display_SoundInvalidFilename(&v_400, *a1);
    int32_t valA1 = Display_RestoreDevice_12(&v_400);

    if (i_1)
    {
        int32_t* i;

        do
        {
            i = i_1[1];

            if (i_1[4] == valA1)
            {
                void* valA3 = i_1[7];

                if (valA3)
                {
                    Display_SetDisplayMode_12(valA3);
                    Display_CloseDevice_11(i_1[7]);
                }

                SoundSys_AttachLipsync_4(i_1, &g_a5e5f4);
                SoundSys_LoadSoundDef_4(i_1, &g_a5e5ec);
            }

            i_1 = i;
        } while (i);
    }

    return Display_CreateSurface_10(*a1);
}
