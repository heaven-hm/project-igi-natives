#include "004EC5E0-SoundSys_LoadSoundDef_16.h"
/* 0x004ec5e0 SoundSys_LoadSoundDef_16 full linked: callers=1 callees=1 */
void* sub_4ec5e0(int32_t* a1, float a2, float a3, float a4, float a5)

{
    *a1 = a2;
    a1[3] = 1f / a3;
    a1[4] = 1f / a4;
    a1[5] = 1f / a5;
    a1[1] = 1f / a2;
    return sub_4ec660(a1);
}
