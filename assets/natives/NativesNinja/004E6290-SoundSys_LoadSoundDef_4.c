#include "004E6290-SoundSys_LoadSoundDef_4.h"
/* 0x004e6290 SoundSys_LoadSoundDef_4 full linked: callers=8 callees=0 */
int32_t* sub_4e6290(int32_t* a1, int32_t* a2)

{
    int32_t edx = *a2;
    *a1 = 0;
    a1[1] = edx;
    int32_t** edx_1 = *a2;

    if (edx_1)
        *edx_1 = a1;

    *a2 = a1;
    return a1;
}
