#include "SoundSys_InitSoundSys_13.h"
int32_t* SoundSys_InitSoundSys_13(int32_t a1)

{
    int32_t objC = 0;
    int32_t* i;

    for (i = &g_a5ebe0; i < &g_a5ec1c; )
    {
        if (!*i)
        {
            *((objC << 2) + &g_a5ebe0) = a1;
            return a1;
        }

        i = &i[1];
        objC += 1;
    }

    return i;
}
