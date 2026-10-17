// IGI native provenance: SoundSys_InitSoundSys_13 - 0x004E8290 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E8290-SoundSys_InitSoundSys_13.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_InitSoundSys_13.h"
int32_t* SoundSys_InitSoundSys_13(int32_t context)

{
    int32_t entity_val = 0;
    int32_t* i;

    for (i = &g_a5ebe0; i < &g_a5ec1c; )
    {
        if (!*i)
        {
            *((entity_val << 2) + &g_a5ebe0) = context;
            return context;
        }

        i = &i[1];
        entity_val += 1;
    }

    return i;
}
