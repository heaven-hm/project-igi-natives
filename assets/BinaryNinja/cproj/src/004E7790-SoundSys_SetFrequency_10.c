#include "gi_platform.h"
#include "004E7790-SoundSys_SetFrequency_10.h"
char* SoundSys_SetFrequency_10(int32_t* a1, int32_t a2)

{
    char* result = a2 - 1;

    if (a2)
    {
        void* i_1 = &result[1];
        void* i;

        do
        {
            void* tmpD1 = *a1;
            result = a1[7] + 1;
            a1[6] = 0;
            a1[7] = result;

            if (result >= *(tmpD1 + 6))
            {
                a1[7] = result - 1;
                result = SoundSys_StopSoundSample_10(a1);
            }

            i = i_1;
            i_1 -= 1;
        } while (i != 1);
    }

    return result;
}
