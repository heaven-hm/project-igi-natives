// Original IGI.EXE function: SoundSys_SetFrequency_10 (VA 0x004E7790; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_SetFrequency_10.h"
char* SoundSys_SetFrequency_10(int32_t* context, int32_t param_2)

{
    char* result = param_2 - 1;

    if (param_2)
    {
        void* i_1 = &result[1];
        void* i;

        do
        {
            void* temp_1 = *context;
            result = context[7] + 1;
            context[6] = 0;
            context[7] = result;

            if (result >= *(temp_1 + 6))
            {
                context[7] = result - 1;
                result = SoundSys_StopSoundSample_10(context);
            }

            i = i_1;
            i_1 -= 1;
        } while (i != 1);
    }

    return result;
}
