// Original IGI.EXE function: SoundSys_SetMasterVolume_10 (VA 0x004E7710; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_SetMasterVolume_10.h"
void SoundSys_SetMasterVolume_10(int32_t* context, char* param_2)

{
    int32_t context_val;
    int32_t item_4 = context_val;

    if (!*context)
        return;

    char* source_1;

    for (char* i = param_2; i; i = i + source_1 + 1)
    {
        char j = *i;
        char context_1 = 0;
        source_1 = nullptr;

        while (j)
        {
            if (j == 0xa)
            {
                *(source_1 + i) = 0;
                context_1 = 1;
                break;
            }

            j = *(source_1 + i + 1);
            source_1 = &source_1[1];
        }

        Sys_AllocateMemory_21(*context, i, context[6], context[7]);

        if (!context_1)
        {
            int32_t j_1 = 0xffffffff;

            while (j_1)
            {
                bool flag_0_1 = 0 != *i;
                i = &i[1];
                j_1 -= 1;

                if (!flag_0_1)
                    break;
            }

            SoundSys_LoadSoundDef_10(context, ~j_1 - 1);
            break;
        }

        SoundSys_SetFrequency_10(context, 1);
    }
}
