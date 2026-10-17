// IGI native provenance: SoundSys_EvaluateTrigger_8 - 0x004E7130 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E7130-SoundSys_EvaluateTrigger_8.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_EvaluateTrigger_8.h"
void SoundSys_EvaluateTrigger_8()

{
    int32_t* i_1 = g_a5e5f4;

    if (!i_1)
        return;

    int32_t* i;

    do
    {
        void* data_1 = i_1[7];
        i = i_1[1];

        if (data_1)
        {
            Display_SetDisplayMode_12(data_1);
            Display_CloseDevice_11(i_1[7]);
        }

        SoundSys_AttachLipsync_4(i_1, &g_a5e5f4);
        SoundSys_LoadSoundDef_4(i_1, &g_a5e5ec);
        i_1 = i;
    } while (i);
}
