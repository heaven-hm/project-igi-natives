// Original IGI.EXE function: Script_ExecuteLevelScript_5 (VA 0x004F11A0; static CFG gate PASS, CFG score 1.000).
#include "Script_ExecuteLevelScript_5.h"
int32_t* Script_ExecuteLevelScript_5(int32_t context)

{
    int32_t* result = *(SoundSys_StopSoundSample_19(context) * 0xc + &g_a70ca8);

    for (int32_t* i = *result; i; i = *i)
    {
        int32_t entity_2 = *result[2];

        if (!entity_2)
            Script_ParseEnumReal32(result);
        else if (entity_2 == context)
            return result;

        result = i;
    }

    return nullptr;
}
