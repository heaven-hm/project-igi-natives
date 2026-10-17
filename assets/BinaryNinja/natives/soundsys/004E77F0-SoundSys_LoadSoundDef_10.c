// Original IGI.EXE function: SoundSys_LoadSoundDef_10 (VA 0x004E77F0; static CFG gate PASS, CFG score 1.000).
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
