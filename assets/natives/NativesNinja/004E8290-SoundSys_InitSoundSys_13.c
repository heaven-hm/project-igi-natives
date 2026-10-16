#include "004E8290-SoundSys_InitSoundSys_13.h"
/* 0x004e8290 SoundSys_InitSoundSys_13 full linked: callers=2 callees=0 */
int32_t* sub_4e8290(int32_t a1)

{
    int32_t ecx = 0;
    int32_t* i;

    for (i = &g_a5ebe0; i < &g_a5ec1c; )
    {
        if (!*i)
        {
            *((ecx << 2) + &g_a5ebe0) = a1;
            return a1;
        }

        i = &i[1];
        ecx += 1;
    }

    return i;
}
