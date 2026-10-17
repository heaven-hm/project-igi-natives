// Original IGI.EXE function: SoundSys_LoadSoundDef_4 (VA 0x004E6290; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_LoadSoundDef_4.h"
int32_t* SoundSys_LoadSoundDef_4(int32_t* a1, int32_t* a2)

{
    int32_t tmpD = *a2;
    *a1 = 0;
    a1[1] = tmpD;
    int32_t** tmpD1 = *a2;

    if (tmpD1)
        *tmpD1 = a1;

    *a2 = a1;
    return a1;
}
