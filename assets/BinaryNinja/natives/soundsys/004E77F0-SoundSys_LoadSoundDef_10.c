#include "SoundSys_LoadSoundDef_10.h"
char* SoundSys_LoadSoundDef_10(int32_t* a1, int32_t a2)

{
    char* result = a2 - 1;

    if (a2)
    {
        void* i_1 = &result[1];
        void* i;

        do
        {
            int32_t objC1 = a1[4];
            char* result_1 = a1[6] + 1;
            result = result_1;
            a1[6] = result_1;

            if (result >= objC1)
                result = SoundSys_SetFrequency_10(a1, 1);

            i = i_1;
            i_1 -= 1;
        } while (i != 1);
    }

    return result;
}
