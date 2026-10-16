#include "SoundSys_EvaluateTrigger_8.h"
void SoundSys_EvaluateTrigger_8()

{
    int32_t* i_1 = g_a5e5f4;

    if (!i_1)
        return;

    int32_t* i;

    do
    {
        void* valA1 = i_1[7];
        i = i_1[1];

        if (valA1)
        {
            Display_SetDisplayMode_12(valA1);
            Display_CloseDevice_11(i_1[7]);
        }

        SoundSys_AttachLipsync_4(i_1, &g_a5e5f4);
        SoundSys_LoadSoundDef_4(i_1, &g_a5e5ec);
        i_1 = i;
    } while (i);
}
