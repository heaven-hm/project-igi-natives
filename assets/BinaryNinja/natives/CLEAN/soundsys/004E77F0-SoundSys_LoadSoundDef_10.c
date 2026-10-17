// IGI native provenance: SoundSys_LoadSoundDef_10 - 0x004E77F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E77F0-SoundSys_LoadSoundDef_10.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_LoadSoundDef_10.h"
char* SoundSys_LoadSoundDef_10(int32_t* context, int32_t param_2)

{
    char* result = param_2 - 1;

    if (param_2)
    {
        void* i_1 = &result[1];
        void* i;

        do
        {
            int32_t entity_1 = context[4];
            char* result_1 = context[6] + 1;
            result = result_1;
            context[6] = result_1;

            if (result >= entity_1)
                result = SoundSys_SetFrequency_10(context, 1);

            i = i_1;
            i_1 -= 1;
        } while (i != 1);
    }

    return result;
}
