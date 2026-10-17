// Original IGI.EXE function: SoundSys_SetMasterVolume_10 (VA 0x004E7710; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_SetMasterVolume_10.h"
void SoundSys_SetMasterVolume_10(int32_t* a1, char* a2)

{
    int32_t ctxB;
    int32_t v_4 = ctxB;

    if (!*a1)
        return;

    char* srcS1;

    for (char* i = a2; i; i = i + srcS1 + 1)
    {
        char j = *i;
        char ctxB1 = 0;
        srcS1 = nullptr;

        while (j)
        {
            if (j == 0xa)
            {
                *(srcS1 + i) = 0;
                ctxB1 = 1;
                break;
            }

            j = *(srcS1 + i + 1);
            srcS1 = &srcS1[1];
        }

        Sys_AllocateMemory_21(*a1, i, a1[6], a1[7]);

        if (!ctxB1)
        {
            int32_t j_1 = 0xffffffff;

            while (j_1)
            {
                bool cond_0_1 = 0 != *i;
                i = &i[1];
                j_1 -= 1;

                if (!cond_0_1)
                    break;
            }

            SoundSys_LoadSoundDef_10(a1, ~j_1 - 1);
            break;
        }

        SoundSys_SetFrequency_10(a1, 1);
    }
}
